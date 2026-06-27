#pragma once
// IWYU pragma private; include "System/Linq/Expressions/AnalyzeTypeIsResult.hpp"
#include "System/Linq/Expressions/zzzz__AnalyzeTypeIsResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Expressions::AnalyzeTypeIsResult::AnalyzeTypeIsResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::AnalyzeTypeIsResult::AnalyzeTypeIsResult()   {
}
constexpr ::System::Linq::Expressions::AnalyzeTypeIsResult  System::Linq::Expressions::AnalyzeTypeIsResult::KnownFalse{static_cast<int32_t>(0x0)};
constexpr ::System::Linq::Expressions::AnalyzeTypeIsResult  System::Linq::Expressions::AnalyzeTypeIsResult::KnownTrue{static_cast<int32_t>(0x1)};
constexpr ::System::Linq::Expressions::AnalyzeTypeIsResult  System::Linq::Expressions::AnalyzeTypeIsResult::KnownAssignable{static_cast<int32_t>(0x2)};
constexpr ::System::Linq::Expressions::AnalyzeTypeIsResult  System::Linq::Expressions::AnalyzeTypeIsResult::Unknown{static_cast<int32_t>(0x3)};
