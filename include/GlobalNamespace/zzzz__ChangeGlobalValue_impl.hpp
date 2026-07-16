#pragma once
// IWYU pragma private; include "GlobalNamespace/ChangeGlobalValue.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ChangeGlobalValue_def.hpp"
#include "GlobalNamespace/zzzz__ChangeGlobalValue_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "T", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<T>::ChangeGlobalValue_ShaderValue_1(::StringW key, T value) noexcept {
  this->key = key;
  this->value = value;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<T>::ChangeGlobalValue_ShaderValue_1() {}
//  Writing Method size for method: ::GlobalNamespace::ChangeGlobalValue.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChangeGlobalValue::*)()>(&::GlobalNamespace::ChangeGlobalValue::OnValidate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5914cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ChangeGlobalValue*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChangeGlobalValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChangeGlobalValue::*)()>(&::GlobalNamespace::ChangeGlobalValue::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5914da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ChangeGlobalValue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<float_t>>& GlobalNamespace::ChangeGlobalValue::__cordl_internal_get__floatValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValues;
}
constexpr ::ArrayW<::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<float_t>> const& GlobalNamespace::ChangeGlobalValue::__cordl_internal_get__floatValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValues;
}
constexpr void GlobalNamespace::ChangeGlobalValue::__cordl_internal_set__floatValues(::ArrayW<::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<float_t>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatValues = value;
}
constexpr ::ArrayW<::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<::UnityEngine::Color>>& GlobalNamespace::ChangeGlobalValue::__cordl_internal_get__colorValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorValues;
}
constexpr ::ArrayW<::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<::UnityEngine::Color>> const& GlobalNamespace::ChangeGlobalValue::__cordl_internal_get__colorValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorValues;
}
constexpr void GlobalNamespace::ChangeGlobalValue::__cordl_internal_set__colorValues(::ArrayW<::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<::UnityEngine::Color>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorValues = value;
}
inline void GlobalNamespace::ChangeGlobalValue::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ChangeGlobalValue*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ChangeGlobalValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ChangeGlobalValue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ChangeGlobalValue* GlobalNamespace::ChangeGlobalValue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ChangeGlobalValue*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ChangeGlobalValue::ChangeGlobalValue() {}
