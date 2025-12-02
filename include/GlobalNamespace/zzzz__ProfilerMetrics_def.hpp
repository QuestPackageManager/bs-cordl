#pragma once
// IWYU pragma private; include "GlobalNamespace/ProfilerMetrics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerMetrics)
namespace GlobalNamespace {
struct ProfilerMetrics_ProfilerMetric;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Profiling {
struct ProfilerRecorder;
}
// Forward declare root types
namespace GlobalNamespace {
class ProfilerMetrics;
}
namespace GlobalNamespace {
struct ProfilerMetrics_ProfilerMetric;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ProfilerMetrics);
MARK_VAL_T(::GlobalNamespace::ProfilerMetrics_ProfilerMetric);
// Dependencies Unity.Profiling.ProfilerCategory
namespace GlobalNamespace {
// Is value type: true
// CS Name: ProfilerMetrics/ProfilerMetric
struct CORDL_TYPE ProfilerMetrics_ProfilerMetric {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerMetrics_ProfilerMetric();

  // Ctor Parameters [CppParam { name: "category", ty: "::Unity::Profiling::ProfilerCategory", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value:
  // None }]
  constexpr ProfilerMetrics_ProfilerMetric(::Unity::Profiling::ProfilerCategory category, ::StringW name) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6704 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field category, offset: 0x0, size: 0x2, def value: None
  ::Unity::Profiling::ProfilerCategory category;

  /// @brief Field name, offset: 0x8, size: 0x8, def value: None
  ::StringW name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProfilerMetrics_ProfilerMetric, category) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProfilerMetrics_ProfilerMetric, name) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProfilerMetrics
class CORDL_TYPE ProfilerMetrics : public ::System::Object {
public:
  // Declarations
  using ProfilerMetric = ::GlobalNamespace::ProfilerMetrics_ProfilerMetric;

  /// @brief Field _metrics, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__metrics,
                      put = __cordl_internal_set__metrics)) ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>
      _metrics;

  /// @brief Field _profilerRecorders, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__profilerRecorders,
                      put = __cordl_internal_set__profilerRecorders)) ::ArrayW<::Unity::Profiling::ProfilerRecorder, ::Array<::Unity::Profiling::ProfilerRecorder>*>
      _profilerRecorders;

  /// @brief Field _samples, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__samples, put = __cordl_internal_set__samples)) ::System::Collections::Generic::List_1<int64_t>* _samples;

  /// @brief Field kFrameTimeMetrics, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kFrameTimeMetrics,
                      put = setStaticF_kFrameTimeMetrics)) ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>
      kFrameTimeMetrics;

  /// @brief Field kMemoryMetrics, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kMemoryMetrics,
                      put = setStaticF_kMemoryMetrics)) ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>
      kMemoryMetrics;

  /// @brief Field kRenderingMetrics, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kRenderingMetrics,
                      put = setStaticF_kRenderingMetrics)) ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>
      kRenderingMetrics;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddExposedMetrics, addr 0x5706584, size 0x474, virtual false, abstract: false, final false
  static inline void AddExposedMetrics(::System::Collections::Generic::List_1<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>* list);

  /// @brief Method CaptureFrame, addr 0x5705028, size 0x104, virtual false, abstract: false, final false
  inline void CaptureFrame();

  /// @brief Method Dispose, addr 0x570512c, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GenerateListReport, addr 0x5705aa0, size 0x268, virtual false, abstract: false, final false
  inline ::StringW GenerateListReport(bool units);

  /// @brief Method GenerateTableReport, addr 0x57057ec, size 0x2b4, virtual false, abstract: false, final false
  inline ::StringW GenerateTableReport(bool units);

  static inline ::GlobalNamespace::ProfilerMetrics* New_ctor(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> metrics,
                                                             ::ArrayW<::Unity::Profiling::ProfilerRecorder, ::Array<::Unity::Profiling::ProfilerRecorder>*> profilerRecorders,
                                                             int32_t initialFrameCapacity);

  /// @brief Method Record, addr 0x5706108, size 0x2e4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ProfilerMetrics* Record(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> metrics,
                                                           int32_t initialFrameCapacity);

  /// @brief Method RecordAllMetrics, addr 0x57069f8, size 0x1f0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ProfilerMetrics* RecordAllMetrics(int32_t initialFrameCapacity, bool listed);

  /// @brief Method RecordFrameTimingMetrics, addr 0x570519c, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ProfilerMetrics* RecordFrameTimingMetrics(int32_t initialFrameCapacity);

  /// @brief Method RecordListedMetrics, addr 0x57064b4, size 0xd0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ProfilerMetrics* RecordListedMetrics(int32_t initialFrameCapacity);

  /// @brief Method RecordMemoryMetrics, addr 0x5706450, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ProfilerMetrics* RecordMemoryMetrics(int32_t initialFrameCapacity);

  /// @brief Method RecordRenderingMetrics, addr 0x57063ec, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ProfilerMetrics* RecordRenderingMetrics(int32_t initialFrameCapacity);

  constexpr ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> const& __cordl_internal_get__metrics() const;

  constexpr ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>& __cordl_internal_get__metrics();

  constexpr ::ArrayW<::Unity::Profiling::ProfilerRecorder, ::Array<::Unity::Profiling::ProfilerRecorder>*> const& __cordl_internal_get__profilerRecorders() const;

  constexpr ::ArrayW<::Unity::Profiling::ProfilerRecorder, ::Array<::Unity::Profiling::ProfilerRecorder>*>& __cordl_internal_get__profilerRecorders();

  constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get__samples() const;

  constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get__samples();

  constexpr void __cordl_internal_set__metrics(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> value);

  constexpr void __cordl_internal_set__profilerRecorders(::ArrayW<::Unity::Profiling::ProfilerRecorder, ::Array<::Unity::Profiling::ProfilerRecorder>*> value);

  constexpr void __cordl_internal_set__samples(::System::Collections::Generic::List_1<int64_t>* value);

  /// @brief Method .ctor, addr 0x5706be8, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> metrics,
                    ::ArrayW<::Unity::Profiling::ProfilerRecorder, ::Array<::Unity::Profiling::ProfilerRecorder>*> profilerRecorders, int32_t initialFrameCapacity);

  static inline ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> getStaticF_kFrameTimeMetrics();

  static inline ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> getStaticF_kMemoryMetrics();

  static inline ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> getStaticF_kRenderingMetrics();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_kFrameTimeMetrics(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> value);

  static inline void setStaticF_kMemoryMetrics(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> value);

  static inline void setStaticF_kRenderingMetrics(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerMetrics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfilerMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfilerMetrics(ProfilerMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfilerMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfilerMetrics(ProfilerMetrics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6705 };

  /// @brief Field kExposedMetricsCap offset 0xffffffff size 0x4
  static constexpr int32_t kExposedMetricsCap{ static_cast<int32_t>(0x100) };

  /// @brief Field _metrics, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> ____metrics;

  /// @brief Field _profilerRecorders, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Unity::Profiling::ProfilerRecorder, ::Array<::Unity::Profiling::ProfilerRecorder>*> ____profilerRecorders;

  /// @brief Field _samples, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int64_t>* ____samples;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProfilerMetrics, ____metrics) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProfilerMetrics, ____profilerRecorders) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProfilerMetrics, ____samples) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProfilerMetrics, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ProfilerMetrics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProfilerMetrics*, "", "ProfilerMetrics");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProfilerMetrics_ProfilerMetric, "", "ProfilerMetrics/ProfilerMetric");
