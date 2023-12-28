#pragma once
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DirectionalLight.get_lights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLight*>* (*)()>(
    &::GlobalNamespace::DirectionalLight::get_lights)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x210b294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLight*>::get(), "get_lights",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLight.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DirectionalLight::*)()>(&::GlobalNamespace::DirectionalLight::OnEnable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x210b2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLight*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLight.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DirectionalLight::*)()>(&::GlobalNamespace::DirectionalLight::OnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x210b3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLight*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLight._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DirectionalLight::*)()>(&::GlobalNamespace::DirectionalLight::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x210b43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLight*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::DirectionalLight::__get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::DirectionalLight::__get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void GlobalNamespace::DirectionalLight::__set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
constexpr float_t& GlobalNamespace::DirectionalLight::__get_intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr float_t const& GlobalNamespace::DirectionalLight::__get_intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr void GlobalNamespace::DirectionalLight::__set_intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intensity = value;
}
constexpr float_t& GlobalNamespace::DirectionalLight::__get_radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr float_t const& GlobalNamespace::DirectionalLight::__get_radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr void GlobalNamespace::DirectionalLight::__set_radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___radius = value;
}
inline void GlobalNamespace::DirectionalLight::setStaticF__lights(::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLight*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLight*>*, "_lights",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLight*>::get>(
      std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLight*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLight*>* GlobalNamespace::DirectionalLight::getStaticF__lights() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLight*>*, "_lights",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLight*>::get>();
}
inline void GlobalNamespace::DirectionalLight::setStaticF__mainLight(::GlobalNamespace::DirectionalLight* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::DirectionalLight*, "_mainLight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLight*>::get>(
      std::forward<::GlobalNamespace::DirectionalLight*>(value));
}
inline ::GlobalNamespace::DirectionalLight* GlobalNamespace::DirectionalLight::getStaticF__mainLight() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::DirectionalLight*, "_mainLight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLight*>::get>();
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLight*>* GlobalNamespace::DirectionalLight::get_lights() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLight*>::get(), "get_lights",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLight*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::DirectionalLight::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLight*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DirectionalLight::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLight*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DirectionalLight* GlobalNamespace::DirectionalLight::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DirectionalLight*>());
}
inline void GlobalNamespace::DirectionalLight::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLight*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DirectionalLight::DirectionalLight() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
