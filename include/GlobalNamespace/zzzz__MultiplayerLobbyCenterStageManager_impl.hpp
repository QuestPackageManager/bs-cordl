#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyCenterStageManager_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyStateDataModel_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__CenterStageScreenController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterStageManager.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterStageManager::*)(float_t, float_t)>(
    &::GlobalNamespace::MultiplayerLobbyCenterStageManager::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a3940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterStageManager.ActivateCenterStageManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterStageManager::*)()>(
    &::GlobalNamespace::MultiplayerLobbyCenterStageManager::ActivateCenterStageManager)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22a3948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>::get(),
                                                                               "ActivateCenterStageManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterStageManager.DeactivateCenterStageManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterStageManager::*)()>(
    &::GlobalNamespace::MultiplayerLobbyCenterStageManager::DeactivateCenterStageManager)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22a3a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>::get(),
                                                                               "DeactivateCenterStageManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterStageManager.RecalculateCenterPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterStageManager::*)()>(
    &::GlobalNamespace::MultiplayerLobbyCenterStageManager::RecalculateCenterPosition)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x22a396c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>::get(),
                                                                               "RecalculateCenterPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterStageManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterStageManager::*)()>(
    &::GlobalNamespace::MultiplayerLobbyCenterStageManager::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22a3a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& GlobalNamespace::MultiplayerLobbyCenterStageManager::__get__centerObjectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerObjectTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::MultiplayerLobbyCenterStageManager::__get__centerObjectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerObjectTransform;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageManager::__set__centerObjectTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____centerObjectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::CenterStageScreenController*& GlobalNamespace::MultiplayerLobbyCenterStageManager::__get__centerStageScreenController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerStageScreenController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CenterStageScreenController*> const& GlobalNamespace::MultiplayerLobbyCenterStageManager::__get__centerStageScreenController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerStageScreenController;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageManager::__set__centerStageScreenController(::GlobalNamespace::CenterStageScreenController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____centerStageScreenController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ILobbyStateDataModel*& GlobalNamespace::MultiplayerLobbyCenterStageManager::__get__lobbyStateDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyStateDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyStateDataModel*> const& GlobalNamespace::MultiplayerLobbyCenterStageManager::__get__lobbyStateDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyStateDataModel;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageManager::__set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyStateDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MultiplayerLobbyCenterStageManager::__get__innerCircleRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerCircleRadius;
}
constexpr float_t const& GlobalNamespace::MultiplayerLobbyCenterStageManager::__get__innerCircleRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerCircleRadius;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageManager::__set__innerCircleRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____innerCircleRadius = value;
}
constexpr float_t& GlobalNamespace::MultiplayerLobbyCenterStageManager::__get__minOuterCircleRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minOuterCircleRadius;
}
constexpr float_t const& GlobalNamespace::MultiplayerLobbyCenterStageManager::__get__minOuterCircleRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minOuterCircleRadius;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageManager::__set__minOuterCircleRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minOuterCircleRadius = value;
}
inline void GlobalNamespace::MultiplayerLobbyCenterStageManager::Init(float_t innerCircleRadius, float_t minOuterCircleRadius) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, innerCircleRadius, minOuterCircleRadius);
}
inline void GlobalNamespace::MultiplayerLobbyCenterStageManager::ActivateCenterStageManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>::get(),
                                                                             "ActivateCenterStageManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyCenterStageManager::DeactivateCenterStageManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>::get(),
                                                                             "DeactivateCenterStageManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyCenterStageManager::RecalculateCenterPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>::get(),
                                                                             "RecalculateCenterPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLobbyCenterStageManager* GlobalNamespace::MultiplayerLobbyCenterStageManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>());
}
inline void GlobalNamespace::MultiplayerLobbyCenterStageManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyCenterStageManager::MultiplayerLobbyCenterStageManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
