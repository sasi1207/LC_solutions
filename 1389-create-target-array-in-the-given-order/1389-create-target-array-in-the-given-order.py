class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        target = []
        for (num,idx) in zip(identity,index):
            target.insert(idx,num)
        return target