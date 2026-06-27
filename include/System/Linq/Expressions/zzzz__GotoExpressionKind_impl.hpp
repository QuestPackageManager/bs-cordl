#pragma once
// IWYU pragma private; include "System/Linq/Expressions/GotoExpressionKind.hpp"
#include "System/Linq/Expressions/zzzz__GotoExpressionKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Expressions::GotoExpressionKind::GotoExpressionKind(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::GotoExpressionKind::GotoExpressionKind()   {
}
constexpr ::System::Linq::Expressions::GotoExpressionKind  System::Linq::Expressions::GotoExpressionKind::Goto{static_cast<int32_t>(0x0)};
constexpr ::System::Linq::Expressions::GotoExpressionKind  System::Linq::Expressions::GotoExpressionKind::Return{static_cast<int32_t>(0x1)};
constexpr ::System::Linq::Expressions::GotoExpressionKind  System::Linq::Expressions::GotoExpressionKind::Break{static_cast<int32_t>(0x2)};
constexpr ::System::Linq::Expressions::GotoExpressionKind  System::Linq::Expressions::GotoExpressionKind::Continue{static_cast<int32_t>(0x3)};
