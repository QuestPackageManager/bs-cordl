#pragma once
// IWYU pragma private; include "System/SmallRect.hpp"
#include "System/zzzz__SmallRect_def.hpp"
// Ctor Parameters [CppParam { name: "Left", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Top", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Right", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Bottom", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::SmallRect::SmallRect(int16_t  Left, int16_t  Top, int16_t  Right, int16_t  Bottom) noexcept  {
this->Left = Left;
this->Top = Top;
this->Right = Right;
this->Bottom = Bottom;
}
// Ctor Parameters []
constexpr ::System::SmallRect::SmallRect()   {
}
