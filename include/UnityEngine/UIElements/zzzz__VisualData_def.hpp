#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleDataGroup_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__OverflowInternal_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualData)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct VisualData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::VisualData);
// Dependencies System.IEquatable`1<T>, UnityEngine.Color, UnityEngine.UIElements.Background, UnityEngine.UIElements.BackgroundPosition, UnityEngine.UIElements.BackgroundRepeat,
// UnityEngine.UIElements.BackgroundSize, UnityEngine.UIElements.IStyleDataGroup`1<T>, UnityEngine.UIElements.Length, UnityEngine.UIElements.OverflowInternal
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualData
struct CORDL_TYPE VisualData {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::VisualData>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::VisualData>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::VisualData>"
  constexpr operator ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::VisualData>*();

  /// @brief Method Copy, addr 0x4a83c14, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::VisualData Copy();

  /// @brief Method CopyFrom, addr 0x4a83c30, size 0x14, virtual true, abstract: false, final true
  inline void CopyFrom(::ByRef<::UnityEngine::UIElements::VisualData> other);

  /// @brief Method Equals, addr 0x4a83f84, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a83f38, size 0x4c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::VisualData other);

  /// @brief Method GetHashCode, addr 0x4a8402c, size 0x300, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::VisualData>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::VisualData>* i___System__IEquatable_1___UnityEngine__UIElements__VisualData_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::VisualData>"
  constexpr ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::VisualData>* i___UnityEngine__UIElements__IStyleDataGroup_1___UnityEngine__UIElements__VisualData_();

  /// @brief Method op_Equality, addr 0x4a83c44, size 0x2f4, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::VisualData lhs, ::UnityEngine::UIElements::VisualData rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualData();

  // Ctor Parameters [CppParam { name: "backgroundColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "backgroundImage", ty: "::UnityEngine::UIElements::Background",
  // modifiers: "", def_value: None }, CppParam { name: "backgroundPositionX", ty: "::UnityEngine::UIElements::BackgroundPosition", modifiers: "", def_value: None }, CppParam { name:
  // "backgroundPositionY", ty: "::UnityEngine::UIElements::BackgroundPosition", modifiers: "", def_value: None }, CppParam { name: "backgroundRepeat", ty:
  // "::UnityEngine::UIElements::BackgroundRepeat", modifiers: "", def_value: None }, CppParam { name: "backgroundSize", ty: "::UnityEngine::UIElements::BackgroundSize", modifiers: "", def_value: None
  // }, CppParam { name: "borderBottomColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "borderBottomLeftRadius", ty: "::UnityEngine::UIElements::Length",
  // modifiers: "", def_value: None }, CppParam { name: "borderBottomRightRadius", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "borderLeftColor", ty:
  // "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "borderRightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "borderTopColor", ty:
  // "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "borderTopLeftRadius", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name:
  // "borderTopRightRadius", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "opacity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "overflow", ty: "::UnityEngine::UIElements::OverflowInternal", modifiers: "", def_value: None }]
  constexpr VisualData(::UnityEngine::Color backgroundColor, ::UnityEngine::UIElements::Background backgroundImage, ::UnityEngine::UIElements::BackgroundPosition backgroundPositionX,
                       ::UnityEngine::UIElements::BackgroundPosition backgroundPositionY, ::UnityEngine::UIElements::BackgroundRepeat backgroundRepeat,
                       ::UnityEngine::UIElements::BackgroundSize backgroundSize, ::UnityEngine::Color borderBottomColor, ::UnityEngine::UIElements::Length borderBottomLeftRadius,
                       ::UnityEngine::UIElements::Length borderBottomRightRadius, ::UnityEngine::Color borderLeftColor, ::UnityEngine::Color borderRightColor, ::UnityEngine::Color borderTopColor,
                       ::UnityEngine::UIElements::Length borderTopLeftRadius, ::UnityEngine::UIElements::Length borderTopRightRadius, float_t opacity,
                       ::UnityEngine::UIElements::OverflowInternal overflow) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6088 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xd0 };

  /// @brief Field backgroundColor, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color backgroundColor;

  /// @brief Field backgroundImage, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::UIElements::Background backgroundImage;

  /// @brief Field backgroundPositionX, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::UIElements::BackgroundPosition backgroundPositionX;

  /// @brief Field backgroundPositionY, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::UIElements::BackgroundPosition backgroundPositionY;

  /// @brief Field backgroundRepeat, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::BackgroundRepeat backgroundRepeat;

  /// @brief Field backgroundSize, offset: 0x50, size: 0x14, def value: None
  ::UnityEngine::UIElements::BackgroundSize backgroundSize;

  /// @brief Field borderBottomColor, offset: 0x64, size: 0x10, def value: None
  ::UnityEngine::Color borderBottomColor;

  /// @brief Field borderBottomLeftRadius, offset: 0x74, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length borderBottomLeftRadius;

  /// @brief Field borderBottomRightRadius, offset: 0x7c, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length borderBottomRightRadius;

  /// @brief Field borderLeftColor, offset: 0x84, size: 0x10, def value: None
  ::UnityEngine::Color borderLeftColor;

  /// @brief Field borderRightColor, offset: 0x94, size: 0x10, def value: None
  ::UnityEngine::Color borderRightColor;

  /// @brief Field borderTopColor, offset: 0xa4, size: 0x10, def value: None
  ::UnityEngine::Color borderTopColor;

  /// @brief Field borderTopLeftRadius, offset: 0xb4, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length borderTopLeftRadius;

  /// @brief Field borderTopRightRadius, offset: 0xbc, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length borderTopRightRadius;

  /// @brief Field opacity, offset: 0xc4, size: 0x4, def value: None
  float_t opacity;

  /// @brief Field overflow, offset: 0xc8, size: 0x4, def value: None
  ::UnityEngine::UIElements::OverflowInternal overflow;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualData, backgroundColor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, backgroundImage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, backgroundPositionX) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, backgroundPositionY) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, backgroundRepeat) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, backgroundSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, borderBottomColor) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, borderBottomLeftRadius) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, borderBottomRightRadius) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, borderLeftColor) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, borderRightColor) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, borderTopColor) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, borderTopLeftRadius) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, borderTopRightRadius) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, opacity) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, overflow) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualData, 0xd0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualData, "UnityEngine.UIElements", "VisualData");
