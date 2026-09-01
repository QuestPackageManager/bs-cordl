#pragma once
// IWYU pragma private; include "GlobalNamespace\IServerBeatmapProviderManager.hpp"
#include "GlobalNamespace/zzzz__IServerBeatmapProviderManager_def.hpp"
#include "GlobalNamespace/zzzz__IServerBeatmapProvider_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IServerBeatmapProviderManager.GetServerBeatmapProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IServerBeatmapProvider* (::GlobalNamespace::IServerBeatmapProviderManager::*)()>(
    &::GlobalNamespace::IServerBeatmapProviderManager::GetServerBeatmapProvider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IServerBeatmapProviderManager*>(), { ::i2c::class_of<::GlobalNamespace::IServerBeatmapProviderManager*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IServerBeatmapProviderManager.RefreshAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::IServerBeatmapProviderManager::*)()>(
    &::GlobalNamespace::IServerBeatmapProviderManager::RefreshAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IServerBeatmapProviderManager*>(), { ::i2c::class_of<::GlobalNamespace::IServerBeatmapProviderManager*>(), 1 }));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IServerBeatmapProvider* GlobalNamespace::IServerBeatmapProviderManager::GetServerBeatmapProvider() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IServerBeatmapProviderManager*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IServerBeatmapProvider*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::IServerBeatmapProviderManager::RefreshAsync() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IServerBeatmapProviderManager*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::IServerBeatmapProviderManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::IServerBeatmapProviderManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
