#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__OverflowInternal_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualData)
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct OverflowInternal;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleDataGroup_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct VisualData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::VisualData);
// Type: UnityEngine.UIElements::VisualData
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7379)), TypeDefinitionIndex(TypeDefinitionIndex(7399)), TypeDefinitionIndex(TypeDefinitionIndex(10178)),
// TypeDefinitionIndex(TypeDefinitionIndex(6973))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7447)) CS Name: ::UnityEngine.UIElements::VisualData
struct CORDL_TYPE VisualData {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::VisualData>"
  constexpr operator ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::VisualData>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::VisualData>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::VisualData>*();

  /// @brief Method Copy addr 0x2d1c730 size 0x1c virtual true final true
  inline ::UnityEngine::UIElements::VisualData Copy();

  /// @brief Method CopyFrom addr 0x2d1c74c size 0x14 virtual true final true
  inline void CopyFrom(ByRef<::UnityEngine::UIElements::VisualData> other);

  /// @brief Method op_Equality addr 0x2d1c760 size 0x1ec virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::VisualData lhs, ::UnityEngine::UIElements::VisualData rhs);

  /// @brief Method Equals addr 0x2d1c94c size 0x4c virtual true final true
  inline bool Equals(::UnityEngine::UIElements::VisualData other);

  /// @brief Method Equals addr 0x2d1c998 size 0xa8 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2d1ca40 size 0x280 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "backgroundColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "backgroundImage", ty: "::UnityEngine::UIElements::Background",
  // modifiers: "", def_value: None }, CppParam { name: "borderBottomColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "borderBottomLeftRadius", ty:
  // "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "borderBottomRightRadius", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None },
  // CppParam { name: "borderLeftColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "borderRightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None
  // }, CppParam { name: "borderTopColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "borderTopLeftRadius", ty: "::UnityEngine::UIElements::Length", modifiers: "",
  // def_value: None }, CppParam { name: "borderTopRightRadius", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "opacity", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "overflow", ty: "::UnityEngine::UIElements::OverflowInternal", modifiers: "", def_value: None }]
  constexpr VisualData(::UnityEngine::Color backgroundColor, ::UnityEngine::UIElements::Background backgroundImage, ::UnityEngine::Color borderBottomColor,
                       ::UnityEngine::UIElements::Length borderBottomLeftRadius, ::UnityEngine::UIElements::Length borderBottomRightRadius, ::UnityEngine::Color borderLeftColor,
                       ::UnityEngine::Color borderRightColor, ::UnityEngine::Color borderTopColor, ::UnityEngine::UIElements::Length borderTopLeftRadius,
                       ::UnityEngine::UIElements::Length borderTopRightRadius, float_t opacity, ::UnityEngine::UIElements::OverflowInternal overflow) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualData();

  /// @brief Field backgroundColor, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color backgroundColor;

  /// @brief Field backgroundImage, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::UIElements::Background backgroundImage;

  /// @brief Field borderBottomColor, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color borderBottomColor;

  /// @brief Field borderBottomLeftRadius, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length borderBottomLeftRadius;

  /// @brief Field borderBottomRightRadius, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length borderBottomRightRadius;

  /// @brief Field borderLeftColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color borderLeftColor;

  /// @brief Field borderRightColor, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color borderRightColor;

  /// @brief Field borderTopColor, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Color borderTopColor;

  /// @brief Field borderTopLeftRadius, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length borderTopLeftRadius;

  /// @brief Field borderTopRightRadius, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length borderTopRightRadius;

  /// @brief Field opacity, offset: 0x90, size: 0x4, def value: None
  float_t opacity;

  /// @brief Field overflow, offset: 0x94, size: 0x4, def value: None
  ::UnityEngine::UIElements::OverflowInternal overflow;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x98 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualData, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, backgroundColor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, backgroundImage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, borderBottomColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, borderBottomLeftRadius) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, borderBottomRightRadius) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, borderLeftColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, borderRightColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, borderTopColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, borderTopLeftRadius) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, borderTopRightRadius) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, opacity) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualData, overflow) == 0x94, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualData, "UnityEngine.UIElements", "VisualData");
