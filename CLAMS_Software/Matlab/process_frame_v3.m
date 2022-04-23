% close all;
% clear all;
clc;
% '/Users/Owner/OneDrive/Documents/Python Scripts/Senior-Design-Project-EMCH427-002-Team-4-Downey/Software/Python/save/video_ai/whole916.png'
% image = imread('/Users/Owner/OneDrive/Documents/Python Scripts/Senior-Design-Project-EMCH427-002-Team-4-Downey/Software/images/FILR/FILR_edit2.jpg');
image = imread('/Users/Owner/OneDrive/Documents/Python Scripts/Senior-Design-Project-EMCH427-002-Team-4-Downey/Software/images/test.png');

% image = imread('/Users/bpriddy/Documents/GitHub/Senior-Design-Project-EMCH427-002-Team-4-Downey/Software/images/FILR/FILR_edit14.jpg');
% image = imread('/Users/bpriddy/Documents/GitHub/Senior-Design-Project-EMCH427-002-Team-4-Downey/Software/images/test.png');


tic;
% [image] = ProcessFrames(image);
% toc
% imshow(image)
% function [data, image] = ProcessFrames(image)
    data = zeros(1,5);

    gray = rgb2gray(image);
    
%     gaus = imgaussfilt(gray,0.1); %standard deviation of 2
    
%     copy = imbinarize(gaus, 'adaptive','ForegroundPolarity','bright', 'Sensitivity',0.9); %thresh
    copy = 215 < gray; %thresh
    
    PixelList = zeros(2, 0);
    stats = regionprops(copy, 'Area','Centroid', 'EquivDiameter', 'PixelList');
    
    idx = 0;
    for i = 1:length(stats)
        
        if stats(i).Area >= 40
            PixelList = [PixelList stats(i).PixelList'];
            
            if stats(i).Area > data(3)
                data(3) = stats(i).Area;
                idx = i;
            end
            
        end
        
    end

    
    %     SE = strel('line',1,1);
    %     copy = imerode(copy,SE);
    
    % dilate = imdilate(erode,SE);
    % imshow(erode)
    % imshow(copy)


%     radius = stats(idx).EquivDiameter(end)/2;
%     centroid = [ceil(stats(idx).Centroid(1)) ceil(stats(idx).Centroid(2))];
    
    data(1) = ceil(stats(idx).Centroid(1));     %X
    data(2) = ceil(stats(idx).Centroid(2));     %Y
    %data(3) =                                  %Area
    data(4) = stats(idx).EquivDiameter(end)/2;  %Radius
    data(5) = 216;                              %Brightness
    
    %     brightness = zeros(length(PixelList(:,1)),1);
    %     % 
    %     for idx = 1:1:length(PixelList(:,1))
    %         pixel = PixelList(idx,:);
    %         lumen = gray(pixel(1), pixel(2));
    %         brightness(idx) = lumen;
    %     end
    %     brightness = round(mean(brightness))

    horz = length(image(1,:))/3;
    vert = length(image(:,1));
    text_str = cell(5,1);
    text_str{1} = ['X: ' num2str(data(1),'%0.2f')];
    text_str{2} = ['Y: ' num2str(data(2),'%0.2f')];
    text_str{3} = ['Area: ' num2str(data(3),'%0.2f')];
    text_str{4} = ['Radius: ' num2str(data(4),'%0.2f')];
    text_str{5} = ['Brightness: ' num2str(216,'%0.2f')];
    
    positions = [0 vert-vert/8; horz/5 vert-vert/8; 0 vert-vert/8-30; horz-horz/3 vert-vert/8-30; horz-horz/3 vert-vert/8];

    
    image = insertText(image, positions, text_str,'FontSize',9,'BoxColor',...
        [255 0 0],'BoxOpacity',0.4,'TextColor',[255 255 255]);

    
%     [B,~]= bwboundaries(copy);
%     for k = 1:length(B{1,1}(:,2))
%         image(B{1,1}(k,1) ,B{1,1}(k,2),:) = [255 0 0];
%         
%         image(B{1,1}(k,1) ,B{1,1}(k,2)+1,:) = [255 0 0];
%         image(B{1,1}(k,1) ,B{1,1}(k,2)-1,:) = [255 0 0];
%         image(B{1,1}(k,1)+1 ,B{1,1}(k,2),:) = [255 0 0];
%         image(B{1,1}(k,1)-1 ,B{1,1}(k,2),:) = [255 0 0];
%         
%     end

%     C = contourc(double(copy));
%     for k = 1:length(C(1,:))
%         image(ceil(C(2,k)), ceil(C(1,k)),:) = [255 0 0];
%         
%         image(B{1,1}(k,1) ,B{1,1}(k,2)+1,:) = [255 0 0];
%         image(B{1,1}(k,1) ,B{1,1}(k,2)-1,:) = [255 0 0];
%         image(B{1,1}(k,1)+1 ,B{1,1}(k,2),:) = [255 0 0];
%         image(B{1,1}(k,1)-1 ,B{1,1}(k,2),:) = [255 0 0];
%         
%     end
%     imshow(image)

%     figure;
%     imshow(copy)
%     hold on
%     [C, h] = imcontour(copy,3,"-r");
%     hold off
      
    
% end

% PixelList = stats(i).PixelList;
PixelList = PixelList'; %REMOVE THIS FOR SPEED 
for k = 1:1:length(PixelList(:,1))
    pixel = PixelList(k,:);
%     copy(pixel(2), pixel(1));
%     if pixel()

    if copy(pixel(2)+1,pixel(1)) == 0
        image(pixel(2)+1,pixel(1),:) = [255 0 0];
        image(pixel(2),pixel(1),:) = [255 0 0];
    end

    if copy(pixel(2)-1,pixel(1)) == 0
        image(pixel(2)-1,pixel(1),:) = [255 0 0];
        image(pixel(2),pixel(1),:) = [255 0 0];
    end

    if copy(pixel(2),pixel(1)+1) == 0
        image(pixel(2),pixel(1)+1,:) = [255 0 0];
        image(pixel(2),pixel(1),:) = [255 0 0];
    end

    if copy(pixel(2),pixel(1)-1) == 0
        image(pixel(2),pixel(1)-1,:) = [255 0 0];
        image(pixel(2),pixel(1),:) = [255 0 0];
    end

end
toc
montage({gray,copy,image})

%% Test Function
% 
% image = imread('/Users/bpriddy/Documents/GitHub/Senior-Design-Project-EMCH427-002-Team-4-Downey/Software/images/FILR/FILR_edit14.jpg');
% image = imread('/Users/bpriddy/Documents/GitHub/Senior-Design-Project-EMCH427-002-Team-4-Downey/Software/images/test3.png');

image = imread('/Users/Owner/OneDrive/Documents/Python Scripts/Senior-Design-Project-EMCH427-002-Team-4-Downey/Software/images/0.png');

tic;
[data, image] = ProcessFrames(image);
toc
imshow(image)

%%

function [data, image] = ProcessFrames(image)
    data = zeros(1,5);

    gray = rgb2gray(image);

%     copy = imgaussfilt(gray,0.1); %standard deviation of 2

%     copy = 215 < gray; %thresh
    copy = imbinarize(gray,0.85);
    
    
    copy(2:6,2:9) = 1;
    copy(:,1) = 0;
    copy(:,end) = 0;
    copy(1,:) = 0;
    copy(end,:) = 0;
    
    %     SE = strel('line',1,1);
    %     copy = imerode(copy,SE);
    PixelList = zeros(2,0);
    stats = regionprops(copy, 'Area','Centroid', 'EquivDiameter', 'PixelList');
    idx = 0;
    for i = 1:length(stats)
        
        if stats(i).Area >= 10
            PixelList = [PixelList stats(i).PixelList'];
            
            if stats(i).Area > data(3)
                data(3) = stats(i).Area;
                idx = i;
            end
            
        end
        
    end


    
    data(1) = ceil(stats(idx).Centroid(1));     %X
    data(2) = ceil(stats(idx).Centroid(2));     %Y
    %data(3) =                                  %Area
    data(4) = stats(idx).EquivDiameter(end)/2;  %Radius
    data(5) = 216;                              %Brightness
    
    %     brightness = zeros(length(PixelList(:,1)),1);
    %     % 
    %     for idx = 1:1:length(PixelList(:,1))
    %         pixel = PixelList(idx,:);
    %         lumen = gray(pixel(1), pixel(2));
    %         brightness(idx) = lumen;
    %     end
    %     brightness = round(mean(brightness));

    % dilate = imdilate(erode,SE);
    % imshow(erode)
    % imshow(copy)
    %     montage({image,gray,gaus,thresh,erode})
    

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

    %     image = insertText(image, positions, text_str,'FontSize',9,'BoxColor',...
    %         [255 0 0],'BoxOpacity',0.4,'TextColor',[255 255 255]);
    
    PixelList = PixelList';
    for k = 1:1:length(PixelList(:,1))
            pixel = PixelList(k,:);
%             copy(pixel(2), pixel(1));

            if copy(pixel(2)+1,pixel(1)) == 0
                image(pixel(2)+1,pixel(1),:) = [255 0 0];
                image(pixel(2),pixel(1),:) = [255 0 0];
            end

            if copy(pixel(2)-1,pixel(1)) == 0
                image(pixel(2)-1,pixel(1),:) = [255 0 0];
                image(pixel(2),pixel(1),:) = [255 0 0];
            end

            if copy(pixel(2),pixel(1)+1) == 0
                image(pixel(2),pixel(1)+1,:) = [255 0 0];
                image(pixel(2),pixel(1),:) = [255 0 0];
            end

            if copy(pixel(2),pixel(1)-1) == 0
                image(pixel(2),pixel(1)-1,:) = [255 0 0];
                image(pixel(2),pixel(1),:) = [255 0 0];
            end

    end

    
end