#pragma once
// IWYU pragma private; include "UnityEngine/TextSelectOp.hpp"
#include "UnityEngine/zzzz__TextSelectOp_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextSelectOp::TextSelectOp(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextSelectOp::TextSelectOp()   {
}
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectLeft{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectRight{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectUp{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectDown{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectTextStart{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectTextEnd{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectPageUp{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectPageDown{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::ExpandSelectGraphicalLineStart{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::ExpandSelectGraphicalLineEnd{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectGraphicalLineStart{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectGraphicalLineEnd{static_cast<int32_t>(0xb)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectWordLeft{static_cast<int32_t>(0xc)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectWordRight{static_cast<int32_t>(0xd)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectToEndOfPreviousWord{static_cast<int32_t>(0xe)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectToStartOfNextWord{static_cast<int32_t>(0xf)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectParagraphBackward{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectParagraphForward{static_cast<int32_t>(0x11)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::Copy{static_cast<int32_t>(0x12)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectAll{static_cast<int32_t>(0x13)};
constexpr ::UnityEngine::TextSelectOp  UnityEngine::TextSelectOp::SelectNone{static_cast<int32_t>(0x14)};
