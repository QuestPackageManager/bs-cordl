#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RareData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Cursor_def.hpp"
#include "UnityEngine/UIElements/zzzz__OverflowClipBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflowPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflow_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RareData)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct Cursor;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleDataGroup_1;
}
namespace UnityEngine::UIElements {
struct OverflowClipBox;
}
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
namespace UnityEngine::UIElements {
struct TextOverflow;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct RareData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::RareData);
// Type: UnityEngine.UIElements::RareData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::RareData
struct CORDL_TYPE RareData {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::RareData>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::RareData>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::RareData>"
  constexpr operator ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::RareData>*();

  /// @brief Method Copy, addr 0x4a1b970, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::RareData Copy();

  /// @brief Method CopyFrom, addr 0x4a1b98c, size 0x14, virtual true, abstract: false, final true
  inline void CopyFrom(ByRef<::UnityEngine::UIElements::RareData> other);

  /// @brief Method Equals, addr 0x4a1bb08, size 0xa0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a1bac4, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::RareData other);

  /// @brief Method GetHashCode, addr 0x4a1bba8, size 0x100, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::RareData>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::RareData>* i___System__IEquatable_1___UnityEngine__UIElements__RareData_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::RareData>"
  constexpr ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::RareData>* i___UnityEngine__UIElements__IStyleDataGroup_1___UnityEngine__UIElements__RareData_();

  /// @brief Method op_Equality, addr 0x4a1b9a0, size 0x124, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::RareData lhs, ::UnityEngine::UIElements::RareData rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RareData();

  // Ctor Parameters [CppParam { name: "cursor", ty: "::UnityEngine::UIElements::Cursor", modifiers: "", def_value: None }, CppParam { name: "textOverflow", ty:
  // "::UnityEngine::UIElements::TextOverflow", modifiers: "", def_value: None }, CppParam { name: "unityBackgroundImageTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None },
  // CppParam { name: "unityOverflowClipBox", ty: "::UnityEngine::UIElements::OverflowClipBox", modifiers: "", def_value: None }, CppParam { name: "unitySliceBottom", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "unitySliceLeft", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unitySliceRight", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "unitySliceScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "unitySliceTop", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "unityTextOverflowPosition", ty: "::UnityEngine::UIElements::TextOverflowPosition", modifiers: "", def_value: None }]
  constexpr RareData(::UnityEngine::UIElements::Cursor cursor, ::UnityEngine::UIElements::TextOverflow textOverflow, ::UnityEngine::Color unityBackgroundImageTintColor,
                     ::UnityEngine::UIElements::OverflowClipBox unityOverflowClipBox, int32_t unitySliceBottom, int32_t unitySliceLeft, int32_t unitySliceRight, float_t unitySliceScale,
                     int32_t unitySliceTop, ::UnityEngine::UIElements::TextOverflowPosition unityTextOverflowPosition) noexcept;

  /// @brief Field cursor, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::UIElements::Cursor cursor;

  /// @brief Field textOverflow, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextOverflow textOverflow;

  /// @brief Field unityBackgroundImageTintColor, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Color unityBackgroundImageTintColor;

  /// @brief Field unityOverflowClipBox, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::UIElements::OverflowClipBox unityOverflowClipBox;

  /// @brief Field unitySliceBottom, offset: 0x30, size: 0x4, def value: None
  int32_t unitySliceBottom;

  /// @brief Field unitySliceLeft, offset: 0x34, size: 0x4, def value: None
  int32_t unitySliceLeft;

  /// @brief Field unitySliceRight, offset: 0x38, size: 0x4, def value: None
  int32_t unitySliceRight;

  /// @brief Field unitySliceScale, offset: 0x3c, size: 0x4, def value: None
  float_t unitySliceScale;

  /// @brief Field unitySliceTop, offset: 0x40, size: 0x4, def value: None
  int32_t unitySliceTop;

  /// @brief Field unityTextOverflowPosition, offset: 0x44, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextOverflowPosition unityTextOverflowPosition;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6055 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RareData, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RareData, cursor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RareData, textOverflow) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RareData, unityBackgroundImageTintColor) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RareData, unityOverflowClipBox) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RareData, unitySliceBottom) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RareData, unitySliceLeft) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RareData, unitySliceRight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RareData, unitySliceScale) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RareData, unitySliceTop) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RareData, unityTextOverflowPosition) == 0x44, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RareData, "UnityEngine.UIElements", "RareData");
