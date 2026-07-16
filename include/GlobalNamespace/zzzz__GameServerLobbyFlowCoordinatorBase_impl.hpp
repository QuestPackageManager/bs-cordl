#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServerLobbyFlowCoordinatorBase.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "GlobalNamespace/zzzz__GameServerLobbyFlowCoordinatorBase_def.hpp"
#include "GlobalNamespace/zzzz__GameServerLobbyFlowCoordinatorBase_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType::GameServerLobbyFlowCoordinatorBase_LobbyType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType::GameServerLobbyFlowCoordinatorBase_LobbyType() {}
constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType::HostSetup{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType::ClientSetup{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType::QuickPlayLobby{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType::Party{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase.add_willFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::add_willFinishEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase.remove_willFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::remove_willFinishEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase.add_startGameOrReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::add_startGameOrReadyEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase.remove_startGameOrReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::remove_startGameOrReadyEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase.add_didSetupEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::add_didSetupEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase.remove_didSetupEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::remove_didSetupEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase.add_didOpenInvitePanelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::add_didOpenInvitePanelEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase.remove_didOpenInvitePanelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::remove_didOpenInvitePanelEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase.GetLobbyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType (::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::GetLobbyType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a02c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameServerLobbyFlowCoordinatorBase::add_willFinishEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinatorBase::remove_willFinishEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinatorBase::add_didFinishEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinatorBase::remove_didFinishEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinatorBase::add_startGameOrReadyEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinatorBase::remove_startGameOrReadyEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinatorBase::add_didSetupEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinatorBase::remove_didSetupEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinatorBase::add_didOpenInvitePanelEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinatorBase::remove_didOpenInvitePanelEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType GlobalNamespace::GameServerLobbyFlowCoordinatorBase::GetLobbyType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinatorBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase* GlobalNamespace::GameServerLobbyFlowCoordinatorBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase::GameServerLobbyFlowCoordinatorBase() {}
