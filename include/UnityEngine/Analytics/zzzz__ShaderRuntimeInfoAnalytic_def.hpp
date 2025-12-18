#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/ShaderRuntimeInfoAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderRuntimeInfoAnalytic)
// Forward declare root types
namespace UnityEngine::Analytics {
class ShaderRuntimeInfoAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.ShaderRuntimeInfoAnalytic
class CORDL_TYPE ShaderRuntimeInfoAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field ShaderChunkCountAvg, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_ShaderChunkCountAvg, put = __cordl_internal_set_ShaderChunkCountAvg)) int32_t ShaderChunkCountAvg;

  /// @brief Field ShaderChunkCountMax, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_ShaderChunkCountMax, put = __cordl_internal_set_ShaderChunkCountMax)) int32_t ShaderChunkCountMax;

  /// @brief Field ShaderChunkCountMin, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_ShaderChunkCountMin, put = __cordl_internal_set_ShaderChunkCountMin)) int32_t ShaderChunkCountMin;

  /// @brief Field ShaderChunkSizeAvg, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_ShaderChunkSizeAvg, put = __cordl_internal_set_ShaderChunkSizeAvg)) int32_t ShaderChunkSizeAvg;

  /// @brief Field ShaderChunkSizeMax, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_ShaderChunkSizeMax, put = __cordl_internal_set_ShaderChunkSizeMax)) int32_t ShaderChunkSizeMax;

  /// @brief Field ShaderChunkSizeMin, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_ShaderChunkSizeMin, put = __cordl_internal_set_ShaderChunkSizeMin)) int32_t ShaderChunkSizeMin;

  /// @brief Field UseProgressiveWarmup, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_UseProgressiveWarmup, put = __cordl_internal_set_UseProgressiveWarmup)) bool UseProgressiveWarmup;

  /// @brief Field VariantsCompilationTimeMax, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_VariantsCompilationTimeMax, put = __cordl_internal_set_VariantsCompilationTimeMax)) int32_t VariantsCompilationTimeMax;

  /// @brief Field VariantsCompilationTimeMedian, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_VariantsCompilationTimeMedian, put = __cordl_internal_set_VariantsCompilationTimeMedian)) int32_t VariantsCompilationTimeMedian;

  /// @brief Field VariantsCompilationTimeTotal, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_VariantsCompilationTimeTotal, put = __cordl_internal_set_VariantsCompilationTimeTotal)) int32_t VariantsCompilationTimeTotal;

  /// @brief Field VariantsRequested, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_VariantsRequested, put = __cordl_internal_set_VariantsRequested)) int64_t VariantsRequested;

  /// @brief Field VariantsRequestedCompiled, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_VariantsRequestedCompiled, put = __cordl_internal_set_VariantsRequestedCompiled)) int64_t VariantsRequestedCompiled;

  /// @brief Field VariantsRequestedMissing, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_VariantsRequestedMissing, put = __cordl_internal_set_VariantsRequestedMissing)) int64_t VariantsRequestedMissing;

  /// @brief Field VariantsRequestedUnsupported, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_VariantsRequestedUnsupported, put = __cordl_internal_set_VariantsRequestedUnsupported)) int64_t VariantsRequestedUnsupported;

  /// @brief Field VariantsRequestedViaWarmup, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_VariantsRequestedViaWarmup, put = __cordl_internal_set_VariantsRequestedViaWarmup)) int64_t VariantsRequestedViaWarmup;

  /// @brief Field VariantsUnused, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_VariantsUnused, put = __cordl_internal_set_VariantsUnused)) int64_t VariantsUnused;

  /// @brief Field VariantsWarmupTimeMax, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_VariantsWarmupTimeMax, put = __cordl_internal_set_VariantsWarmupTimeMax)) int32_t VariantsWarmupTimeMax;

  /// @brief Field VariantsWarmupTimeMedian, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_VariantsWarmupTimeMedian, put = __cordl_internal_set_VariantsWarmupTimeMedian)) int32_t VariantsWarmupTimeMedian;

  /// @brief Field VariantsWarmupTimeTotal, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_VariantsWarmupTimeTotal, put = __cordl_internal_set_VariantsWarmupTimeTotal)) int32_t VariantsWarmupTimeTotal;

  /// @brief Method CreateShaderRuntimeInfoAnalytic, addr 0x693c9fc, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic* CreateShaderRuntimeInfoAnalytic();

  static inline ::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic* New_ctor();

  constexpr int32_t const& __cordl_internal_get_ShaderChunkCountAvg() const;

  constexpr int32_t& __cordl_internal_get_ShaderChunkCountAvg();

  constexpr int32_t const& __cordl_internal_get_ShaderChunkCountMax() const;

  constexpr int32_t& __cordl_internal_get_ShaderChunkCountMax();

  constexpr int32_t const& __cordl_internal_get_ShaderChunkCountMin() const;

  constexpr int32_t& __cordl_internal_get_ShaderChunkCountMin();

  constexpr int32_t const& __cordl_internal_get_ShaderChunkSizeAvg() const;

  constexpr int32_t& __cordl_internal_get_ShaderChunkSizeAvg();

  constexpr int32_t const& __cordl_internal_get_ShaderChunkSizeMax() const;

  constexpr int32_t& __cordl_internal_get_ShaderChunkSizeMax();

  constexpr int32_t const& __cordl_internal_get_ShaderChunkSizeMin() const;

  constexpr int32_t& __cordl_internal_get_ShaderChunkSizeMin();

  constexpr bool const& __cordl_internal_get_UseProgressiveWarmup() const;

  constexpr bool& __cordl_internal_get_UseProgressiveWarmup();

  constexpr int32_t const& __cordl_internal_get_VariantsCompilationTimeMax() const;

  constexpr int32_t& __cordl_internal_get_VariantsCompilationTimeMax();

  constexpr int32_t const& __cordl_internal_get_VariantsCompilationTimeMedian() const;

  constexpr int32_t& __cordl_internal_get_VariantsCompilationTimeMedian();

  constexpr int32_t const& __cordl_internal_get_VariantsCompilationTimeTotal() const;

  constexpr int32_t& __cordl_internal_get_VariantsCompilationTimeTotal();

  constexpr int64_t const& __cordl_internal_get_VariantsRequested() const;

  constexpr int64_t& __cordl_internal_get_VariantsRequested();

  constexpr int64_t const& __cordl_internal_get_VariantsRequestedCompiled() const;

  constexpr int64_t& __cordl_internal_get_VariantsRequestedCompiled();

  constexpr int64_t const& __cordl_internal_get_VariantsRequestedMissing() const;

  constexpr int64_t& __cordl_internal_get_VariantsRequestedMissing();

  constexpr int64_t const& __cordl_internal_get_VariantsRequestedUnsupported() const;

  constexpr int64_t& __cordl_internal_get_VariantsRequestedUnsupported();

  constexpr int64_t const& __cordl_internal_get_VariantsRequestedViaWarmup() const;

  constexpr int64_t& __cordl_internal_get_VariantsRequestedViaWarmup();

  constexpr int64_t const& __cordl_internal_get_VariantsUnused() const;

  constexpr int64_t& __cordl_internal_get_VariantsUnused();

  constexpr int32_t const& __cordl_internal_get_VariantsWarmupTimeMax() const;

  constexpr int32_t& __cordl_internal_get_VariantsWarmupTimeMax();

  constexpr int32_t const& __cordl_internal_get_VariantsWarmupTimeMedian() const;

  constexpr int32_t& __cordl_internal_get_VariantsWarmupTimeMedian();

  constexpr int32_t const& __cordl_internal_get_VariantsWarmupTimeTotal() const;

  constexpr int32_t& __cordl_internal_get_VariantsWarmupTimeTotal();

  constexpr void __cordl_internal_set_ShaderChunkCountAvg(int32_t value);

  constexpr void __cordl_internal_set_ShaderChunkCountMax(int32_t value);

  constexpr void __cordl_internal_set_ShaderChunkCountMin(int32_t value);

  constexpr void __cordl_internal_set_ShaderChunkSizeAvg(int32_t value);

  constexpr void __cordl_internal_set_ShaderChunkSizeMax(int32_t value);

  constexpr void __cordl_internal_set_ShaderChunkSizeMin(int32_t value);

  constexpr void __cordl_internal_set_UseProgressiveWarmup(bool value);

  constexpr void __cordl_internal_set_VariantsCompilationTimeMax(int32_t value);

  constexpr void __cordl_internal_set_VariantsCompilationTimeMedian(int32_t value);

  constexpr void __cordl_internal_set_VariantsCompilationTimeTotal(int32_t value);

  constexpr void __cordl_internal_set_VariantsRequested(int64_t value);

  constexpr void __cordl_internal_set_VariantsRequestedCompiled(int64_t value);

  constexpr void __cordl_internal_set_VariantsRequestedMissing(int64_t value);

  constexpr void __cordl_internal_set_VariantsRequestedUnsupported(int64_t value);

  constexpr void __cordl_internal_set_VariantsRequestedViaWarmup(int64_t value);

  constexpr void __cordl_internal_set_VariantsUnused(int64_t value);

  constexpr void __cordl_internal_set_VariantsWarmupTimeMax(int32_t value);

  constexpr void __cordl_internal_set_VariantsWarmupTimeMedian(int32_t value);

  constexpr void __cordl_internal_set_VariantsWarmupTimeTotal(int32_t value);

  /// @brief Method .ctor, addr 0x693c968, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderRuntimeInfoAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderRuntimeInfoAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderRuntimeInfoAnalytic(ShaderRuntimeInfoAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderRuntimeInfoAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderRuntimeInfoAnalytic(ShaderRuntimeInfoAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10674 };

  /// @brief Field VariantsRequested, offset: 0x30, size: 0x8, def value: None
  int64_t ___VariantsRequested;

  /// @brief Field VariantsRequestedMissing, offset: 0x38, size: 0x8, def value: None
  int64_t ___VariantsRequestedMissing;

  /// @brief Field VariantsRequestedUnsupported, offset: 0x40, size: 0x8, def value: None
  int64_t ___VariantsRequestedUnsupported;

  /// @brief Field VariantsRequestedCompiled, offset: 0x48, size: 0x8, def value: None
  int64_t ___VariantsRequestedCompiled;

  /// @brief Field VariantsRequestedViaWarmup, offset: 0x50, size: 0x8, def value: None
  int64_t ___VariantsRequestedViaWarmup;

  /// @brief Field VariantsUnused, offset: 0x58, size: 0x8, def value: None
  int64_t ___VariantsUnused;

  /// @brief Field VariantsCompilationTimeTotal, offset: 0x60, size: 0x4, def value: None
  int32_t ___VariantsCompilationTimeTotal;

  /// @brief Field VariantsCompilationTimeMax, offset: 0x64, size: 0x4, def value: None
  int32_t ___VariantsCompilationTimeMax;

  /// @brief Field VariantsCompilationTimeMedian, offset: 0x68, size: 0x4, def value: None
  int32_t ___VariantsCompilationTimeMedian;

  /// @brief Field VariantsWarmupTimeTotal, offset: 0x6c, size: 0x4, def value: None
  int32_t ___VariantsWarmupTimeTotal;

  /// @brief Field VariantsWarmupTimeMax, offset: 0x70, size: 0x4, def value: None
  int32_t ___VariantsWarmupTimeMax;

  /// @brief Field VariantsWarmupTimeMedian, offset: 0x74, size: 0x4, def value: None
  int32_t ___VariantsWarmupTimeMedian;

  /// @brief Field UseProgressiveWarmup, offset: 0x78, size: 0x1, def value: None
  bool ___UseProgressiveWarmup;

  /// @brief Field ShaderChunkSizeMin, offset: 0x7c, size: 0x4, def value: None
  int32_t ___ShaderChunkSizeMin;

  /// @brief Field ShaderChunkSizeMax, offset: 0x80, size: 0x4, def value: None
  int32_t ___ShaderChunkSizeMax;

  /// @brief Field ShaderChunkSizeAvg, offset: 0x84, size: 0x4, def value: None
  int32_t ___ShaderChunkSizeAvg;

  /// @brief Field ShaderChunkCountMin, offset: 0x88, size: 0x4, def value: None
  int32_t ___ShaderChunkCountMin;

  /// @brief Field ShaderChunkCountMax, offset: 0x8c, size: 0x4, def value: None
  int32_t ___ShaderChunkCountMax;

  /// @brief Field ShaderChunkCountAvg, offset: 0x90, size: 0x4, def value: None
  int32_t ___ShaderChunkCountAvg;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___VariantsRequested) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___VariantsRequestedMissing) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___VariantsRequestedUnsupported) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___VariantsRequestedCompiled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___VariantsRequestedViaWarmup) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___VariantsUnused) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___VariantsCompilationTimeTotal) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___VariantsCompilationTimeMax) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___VariantsCompilationTimeMedian) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___VariantsWarmupTimeTotal) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___VariantsWarmupTimeMax) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___VariantsWarmupTimeMedian) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___UseProgressiveWarmup) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___ShaderChunkSizeMin) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___ShaderChunkSizeMax) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___ShaderChunkSizeAvg) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___ShaderChunkCountMin) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___ShaderChunkCountMax) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, ___ShaderChunkCountAvg) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic, 0x98>, "Size mismatch!");

} // namespace UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::ShaderRuntimeInfoAnalytic*, "UnityEngine.Analytics", "ShaderRuntimeInfoAnalytic");
