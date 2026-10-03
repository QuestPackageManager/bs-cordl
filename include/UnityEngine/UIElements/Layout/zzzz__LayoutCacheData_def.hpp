#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutCacheData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/Layout/zzzz__LayoutCachedMeasurement_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutCacheData)
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutCacheData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutCacheData);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Layout::LayoutCacheData, "UnityEngine.UIElements.Layout", "LayoutCacheData");
// [NativeHeader("Modules/UIElements/Core/Layout/Native/LayoutNative.h")]
// Dependencies UnityEngine.UIElements.Layout.LayoutCachedMeasurement
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutCacheData
struct CORDL_TYPE LayoutCacheData {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x28
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::UnityEngine::UIElements::Layout::LayoutCacheData Default;

  /// @brief Method ClearCachedMeasurements, addr 0x71978d8, size 0xb4, virtual false, abstract: false, final false
  inline void ClearCachedMeasurements();

  /// @brief Method ClearCachedMeasurements, addr 0x71986f4, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearCachedMeasurements(void* LayoutCacheData);

  /// [IsReadOnly]
  /// @brief Method MeasurementCacheCount, addr 0x7198664, size 0x90, virtual false, abstract: false, final false
  inline int32_t MeasurementCacheCount();

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x7198508, size 0x15c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  static inline ::UnityEngine::UIElements::Layout::LayoutCacheData getStaticF_Default();

  static inline void setStaticF_Default(::UnityEngine::UIElements::Layout::LayoutCacheData value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutCacheData();

  // Ctor Parameters [CppParam { name: "CachedLayout", ty: "::UnityEngine::UIElements::Layout::LayoutCachedMeasurement", modifiers: "", def_value: None, comment: None }]
  constexpr LayoutCacheData(::UnityEngine::UIElements::Layout::LayoutCachedMeasurement CachedLayout) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5521 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field CachedLayout, offset: 0x0, size: 0x28, def value: None
  ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement CachedLayout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutCacheData, CachedLayout) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Layout::LayoutCacheData) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
