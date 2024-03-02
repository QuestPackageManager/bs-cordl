#pragma once
#include "System/Runtime/CompilerServices/zzzz__Ephemeron_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "value", ty: "::System::Object*", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::System::Runtime::CompilerServices::Ephemeron::Ephemeron(::System::Object* key, ::System::Object* value) noexcept {
  this->key = key;
  this->value = value;
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::Ephemeron::Ephemeron() {}
