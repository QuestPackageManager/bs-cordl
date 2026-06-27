#pragma once
// IWYU pragma private; include "System/Data/Nodes.hpp"
#include "System/Data/zzzz__Nodes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::Nodes::Nodes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::Nodes::Nodes()   {
}
constexpr ::System::Data::Nodes  System::Data::Nodes::Noop{static_cast<int32_t>(0x0)};
constexpr ::System::Data::Nodes  System::Data::Nodes::Unop{static_cast<int32_t>(0x1)};
constexpr ::System::Data::Nodes  System::Data::Nodes::UnopSpec{static_cast<int32_t>(0x2)};
constexpr ::System::Data::Nodes  System::Data::Nodes::Binop{static_cast<int32_t>(0x3)};
constexpr ::System::Data::Nodes  System::Data::Nodes::BinopSpec{static_cast<int32_t>(0x4)};
constexpr ::System::Data::Nodes  System::Data::Nodes::Zop{static_cast<int32_t>(0x5)};
constexpr ::System::Data::Nodes  System::Data::Nodes::Call{static_cast<int32_t>(0x6)};
constexpr ::System::Data::Nodes  System::Data::Nodes::Const{static_cast<int32_t>(0x7)};
constexpr ::System::Data::Nodes  System::Data::Nodes::Name{static_cast<int32_t>(0x8)};
constexpr ::System::Data::Nodes  System::Data::Nodes::Paren{static_cast<int32_t>(0x9)};
constexpr ::System::Data::Nodes  System::Data::Nodes::Conv{static_cast<int32_t>(0xa)};
