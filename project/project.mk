##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=project
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/home/egor/labs/lab3
ProjectPath            :=/home/egor/labs/lab3/project
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=egor
Date                   :=29/10/26
CodeLitePath           :=/home/egor/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=$(IntermediateDirectory)
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="project.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)crypto 
ArLibs                 :=  "crypto" 
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/command_line_parser.cpp$(ObjectSuffix) $(IntermediateDirectory)/protocol_handler.cpp$(ObjectSuffix) $(IntermediateDirectory)/md5_hasher.cpp$(ObjectSuffix) $(IntermediateDirectory)/auth_manager.cpp$(ObjectSuffix) $(IntermediateDirectory)/tcp_client.cpp$(ObjectSuffix) $(IntermediateDirectory)/result_data.cpp$(ObjectSuffix) $(IntermediateDirectory)/error_handler.cpp$(ObjectSuffix) $(IntermediateDirectory)/vector_data.cpp$(ObjectSuffix) $(IntermediateDirectory)/config_reader.cpp$(ObjectSuffix) \
	



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
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/egor/labs/lab3/project/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/command_line_parser.cpp$(ObjectSuffix): command_line_parser.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/command_line_parser.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/command_line_parser.cpp$(DependSuffix) -MM command_line_parser.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/egor/labs/lab3/project/command_line_parser.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/command_line_parser.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/command_line_parser.cpp$(PreprocessSuffix): command_line_parser.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/command_line_parser.cpp$(PreprocessSuffix) command_line_parser.cpp

$(IntermediateDirectory)/protocol_handler.cpp$(ObjectSuffix): protocol_handler.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/protocol_handler.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/protocol_handler.cpp$(DependSuffix) -MM protocol_handler.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/egor/labs/lab3/project/protocol_handler.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/protocol_handler.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/protocol_handler.cpp$(PreprocessSuffix): protocol_handler.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/protocol_handler.cpp$(PreprocessSuffix) protocol_handler.cpp

$(IntermediateDirectory)/md5_hasher.cpp$(ObjectSuffix): md5_hasher.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/md5_hasher.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/md5_hasher.cpp$(DependSuffix) -MM md5_hasher.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/egor/labs/lab3/project/md5_hasher.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/md5_hasher.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/md5_hasher.cpp$(PreprocessSuffix): md5_hasher.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/md5_hasher.cpp$(PreprocessSuffix) md5_hasher.cpp

$(IntermediateDirectory)/auth_manager.cpp$(ObjectSuffix): auth_manager.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/auth_manager.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/auth_manager.cpp$(DependSuffix) -MM auth_manager.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/egor/labs/lab3/project/auth_manager.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/auth_manager.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/auth_manager.cpp$(PreprocessSuffix): auth_manager.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/auth_manager.cpp$(PreprocessSuffix) auth_manager.cpp

$(IntermediateDirectory)/tcp_client.cpp$(ObjectSuffix): tcp_client.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/tcp_client.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/tcp_client.cpp$(DependSuffix) -MM tcp_client.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/egor/labs/lab3/project/tcp_client.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/tcp_client.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/tcp_client.cpp$(PreprocessSuffix): tcp_client.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/tcp_client.cpp$(PreprocessSuffix) tcp_client.cpp

$(IntermediateDirectory)/result_data.cpp$(ObjectSuffix): result_data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/result_data.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/result_data.cpp$(DependSuffix) -MM result_data.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/egor/labs/lab3/project/result_data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/result_data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/result_data.cpp$(PreprocessSuffix): result_data.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/result_data.cpp$(PreprocessSuffix) result_data.cpp

$(IntermediateDirectory)/error_handler.cpp$(ObjectSuffix): error_handler.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/error_handler.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/error_handler.cpp$(DependSuffix) -MM error_handler.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/egor/labs/lab3/project/error_handler.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/error_handler.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/error_handler.cpp$(PreprocessSuffix): error_handler.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/error_handler.cpp$(PreprocessSuffix) error_handler.cpp

$(IntermediateDirectory)/vector_data.cpp$(ObjectSuffix): vector_data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/vector_data.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/vector_data.cpp$(DependSuffix) -MM vector_data.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/egor/labs/lab3/project/vector_data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/vector_data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/vector_data.cpp$(PreprocessSuffix): vector_data.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/vector_data.cpp$(PreprocessSuffix) vector_data.cpp

$(IntermediateDirectory)/config_reader.cpp$(ObjectSuffix): config_reader.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/config_reader.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/config_reader.cpp$(DependSuffix) -MM config_reader.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/egor/labs/lab3/project/config_reader.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/config_reader.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/config_reader.cpp$(PreprocessSuffix): config_reader.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/config_reader.cpp$(PreprocessSuffix) config_reader.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


