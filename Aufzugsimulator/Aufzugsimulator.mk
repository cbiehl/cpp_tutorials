##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Aufzugsimulator
ConfigurationName      :=Debug
WorkspacePath          :=/home/cppp/CPPP-Workspace
ProjectPath            :=/home/cppp/CPPP-Workspace/Aufzugsimulator
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=cppp
Date                   :=22/09/18
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
ObjectsFileList        :="Aufzugsimulator.txt"
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
Objects0=$(IntermediateDirectory)/ElevatorStrategy.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Person.cpp$(ObjectSuffix) $(IntermediateDirectory)/SimpleElevatorStrategy.cpp$(ObjectSuffix) $(IntermediateDirectory)/Building.cpp$(ObjectSuffix) $(IntermediateDirectory)/Floor.cpp$(ObjectSuffix) $(IntermediateDirectory)/Elevator.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/ElevatorStrategy.cpp$(ObjectSuffix): ElevatorStrategy.cpp $(IntermediateDirectory)/ElevatorStrategy.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/Aufzugsimulator/ElevatorStrategy.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ElevatorStrategy.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ElevatorStrategy.cpp$(DependSuffix): ElevatorStrategy.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ElevatorStrategy.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ElevatorStrategy.cpp$(DependSuffix) -MM ElevatorStrategy.cpp

$(IntermediateDirectory)/ElevatorStrategy.cpp$(PreprocessSuffix): ElevatorStrategy.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ElevatorStrategy.cpp$(PreprocessSuffix) ElevatorStrategy.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/Aufzugsimulator/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Person.cpp$(ObjectSuffix): Person.cpp $(IntermediateDirectory)/Person.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/Aufzugsimulator/Person.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Person.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Person.cpp$(DependSuffix): Person.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Person.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Person.cpp$(DependSuffix) -MM Person.cpp

$(IntermediateDirectory)/Person.cpp$(PreprocessSuffix): Person.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Person.cpp$(PreprocessSuffix) Person.cpp

$(IntermediateDirectory)/SimpleElevatorStrategy.cpp$(ObjectSuffix): SimpleElevatorStrategy.cpp $(IntermediateDirectory)/SimpleElevatorStrategy.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/Aufzugsimulator/SimpleElevatorStrategy.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SimpleElevatorStrategy.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SimpleElevatorStrategy.cpp$(DependSuffix): SimpleElevatorStrategy.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SimpleElevatorStrategy.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SimpleElevatorStrategy.cpp$(DependSuffix) -MM SimpleElevatorStrategy.cpp

$(IntermediateDirectory)/SimpleElevatorStrategy.cpp$(PreprocessSuffix): SimpleElevatorStrategy.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SimpleElevatorStrategy.cpp$(PreprocessSuffix) SimpleElevatorStrategy.cpp

$(IntermediateDirectory)/Building.cpp$(ObjectSuffix): Building.cpp $(IntermediateDirectory)/Building.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/Aufzugsimulator/Building.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Building.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Building.cpp$(DependSuffix): Building.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Building.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Building.cpp$(DependSuffix) -MM Building.cpp

$(IntermediateDirectory)/Building.cpp$(PreprocessSuffix): Building.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Building.cpp$(PreprocessSuffix) Building.cpp

$(IntermediateDirectory)/Floor.cpp$(ObjectSuffix): Floor.cpp $(IntermediateDirectory)/Floor.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/Aufzugsimulator/Floor.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Floor.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Floor.cpp$(DependSuffix): Floor.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Floor.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Floor.cpp$(DependSuffix) -MM Floor.cpp

$(IntermediateDirectory)/Floor.cpp$(PreprocessSuffix): Floor.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Floor.cpp$(PreprocessSuffix) Floor.cpp

$(IntermediateDirectory)/Elevator.cpp$(ObjectSuffix): Elevator.cpp $(IntermediateDirectory)/Elevator.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/cppp/CPPP-Workspace/Aufzugsimulator/Elevator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Elevator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Elevator.cpp$(DependSuffix): Elevator.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Elevator.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Elevator.cpp$(DependSuffix) -MM Elevator.cpp

$(IntermediateDirectory)/Elevator.cpp$(PreprocessSuffix): Elevator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Elevator.cpp$(PreprocessSuffix) Elevator.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


