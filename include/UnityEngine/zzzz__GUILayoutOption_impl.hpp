#pragma once
// IWYU pragma private; include "UnityEngine\GUILayoutOption.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::GUILayoutOption_Type::GUILayoutOption_Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::GUILayoutOption_Type::GUILayoutOption_Type() {}
constexpr ::UnityEngine::GUILayoutOption_Type UnityEngine::GUILayoutOption_Type::fixedWidth{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::GUILayoutOption_Type UnityEngine::GUILayoutOption_Type::fixedHeight{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::GUILayoutOption_Type UnityEngine::GUILayoutOption_Type::minWidth{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::GUILayoutOption_Type UnityEngine::GUILayoutOption_Type::maxWidth{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::GUILayoutOption_Type UnityEngine::GUILayoutOption_Type::minHeight{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::GUILayoutOption_Type UnityEngine::GUILayoutOption_Type::maxHeight{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::GUILayoutOption_Type UnityEngine::GUILayoutOption_Type::stretchWidth{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::GUILayoutOption_Type UnityEngine::GUILayoutOption_Type::stretchHeight{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::GUILayoutOption_Type UnityEngine::GUILayoutOption_Type::alignStart{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::GUILayoutOption_Type UnityEngine::GUILayoutOption_Type::alignMiddle{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::GUILayoutOption_Type UnityEngine::GUILayoutOption_Type::alignEnd{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::GUILayoutOption_Type UnityEngine::GUILayoutOption_Type::alignJustify{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::GUILayoutOption_Type UnityEngine::GUILayoutOption_Type::equalSize{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::GUILayoutOption_Type UnityEngine::GUILayoutOption_Type::spacing{ static_cast<int32_t>(0xd) };
//  Writing Method size for method: ::UnityEngine::GUILayoutOption._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUILayoutOption::*)(::UnityEngine::GUILayoutOption_Type, ::System::Object*)>(&::UnityEngine::GUILayoutOption::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b45aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutOption*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GUILayoutOption_Type>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GUILayoutOption_Type& UnityEngine::GUILayoutOption::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::UnityEngine::GUILayoutOption_Type const& UnityEngine::GUILayoutOption::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void UnityEngine::GUILayoutOption::__cordl_internal_set_type(::UnityEngine::GUILayoutOption_Type value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::System::Object*& UnityEngine::GUILayoutOption::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::System::Object* const& UnityEngine::GUILayoutOption::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void UnityEngine::GUILayoutOption::__cordl_internal_set_value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void UnityEngine::GUILayoutOption::_ctor(::UnityEngine::GUILayoutOption_Type type, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutOption*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GUILayoutOption_Type>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, value);
}
inline ::UnityEngine::GUILayoutOption* UnityEngine::GUILayoutOption::New_ctor(::UnityEngine::GUILayoutOption_Type type, ::System::Object* value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUILayoutOption*>(type, value));
}
// Ctor Parameters []
constexpr ::UnityEngine::GUILayoutOption::GUILayoutOption() {}
