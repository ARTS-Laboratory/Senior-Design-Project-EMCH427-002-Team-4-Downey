% close all;
% clear all;
clc;
% '/Users/Owner/OneDrive/Documents/Python Scripts/Senior-Design-Project-EMCH427-002-Team-4-Downey/Software/Python/save/video_ai/whole916.png'
image = imread('/Users/Owner/OneDrive/Documents/Python Scripts/Senior-Design-Project-EMCH427-002-Team-4-Downey/Software/images/0.png');

% tic;
% [max_area, radius, centroid, brightness, image] = ProcessFrames(image);
% toc
% figure(2)
% imshow(image)


gray = rgb2gray(image);

gaus = imgaussfilt(gray,0.1); %standard deviation of 2

thresh = imbinarize(gaus, 'adaptive','ForegroundPolarity','bright', 'Sensitivity',0.1); %thresh

%     max_area = bwarea(copy);
%     measurements = regionprops(copy, 'Centroid');
%     Diameter = regionprops(copy, 'EquivDiameter');
%     radius = Diameter.EquivDiameter(end);
%     PixelList = regionprops(copy, 'PixelList');
%     centroid = [ceil(measurements.Centroid(1)) ceil(measurements.Centroid(2))];

stats = regionprops(thresh, 'Area','Centroid', 'EquivDiameter', 'PixelList');
radius = stats.EquivDiameter(end)/2;
max_area = stats.Area;
centroid = [ceil(stats.Centroid(1)) ceil(stats.Centroid(2))];
PixelList = stats.PixelList;


%     SE = strel('line',1,1);
%     erode = imerode(thresh,SE);

brightness = zeros(length(PixelList(:,1)),1);
% 
for idx = 1:1:length(PixelList(:,1))
    pixel = PixelList(idx,:);
    lumen = gray(pixel(1), pixel(2));
    brightness(idx) = lumen;
end
brightness = round(mean(brightness));

% dilate = imdilate(erode,SE);
% imshow(erode)
% imshow(copy)
%     montage({image,gray,gaus,thresh})
[B,~]= bwboundaries(thresh);


horz = length(image(1,:))/3;
vert = length(image(:,1));
positions = [0 vert-vert/8; 32 vert-vert/8; 0 vert-vert/8-30; horz-horz/8 vert-vert/8-30];
values = [centroid max_area radius];

image = insertText(image, positions, values,'FontSize',12,'BoxColor',...
    [255 0 0],'BoxOpacity',0.4,'TextColor',[255 255 255]);





% imshow(label2rgb(L, @jet, [.5 .5 .5]))

% for k = 1:length(B)
%    boundary = B{k};
%    plot(boundary(:,2), boundary(:,1), 'r', 'LineWidth', 2);
%    
% end

for k = 1:length(B{1,1}(:,2))
    image(B{1,1}(k,1) ,B{1,1}(k,2),1) = 255;
end

% imshow(image)


