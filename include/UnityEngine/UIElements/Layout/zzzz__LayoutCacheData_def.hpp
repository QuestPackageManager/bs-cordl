#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutCacheData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer16_1_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutCachedMeasurement_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutCacheData)
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutCacheData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutCacheData);
// Dependencies UnityEngine.UIElements.Layout.FixedBuffer16`1<T>, UnityEngine.UIElements.Layout.LayoutCachedMeasurement
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutCacheData
struct CORDL_TYPE LayoutCacheData {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x224
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::UnityEngine::UIElements::Layout::LayoutCacheData Default;

  static inline ::UnityEngine::UIElements::Layout::LayoutCacheData getStaticF_Default();

  static inline void setStaticF_Default(::UnityEngine::UIElements::Layout::LayoutCacheData value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutCacheData();

  // Ctor Parameters [CppParam { name: "NextCachedMeasurementsIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "cachedMeasurements", ty:
  // "::UnityEngine::UIElements::Layout::FixedBuffer16_1<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement>", modifiers: "", def_value: None }, CppParam { name: "CachedLayout", ty:
  // "::UnityEngine::UIElements::Layout::LayoutCachedMeasurement", modifiers: "", def_value: None }]
  constexpr LayoutCacheData(uint32_t NextCachedMeasurementsIndex, ::UnityEngine::UIElements::Layout::FixedBuffer16_1<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement> cachedMeasurements,
                            ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement CachedLayout) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5402 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x224 };

  /// @brief Field NextCachedMeasurementsIndex, offset: 0x0, size: 0x4, def value: None
  uint32_t NextCachedMeasurementsIndex;

  /// @brief Field cachedMeasurements, offset: 0x4, size: 0x200, def value: None
  ::UnityEngine::UIElements::Layout::FixedBuffer16_1<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement> cachedMeasurements;

  /// @brief Field CachedLayout, offset: 0x204, size: 0x20, def value: None
  ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement CachedLayout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutCacheData, NextCachedMeasurementsIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutCacheData, cachedMeasurements) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutCacheData, CachedLayout) == 0x204, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutCacheData, 0x224>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutCacheData, "UnityEngine.UIElements.Layout", "LayoutCacheData");
