#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutCachedMeasurement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/Layout/zzzz__LayoutMeasureMode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LayoutCachedMeasurement)
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutCachedMeasurement;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutCachedMeasurement);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Layout::LayoutCachedMeasurement, "UnityEngine.UIElements.Layout", "LayoutCachedMeasurement");
// Dependencies UnityEngine.UIElements.Layout.LayoutMeasureMode
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutCachedMeasurement
struct CORDL_TYPE LayoutCachedMeasurement {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x28
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement Default;

  __declspec(property(get = get_NextMeasurementCache)) ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement* NextMeasurementCache;

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x71987c0, size 0x2b8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  static inline ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement getStaticF_Default();

  /// @brief Method get_NextMeasurementCache, addr 0x71987b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement* get_NextMeasurementCache();

  static inline void setStaticF_Default(::UnityEngine::UIElements::Layout::LayoutCachedMeasurement value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutCachedMeasurement();

  // Ctor Parameters [CppParam { name: "AvailableWidth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AvailableHeight", ty: "float_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "ParentWidth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ParentHeight", ty: "float_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "WidthMeasureMode", ty: "::UnityEngine::UIElements::Layout::LayoutMeasureMode", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "HeightMeasureMode", ty: "::UnityEngine::UIElements::Layout::LayoutMeasureMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "ComputedWidth", ty: "float_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "ComputedHeight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_NextMeasurementCachePtr", ty: "void*",
  // modifiers: "", def_value: None, comment: None }]
  constexpr LayoutCachedMeasurement(float_t AvailableWidth, float_t AvailableHeight, float_t ParentWidth, float_t ParentHeight, ::UnityEngine::UIElements::Layout::LayoutMeasureMode WidthMeasureMode,
                                    ::UnityEngine::UIElements::Layout::LayoutMeasureMode HeightMeasureMode, float_t ComputedWidth, float_t ComputedHeight, void* m_NextMeasurementCachePtr) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5522 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field AvailableWidth, offset: 0x0, size: 0x4, def value: None
  float_t AvailableWidth;

  /// @brief Field AvailableHeight, offset: 0x4, size: 0x4, def value: None
  float_t AvailableHeight;

  /// @brief Field ParentWidth, offset: 0x8, size: 0x4, def value: None
  float_t ParentWidth;

  /// @brief Field ParentHeight, offset: 0xc, size: 0x4, def value: None
  float_t ParentHeight;

  /// @brief Field WidthMeasureMode, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::Layout::LayoutMeasureMode WidthMeasureMode;

  /// @brief Field HeightMeasureMode, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::UIElements::Layout::LayoutMeasureMode HeightMeasureMode;

  /// @brief Field ComputedWidth, offset: 0x18, size: 0x4, def value: None
  float_t ComputedWidth;

  /// @brief Field ComputedHeight, offset: 0x1c, size: 0x4, def value: None
  float_t ComputedHeight;

  /// @brief Field m_NextMeasurementCachePtr, offset: 0x20, size: 0x8, def value: None
  void* m_NextMeasurementCachePtr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutCachedMeasurement, AvailableWidth) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutCachedMeasurement, AvailableHeight) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutCachedMeasurement, ParentWidth) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutCachedMeasurement, ParentHeight) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutCachedMeasurement, WidthMeasureMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutCachedMeasurement, HeightMeasureMode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutCachedMeasurement, ComputedWidth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutCachedMeasurement, ComputedHeight) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutCachedMeasurement, m_NextMeasurementCachePtr) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Layout::LayoutCachedMeasurement) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
