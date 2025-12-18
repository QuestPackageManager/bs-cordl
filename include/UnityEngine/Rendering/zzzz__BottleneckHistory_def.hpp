#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BottleneckHistory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__BottleneckHistogram_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BottleneckHistory)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
struct FrameTimeSample;
}
namespace UnityEngine::Rendering {
struct PerformanceBottleneck;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class BottleneckHistory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::BottleneckHistory);
// Dependencies System.Object, UnityEngine.Rendering.BottleneckHistogram
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.BottleneckHistory
class CORDL_TYPE BottleneckHistory : public ::System::Object {
public:
  // Declarations
  /// @brief Field Histogram, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_Histogram, put = __cordl_internal_set_Histogram)) ::UnityEngine::Rendering::BottleneckHistogram Histogram;

  /// @brief Field m_Bottlenecks, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Bottlenecks,
                      put = __cordl_internal_set_m_Bottlenecks)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PerformanceBottleneck>* m_Bottlenecks;

  /// @brief Method AddBottleneckFromAveragedSample, addr 0x65aa14c, size 0xdc, virtual false, abstract: false, final false
  inline void AddBottleneckFromAveragedSample(::UnityEngine::Rendering::FrameTimeSample frameHistorySampleAverage);

  /// @brief Method Clear, addr 0x65ab944, size 0x5c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ComputeHistogram, addr 0x65aa228, size 0x118, virtual false, abstract: false, final false
  inline void ComputeHistogram();

  /// @brief Method DetermineBottleneck, addr 0x65b621c, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::PerformanceBottleneck DetermineBottleneck(::UnityEngine::Rendering::FrameTimeSample s);

  /// @brief Method DiscardOldSamples, addr 0x65aa09c, size 0xb0, virtual false, abstract: false, final false
  inline void DiscardOldSamples(int32_t historySize);

  static inline ::UnityEngine::Rendering::BottleneckHistory* New_ctor(int32_t initialCapacity);

  constexpr ::UnityEngine::Rendering::BottleneckHistogram const& __cordl_internal_get_Histogram() const;

  constexpr ::UnityEngine::Rendering::BottleneckHistogram& __cordl_internal_get_Histogram();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PerformanceBottleneck>* const& __cordl_internal_get_m_Bottlenecks() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PerformanceBottleneck>*& __cordl_internal_get_m_Bottlenecks();

  constexpr void __cordl_internal_set_Histogram(::UnityEngine::Rendering::BottleneckHistogram value);

  constexpr void __cordl_internal_set_m_Bottlenecks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PerformanceBottleneck>* value);

  /// @brief Method .ctor, addr 0x65a9a1c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialCapacity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BottleneckHistory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BottleneckHistory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BottleneckHistory(BottleneckHistory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BottleneckHistory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BottleneckHistory(BottleneckHistory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12013 };

  /// @brief Field m_Bottlenecks, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PerformanceBottleneck>* ___m_Bottlenecks;

  /// @brief Field Histogram, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Rendering::BottleneckHistogram ___Histogram;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BottleneckHistory, ___m_Bottlenecks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BottleneckHistory, ___Histogram) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BottleneckHistory, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::BottleneckHistory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BottleneckHistory*, "UnityEngine.Rendering", "BottleneckHistory");
