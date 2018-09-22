##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Tag3_Aufgabe11
ConfigurationName      :=Debug
WorkspacePath          :=/home/cppp/CPPP-Workspace
ProjectPath            :=/home/cppp/CPPP-Workspace/Tag3_Aufgabe11
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=cppp
Date                   :=27/08/18
CodeLitePath           :=/home/cppp/.codelite
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="Tag3_Aufgabe11.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
EXERCISES_ROOT:=~/Repos/tud-cppp/exercises/
Objects0=$(IntermediateDirectory)/MinusExpression.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/NumberExpression.cpp$(ObjectSuffix) $(IntermediateDirectory)/PlusExpression.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/MinusExpression.cpp$(ObjectSuffix): MinusExpression.cpp $(IntermediateDirectory)/MinusExpression.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/Tag3_Aufgabe11/MinusExpression.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MinusExpression.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MinusExpression.cpp$(DependSuffix): MinusExpression.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MinusExpression.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MinusExpression.cpp$(DependSuffix) -MM MinusExpression.cpp

$(IntermediateDirectory)/MinusExpression.cpp$(PreprocessSuffix): MinusExpression.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MinusExpression.cpp$(PreprocessSuffix) MinusExpression.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/Tag3_Aufgabe11/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/NumberExpression.cpp$(ObjectSuffix): NumberExpression.cpp $(IntermediateDirectory)/NumberExpression.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/Tag3_Aufgabe11/NumberExpression.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NumberExpression.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NumberExpression.cpp$(DependSuffix): NumberExpression.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/NumberExpression.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/NumberExpression.cpp$(DependSuffix) -MM NumberExpression.cpp

$(IntermediateDirectory)/NumberExpression.cpp$(PreprocessSuffix): NumberExpression.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NumberExpression.cpp$(PreprocessSuffix) NumberExpression.cpp

$(IntermediateDirectory)/PlusExpression.cpp$(ObjectSuffix): PlusExpression.cpp $(IntermediateDirectory)/PlusExpression.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/Tag3_Aufgabe11/PlusExpression.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PlusExpression.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PlusExpression.cpp$(DependSuffix): PlusExpression.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PlusExpression.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PlusExpression.cpp$(DependSuffix) -MM PlusExpression.cpp

$(IntermediateDirectory)/PlusExpression.cpp$(PreprocessSuffix): PlusExpression.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PlusExpression.cpp$(PreprocessSuffix) PlusExpression.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


