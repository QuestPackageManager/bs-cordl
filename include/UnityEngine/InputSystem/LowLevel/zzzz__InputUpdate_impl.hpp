#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdate_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdate_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdate_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount::*)()>(
    &::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bd7b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount>::get(), "get_value",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount.set_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount::*)(uint32_t)>(
    &::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount::set_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bd7b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount>::get(), "set_value",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount.OnBeforeUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount::*)()>(
    &::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount::OnBeforeUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2bd7984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount>::get(), "OnBeforeUpdate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount.OnUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount::*)()>(
    &::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount::OnUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2bd7a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount>::get(), "OnUpdate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount::get_value() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount>::get(), "get_value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount::set_value(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount>::get(), "set_value",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount::OnBeforeUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount>::get(), "OnBeforeUpdate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount::OnUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount>::get(), "OnUpdate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_WasUpdated", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_value_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount::__InputUpdate__UpdateStepCount(bool m_WasUpdated, uint32_t _value_k__BackingField) noexcept {
  this->m_WasUpdated = m_WasUpdated;
  this->_value_k__BackingField = _value_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount::__InputUpdate__UpdateStepCount() {}
// Ctor Parameters [CppParam { name: "lastUpdateType", ty: "::UnityEngine::InputSystem::LowLevel::InputUpdateType", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerUpdateStepCount",
// ty: "::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState::__InputUpdate__SerializedState(
    ::UnityEngine::InputSystem::LowLevel::InputUpdateType lastUpdateType, ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount playerUpdateStepCount) noexcept {
  this->lastUpdateType = lastUpdateType;
  this->playerUpdateStepCount = playerUpdateStepCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState::__InputUpdate__SerializedState() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.OnBeforeUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::LowLevel::InputUpdate::OnBeforeUpdate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2bd7904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get(), "OnBeforeUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.OnUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::LowLevel::InputUpdate::OnUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2bd799c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get(), "OnUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.Save
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState (*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputUpdate::Save)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2bd7a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get(),
                                                                               "Save", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.Restore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState)>(
    &::UnityEngine::InputSystem::LowLevel::InputUpdate::Restore)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2bd7aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get(), "Restore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.GetUpdateTypeForPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateType (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::LowLevel::InputUpdate::GetUpdateTypeForPlayer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bd7b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get(), "GetUpdateTypeForPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.IsPlayerUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::LowLevel::InputUpdate::IsPlayerUpdate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bd7b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get(), "IsPlayerUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::setStaticF_s_UpdateStepCount(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_UpdateStepCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get>(
      std::forward<uint32_t>(value));
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputUpdate::getStaticF_s_UpdateStepCount() {
  return ::cordl_internals::getStaticField<uint32_t, "s_UpdateStepCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get>();
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::setStaticF_s_LatestUpdateType(::UnityEngine::InputSystem::LowLevel::InputUpdateType value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::LowLevel::InputUpdateType, "s_LatestUpdateType",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get>(
      std::forward<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(value));
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::LowLevel::InputUpdate::getStaticF_s_LatestUpdateType() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::LowLevel::InputUpdateType, "s_LatestUpdateType",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get>();
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::setStaticF_s_PlayerUpdateStepCount(::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount, "s_PlayerUpdateStepCount",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get>(
      std::forward<::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount>(value));
}
inline ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount UnityEngine::InputSystem::LowLevel::InputUpdate::getStaticF_s_PlayerUpdateStepCount() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount, "s_PlayerUpdateStepCount",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get>();
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get(), "OnBeforeUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get(), "OnUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline ::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState UnityEngine::InputSystem::LowLevel::InputUpdate::Save() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get(), "Save",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::Restore(::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get(), "Restore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::LowLevel::InputUpdate::GetUpdateTypeForPlayer(::UnityEngine::InputSystem::LowLevel::InputUpdateType mask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get(), "GetUpdateTypeForPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputUpdateType, false>(nullptr, ___internal_method, mask);
}
inline bool UnityEngine::InputSystem::LowLevel::InputUpdate::IsPlayerUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate*>::get(), "IsPlayerUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, updateType);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdate::InputUpdate() {}
