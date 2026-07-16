#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugRendererBatcherStats.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugOccluderStats_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullerViewStats_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventStats_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugRendererBatcherStats_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DebugRendererBatcherStats._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugRendererBatcherStats::*)()>(&::UnityEngine::Rendering::DebugRendererBatcherStats::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x68107d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugRendererBatcherStats*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugRendererBatcherStats.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugRendererBatcherStats::*)()>(&::UnityEngine::Rendering::DebugRendererBatcherStats::Dispose)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x68108a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugRendererBatcherStats*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_get_enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr bool const& UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_get_enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr void UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_set_enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enabled = value;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceCullerViewStats>& UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_get_instanceCullerStats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instanceCullerStats;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceCullerViewStats> const&
UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_get_instanceCullerStats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instanceCullerStats;
}
constexpr void
UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_set_instanceCullerStats(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceCullerViewStats> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___instanceCullerStats = value;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceOcclusionEventStats>&
UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_get_instanceOcclusionEventStats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instanceOcclusionEventStats;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceOcclusionEventStats> const&
UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_get_instanceOcclusionEventStats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instanceOcclusionEventStats;
}
constexpr void
UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_set_instanceOcclusionEventStats(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceOcclusionEventStats> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___instanceOcclusionEventStats = value;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DebugOccluderStats>& UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_get_occluderStats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occluderStats;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DebugOccluderStats> const& UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_get_occluderStats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occluderStats;
}
constexpr void UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_set_occluderStats(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DebugOccluderStats> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___occluderStats = value;
}
constexpr bool& UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_get_occlusionOverlayEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occlusionOverlayEnabled;
}
constexpr bool const& UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_get_occlusionOverlayEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occlusionOverlayEnabled;
}
constexpr void UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_set_occlusionOverlayEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___occlusionOverlayEnabled = value;
}
constexpr bool& UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_get_occlusionOverlayCountVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occlusionOverlayCountVisible;
}
constexpr bool const& UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_get_occlusionOverlayCountVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occlusionOverlayCountVisible;
}
constexpr void UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_set_occlusionOverlayCountVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___occlusionOverlayCountVisible = value;
}
constexpr bool& UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_get_overrideOcclusionTestToAlwaysPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideOcclusionTestToAlwaysPass;
}
constexpr bool const& UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_get_overrideOcclusionTestToAlwaysPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideOcclusionTestToAlwaysPass;
}
constexpr void UnityEngine::Rendering::DebugRendererBatcherStats::__cordl_internal_set_overrideOcclusionTestToAlwaysPass(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideOcclusionTestToAlwaysPass = value;
}
inline void UnityEngine::Rendering::DebugRendererBatcherStats::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugRendererBatcherStats*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugRendererBatcherStats::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugRendererBatcherStats*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugRendererBatcherStats* UnityEngine::Rendering::DebugRendererBatcherStats::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugRendererBatcherStats*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::DebugRendererBatcherStats::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::DebugRendererBatcherStats::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugRendererBatcherStats::DebugRendererBatcherStats() {}
