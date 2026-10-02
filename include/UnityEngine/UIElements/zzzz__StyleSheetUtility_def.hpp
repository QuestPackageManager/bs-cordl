#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheetUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StyleSheetUtility)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Enum;
}
namespace UnityEngine::UIElements::StyleSheets {
struct Dimension_Unit;
}
namespace UnityEngine::UIElements::StyleSheets {
struct Dimension;
}
namespace UnityEngine::UIElements {
struct AngleUnit;
}
namespace UnityEngine::UIElements {
struct Angle;
}
namespace UnityEngine::UIElements {
struct LengthUnit;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
class StyleProperty;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct TimeUnit;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleSheetUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::StyleSheetUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheetUtility*, "UnityEngine.UIElements", "StyleSheetUtility");
// [Extension]
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheetUtility
class CORDL_TYPE StyleSheetUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field SpecialEnumToStringCases, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SpecialEnumToStringCases,
                      put = setStaticF_SpecialEnumToStringCases)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* SpecialEnumToStringCases;

  /// @brief Field SpecialStringToEnumCases, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SpecialStringToEnumCases,
                      put = setStaticF_SpecialStringToEnumCases)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* SpecialStringToEnumCases;

  /// @brief Method ConvertCamelToDash, addr 0x71192e0, size 0x130, virtual false, abstract: false, final false
  static inline ::StringW ConvertCamelToDash(::StringW camel);

  /// @brief Method ConvertDashToHungarian, addr 0x7119410, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW ConvertDashToHungarian(::StringW dash);

  /// @brief Method ConvertDashToUpperNoSpace, addr 0x7119470, size 0x328, virtual false, abstract: false, final false
  static inline ::StringW ConvertDashToUpperNoSpace(::StringW dash, bool firstCase, bool addSpace);

  /// @brief Method CreateInstanceWithHideFlags, addr 0x7118714, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::UIElements::StyleSheet> CreateInstanceWithHideFlags();

  /// @brief Method GetDimensionUnitExportString, addr 0x7119798, size 0x20c, virtual false, abstract: false, final false
  static inline ::StringW GetDimensionUnitExportString(::UnityEngine::UIElements::StyleSheets::Dimension_Unit unit);

  /// @brief Method GetEnumExportString, addr 0x7119268, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW GetEnumExportString(::System::Enum* value);

  /// [Extension]
  /// @brief Method ToDimension, addr 0x71188f8, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleSheets::Dimension ToDimension(::UnityEngine::UIElements::Angle angle);

  /// [Extension]
  /// @brief Method ToDimension, addr 0x7118778, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleSheets::Dimension ToDimension(::UnityEngine::UIElements::Length length);

  /// [Extension]
  /// @brief Method ToDimension, addr 0x7118aa4, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleSheets::Dimension ToDimension(::UnityEngine::UIElements::TimeValue timeValue);

  /// [Extension]
  /// @brief Method ToDimensionUnit, addr 0x7118a1c, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleSheets::Dimension_Unit ToDimensionUnit(::UnityEngine::UIElements::AngleUnit unit);

  /// [Extension]
  /// @brief Method ToDimensionUnit, addr 0x7118864, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleSheets::Dimension_Unit ToDimensionUnit(::UnityEngine::UIElements::LengthUnit unit);

  /// [Extension]
  /// @brief Method ToDimensionUnit, addr 0x7118b08, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleSheets::Dimension_Unit ToDimensionUnit(::UnityEngine::UIElements::TimeUnit unit);

  /// @brief Method TransferStylePropertyHandles, addr 0x7118b9c, size 0x6bc, virtual false, abstract: false, final false
  static inline void TransferStylePropertyHandles(::UnityEngine::UIElements::StyleSheet* fromStyleSheet, ::UnityEngine::UIElements::StyleProperty* fromStyleProperty,
                                                  ::UnityEngine::UIElements::StyleSheet* toStyleSheet, ::UnityEngine::UIElements::StyleProperty* toStyleProperty);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_SpecialEnumToStringCases();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_SpecialStringToEnumCases();

  static inline void setStaticF_SpecialEnumToStringCases(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  static inline void setStaticF_SpecialStringToEnumCases(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSheetUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleSheetUtility", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleSheetUtility(StyleSheetUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleSheetUtility", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleSheetUtility(StyleSheetUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5150 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StyleSheetUtility) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
