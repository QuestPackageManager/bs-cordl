#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputUpdate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdate_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdate_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b0c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount::*)(uint32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount::set_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b0c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount>(), { "set_value", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount.OnBeforeUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount::OnBeforeUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65b0c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount>(), { "OnBeforeUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount.OnUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount::OnUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65b0c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount>(), { "OnUpdate", {}, {} })));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount::get_value() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount::set_value(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount>(), { "set_value", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount::OnBeforeUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount>(), { "OnBeforeUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount::OnUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount>(), { "OnUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_WasUpdated", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_value_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount::InputUpdate_UpdateStepCount(bool m_WasUpdated, uint32_t _value_k__BackingField) noexcept {
  this->m_WasUpdated = m_WasUpdated;
  this->_value_k__BackingField = _value_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount::InputUpdate_UpdateStepCount() {}
// Ctor Parameters [CppParam { name: "lastUpdateType", ty: "::UnityEngine::InputSystem::LowLevel::InputUpdateType", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerUpdateStepCount",
// ty: "::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState::InputUpdate_SerializedState(
    ::UnityEngine::InputSystem::LowLevel::InputUpdateType lastUpdateType, ::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount playerUpdateStepCount) noexcept {
  this->lastUpdateType = lastUpdateType;
  this->playerUpdateStepCount = playerUpdateStepCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState::InputUpdate_SerializedState() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.OnBeforeUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::InputUpdate::OnBeforeUpdate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x65b0a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                                                                                           { "OnBeforeUpdate", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.OnUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::InputUpdate::OnUpdate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x65b0ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                                                                                           { "OnUpdate", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.Save
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState (*)()>(&::UnityEngine::InputSystem::LowLevel::InputUpdate::Save)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x65b0b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(), { "Save", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.Restore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState)>(&::UnityEngine::InputSystem::LowLevel::InputUpdate::Restore)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x65b0ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                                                             { "Restore", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.GetUpdateTypeForPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateType (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::LowLevel::InputUpdate::GetUpdateTypeForPlayer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65b0c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                                                             { "GetUpdateTypeForPlayer", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.IsPlayerUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::InputUpdate::IsPlayerUpdate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65b0c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                                                                                           { "IsPlayerUpdate", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::setStaticF_s_UpdateStepCount(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_UpdateStepCount", ::UnityEngine::InputSystem::LowLevel::InputUpdate*>(std::forward<uint32_t>(value));
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputUpdate::getStaticF_s_UpdateStepCount() {
  return ::cordl_internals::getStaticField<uint32_t, "s_UpdateStepCount", ::UnityEngine::InputSystem::LowLevel::InputUpdate*>();
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::setStaticF_s_LatestUpdateType(::UnityEngine::InputSystem::LowLevel::InputUpdateType value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::LowLevel::InputUpdateType, "s_LatestUpdateType", ::UnityEngine::InputSystem::LowLevel::InputUpdate*>(
      std::forward<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(value));
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::LowLevel::InputUpdate::getStaticF_s_LatestUpdateType() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::LowLevel::InputUpdateType, "s_LatestUpdateType", ::UnityEngine::InputSystem::LowLevel::InputUpdate*>();
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::setStaticF_s_PlayerUpdateStepCount(::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount, "s_PlayerUpdateStepCount", ::UnityEngine::InputSystem::LowLevel::InputUpdate*>(
      std::forward<::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount>(value));
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount UnityEngine::InputSystem::LowLevel::InputUpdate::getStaticF_s_PlayerUpdateStepCount() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount, "s_PlayerUpdateStepCount", ::UnityEngine::InputSystem::LowLevel::InputUpdate*>();
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                                                                                         { "OnBeforeUpdate", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                                                                                         { "OnUpdate", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState UnityEngine::InputSystem::LowLevel::InputUpdate::Save() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(), { "Save", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::Restore(::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                                                                                         { "Restore", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::LowLevel::InputUpdate::GetUpdateTypeForPlayer(::UnityEngine::InputSystem::LowLevel::InputUpdateType mask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                                                           { "GetUpdateTypeForPlayer", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(nullptr, ___internal_method, mask);
}
inline bool UnityEngine::InputSystem::LowLevel::InputUpdate::IsPlayerUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                                                                                         { "IsPlayerUpdate", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, updateType);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdate::InputUpdate() {}
