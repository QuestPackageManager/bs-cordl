#pragma once
// IWYU pragma private; include "GlobalNamespace/SmoothCamera.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SmoothCamera_def.hpp"
#include "GlobalNamespace/zzzz__MainCamera_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SmoothCamera.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::SmoothCamera::*)(float_t, float_t, float_t, bool, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SmoothCamera::Init)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5849018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCamera.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCamera::*)()>(&::GlobalNamespace::SmoothCamera::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58491cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCamera.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCamera::*)()>(&::GlobalNamespace::SmoothCamera::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58491e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCamera.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCamera::*)()>(&::GlobalNamespace::SmoothCamera::LateUpdate)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5849204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCamera._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCamera::*)()>(&::GlobalNamespace::SmoothCamera::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5849444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::SmoothCamera::__cordl_internal_get__camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::SmoothCamera::__cordl_internal_get__camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr void GlobalNamespace::SmoothCamera::__cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MainCamera>& GlobalNamespace::SmoothCamera::__cordl_internal_get__mainCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainCamera;
}
constexpr ::UnityW<::GlobalNamespace::MainCamera> const& GlobalNamespace::SmoothCamera::__cordl_internal_get__mainCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainCamera;
}
constexpr void GlobalNamespace::SmoothCamera::__cordl_internal_set__mainCamera(::UnityW<::GlobalNamespace::MainCamera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SmoothCamera::__cordl_internal_get__thirdPersonPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thirdPersonPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SmoothCamera::__cordl_internal_get__thirdPersonPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thirdPersonPosition;
}
constexpr void GlobalNamespace::SmoothCamera::__cordl_internal_set__thirdPersonPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thirdPersonPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SmoothCamera::__cordl_internal_get__thirdPersonEulerAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thirdPersonEulerAngles;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SmoothCamera::__cordl_internal_get__thirdPersonEulerAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thirdPersonEulerAngles;
}
constexpr void GlobalNamespace::SmoothCamera::__cordl_internal_set__thirdPersonEulerAngles(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thirdPersonEulerAngles = value;
}
constexpr bool& GlobalNamespace::SmoothCamera::__cordl_internal_get__thirdPersonEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thirdPersonEnabled;
}
constexpr bool const& GlobalNamespace::SmoothCamera::__cordl_internal_get__thirdPersonEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thirdPersonEnabled;
}
constexpr void GlobalNamespace::SmoothCamera::__cordl_internal_set__thirdPersonEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thirdPersonEnabled = value;
}
constexpr float_t& GlobalNamespace::SmoothCamera::__cordl_internal_get__rotationSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationSmooth;
}
constexpr float_t const& GlobalNamespace::SmoothCamera::__cordl_internal_get__rotationSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationSmooth;
}
constexpr void GlobalNamespace::SmoothCamera::__cordl_internal_set__rotationSmooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationSmooth = value;
}
constexpr float_t& GlobalNamespace::SmoothCamera::__cordl_internal_get__positionSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionSmooth;
}
constexpr float_t const& GlobalNamespace::SmoothCamera::__cordl_internal_get__positionSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionSmooth;
}
constexpr void GlobalNamespace::SmoothCamera::__cordl_internal_set__positionSmooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionSmooth = value;
}
inline void GlobalNamespace::SmoothCamera::Init(float_t fieldOfView, float_t positionSmooth, float_t rotationSmooth, bool thirdPersonEnabled, ::UnityEngine::Vector3 thirdPersonPosition,
                                                ::UnityEngine::Vector3 thirdPersonEulerAngles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fieldOfView, positionSmooth, rotationSmooth, thirdPersonEnabled, thirdPersonPosition, thirdPersonEulerAngles);
}
inline void GlobalNamespace::SmoothCamera::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothCamera::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothCamera::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothCamera::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCamera*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SmoothCamera* GlobalNamespace::SmoothCamera::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SmoothCamera*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SmoothCamera::SmoothCamera() {}
