% close all;
% clear all;
clc;
% '/Users/Owner/OneDrive/Documents/Python Scripts/Senior-Design-Project-EMCH427-002-Team-4-Downey/Software/Python/save/video_ai/whole916.png'
image = imread('/Users/Owner/OneDrive/Documents/Python Scripts/Senior-Design-Project-EMCH427-002-Team-4-Downey/Software/images/3.png');

tic;
[max_area, radius, centroid, brightness, image] = ProcessFrames(image);
toc
% imshow(image)
function [max_area, radius, centroid, brightness, image] = ProcessFrames(image)

    gray = rgb2gray(image);

    copy = imgaussfilt(gray,0.1); %standard deviation of 2

    copy = imbinarize(copy, 'adaptive','ForegroundPolarity','bright', 'Sensitivity',0.01); %thresh
    
%     SE = strel('line',1,1);
%     copy = imerode(copy,SE);
    

    stats = regionprops(copy, 'Area','Centroid', 'EquivDiameter', 'PixelList');
    radius = stats.EquivDiameter(end)/2;
    max_area = stats.Area;
    centroid = [ceil(stats.Centroid(1)) ceil(stats.Centroid(2))];
    PixelList = stats.PixelList;



    
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
%     montage({image,gray,gaus,thresh,erode})
    [B,~]= bwboundaries(copy);
    

%     horz = length(image(1,:))/3;
%     vert = length(image(:,1));
%     text_str = cell(5,1);
%     text_str{1} = ['X: ' num2str(centroid(1),'%0.2f')];
%     text_str{2} = ['Y: ' num2str(centroid(2),'%0.2f')];
%     text_str{3} = ['Area: ' num2str(max_area,'%0.2f')];
%     text_str{4} = ['Radius: ' num2str(radius,'%0.2f')];
%     text_str{5} = ['Brightness: ' num2str(brightness,'%0.2f')];
%     
%     positions = [0 vert-vert/8; horz/5 vert-vert/8; 0 vert-vert/8-30; horz-horz/3 vert-vert/8-30; horz-horz/3 vert-vert/8];
%     values = [centroid max_area radius brightness];
%     
%     image = insertText(image, positions, text_str,'FontSize',9,'BoxColor',...
%         [255 0 0],'BoxOpacity',0.4,'TextColor',[255 255 255]);
    figure(2);
    imshow(copy)

    figure;
    imshow(copy)
    hold on
    imcontour(copy,3,"-r")
    hold off
    
    % imshow(label2rgb(L, @jet, [.5 .5 .5]))
%     imshow(image);
%     hold on
%     for k = 1:length(B)
%        boundary = B{k};
%        plot(boundary(:,2), boundary(:,1), 'r', 'LineWidth', 1);
%        
%     end

    for k = 1:length(B{1,1}(:,2))
            image(B{1,1}(k,1) ,B{1,1}(k,2),:) = [255 0 0];

            image(B{1,1}(k,1) ,B{1,1}(k,2)+1,:) = [255 0 0];
            image(B{1,1}(k,1) ,B{1,1}(k,2)-1,:) = [255 0 0];
            image(B{1,1}(k,1)+1 ,B{1,1}(k,2),:) = [255 0 0];
            image(B{1,1}(k,1)-1 ,B{1,1}(k,2),:) = [255 0 0];
    end
end
% 


