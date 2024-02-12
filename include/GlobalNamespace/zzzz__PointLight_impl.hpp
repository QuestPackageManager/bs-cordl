#pragma once
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PointLight_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PointLight.get_lights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PointLight>>* (*)()>(
    &::GlobalNamespace::PointLight::get_lights)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21a06cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PointLight*>::get(), "get_lights",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointLight.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PointLight::*)()>(&::GlobalNamespace::PointLight::OnEnable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x21a0724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PointLight*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointLight.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PointLight::*)()>(&::GlobalNamespace::PointLight::OnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21a07f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PointLight*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointLight._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PointLight::*)()>(&::GlobalNamespace::PointLight::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a0874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PointLight*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::PointLight::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PointLight::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void GlobalNamespace::PointLight::__cordl_internal_set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
constexpr float_t& GlobalNamespace::PointLight::__cordl_internal_get_intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr float_t const& GlobalNamespace::PointLight::__cordl_internal_get_intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr void GlobalNamespace::PointLight::__cordl_internal_set_intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intensity = value;
}
inline void GlobalNamespace::PointLight::setStaticF__lights(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PointLight>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PointLight>>*, "_lights",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PointLight*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PointLight>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PointLight>>* GlobalNamespace::PointLight::getStaticF__lights() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PointLight>>*, "_lights",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PointLight*>::get>();
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PointLight>>* GlobalNamespace::PointLight::get_lights() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PointLight*>::get(), "get_lights",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PointLight>>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PointLight::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PointLight*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PointLight::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PointLight*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PointLight* GlobalNamespace::PointLight::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PointLight*>());
}
inline void GlobalNamespace::PointLight::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PointLight*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PointLight::PointLight() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
