class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        newlist,l1,l2,i,j=[],len(nums1),len(nums2),0,0
        while(i<l1 and j<l2):
            if(nums1[i]<nums2[j]):
                newlist.append(nums1[i])
                i+=1
            else:
                newlist.append(nums2[j])
                j+=1
        while(i<l1):
            newlist.append(nums1[i])
            i+=1
        while(j<l2):
            newlist.append(nums2[j])
            j+=1
        if(len(newlist)%2==0):
            l,u=0,len(newlist)-1
            m=int((l+u)/2)
            n=int(m+1)
            s=(newlist[m]+newlist[n])/2
            return s
        else:
            l,u=0,len(newlist)-1
            m=int((l+u)/2)
            return (newlist[m])
