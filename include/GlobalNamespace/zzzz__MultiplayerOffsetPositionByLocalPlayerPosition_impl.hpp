#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerOffsetPositionByLocalPlayerPosition.hpp"
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
  constexpr static std::size_t addrs = 0x272c404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(), "Awake",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)()>(
    &::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x272c454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(), "Update",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition.SetEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)(bool)>(
    &::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::SetEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27270e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(), "SetEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition.UpdatePositionAndRotationIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)()>(
    &::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::UpdatePositionAndRotationIfNeeded)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x272c458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(),
                                                 "UpdatePositionAndRotationIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)()>(
    &::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x272c6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__multiplayerPlayersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__multiplayerPlayersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_set__multiplayerPlayersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerPlayersManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__positionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__positionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_set__positionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionOffset = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__rotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationOffset;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__rotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationOffset;
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_set__rotationOffset(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__lastParentPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastParentPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__lastParentPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastParentPosition;
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_set__lastParentPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastParentPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__lastParentRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastParentRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__lastParentRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastParentRotation;
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_set__lastParentRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastParentRotation = value;
}
inline void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::Awake() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(), "Awake",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::Update() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::SetEnabled(bool isEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(), "SetEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isEnabled);
}
inline void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::UpdatePositionAndRotationIfNeeded() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(),
                                               "UpdatePositionAndRotationIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>());
}
inline void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::MultiplayerOffsetPositionByLocalPlayerPosition() {}
