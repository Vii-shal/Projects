import cv2

# configurable parameters 
source = "p_12_sign.jpg"
destination = "newImage.png"
scale_percent = 50

# input image 
src = cv2.imread(source,cv2.IMREAD_UNCHANGED)
# cv2.imshow("title",src)


# percent by which the image is resized
# scale_percent = 50

# calculate 50% of original dimensions
new_width = int(src.shape[1] * scale_percent / 100)
new_height = int(src.shape[0] * scale_percent / 100)    

# dsize
dsize = (new_width, new_height)                     # tuple

# resize image 
output = cv2.resize(src,dsize)

cv2.imwrite(destination,output)
cv2.waitKey(0)

print("done")

# jab tak click nhi karenge image dekhagi 
cv2.waitKey(0)