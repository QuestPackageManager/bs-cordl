#pragma once
// IWYU pragma private; include "UnityEngine/TextEditOp.hpp"
#include "UnityEngine/zzzz__TextEditOp_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextEditOp::TextEditOp(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextEditOp::TextEditOp()   {
}
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MoveLeft{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MoveRight{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MoveUp{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MoveDown{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MoveLineStart{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MoveLineEnd{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MoveTextStart{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MoveTextEnd{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MovePageUp{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MovePageDown{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MoveGraphicalLineStart{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MoveGraphicalLineEnd{static_cast<int32_t>(0xb)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MoveWordLeft{static_cast<int32_t>(0xc)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MoveWordRight{static_cast<int32_t>(0xd)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MoveParagraphForward{static_cast<int32_t>(0xe)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MoveParagraphBackward{static_cast<int32_t>(0xf)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MoveToStartOfNextWord{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::MoveToEndOfPreviousWord{static_cast<int32_t>(0x11)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::Delete{static_cast<int32_t>(0x12)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::Backspace{static_cast<int32_t>(0x13)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::DeleteWordBack{static_cast<int32_t>(0x14)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::DeleteWordForward{static_cast<int32_t>(0x15)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::DeleteLineBack{static_cast<int32_t>(0x16)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::Cut{static_cast<int32_t>(0x17)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::Paste{static_cast<int32_t>(0x18)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::ScrollStart{static_cast<int32_t>(0x19)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::ScrollEnd{static_cast<int32_t>(0x1a)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::ScrollPageUp{static_cast<int32_t>(0x1b)};
constexpr ::UnityEngine::TextEditOp  UnityEngine::TextEditOp::ScrollPageDown{static_cast<int32_t>(0x1c)};
