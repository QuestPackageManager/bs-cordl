#pragma once
// IWYU pragma private; include "System/Xml/Schema/Compositor.hpp"
#include "System/Xml/Schema/zzzz__Compositor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::Compositor::Compositor(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Compositor::Compositor()   {
}
constexpr ::System::Xml::Schema::Compositor  System::Xml::Schema::Compositor::Root{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::Compositor  System::Xml::Schema::Compositor::Include{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::Compositor  System::Xml::Schema::Compositor::Import{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::Compositor  System::Xml::Schema::Compositor::Redefine{static_cast<int32_t>(0x3)};
