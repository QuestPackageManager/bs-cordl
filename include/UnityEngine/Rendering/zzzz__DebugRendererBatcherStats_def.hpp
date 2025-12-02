#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugRendererBatcherStats.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugOccluderStats_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullerViewStats_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventStats_def.hpp"
CORDL_MODULE_EXPORT(DebugRendererBatcherStats)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DebugRendererBatcherStats;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugRendererBatcherStats);
// Dependencies System.Object, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.DebugOccluderStats, UnityEngine.Rendering.InstanceCullerViewStats,
// UnityEngine.Rendering.InstanceOcclusionEventStats
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugRendererBatcherStats
class CORDL_TYPE DebugRendererBatcherStats : public ::System::Object {
public:
  // Declarations
  /// @brief Field enabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_enabled, put = __cordl_internal_set_enabled)) bool enabled;

  /// @brief Field instanceCullerStats, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_instanceCullerStats,
                      put = __cordl_internal_set_instanceCullerStats)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceCullerViewStats>
      instanceCullerStats;

  /// @brief Field instanceOcclusionEventStats, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_instanceOcclusionEventStats,
                      put = __cordl_internal_set_instanceOcclusionEventStats)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceOcclusionEventStats>
      instanceOcclusionEventStats;

  /// @brief Field occluderStats, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_occluderStats, put = __cordl_internal_set_occluderStats)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DebugOccluderStats>
      occluderStats;

  /// @brief Field occlusionOverlayCountVisible, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_occlusionOverlayCountVisible, put = __cordl_internal_set_occlusionOverlayCountVisible)) bool occlusionOverlayCountVisible;

  /// @brief Field occlusionOverlayEnabled, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_occlusionOverlayEnabled, put = __cordl_internal_set_occlusionOverlayEnabled)) bool occlusionOverlayEnabled;

  /// @brief Field overrideOcclusionTestToAlwaysPass, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideOcclusionTestToAlwaysPass, put = __cordl_internal_set_overrideOcclusionTestToAlwaysPass)) bool overrideOcclusionTestToAlwaysPass;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x65f73cc, size 0xf4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::UnityEngine::Rendering::DebugRendererBatcherStats* New_ctor();

  constexpr bool const& __cordl_internal_get_enabled() const;

  constexpr bool& __cordl_internal_get_enabled();

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceCullerViewStats> const& __cordl_internal_get_instanceCullerStats() const;

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceCullerViewStats>& __cordl_internal_get_instanceCullerStats();

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceOcclusionEventStats> const& __cordl_internal_get_instanceOcclusionEventStats() const;

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceOcclusionEventStats>& __cordl_internal_get_instanceOcclusionEventStats();

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DebugOccluderStats> const& __cordl_internal_get_occluderStats() const;

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DebugOccluderStats>& __cordl_internal_get_occluderStats();

  constexpr bool const& __cordl_internal_get_occlusionOverlayCountVisible() const;

  constexpr bool& __cordl_internal_get_occlusionOverlayCountVisible();

  constexpr bool const& __cordl_internal_get_occlusionOverlayEnabled() const;

  constexpr bool& __cordl_internal_get_occlusionOverlayEnabled();

  constexpr bool const& __cordl_internal_get_overrideOcclusionTestToAlwaysPass() const;

  constexpr bool& __cordl_internal_get_overrideOcclusionTestToAlwaysPass();

  constexpr void __cordl_internal_set_enabled(bool value);

  constexpr void __cordl_internal_set_instanceCullerStats(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceCullerViewStats> value);

  constexpr void __cordl_internal_set_instanceOcclusionEventStats(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceOcclusionEventStats> value);

  constexpr void __cordl_internal_set_occluderStats(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DebugOccluderStats> value);

  constexpr void __cordl_internal_set_occlusionOverlayCountVisible(bool value);

  constexpr void __cordl_internal_set_occlusionOverlayEnabled(bool value);

  constexpr void __cordl_internal_set_overrideOcclusionTestToAlwaysPass(bool value);

  /// @brief Method .ctor, addr 0x65f72fc, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugRendererBatcherStats();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugRendererBatcherStats", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugRendererBatcherStats(DebugRendererBatcherStats&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugRendererBatcherStats", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugRendererBatcherStats(DebugRendererBatcherStats const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17580 };

  /// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
  bool ___enabled;

  /// @brief Field instanceCullerStats, offset: 0x18, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceCullerViewStats> ___instanceCullerStats;

  /// @brief Field instanceOcclusionEventStats, offset: 0x20, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceOcclusionEventStats> ___instanceOcclusionEventStats;

  /// @brief Field occluderStats, offset: 0x28, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DebugOccluderStats> ___occluderStats;

  /// @brief Field occlusionOverlayEnabled, offset: 0x30, size: 0x1, def value: None
  bool ___occlusionOverlayEnabled;

  /// @brief Field occlusionOverlayCountVisible, offset: 0x31, size: 0x1, def value: None
  bool ___occlusionOverlayCountVisible;

  /// @brief Field overrideOcclusionTestToAlwaysPass, offset: 0x32, size: 0x1, def value: None
  bool ___overrideOcclusionTestToAlwaysPass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugRendererBatcherStats, ___enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugRendererBatcherStats, ___instanceCullerStats) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugRendererBatcherStats, ___instanceOcclusionEventStats) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugRendererBatcherStats, ___occluderStats) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugRendererBatcherStats, ___occlusionOverlayEnabled) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugRendererBatcherStats, ___occlusionOverlayCountVisible) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugRendererBatcherStats, ___overrideOcclusionTestToAlwaysPass) == 0x32, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugRendererBatcherStats, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DebugRendererBatcherStats);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugRendererBatcherStats*, "UnityEngine.Rendering", "DebugRendererBatcherStats");
