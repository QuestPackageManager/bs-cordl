#pragma once
// IWYU pragma private; include "System/InputRecord.hpp"
#include "System/zzzz__InputRecord_def.hpp"
// Ctor Parameters [CppParam { name: "EventType", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "KeyDown", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "RepeatCount", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VirtualKeyCode", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VirtualScanCode", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Character", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ControlKeyState", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pad1", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pad2", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::InputRecord::InputRecord(int16_t  EventType, bool  KeyDown, int16_t  RepeatCount, int16_t  VirtualKeyCode, int16_t  VirtualScanCode, char16_t  Character, int32_t  ControlKeyState, int32_t  pad1, bool  pad2) noexcept  {
this->EventType = EventType;
this->KeyDown = KeyDown;
this->RepeatCount = RepeatCount;
this->VirtualKeyCode = VirtualKeyCode;
this->VirtualScanCode = VirtualScanCode;
this->Character = Character;
this->ControlKeyState = ControlKeyState;
this->pad1 = pad1;
this->pad2 = pad2;
}
// Ctor Parameters []
constexpr ::System::InputRecord::InputRecord()   {
}
