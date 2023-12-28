#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightManager_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightManager.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightManager::*)()>(&::GlobalNamespace::LightManager::OnEnable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x210b4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightManager.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightManager::*)()>(&::GlobalNamespace::LightManager::OnDisable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x210b5c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightManager.OnCameraPreRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightManager::*)(::UnityEngine::Camera*)>(
    &::GlobalNamespace::LightManager::OnCameraPreRender)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x210b6b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get(), "OnCameraPreRender", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightManager::*)()>(&::GlobalNamespace::LightManager::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x210bc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightManager.ResetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightManager::*)()>(&::GlobalNamespace::LightManager::ResetColors)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x210bc18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get(), "ResetColors",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightManager::*)()>(&::GlobalNamespace::LightManager::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x210bcfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& GlobalNamespace::LightManager::__get__directionalLightDirections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightDirections;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::LightManager::__get__directionalLightDirections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightDirections;
}
constexpr void GlobalNamespace::LightManager::__set__directionalLightDirections(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directionalLightDirections)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& GlobalNamespace::LightManager::__get__directionalLightColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightColors;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::LightManager::__get__directionalLightColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightColors;
}
constexpr void GlobalNamespace::LightManager::__set__directionalLightColors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directionalLightColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& GlobalNamespace::LightManager::__get__directionalLightPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::LightManager::__get__directionalLightPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightPositions;
}
constexpr void GlobalNamespace::LightManager::__set__directionalLightPositions(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directionalLightPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::LightManager::__get__directionalLightRadii() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightRadii;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::LightManager::__get__directionalLightRadii() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightRadii;
}
constexpr void GlobalNamespace::LightManager::__set__directionalLightRadii(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directionalLightRadii)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& GlobalNamespace::LightManager::__get__pointLightPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointLightPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::LightManager::__get__pointLightPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointLightPositions;
}
constexpr void GlobalNamespace::LightManager::__set__pointLightPositions(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pointLightPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& GlobalNamespace::LightManager::__get__pointLightColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointLightColors;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::LightManager::__get__pointLightColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointLightColors;
}
constexpr void GlobalNamespace::LightManager::__set__pointLightColors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pointLightColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::LightManager::__get_lastRefreshFrameNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRefreshFrameNum;
}
constexpr int32_t const& GlobalNamespace::LightManager::__get_lastRefreshFrameNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRefreshFrameNum;
}
constexpr void GlobalNamespace::LightManager::__set_lastRefreshFrameNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastRefreshFrameNum = value;
}
inline void GlobalNamespace::LightManager::setStaticF__directionalLightDirectionsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_directionalLightDirectionsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LightManager::getStaticF__directionalLightDirectionsID() {
  return ::cordl_internals::getStaticField<int32_t, "_directionalLightDirectionsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get>();
}
inline void GlobalNamespace::LightManager::setStaticF__directionalLightPositionID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_directionalLightPositionID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LightManager::getStaticF__directionalLightPositionID() {
  return ::cordl_internals::getStaticField<int32_t, "_directionalLightPositionID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get>();
}
inline void GlobalNamespace::LightManager::setStaticF__directionalLightRadiiID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_directionalLightRadiiID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LightManager::getStaticF__directionalLightRadiiID() {
  return ::cordl_internals::getStaticField<int32_t, "_directionalLightRadiiID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get>();
}
inline void GlobalNamespace::LightManager::setStaticF__directionalLightColorsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_directionalLightColorsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LightManager::getStaticF__directionalLightColorsID() {
  return ::cordl_internals::getStaticField<int32_t, "_directionalLightColorsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get>();
}
inline void GlobalNamespace::LightManager::setStaticF__pointLightPositionsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_pointLightPositionsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LightManager::getStaticF__pointLightPositionsID() {
  return ::cordl_internals::getStaticField<int32_t, "_pointLightPositionsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get>();
}
inline void GlobalNamespace::LightManager::setStaticF__pointLightColorsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_pointLightColorsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LightManager::getStaticF__pointLightColorsID() {
  return ::cordl_internals::getStaticField<int32_t, "_pointLightColorsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get>();
}
inline void GlobalNamespace::LightManager::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightManager::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightManager::OnCameraPreRender(::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get(), "OnCameraPreRender", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera);
}
inline void GlobalNamespace::LightManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightManager::ResetColors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get(), "ResetColors",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LightManager* GlobalNamespace::LightManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightManager*>());
}
inline void GlobalNamespace::LightManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightManager::LightManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
