#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutDefaults.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer2_1_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer9_1_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutValue_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LayoutDefaults)
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutDefaults;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutDefaults);
// Dependencies UnityEngine.UIElements.Layout.FixedBuffer2`1<T>, UnityEngine.UIElements.Layout.FixedBuffer9`1<T>, UnityEngine.UIElements.Layout.LayoutValue
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutDefaults
#pragma pack(push, 0)
struct CORDL_TYPE LayoutDefaults {
public:
  // Declarations
  /// @brief Field DimensionValues, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DimensionValues, put = setStaticF_DimensionValues)) ::ArrayW<float_t, ::Array<float_t>*> DimensionValues;

  /// @brief Field DimensionValuesAutoUnit, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DimensionValuesAutoUnit,
                      put = setStaticF_DimensionValuesAutoUnit)) ::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue>
      DimensionValuesAutoUnit;

  /// @brief Field DimensionValuesUnit, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DimensionValuesUnit, put = setStaticF_DimensionValuesUnit)) ::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue>
      DimensionValuesUnit;

  /// @brief Field EdgeValuesUnit, offset 0xffffffff, size 0x48
  __declspec(property(get = getStaticF_EdgeValuesUnit, put = setStaticF_EdgeValuesUnit)) ::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue>
      EdgeValuesUnit;

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_DimensionValues();

  static inline ::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue> getStaticF_DimensionValuesAutoUnit();

  static inline ::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue> getStaticF_DimensionValuesUnit();

  static inline ::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue> getStaticF_EdgeValuesUnit();

  static inline void setStaticF_DimensionValues(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline void setStaticF_DimensionValuesAutoUnit(::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue> value);

  static inline void setStaticF_DimensionValuesUnit(::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue> value);

  static inline void setStaticF_EdgeValuesUnit(::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutDefaults();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5424 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutDefaults, 0x1>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutDefaults, "UnityEngine.UIElements.Layout", "LayoutDefaults");
