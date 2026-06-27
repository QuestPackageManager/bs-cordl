#pragma once
// IWYU pragma private; include "System/DateTimeToken.hpp"
#include "System/zzzz__DateTimeParse_impl.hpp"
#include "System/zzzz__TokenType_impl.hpp"
#include "System/zzzz__DateTimeToken_def.hpp"
// Ctor Parameters [CppParam { name: "dtt", ty: "::System::DateTimeParse_DTT", modifiers: "", def_value: Some("{}") }, CppParam { name: "suffix", ty: "::System::TokenType", modifiers: "", def_value: Some("{}") }, CppParam { name: "num", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DateTimeToken::DateTimeToken(::System::DateTimeParse_DTT  dtt, ::System::TokenType  suffix, int32_t  num) noexcept  {
this->dtt = dtt;
this->suffix = suffix;
this->num = num;
}
// Ctor Parameters []
constexpr ::System::DateTimeToken::DateTimeToken()   {
}
