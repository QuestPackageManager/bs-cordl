#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerOffsetPositionByLocalPlayerPosition_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)()>(
    &::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2252b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(), "Awake",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)()>(
    &::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2252b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(), "Update",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition.SetEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)(bool)>(
    &::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::SetEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x224f2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(), "SetEnabled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition.UpdatePositionAndRotationIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)()>(
    &::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::UpdatePositionAndRotationIfNeeded)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2252b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(),
                                                 "UpdatePositionAndRotationIfNeeded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)()>(
    &::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2252e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerPlayersManager*& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__get__multiplayerPlayersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> const&
GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__get__multiplayerPlayersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__set__multiplayerPlayersManager(::GlobalNamespace::MultiplayerPlayersManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerPlayersManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__get__positionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__get__positionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__set__positionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionOffset = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__get__rotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationOffset;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__get__rotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationOffset;
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__set__rotationOffset(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__get__lastParentPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastParentPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__get__lastParentPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastParentPosition;
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__set__lastParentPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastParentPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__get__lastParentRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastParentRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__get__lastParentRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastParentRotation;
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__set__lastParentRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastParentRotation = value;
}
inline void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::Awake() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(), "Awake",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::Update() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(), "Update",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::SetEnabled(bool isEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(), "SetEnabled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isEnabled);
}
inline void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::UpdatePositionAndRotationIfNeeded() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(),
                                               "UpdatePositionAndRotationIfNeeded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>());
}
inline void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::MultiplayerOffsetPositionByLocalPlayerPosition() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
