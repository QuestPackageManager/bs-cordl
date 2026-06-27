#pragma once
// IWYU pragma private; include "System/ConsoleScreenBufferInfo.hpp"
#include "System/zzzz__Coord_impl.hpp"
#include "System/zzzz__SmallRect_impl.hpp"
#include "System/zzzz__ConsoleScreenBufferInfo_def.hpp"
// Ctor Parameters [CppParam { name: "Size", ty: "::System::Coord", modifiers: "", def_value: Some("{}") }, CppParam { name: "CursorPosition", ty: "::System::Coord", modifiers: "", def_value: Some("{}") }, CppParam { name: "Attribute", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Window", ty: "::System::SmallRect", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaxWindowSize", ty: "::System::Coord", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ConsoleScreenBufferInfo::ConsoleScreenBufferInfo(::System::Coord  Size, ::System::Coord  CursorPosition, int16_t  Attribute, ::System::SmallRect  Window, ::System::Coord  MaxWindowSize) noexcept  {
this->Size = Size;
this->CursorPosition = CursorPosition;
this->Attribute = Attribute;
this->Window = Window;
this->MaxWindowSize = MaxWindowSize;
}
// Ctor Parameters []
constexpr ::System::ConsoleScreenBufferInfo::ConsoleScreenBufferInfo()   {
}
