#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SmoothCamera_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "GlobalNamespace/zzzz__MainCamera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SmoothCamera.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::SmoothCamera::*)(float_t, float_t, float_t, bool, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SmoothCamera::Init)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2268100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCamera.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCamera::*)()>(&::GlobalNamespace::SmoothCamera::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22682a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCamera.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCamera::*)()>(&::GlobalNamespace::SmoothCamera::OnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22682c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCamera.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCamera::*)()>(&::GlobalNamespace::SmoothCamera::LateUpdate)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x22682e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), "LateUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCamera._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCamera::*)()>(&::GlobalNamespace::SmoothCamera::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22684dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Camera*& GlobalNamespace::SmoothCamera::__get__camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& GlobalNamespace::SmoothCamera::__get__camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr void GlobalNamespace::SmoothCamera::__set__camera(::UnityEngine::Camera* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MainCamera*& GlobalNamespace::SmoothCamera::__get__mainCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainCamera;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainCamera*> const& GlobalNamespace::SmoothCamera::__get__mainCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainCamera;
}
constexpr void GlobalNamespace::SmoothCamera::__set__mainCamera(::GlobalNamespace::MainCamera* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SmoothCamera::__get__thirdPersonPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thirdPersonPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SmoothCamera::__get__thirdPersonPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thirdPersonPosition;
}
constexpr void GlobalNamespace::SmoothCamera::__set__thirdPersonPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thirdPersonPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SmoothCamera::__get__thirdPersonEulerAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thirdPersonEulerAngles;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SmoothCamera::__get__thirdPersonEulerAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thirdPersonEulerAngles;
}
constexpr void GlobalNamespace::SmoothCamera::__set__thirdPersonEulerAngles(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thirdPersonEulerAngles = value;
}
constexpr bool& GlobalNamespace::SmoothCamera::__get__thirdPersonEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thirdPersonEnabled;
}
constexpr bool const& GlobalNamespace::SmoothCamera::__get__thirdPersonEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thirdPersonEnabled;
}
constexpr void GlobalNamespace::SmoothCamera::__set__thirdPersonEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thirdPersonEnabled = value;
}
constexpr float_t& GlobalNamespace::SmoothCamera::__get__rotationSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationSmooth;
}
constexpr float_t const& GlobalNamespace::SmoothCamera::__get__rotationSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationSmooth;
}
constexpr void GlobalNamespace::SmoothCamera::__set__rotationSmooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationSmooth = value;
}
constexpr float_t& GlobalNamespace::SmoothCamera::__get__positionSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionSmooth;
}
constexpr float_t const& GlobalNamespace::SmoothCamera::__get__positionSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionSmooth;
}
constexpr void GlobalNamespace::SmoothCamera::__set__positionSmooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionSmooth = value;
}
inline void GlobalNamespace::SmoothCamera::Init(float_t fieldOfView, float_t positionSmooth, float_t rotationSmooth, bool thirdPersonEnabled, ::UnityEngine::Vector3 thirdPersonPosition,
                                                ::UnityEngine::Vector3 thirdPersonEulerAngles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fieldOfView, positionSmooth, rotationSmooth, thirdPersonEnabled, thirdPersonPosition, thirdPersonEulerAngles);
}
inline void GlobalNamespace::SmoothCamera::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothCamera::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothCamera::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), "LateUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SmoothCamera* GlobalNamespace::SmoothCamera::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SmoothCamera*>());
}
inline void GlobalNamespace::SmoothCamera::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SmoothCamera::SmoothCamera() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
