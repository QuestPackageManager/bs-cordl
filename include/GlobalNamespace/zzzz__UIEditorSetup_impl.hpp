#pragma once
// IWYU pragma private; include "GlobalNamespace\UIEditorSetup.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__UIEditorSetup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UIEditorSetup.Method
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIEditorSetup::*)()>(&::GlobalNamespace::UIEditorSetup::Method)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a3f730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIEditorSetup*>(), { "Method", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIEditorSetup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIEditorSetup::*)()>(&::GlobalNamespace::UIEditorSetup::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a3f734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIEditorSetup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::UIEditorSetup::__cordl_internal_get_Float() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Float;
}
constexpr float_t const& GlobalNamespace::UIEditorSetup::__cordl_internal_get_Float() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Float;
}
constexpr void GlobalNamespace::UIEditorSetup::__cordl_internal_set_Float(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Float = value;
}
constexpr bool& GlobalNamespace::UIEditorSetup::__cordl_internal_get_Bool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Bool;
}
constexpr bool const& GlobalNamespace::UIEditorSetup::__cordl_internal_get_Bool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Bool;
}
constexpr void GlobalNamespace::UIEditorSetup::__cordl_internal_set_Bool(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Bool = value;
}
constexpr float_t& GlobalNamespace::UIEditorSetup::__cordl_internal_get_TweakableFloat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TweakableFloat;
}
constexpr float_t const& GlobalNamespace::UIEditorSetup::__cordl_internal_get_TweakableFloat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TweakableFloat;
}
constexpr void GlobalNamespace::UIEditorSetup::__cordl_internal_set_TweakableFloat(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TweakableFloat = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::UIEditorSetup::__cordl_internal_get_Position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::UIEditorSetup::__cordl_internal_get_Position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Position;
}
constexpr void GlobalNamespace::UIEditorSetup::__cordl_internal_set_Position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Position = value;
}
inline void GlobalNamespace::UIEditorSetup::Method() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIEditorSetup*>(), { "Method", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UIEditorSetup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIEditorSetup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UIEditorSetup* GlobalNamespace::UIEditorSetup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UIEditorSetup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UIEditorSetup::UIEditorSetup() {}
