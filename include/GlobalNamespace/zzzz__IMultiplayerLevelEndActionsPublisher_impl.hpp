#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerLevelEndActionsPublisher.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsPublisher_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher.add_playerDidFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IMultiplayerLevelEndActionsPublisher::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(
    &::GlobalNamespace::IMultiplayerLevelEndActionsPublisher::add_playerDidFinishEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher.remove_playerDidFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IMultiplayerLevelEndActionsPublisher::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(
    &::GlobalNamespace::IMultiplayerLevelEndActionsPublisher::remove_playerDidFinishEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher.add_playerNetworkDidFailedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IMultiplayerLevelEndActionsPublisher::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(
    &::GlobalNamespace::IMultiplayerLevelEndActionsPublisher::add_playerNetworkDidFailedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher.remove_playerNetworkDidFailedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IMultiplayerLevelEndActionsPublisher::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(
    &::GlobalNamespace::IMultiplayerLevelEndActionsPublisher::remove_playerNetworkDidFailedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(), 3 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IMultiplayerLevelEndActionsPublisher::add_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IMultiplayerLevelEndActionsPublisher::remove_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IMultiplayerLevelEndActionsPublisher::add_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IMultiplayerLevelEndActionsPublisher::remove_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
