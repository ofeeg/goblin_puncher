#This will compile multiple unit test executables which can be run individually.

CC = g++
CFLAGS = -c -g -Wall

EVENT_CSRC = ../world/event.cc
EVENT_TSRC = event_test.cc
EVENT_COBJ = $(EVENT_CSRC:.cc=.o)
EVENT_TOBJ = $(EVENT_TSRC:.cc=.o)
EVENT_EXE =  event_test
CHARA_CSRC = ../world/character.cc ../world/item.cc
CHARA_TSRC = character_test.cc
CHARA_COBJ = $(CHARA_CSRC:.cc=.o)
CHARA_TOBJ = $(CHARA_TSRC:.cc=.o)
CHARA_EXE =  character_test
ABILT_CSRC = ../world/ability.hh
ABILT_TSRC = ability_test.cc
ABILT_TOBJ = $(ABILT_TSRC:.cc=.o)
ABILT_EXE = ability_test
MAP_CSRC = ../world/event.cc ../world/map.cc
MAP_TSRC = map_test.cc
MAP_COBJ = $(MAP_CSRC:.cc=.o)
MAP_TOBJ = $(MAP_TSRC:.cc=.o)
MAP_EXE = map_test
ITEM_CSRC =  ../world/item.cc
ITEM_TSRC = item_test.cc
ITEM_COBJ = $(ITEM_CSRC:.cc=.o)
ITEM_TOBJ = $(ITEM_TSRC:.cc=.o)
ITEM_EXE = item_test


.PHONY : all

all : $(EVENT_EXE) $(CHARA_EXE) $(ITEM_EXE) $(MAP_EXE) $(ABILT_EXE)

$(EVENT_EXE) : $(EVENT_COBJ) $(EVENT_TOBJ)
	$(CC) $^ -o $@
$(CHARA_EXE) : $(CHARA_COBJ) $(CHARA_TOBJ)
	$(CC) $^ -o $@
$(ITEM_EXE) : $(ITEM_COBJ) $(ITEM_TOBJ)
	$(CC) $^ -o $@
$(MAP_EXE) : $(MAP_COBJ) $(MAP_TOBJ)
	$(CC) $^ -o $@
$(ABILT_EXE) : $(ABILT_COBJ) $(ABILT_TOBJ)
	$(CC) $(ABILT_TOBJ) -o $@

.cc.o:
	$(CC) $(CFLAGS) $< -o $@


clean :
	$(RM) *.o  ../world/*.o *~ $(CHARA_EXE) $(EVENT_EXE) $(MAP_EXE) $(ITEM_EXE) $(ABILT_EXE)
