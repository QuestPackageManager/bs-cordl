#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerLevelEndActionsListener.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsListener_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IMultiplayerLevelEndActionsListener.ReportPlayerDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IMultiplayerLevelEndActionsListener::*)(::GlobalNamespace::MultiplayerLevelCompletionResults*)>(
    &::GlobalNamespace::IMultiplayerLevelEndActionsListener::ReportPlayerDidFinish)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IMultiplayerLevelEndActionsListener.ReportPlayerNetworkDidFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IMultiplayerLevelEndActionsListener::*)(::GlobalNamespace::MultiplayerLevelCompletionResults*)>(
    &::GlobalNamespace::IMultiplayerLevelEndActionsListener::ReportPlayerNetworkDidFailed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>(), 1 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IMultiplayerLevelEndActionsListener::ReportPlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* results) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
inline void GlobalNamespace::IMultiplayerLevelEndActionsListener::ReportPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults* results) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
