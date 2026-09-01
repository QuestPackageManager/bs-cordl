#pragma once
// IWYU pragma private; include "GlobalNamespace\IMockBeatmapDataProvider.hpp"
#include "GlobalNamespace/zzzz__IMockBeatmapDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKeyNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IMockBeatmapDataProvider.GetBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MockBeatmapData*>* (
    ::GlobalNamespace::IMockBeatmapDataProvider::*)(::GlobalNamespace::BeatmapKeyNetSerializable*, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::IMockBeatmapDataProvider::GetBeatmapData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IMockBeatmapDataProvider*>(), { ::i2c::class_of<::GlobalNamespace::IMockBeatmapDataProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MockBeatmapData*>* GlobalNamespace::IMockBeatmapDataProvider::GetBeatmapData(::GlobalNamespace::BeatmapKeyNetSerializable* beatmap,
                                                                                                                                          ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMockBeatmapDataProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MockBeatmapData*>*>(this, ___internal_method, beatmap, cancellationToken);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::IMockBeatmapDataProvider::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::IMockBeatmapDataProvider::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
