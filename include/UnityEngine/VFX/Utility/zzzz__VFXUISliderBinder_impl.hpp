#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXUISliderBinder.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXUISliderBinder_def.hpp"
#include "UnityEngine/UI/zzzz__Slider_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXUISliderBinder.get_Property
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXUISliderBinder::*)()>(&::UnityEngine::VFX::Utility::VFXUISliderBinder::get_Property)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69e8770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUISliderBinder*>(), { "get_Property", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXUISliderBinder.set_Property
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXUISliderBinder::*)(::StringW)>(&::UnityEngine::VFX::Utility::VFXUISliderBinder::set_Property)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69e8788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUISliderBinder*>(), { "set_Property", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXUISliderBinder.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::Utility::VFXUISliderBinder::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::Utility::VFXUISliderBinder::IsValid)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x69e87a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUISliderBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXUISliderBinder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXUISliderBinder.UpdateBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXUISliderBinder::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::Utility::VFXUISliderBinder::UpdateBinding)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69e8854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUISliderBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXUISliderBinder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXUISliderBinder.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXUISliderBinder::*)()>(&::UnityEngine::VFX::Utility::VFXUISliderBinder::ToString)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x69e88b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUISliderBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXUISliderBinder*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXUISliderBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXUISliderBinder::*)()>(&::UnityEngine::VFX::Utility::VFXUISliderBinder::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69e89ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUISliderBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXUISliderBinder::__cordl_internal_get_m_Property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Property;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXUISliderBinder::__cordl_internal_get_m_Property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Property;
}
constexpr void UnityEngine::VFX::Utility::VFXUISliderBinder::__cordl_internal_set_m_Property(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Property = value;
}
constexpr ::UnityW<::UnityEngine::UI::Slider>& UnityEngine::VFX::Utility::VFXUISliderBinder::__cordl_internal_get_Target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Target;
}
constexpr ::UnityW<::UnityEngine::UI::Slider> const& UnityEngine::VFX::Utility::VFXUISliderBinder::__cordl_internal_get_Target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Target;
}
constexpr void UnityEngine::VFX::Utility::VFXUISliderBinder::__cordl_internal_set_Target(::UnityW<::UnityEngine::UI::Slider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Target = value;
}
inline ::StringW UnityEngine::VFX::Utility::VFXUISliderBinder::get_Property() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUISliderBinder*>(), { "get_Property", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXUISliderBinder::set_Property(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUISliderBinder*>(), { "set_Property", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::VFX::Utility::VFXUISliderBinder::IsValid(::UnityEngine::VFX::VisualEffect* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXUISliderBinder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline void UnityEngine::VFX::Utility::VFXUISliderBinder::UpdateBinding(::UnityEngine::VFX::VisualEffect* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXUISliderBinder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline ::StringW UnityEngine::VFX::Utility::VFXUISliderBinder::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXUISliderBinder*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXUISliderBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUISliderBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::Utility::VFXUISliderBinder* UnityEngine::VFX::Utility::VFXUISliderBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXUISliderBinder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXUISliderBinder::VFXUISliderBinder() {}
