#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LabelScopeKind.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LabelScopeKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeKind::LabelScopeKind(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeKind::LabelScopeKind()   {
}
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeKind  System::Linq::Expressions::Interpreter::LabelScopeKind::Statement{static_cast<int32_t>(0x0)};
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeKind  System::Linq::Expressions::Interpreter::LabelScopeKind::Block{static_cast<int32_t>(0x1)};
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeKind  System::Linq::Expressions::Interpreter::LabelScopeKind::Switch{static_cast<int32_t>(0x2)};
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeKind  System::Linq::Expressions::Interpreter::LabelScopeKind::Lambda{static_cast<int32_t>(0x3)};
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeKind  System::Linq::Expressions::Interpreter::LabelScopeKind::Try{static_cast<int32_t>(0x4)};
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeKind  System::Linq::Expressions::Interpreter::LabelScopeKind::Catch{static_cast<int32_t>(0x5)};
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeKind  System::Linq::Expressions::Interpreter::LabelScopeKind::Finally{static_cast<int32_t>(0x6)};
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeKind  System::Linq::Expressions::Interpreter::LabelScopeKind::Filter{static_cast<int32_t>(0x7)};
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeKind  System::Linq::Expressions::Interpreter::LabelScopeKind::Expression{static_cast<int32_t>(0x8)};
