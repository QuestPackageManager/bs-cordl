#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXUIToggleBinder.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXUIToggleBinder_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXUIToggleBinder.get_Property
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXUIToggleBinder::*)()>(&::UnityEngine::VFX::Utility::VFXUIToggleBinder::get_Property)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69e8a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUIToggleBinder*>(), { "get_Property", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXUIToggleBinder.set_Property
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXUIToggleBinder::*)(::StringW)>(&::UnityEngine::VFX::Utility::VFXUIToggleBinder::set_Property)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69e8a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUIToggleBinder*>(), { "set_Property", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXUIToggleBinder.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::Utility::VFXUIToggleBinder::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::Utility::VFXUIToggleBinder::IsValid)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x69e8a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUIToggleBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXUIToggleBinder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXUIToggleBinder.UpdateBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXUIToggleBinder::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::Utility::VFXUIToggleBinder::UpdateBinding)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x69e8aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUIToggleBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXUIToggleBinder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXUIToggleBinder.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXUIToggleBinder::*)()>(&::UnityEngine::VFX::Utility::VFXUIToggleBinder::ToString)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x69e8b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUIToggleBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXUIToggleBinder*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXUIToggleBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXUIToggleBinder::*)()>(&::UnityEngine::VFX::Utility::VFXUIToggleBinder::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69e8c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUIToggleBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXUIToggleBinder::__cordl_internal_get_m_Property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Property;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXUIToggleBinder::__cordl_internal_get_m_Property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Property;
}
constexpr void UnityEngine::VFX::Utility::VFXUIToggleBinder::__cordl_internal_set_m_Property(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Property = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& UnityEngine::VFX::Utility::VFXUIToggleBinder::__cordl_internal_get_Target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Target;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& UnityEngine::VFX::Utility::VFXUIToggleBinder::__cordl_internal_get_Target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Target;
}
constexpr void UnityEngine::VFX::Utility::VFXUIToggleBinder::__cordl_internal_set_Target(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Target = value;
}
inline ::StringW UnityEngine::VFX::Utility::VFXUIToggleBinder::get_Property() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUIToggleBinder*>(), { "get_Property", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXUIToggleBinder::set_Property(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUIToggleBinder*>(), { "set_Property", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::VFX::Utility::VFXUIToggleBinder::IsValid(::UnityEngine::VFX::VisualEffect* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXUIToggleBinder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline void UnityEngine::VFX::Utility::VFXUIToggleBinder::UpdateBinding(::UnityEngine::VFX::VisualEffect* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXUIToggleBinder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline ::StringW UnityEngine::VFX::Utility::VFXUIToggleBinder::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXUIToggleBinder*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXUIToggleBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXUIToggleBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::Utility::VFXUIToggleBinder* UnityEngine::VFX::Utility::VFXUIToggleBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXUIToggleBinder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXUIToggleBinder::VFXUIToggleBinder() {}
