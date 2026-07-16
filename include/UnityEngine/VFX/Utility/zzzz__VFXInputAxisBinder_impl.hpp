#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXInputAxisBinder.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXInputAxisBinder_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputAxisBinder.get_AxisProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXInputAxisBinder::*)()>(&::UnityEngine::VFX::Utility::VFXInputAxisBinder::get_AxisProperty)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69de088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputAxisBinder*>(), { "get_AxisProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputAxisBinder.set_AxisProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXInputAxisBinder::*)(::StringW)>(&::UnityEngine::VFX::Utility::VFXInputAxisBinder::set_AxisProperty)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69de0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputAxisBinder*>(), { "set_AxisProperty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputAxisBinder.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::Utility::VFXInputAxisBinder::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::Utility::VFXInputAxisBinder::IsValid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x69de0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputAxisBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputAxisBinder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputAxisBinder.UpdateBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXInputAxisBinder::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::Utility::VFXInputAxisBinder::UpdateBinding)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x69de0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputAxisBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputAxisBinder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputAxisBinder.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXInputAxisBinder::*)()>(&::UnityEngine::VFX::Utility::VFXInputAxisBinder::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x69de1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputAxisBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputAxisBinder*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputAxisBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXInputAxisBinder::*)()>(&::UnityEngine::VFX::Utility::VFXInputAxisBinder::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69de248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputAxisBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXInputAxisBinder::__cordl_internal_get_m_AxisProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AxisProperty;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXInputAxisBinder::__cordl_internal_get_m_AxisProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AxisProperty;
}
constexpr void UnityEngine::VFX::Utility::VFXInputAxisBinder::__cordl_internal_set_m_AxisProperty(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AxisProperty = value;
}
constexpr ::StringW& UnityEngine::VFX::Utility::VFXInputAxisBinder::__cordl_internal_get_AxisName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AxisName;
}
constexpr ::StringW const& UnityEngine::VFX::Utility::VFXInputAxisBinder::__cordl_internal_get_AxisName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AxisName;
}
constexpr void UnityEngine::VFX::Utility::VFXInputAxisBinder::__cordl_internal_set_AxisName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AxisName = value;
}
constexpr float_t& UnityEngine::VFX::Utility::VFXInputAxisBinder::__cordl_internal_get_AccumulateSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AccumulateSpeed;
}
constexpr float_t const& UnityEngine::VFX::Utility::VFXInputAxisBinder::__cordl_internal_get_AccumulateSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AccumulateSpeed;
}
constexpr void UnityEngine::VFX::Utility::VFXInputAxisBinder::__cordl_internal_set_AccumulateSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AccumulateSpeed = value;
}
constexpr bool& UnityEngine::VFX::Utility::VFXInputAxisBinder::__cordl_internal_get_Accumulate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Accumulate;
}
constexpr bool const& UnityEngine::VFX::Utility::VFXInputAxisBinder::__cordl_internal_get_Accumulate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Accumulate;
}
constexpr void UnityEngine::VFX::Utility::VFXInputAxisBinder::__cordl_internal_set_Accumulate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Accumulate = value;
}
inline ::StringW UnityEngine::VFX::Utility::VFXInputAxisBinder::get_AxisProperty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputAxisBinder*>(), { "get_AxisProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXInputAxisBinder::set_AxisProperty(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputAxisBinder*>(), { "set_AxisProperty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::VFX::Utility::VFXInputAxisBinder::IsValid(::UnityEngine::VFX::VisualEffect* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputAxisBinder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline void UnityEngine::VFX::Utility::VFXInputAxisBinder::UpdateBinding(::UnityEngine::VFX::VisualEffect* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputAxisBinder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline ::StringW UnityEngine::VFX::Utility::VFXInputAxisBinder::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputAxisBinder*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXInputAxisBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputAxisBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::Utility::VFXInputAxisBinder* UnityEngine::VFX::Utility::VFXInputAxisBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXInputAxisBinder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXInputAxisBinder::VFXInputAxisBinder() {}
