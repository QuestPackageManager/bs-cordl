#pragma once
// IWYU pragma private; include "System/Data/Tokens.hpp"
#include "System/Data/zzzz__Tokens_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::Tokens::Tokens(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::Tokens::Tokens()   {
}
constexpr ::System::Data::Tokens  System::Data::Tokens::None{static_cast<int32_t>(0x0)};
constexpr ::System::Data::Tokens  System::Data::Tokens::Name{static_cast<int32_t>(0x1)};
constexpr ::System::Data::Tokens  System::Data::Tokens::Numeric{static_cast<int32_t>(0x2)};
constexpr ::System::Data::Tokens  System::Data::Tokens::Decimal{static_cast<int32_t>(0x3)};
constexpr ::System::Data::Tokens  System::Data::Tokens::Float{static_cast<int32_t>(0x4)};
constexpr ::System::Data::Tokens  System::Data::Tokens::BinaryConst{static_cast<int32_t>(0x5)};
constexpr ::System::Data::Tokens  System::Data::Tokens::StringConst{static_cast<int32_t>(0x6)};
constexpr ::System::Data::Tokens  System::Data::Tokens::Date{static_cast<int32_t>(0x7)};
constexpr ::System::Data::Tokens  System::Data::Tokens::ListSeparator{static_cast<int32_t>(0x8)};
constexpr ::System::Data::Tokens  System::Data::Tokens::LeftParen{static_cast<int32_t>(0x9)};
constexpr ::System::Data::Tokens  System::Data::Tokens::RightParen{static_cast<int32_t>(0xa)};
constexpr ::System::Data::Tokens  System::Data::Tokens::ZeroOp{static_cast<int32_t>(0xb)};
constexpr ::System::Data::Tokens  System::Data::Tokens::UnaryOp{static_cast<int32_t>(0xc)};
constexpr ::System::Data::Tokens  System::Data::Tokens::BinaryOp{static_cast<int32_t>(0xd)};
constexpr ::System::Data::Tokens  System::Data::Tokens::Child{static_cast<int32_t>(0xe)};
constexpr ::System::Data::Tokens  System::Data::Tokens::Parent{static_cast<int32_t>(0xf)};
constexpr ::System::Data::Tokens  System::Data::Tokens::Dot{static_cast<int32_t>(0x10)};
constexpr ::System::Data::Tokens  System::Data::Tokens::Unknown{static_cast<int32_t>(0x11)};
constexpr ::System::Data::Tokens  System::Data::Tokens::EOS{static_cast<int32_t>(0x12)};
