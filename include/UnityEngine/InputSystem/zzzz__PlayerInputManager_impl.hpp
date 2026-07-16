#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/PlayerInputManager.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerJoinBehavior_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerNotifications_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerInputManager_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerInputManager_def.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerInput_def.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerJoinBehavior_def.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerNotifications_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent::*)()>(
    &::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x657fdf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent* UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent::PlayerInputManager_PlayerJoinedEvent() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent::*)()>(
    &::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x657fea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent* UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent::PlayerInputManager_PlayerLeftEvent() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.get_splitScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::PlayerInputManager::*)()>(&::UnityEngine::InputSystem::PlayerInputManager::get_splitScreen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x657f188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_splitScreen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.set_splitScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)(bool)>(&::UnityEngine::InputSystem::PlayerInputManager::set_splitScreen)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x657f190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "set_splitScreen", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.get_maintainAspectRatioInSplitScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::PlayerInputManager::*)()>(
    &::UnityEngine::InputSystem::PlayerInputManager::get_maintainAspectRatioInSplitScreen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x657f8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_maintainAspectRatioInSplitScreen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.get_fixedNumberOfSplitScreens
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::PlayerInputManager::*)()>(&::UnityEngine::InputSystem::PlayerInputManager::get_fixedNumberOfSplitScreens)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x657f8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_fixedNumberOfSplitScreens", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.get_splitScreenArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::InputSystem::PlayerInputManager::*)()>(
    &::UnityEngine::InputSystem::PlayerInputManager::get_splitScreenArea)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x657f8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_splitScreenArea", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.get_playerCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::PlayerInputManager::*)()>(&::UnityEngine::InputSystem::PlayerInputManager::get_playerCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x657f8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_playerCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.get_maxPlayerCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::PlayerInputManager::*)()>(&::UnityEngine::InputSystem::PlayerInputManager::get_maxPlayerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x657f958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_maxPlayerCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.get_joiningEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::PlayerInputManager::*)()>(&::UnityEngine::InputSystem::PlayerInputManager::get_joiningEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x657f960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_joiningEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.get_joinBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::PlayerJoinBehavior (::UnityEngine::InputSystem::PlayerInputManager::*)()>(
    &::UnityEngine::InputSystem::PlayerInputManager::get_joinBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x657f968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_joinBehavior", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.set_joinBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)(::UnityEngine::InputSystem::PlayerJoinBehavior)>(
    &::UnityEngine::InputSystem::PlayerInputManager::set_joinBehavior)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x657f970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                                                           { "set_joinBehavior", {}, { ::i2c::type_of<::UnityEngine::InputSystem::PlayerJoinBehavior>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.get_joinAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::PlayerInputManager::*)()>(
    &::UnityEngine::InputSystem::PlayerInputManager::get_joinAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x657fccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_joinAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.set_joinAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::PlayerInputManager::set_joinAction)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x657fce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                                                           { "set_joinAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.get_notificationBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::PlayerNotifications (::UnityEngine::InputSystem::PlayerInputManager::*)()>(
    &::UnityEngine::InputSystem::PlayerInputManager::get_notificationBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x657fd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_notificationBehavior", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.set_notificationBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)(::UnityEngine::InputSystem::PlayerNotifications)>(
    &::UnityEngine::InputSystem::PlayerInputManager::set_notificationBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x657fd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                                                           { "set_notificationBehavior", {}, { ::i2c::type_of<::UnityEngine::InputSystem::PlayerNotifications>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.get_playerJoinedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent* (::UnityEngine::InputSystem::PlayerInputManager::*)()>(
    &::UnityEngine::InputSystem::PlayerInputManager::get_playerJoinedEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x657fd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_playerJoinedEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.get_playerLeftEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent* (::UnityEngine::InputSystem::PlayerInputManager::*)()>(
    &::UnityEngine::InputSystem::PlayerInputManager::get_playerLeftEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x657fe44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_playerLeftEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.add_onPlayerJoined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*)>(
    &::UnityEngine::InputSystem::PlayerInputManager::add_onPlayerJoined)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x657fef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                             { "add_onPlayerJoined", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.remove_onPlayerJoined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*)>(
    &::UnityEngine::InputSystem::PlayerInputManager::remove_onPlayerJoined)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x657ff9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                             { "remove_onPlayerJoined", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.add_onPlayerLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*)>(
    &::UnityEngine::InputSystem::PlayerInputManager::add_onPlayerLeft)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6580044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                             { "add_onPlayerLeft", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.remove_onPlayerLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*)>(
    &::UnityEngine::InputSystem::PlayerInputManager::remove_onPlayerLeft)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x65800ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                             { "remove_onPlayerLeft", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.get_playerPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::InputSystem::PlayerInputManager::*)()>(
    &::UnityEngine::InputSystem::PlayerInputManager::get_playerPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6580194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_playerPrefab", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.set_playerPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::InputSystem::PlayerInputManager::set_playerPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658019c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "set_playerPrefab", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::PlayerInputManager> (*)()>(&::UnityEngine::InputSystem::PlayerInputManager::get_instance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x65801a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.set_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::PlayerInputManager*)>(&::UnityEngine::InputSystem::PlayerInputManager::set_instance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x65801f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                                                           { "set_instance", {}, { ::i2c::type_of<::UnityEngine::InputSystem::PlayerInputManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.EnableJoining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)()>(&::UnityEngine::InputSystem::PlayerInputManager::EnableJoining)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x657faa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "EnableJoining", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.DisableJoining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)()>(&::UnityEngine::InputSystem::PlayerInputManager::DisableJoining)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x657f9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "DisableJoining", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.JoinPlayerFromUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)()>(&::UnityEngine::InputSystem::PlayerInputManager::JoinPlayerFromUI)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6580244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "JoinPlayerFromUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.JoinPlayerFromAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::PlayerInputManager::JoinPlayerFromAction)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65805b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                             { "JoinPlayerFromAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.JoinPlayerFromActionIfNotAlreadyJoined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::PlayerInputManager::JoinPlayerFromActionIfNotAlreadyJoined)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x65806d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                             { "JoinPlayerFromActionIfNotAlreadyJoined", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.JoinPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::PlayerInput> (::UnityEngine::InputSystem::PlayerInputManager::*)(
    int32_t, int32_t, ::StringW, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::PlayerInputManager::JoinPlayer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x658060c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                            { "JoinPlayer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.JoinPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::PlayerInput> (::UnityEngine::InputSystem::PlayerInputManager::*)(
    int32_t, int32_t, ::StringW, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>)>(&::UnityEngine::InputSystem::PlayerInputManager::JoinPlayer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x65807cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
            { "JoinPlayer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.get_messages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::UnityEngine::InputSystem::PlayerInputManager::get_messages)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6580890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_messages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.CheckIfPlayerCanJoin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::PlayerInputManager::*)(int32_t)>(&::UnityEngine::InputSystem::PlayerInputManager::CheckIfPlayerCanJoin)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x6580290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "CheckIfPlayerCanJoin", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.OnUnpairedDeviceUsed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::PlayerInputManager::OnUnpairedDeviceUsed)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6580938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                            { "OnUnpairedDeviceUsed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)()>(&::UnityEngine::InputSystem::PlayerInputManager::OnEnable)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x6580dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)()>(&::UnityEngine::InputSystem::PlayerInputManager::OnDisable)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6581110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.UpdateSplitScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)()>(&::UnityEngine::InputSystem::PlayerInputManager::UpdateSplitScreen)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x657f3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "UpdateSplitScreen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.IsDeviceUsableWithPlayerActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::PlayerInputManager::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::PlayerInputManager::IsDeviceUsableWithPlayerActions)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x65809fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                                                           { "IsDeviceUsableWithPlayerActions", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.ValidateInputActionAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)()>(&::UnityEngine::InputSystem::PlayerInputManager::ValidateInputActionAsset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6580240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "ValidateInputActionAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.NotifyPlayerJoined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)(::UnityEngine::InputSystem::PlayerInput*)>(
    &::UnityEngine::InputSystem::PlayerInputManager::NotifyPlayerJoined)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x657d380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                                                           { "NotifyPlayerJoined", {}, { ::i2c::type_of<::UnityEngine::InputSystem::PlayerInput*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager.NotifyPlayerLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)(::UnityEngine::InputSystem::PlayerInput*)>(
    &::UnityEngine::InputSystem::PlayerInputManager::NotifyPlayerLeft)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x657de14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                                                           { "NotifyPlayerLeft", {}, { ::i2c::type_of<::UnityEngine::InputSystem::PlayerInput*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInputManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInputManager::*)()>(&::UnityEngine::InputSystem::PlayerInputManager::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6581208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::PlayerNotifications& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_NotificationBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NotificationBehavior;
}
constexpr ::UnityEngine::InputSystem::PlayerNotifications const& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_NotificationBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NotificationBehavior;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_NotificationBehavior(::UnityEngine::InputSystem::PlayerNotifications value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NotificationBehavior = value;
}
constexpr int32_t& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_MaxPlayerCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxPlayerCount;
}
constexpr int32_t const& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_MaxPlayerCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxPlayerCount;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_MaxPlayerCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxPlayerCount = value;
}
constexpr bool& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_AllowJoining() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowJoining;
}
constexpr bool const& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_AllowJoining() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowJoining;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_AllowJoining(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowJoining = value;
}
constexpr ::UnityEngine::InputSystem::PlayerJoinBehavior& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_JoinBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JoinBehavior;
}
constexpr ::UnityEngine::InputSystem::PlayerJoinBehavior const& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_JoinBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JoinBehavior;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_JoinBehavior(::UnityEngine::InputSystem::PlayerJoinBehavior value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_JoinBehavior = value;
}
constexpr ::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent*& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_PlayerJoinedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayerJoinedEvent;
}
constexpr ::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent* const& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_PlayerJoinedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayerJoinedEvent;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_PlayerJoinedEvent(::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayerJoinedEvent = value;
}
constexpr ::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent*& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_PlayerLeftEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayerLeftEvent;
}
constexpr ::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent* const& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_PlayerLeftEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayerLeftEvent;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_PlayerLeftEvent(::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayerLeftEvent = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_JoinAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JoinAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_JoinAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JoinAction;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_JoinAction(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_JoinAction = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_PlayerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_PlayerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayerPrefab;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_PlayerPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayerPrefab = value;
}
constexpr bool& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_SplitScreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SplitScreen;
}
constexpr bool const& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_SplitScreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SplitScreen;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_SplitScreen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SplitScreen = value;
}
constexpr bool& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_MaintainAspectRatioInSplitScreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaintainAspectRatioInSplitScreen;
}
constexpr bool const& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_MaintainAspectRatioInSplitScreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaintainAspectRatioInSplitScreen;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_MaintainAspectRatioInSplitScreen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaintainAspectRatioInSplitScreen = value;
}
constexpr int32_t& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_FixedNumberOfSplitScreens() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedNumberOfSplitScreens;
}
constexpr int32_t const& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_FixedNumberOfSplitScreens() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FixedNumberOfSplitScreens;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_FixedNumberOfSplitScreens(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FixedNumberOfSplitScreens = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_SplitScreenRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SplitScreenRect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_SplitScreenRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SplitScreenRect;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_SplitScreenRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SplitScreenRect = value;
}
constexpr bool& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_JoinActionDelegateHooked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JoinActionDelegateHooked;
}
constexpr bool const& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_JoinActionDelegateHooked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JoinActionDelegateHooked;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_JoinActionDelegateHooked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_JoinActionDelegateHooked = value;
}
constexpr bool& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_UnpairedDeviceUsedDelegateHooked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnpairedDeviceUsedDelegateHooked;
}
constexpr bool const& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_UnpairedDeviceUsedDelegateHooked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnpairedDeviceUsedDelegateHooked;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_UnpairedDeviceUsedDelegateHooked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UnpairedDeviceUsedDelegateHooked = value;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_JoinActionDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JoinActionDelegate;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const& UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_JoinActionDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JoinActionDelegate;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_JoinActionDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_JoinActionDelegate = value;
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*&
UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_UnpairedDeviceUsedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnpairedDeviceUsedDelegate;
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* const&
UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_UnpairedDeviceUsedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnpairedDeviceUsedDelegate;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_UnpairedDeviceUsedDelegate(
    ::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UnpairedDeviceUsedDelegate = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>&
UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_PlayerJoinedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayerJoinedCallbacks;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> const&
UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_PlayerJoinedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayerJoinedCallbacks;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_PlayerJoinedCallbacks(
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayerJoinedCallbacks = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>&
UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_PlayerLeftCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayerLeftCallbacks;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> const&
UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_get_m_PlayerLeftCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayerLeftCallbacks;
}
constexpr void UnityEngine::InputSystem::PlayerInputManager::__cordl_internal_set_m_PlayerLeftCallbacks(
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayerLeftCallbacks = value;
}
inline void UnityEngine::InputSystem::PlayerInputManager::setStaticF__instance_k__BackingField(::UnityW<::UnityEngine::InputSystem::PlayerInputManager> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::InputSystem::PlayerInputManager>, "<instance>k__BackingField", ::UnityEngine::InputSystem::PlayerInputManager*>(
      std::forward<::UnityW<::UnityEngine::InputSystem::PlayerInputManager>>(value));
}
inline ::UnityW<::UnityEngine::InputSystem::PlayerInputManager> UnityEngine::InputSystem::PlayerInputManager::getStaticF__instance_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::InputSystem::PlayerInputManager>, "<instance>k__BackingField", ::UnityEngine::InputSystem::PlayerInputManager*>();
}
inline bool UnityEngine::InputSystem::PlayerInputManager::get_splitScreen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_splitScreen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInputManager::set_splitScreen(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "set_splitScreen", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::PlayerInputManager::get_maintainAspectRatioInSplitScreen() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_maintainAspectRatioInSplitScreen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::PlayerInputManager::get_fixedNumberOfSplitScreens() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_fixedNumberOfSplitScreens", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::InputSystem::PlayerInputManager::get_splitScreenArea() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_splitScreenArea", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::PlayerInputManager::get_playerCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_playerCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::PlayerInputManager::get_maxPlayerCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_maxPlayerCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::PlayerInputManager::get_joiningEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_joiningEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::PlayerJoinBehavior UnityEngine::InputSystem::PlayerInputManager::get_joinBehavior() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_joinBehavior", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::PlayerJoinBehavior>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInputManager::set_joinBehavior(::UnityEngine::InputSystem::PlayerJoinBehavior value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                                                         { "set_joinBehavior", {}, { ::i2c::type_of<::UnityEngine::InputSystem::PlayerJoinBehavior>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::PlayerInputManager::get_joinAction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_joinAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInputManager::set_joinAction(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                                                         { "set_joinAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::PlayerNotifications UnityEngine::InputSystem::PlayerInputManager::get_notificationBehavior() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_notificationBehavior", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::PlayerNotifications>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInputManager::set_notificationBehavior(::UnityEngine::InputSystem::PlayerNotifications value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                                                         { "set_notificationBehavior", {}, { ::i2c::type_of<::UnityEngine::InputSystem::PlayerNotifications>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent* UnityEngine::InputSystem::PlayerInputManager::get_playerJoinedEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_playerJoinedEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent* UnityEngine::InputSystem::PlayerInputManager::get_playerLeftEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_playerLeftEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInputManager::add_onPlayerJoined(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                           { "add_onPlayerJoined", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::PlayerInputManager::remove_onPlayerJoined(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                           { "remove_onPlayerJoined", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::PlayerInputManager::add_onPlayerLeft(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                           { "add_onPlayerLeft", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::PlayerInputManager::remove_onPlayerLeft(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                           { "remove_onPlayerLeft", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::InputSystem::PlayerInputManager::get_playerPrefab() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_playerPrefab", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInputManager::set_playerPrefab(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "set_playerPrefab", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::PlayerInputManager> UnityEngine::InputSystem::PlayerInputManager::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::PlayerInputManager>>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInputManager::set_instance(::UnityEngine::InputSystem::PlayerInputManager* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                                                         { "set_instance", {}, { ::i2c::type_of<::UnityEngine::InputSystem::PlayerInputManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::PlayerInputManager::EnableJoining() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "EnableJoining", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInputManager::DisableJoining() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "DisableJoining", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInputManager::JoinPlayerFromUI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "JoinPlayerFromUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInputManager::JoinPlayerFromAction(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                           { "JoinPlayerFromAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::PlayerInputManager::JoinPlayerFromActionIfNotAlreadyJoined(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                           { "JoinPlayerFromActionIfNotAlreadyJoined", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::UnityW<::UnityEngine::InputSystem::PlayerInput> UnityEngine::InputSystem::PlayerInputManager::JoinPlayer(int32_t playerIndex, int32_t splitScreenIndex, ::StringW controlScheme,
                                                                                                                  ::UnityEngine::InputSystem::InputDevice* pairWithDevice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                          { "JoinPlayer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::PlayerInput>>(this, ___internal_method, playerIndex, splitScreenIndex, controlScheme, pairWithDevice);
}
inline ::UnityW<::UnityEngine::InputSystem::PlayerInput> UnityEngine::InputSystem::PlayerInputManager::JoinPlayer(int32_t playerIndex, int32_t splitScreenIndex, ::StringW controlScheme,
                                                                                                                  ::ArrayW<::UnityEngine::InputSystem::InputDevice*> pairWithDevices) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
          { "JoinPlayer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::PlayerInput>>(this, ___internal_method, playerIndex, splitScreenIndex, controlScheme, pairWithDevices);
}
inline ::ArrayW<::StringW> UnityEngine::InputSystem::PlayerInputManager::get_messages() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "get_messages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline bool UnityEngine::InputSystem::PlayerInputManager::CheckIfPlayerCanJoin(int32_t playerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "CheckIfPlayerCanJoin", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerIndex);
}
inline void UnityEngine::InputSystem::PlayerInputManager::OnUnpairedDeviceUsed(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                          { "OnUnpairedDeviceUsed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, eventPtr);
}
inline void UnityEngine::InputSystem::PlayerInputManager::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInputManager::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInputManager::UpdateSplitScreen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "UpdateSplitScreen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::PlayerInputManager::IsDeviceUsableWithPlayerActions(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                                                         { "IsDeviceUsableWithPlayerActions", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::PlayerInputManager::ValidateInputActionAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { "ValidateInputActionAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInputManager::NotifyPlayerJoined(::UnityEngine::InputSystem::PlayerInput* player) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                                                         { "NotifyPlayerJoined", {}, { ::i2c::type_of<::UnityEngine::InputSystem::PlayerInput*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void UnityEngine::InputSystem::PlayerInputManager::NotifyPlayerLeft(::UnityEngine::InputSystem::PlayerInput* player) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(),
                                                                                         { "NotifyPlayerLeft", {}, { ::i2c::type_of<::UnityEngine::InputSystem::PlayerInput*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void UnityEngine::InputSystem::PlayerInputManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInputManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::PlayerInputManager* UnityEngine::InputSystem::PlayerInputManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::PlayerInputManager*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::PlayerInputManager::PlayerInputManager() {}
