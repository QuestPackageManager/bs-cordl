#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__Dimension_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__ScalableImage_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSheet)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Enum;
}
namespace UnityEngine::UIElements::StyleSheets {
struct Dimension;
}
namespace UnityEngine::UIElements::StyleSheets {
struct ScalableImage;
}
namespace UnityEngine::UIElements {
struct Angle;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace UnityEngine::UIElements {
struct StyleSheet_ImportStruct;
}
namespace UnityEngine::UIElements {
struct StyleSheet_OrderedSelectorType;
}
namespace UnityEngine::UIElements {
struct StyleSheet_RebuildOptions;
}
namespace UnityEngine::UIElements {
struct StyleValueFunction;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
namespace UnityEngine::UIElements {
struct StyleValueKeyword;
}
namespace UnityEngine::UIElements {
struct StyleValueType;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleSheet_OrderedSelectorType;
}
namespace UnityEngine::UIElements {
struct StyleSheet_RebuildOptions;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleSheet_ImportStruct;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheet_OrderedSelectorType);
MARK_VAL_T(::UnityEngine::UIElements::StyleSheet_RebuildOptions);
MARK_REF_T(::UnityEngine::UIElements::StyleSheet*);
MARK_VAL_T(::UnityEngine::UIElements::StyleSheet_ImportStruct);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheet_OrderedSelectorType, "UnityEngine.UIElements", "StyleSheet/OrderedSelectorType");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheet_RebuildOptions, "UnityEngine.UIElements", "StyleSheet/RebuildOptions");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheet*, "UnityEngine.UIElements", "StyleSheet");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheet_ImportStruct, "UnityEngine.UIElements", "StyleSheet/ImportStruct");
// [Flags]
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheet/RebuildOptions
struct CORDL_TYPE StyleSheet_RebuildOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StyleSheet_RebuildOptions_Unwrapped
  enum struct __StyleSheet_RebuildOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Synchronous = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StyleSheet_RebuildOptions_Unwrapped() const noexcept {
    return static_cast<__StyleSheet_RebuildOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSheet_RebuildOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr StyleSheet_RebuildOptions(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::StyleSheet_RebuildOptions const None;

  /// @brief Field Synchronous value: I32(1)
  static ::UnityEngine::UIElements::StyleSheet_RebuildOptions const Synchronous;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5146 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheet_RebuildOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleSheet_RebuildOptions) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheet/ImportStruct
struct CORDL_TYPE StyleSheet_ImportStruct {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSheet_ImportStruct();

  // Ctor Parameters [CppParam { name: "styleSheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: None, comment: None }, CppParam { name: "mediaQueries", ty:
  // "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }]
  constexpr StyleSheet_ImportStruct(::UnityW<::UnityEngine::UIElements::StyleSheet> styleSheet, ::ArrayW<::StringW> mediaQueries) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5147 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field styleSheet, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::StyleSheet> styleSheet;

  /// @brief Field mediaQueries, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::StringW> mediaQueries;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheet_ImportStruct, styleSheet) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet_ImportStruct, mediaQueries) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleSheet_ImportStruct) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheet/OrderedSelectorType
struct CORDL_TYPE StyleSheet_OrderedSelectorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StyleSheet_OrderedSelectorType_Unwrapped
  enum struct __StyleSheet_OrderedSelectorType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_Name = static_cast<int32_t>(0x0),
    __E_Type = static_cast<int32_t>(0x1),
    __E_Class = static_cast<int32_t>(0x2),
    __E_Length = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StyleSheet_OrderedSelectorType_Unwrapped() const noexcept {
    return static_cast<__StyleSheet_OrderedSelectorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSheet_OrderedSelectorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr StyleSheet_OrderedSelectorType(int32_t value__) noexcept;

  /// @brief Field Class value: I32(2)
  static ::UnityEngine::UIElements::StyleSheet_OrderedSelectorType const Class;

  /// @brief Field Length value: I32(3)
  static ::UnityEngine::UIElements::StyleSheet_OrderedSelectorType const Length;

  /// @brief Field Name value: I32(0)
  static ::UnityEngine::UIElements::StyleSheet_OrderedSelectorType const Name;

  /// @brief Field None value: I32(-1)
  static ::UnityEngine::UIElements::StyleSheet_OrderedSelectorType const None;

  /// @brief Field Type value: I32(1)
  static ::UnityEngine::UIElements::StyleSheet_OrderedSelectorType const Type;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5148 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheet_OrderedSelectorType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleSheet_OrderedSelectorType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [HelpURL("UIE-USS")]
// Dependencies System.Collections.Generic.Dictionary`2<TKey, TValue>, UnityEngine.Color, UnityEngine.Object, UnityEngine.ScriptableObject, UnityEngine.UIElements.StyleRule,
// UnityEngine.UIElements.StyleSheet::ImportStruct, UnityEngine.UIElements.StyleSheets.Dimension, UnityEngine.UIElements.StyleSheets.ScalableImage
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheet
class CORDL_TYPE StyleSheet : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using ImportStruct = ::UnityEngine::UIElements::StyleSheet_ImportStruct;

  using OrderedSelectorType = ::UnityEngine::UIElements::StyleSheet_OrderedSelectorType;

  using RebuildOptions = ::UnityEngine::UIElements::StyleSheet_RebuildOptions;

  /// @brief Field assets, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_assets, put = __cordl_internal_set_assets)) ::ArrayW<::UnityW<::UnityEngine::Object>> assets;

  /// @brief Field colors, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_colors, put = __cordl_internal_set_colors)) ::ArrayW<::UnityEngine::Color> colors;

  __declspec(property(get = get_contentHash, put = set_contentHash)) int32_t contentHash;

  /// @brief Field dimensions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_dimensions, put = __cordl_internal_set_dimensions)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension> dimensions;

  /// @brief Field firstRootSelector, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_firstRootSelector, put = __cordl_internal_set_firstRootSelector)) ::UnityEngine::UIElements::StyleComplexSelector* firstRootSelector;

  /// @brief Field firstWildCardSelector, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_firstWildCardSelector, put = __cordl_internal_set_firstWildCardSelector)) ::UnityEngine::UIElements::StyleComplexSelector* firstWildCardSelector;

  __declspec(property(get = get_flattenedRecursiveImports)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* flattenedRecursiveImports;

  /// @brief Field floats, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_floats, put = __cordl_internal_set_floats)) ::ArrayW<float_t> floats;

  __declspec(property(get = get_importedWithErrors, put = set_importedWithErrors)) bool importedWithErrors;

  __declspec(property(get = get_importedWithWarnings, put = set_importedWithWarnings)) bool importedWithWarnings;

  /// @brief Field imports, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_imports, put = __cordl_internal_set_imports)) ::ArrayW<::UnityEngine::UIElements::StyleSheet_ImportStruct> imports;

  /// @brief [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  __declspec(property(get = get_isDefaultStyleSheet, put = set_isDefaultStyleSheet)) bool isDefaultStyleSheet;

  /// @brief Field m_ContentHash, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ContentHash, put = __cordl_internal_set_m_ContentHash)) int32_t m_ContentHash;

  /// @brief Field m_FlattenedImportedStyleSheets, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FlattenedImportedStyleSheets,
                      put =
                          __cordl_internal_set_m_FlattenedImportedStyleSheets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* m_FlattenedImportedStyleSheets;

  /// @brief Field m_ImportedWithErrors, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ImportedWithErrors, put = __cordl_internal_set_m_ImportedWithErrors)) bool m_ImportedWithErrors;

  /// @brief Field m_ImportedWithWarnings, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ImportedWithWarnings, put = __cordl_internal_set_m_ImportedWithWarnings)) bool m_ImportedWithWarnings;

  /// @brief Field m_IsDefaultStyleSheet, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsDefaultStyleSheet, put = __cordl_internal_set_m_IsDefaultStyleSheet)) bool m_IsDefaultStyleSheet;

  /// @brief Field m_RequiresRebuild, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RequiresRebuild, put = __cordl_internal_set_m_RequiresRebuild)) bool m_RequiresRebuild;

  /// @brief Field m_Rules, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Rules, put = __cordl_internal_set_m_Rules)) ::ArrayW<::UnityEngine::UIElements::StyleRule*> m_Rules;

  /// @brief Field m_Tables, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Tables,
                      put = __cordl_internal_set_m_Tables)) ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*>
      m_Tables;

  /// @brief Field nonEmptyTablesMask, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_nonEmptyTablesMask, put = __cordl_internal_set_nonEmptyTablesMask)) int32_t nonEmptyTablesMask;

  __declspec(property(get = get_rules)) ::ArrayW<::UnityEngine::UIElements::StyleRule*> rules;

  /// @brief Field scalableImages, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_scalableImages, put = __cordl_internal_set_scalableImages)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage> scalableImages;

  /// @brief Field strings, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_strings, put = __cordl_internal_set_strings)) ::ArrayW<::StringW> strings;

  __declspec(property(get = get_tables)) ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*> tables;

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method AddRule, addr 0x71166b4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleRule* AddRule();

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method AddRule, addr 0x71167a8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleRule* AddRule(::StringW selector);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method AddRuleAtIndex, addr 0x71166c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleRule* AddRuleAtIndex(int32_t index);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method AddRuleAtIndex, addr 0x71166c8, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleRule* AddRuleAtIndex(int32_t index, ::StringW selector);

  /// @brief Method AddValue, addr 0x7116a28, size 0x18, virtual false, abstract: false, final false
  inline int32_t AddValue(::UnityEngine::UIElements::StyleValueFunction function);

  /// @brief Method AddValue, addr 0x7116a10, size 0x18, virtual false, abstract: false, final false
  inline int32_t AddValue(::UnityEngine::UIElements::StyleValueKeyword keyword);

  /// @brief Method AddValue, addr 0x7116be8, size 0x60, virtual false, abstract: false, final false
  inline int32_t AddValue(::StringW value);

  /// @brief Method AddValue, addr 0x7116ca8, size 0x94, virtual false, abstract: false, final false
  inline int32_t AddValue(::System::Enum* value);

  /// @brief Method AddValue, addr 0x7116b00, size 0x80, virtual false, abstract: false, final false
  inline int32_t AddValue(::UnityEngine::Color value);

  /// @brief Method AddValue, addr 0x7116c48, size 0x60, virtual false, abstract: false, final false
  inline int32_t AddValue(::UnityEngine::Object* value);

  /// @brief Method AddValue, addr 0x7116aa0, size 0x60, virtual false, abstract: false, final false
  inline int32_t AddValue(::UnityEngine::UIElements::StyleSheets::Dimension value);

  /// @brief Method AddValue, addr 0x7116b80, size 0x68, virtual false, abstract: false, final false
  inline int32_t AddValue(::UnityEngine::UIElements::StyleSheets::ScalableImage value);

  /// @brief Method AddValue, addr 0x7116a40, size 0x60, virtual false, abstract: false, final false
  inline int32_t AddValue(float_t value);

  /// @brief Method AddValueToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline int32_t AddValueToArray(::by_ref<::ArrayW<T>> array, T value);

  /// @brief Method CheckAccess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T CheckAccess(::ArrayW<T> list, ::UnityEngine::UIElements::StyleValueType type, ::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method FlattenImportedStyleSheetsRecursive, addr 0x71164ec, size 0x7c, virtual false, abstract: false, final false
  inline void FlattenImportedStyleSheetsRecursive();

  /// @brief Method FlattenImportedStyleSheetsRecursive, addr 0x7116568, size 0x14c, virtual false, abstract: false, final false
  inline void FlattenImportedStyleSheetsRecursive(::UnityEngine::UIElements::StyleSheet* sheet);

  /// @brief Method InsertValueInArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline int32_t InsertValueInArray(::by_ref<::ArrayW<T>> array, int32_t index, T value);

  /// @brief Method MarkAsChanged, addr 0x7116958, size 0xa8, virtual false, abstract: false, final false
  inline void MarkAsChanged();

  static inline ::UnityEngine::UIElements::StyleSheet* New_ctor();

  /// @brief Method OnEnable, addr 0x7116068, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ReadAngle, addr 0x7117990, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Angle ReadAngle(::UnityEngine::UIElements::StyleValueHandle handle);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method ReadAssetReference, addr 0x711734c, size 0x64, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> ReadAssetReference(::UnityEngine::UIElements::StyleValueHandle handle);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method ReadColor, addr 0x7116fb0, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color ReadColor(::UnityEngine::UIElements::StyleValueHandle handle);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method ReadDimension, addr 0x7116e0c, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Dimension ReadDimension(::UnityEngine::UIElements::StyleValueHandle handle);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method ReadEnum, addr 0x7117094, size 0x64, virtual false, abstract: false, final false
  inline ::StringW ReadEnum(::UnityEngine::UIElements::StyleValueHandle handle);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method ReadEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEnum>
    requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
  inline TEnum ReadEnum(::UnityEngine::UIElements::StyleValueHandle handle);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method ReadFloat, addr 0x7116d58, size 0xb4, virtual false, abstract: false, final false
  inline float_t ReadFloat(::UnityEngine::UIElements::StyleValueHandle handle);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method ReadFunction, addr 0x71174a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleValueFunction ReadFunction(::UnityEngine::UIElements::StyleValueHandle handle);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method ReadFunctionName, addr 0x71174c4, size 0x1b8, virtual false, abstract: false, final false
  inline ::StringW ReadFunctionName(::UnityEngine::UIElements::StyleValueHandle handle);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method ReadKeyword, addr 0x7116d3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleValueKeyword ReadKeyword(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method ReadLength, addr 0x7117870, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length ReadLength(::UnityEngine::UIElements::StyleValueHandle handle);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method ReadMissingAssetReferenceUrl, addr 0x71173b0, size 0x64, virtual false, abstract: false, final false
  inline ::StringW ReadMissingAssetReferenceUrl(::UnityEngine::UIElements::StyleValueHandle handle);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method ReadResourcePath, addr 0x71172e8, size 0x64, virtual false, abstract: false, final false
  inline ::StringW ReadResourcePath(::UnityEngine::UIElements::StyleValueHandle handle);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method ReadScalableImage, addr 0x711767c, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::ScalableImage ReadScalableImage(::UnityEngine::UIElements::StyleValueHandle handle);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method ReadString, addr 0x71170f8, size 0x64, virtual false, abstract: false, final false
  inline ::StringW ReadString(::UnityEngine::UIElements::StyleValueHandle handle);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method ReadStylePropertyName, addr 0x711774c, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StylePropertyName ReadStylePropertyName(::UnityEngine::UIElements::StyleValueHandle handle);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method ReadTimeValue, addr 0x7117b10, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TimeValue ReadTimeValue(::UnityEngine::UIElements::StyleValueHandle handle);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method ReadVariable, addr 0x71171f0, size 0x64, virtual false, abstract: false, final false
  inline ::StringW ReadVariable(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method RebuildIfNecessary, addr 0x7116a00, size 0x10, virtual false, abstract: false, final false
  inline void RebuildIfNecessary();

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method RemoveRule, addr 0x71167b4, size 0xbc, virtual false, abstract: false, final false
  inline bool RemoveRule(::UnityEngine::UIElements::StyleRule* rule);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method RemoveRule, addr 0x7116870, size 0xe0, virtual false, abstract: false, final false
  inline void RemoveRule(int32_t ruleIndex);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method RequestRebuild, addr 0x71157e4, size 0x44, virtual false, abstract: false, final false
  inline void RequestRebuild(::UnityEngine::UIElements::StyleSheet_RebuildOptions options);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method SetRules, addr 0x7116950, size 0x8, virtual false, abstract: false, final false
  inline void SetRules(::ArrayW<::UnityEngine::UIElements::StyleRule*> newRules);

  /// @brief Method SetupReferences, addr 0x711606c, size 0x480, virtual false, abstract: false, final false
  inline void SetupReferences();

  /// @brief Method TryCheckAccess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryCheckAccess(::ArrayW<T> list, ::UnityEngine::UIElements::StyleValueType type, ::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<T> value);

  /// @brief Method TryReadAngle, addr 0x7117a3c, size 0xd4, virtual false, abstract: false, final false
  inline bool TryReadAngle(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::UIElements::Angle> value);

  /// @brief Method TryReadAssetReference, addr 0x7115144, size 0x94, virtual false, abstract: false, final false
  inline bool TryReadAssetReference(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::Object*> value);

  /// @brief Method TryReadColor, addr 0x71153d0, size 0x120, virtual false, abstract: false, final false
  inline bool TryReadColor(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::Color> value);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method TryReadDimension, addr 0x7116ec0, size 0xf0, virtual false, abstract: false, final false
  inline bool TryReadDimension(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::UIElements::StyleSheets::Dimension> value);

  /// @brief Method TryReadEnum, addr 0x711715c, size 0x94, virtual false, abstract: false, final false
  inline bool TryReadEnum(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::StringW> value);

  /// @brief Method TryReadEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEnum>
    requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
  inline bool TryReadEnum(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<TEnum> value);

  /// @brief Method TryReadFloat, addr 0x711526c, size 0xd0, virtual false, abstract: false, final false
  inline bool TryReadFloat(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<float_t> value);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method TryReadFunction, addr 0x71174b0, size 0x14, virtual false, abstract: false, final false
  inline bool TryReadFunction(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::UIElements::StyleValueFunction> value);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method TryReadKeyword, addr 0x7116d44, size 0x14, virtual false, abstract: false, final false
  inline bool TryReadKeyword(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::UIElements::StyleValueKeyword> value);

  /// @brief Method TryReadLength, addr 0x71178ec, size 0xa4, virtual false, abstract: false, final false
  inline bool TryReadLength(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::UIElements::Length> value);

  /// @brief Method TryReadMissingAssetReferenceUrl, addr 0x7117414, size 0x94, virtual false, abstract: false, final false
  inline bool TryReadMissingAssetReferenceUrl(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::StringW> value);

  /// @brief Method TryReadResourcePath, addr 0x71151d8, size 0x94, virtual false, abstract: false, final false
  inline bool TryReadResourcePath(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::StringW> value);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method TryReadScalableImage, addr 0x71176e0, size 0x6c, virtual false, abstract: false, final false
  inline bool TryReadScalableImage(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::UIElements::StyleSheets::ScalableImage> value);

  /// @brief Method TryReadString, addr 0x711533c, size 0x94, virtual false, abstract: false, final false
  inline bool TryReadString(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::StringW> value);

  /// @brief Method TryReadStylePropertyName, addr 0x71177c8, size 0xa8, virtual false, abstract: false, final false
  inline bool TryReadStylePropertyName(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::UIElements::StylePropertyName> value);

  /// @brief Method TryReadTimeValue, addr 0x7117b38, size 0x5c, virtual false, abstract: false, final false
  inline bool TryReadTimeValue(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::UIElements::TimeValue> value);

  /// @brief Method TryReadVariable, addr 0x7117254, size 0x94, virtual false, abstract: false, final false
  inline bool TryReadVariable(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::StringW> value);

  /// @brief Method WriteAngle, addr 0x71181a4, size 0xd0, virtual false, abstract: false, final false
  inline void WriteAngle(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::UIElements::Angle value);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method WriteAssetReference, addr 0x7117e90, size 0x9c, virtual false, abstract: false, final false
  inline void WriteAssetReference(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::Object* value);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method WriteColor, addr 0x7117c74, size 0x6c, virtual false, abstract: false, final false
  inline void WriteColor(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::Color color);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method WriteCommaSeparator, addr 0x71180cc, size 0x10, virtual false, abstract: false, final false
  inline void WriteCommaSeparator(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method WriteDimension, addr 0x7117c08, size 0x6c, virtual false, abstract: false, final false
  inline void WriteDimension(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::UIElements::StyleSheets::Dimension dimension);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method WriteEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEnum> inline void WriteEnum(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, TEnum value);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method WriteEnumAsString, addr 0x7117d4c, size 0x6c, virtual false, abstract: false, final false
  inline void WriteEnumAsString(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::StringW valueStr);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method WriteFloat, addr 0x7117ba0, size 0x68, virtual false, abstract: false, final false
  inline void WriteFloat(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, float_t value);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method WriteFunction, addr 0x7117f98, size 0xc, virtual false, abstract: false, final false
  inline void WriteFunction(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::UIElements::StyleValueFunction function);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method WriteKeyword, addr 0x7117b94, size 0xc, virtual false, abstract: false, final false
  inline void WriteKeyword(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::UIElements::StyleValueKeyword value);

  /// @brief Method WriteLength, addr 0x71180dc, size 0xc8, virtual false, abstract: false, final false
  inline void WriteLength(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::UIElements::Length value);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method WriteMissingAssetReferenceUrl, addr 0x7117f2c, size 0x6c, virtual false, abstract: false, final false
  inline void WriteMissingAssetReferenceUrl(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::StringW assetReference);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method WriteResourcePath, addr 0x7117e24, size 0x6c, virtual false, abstract: false, final false
  inline void WriteResourcePath(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::StringW resourcePath);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method WriteScalableImage, addr 0x7117fa4, size 0x70, virtual false, abstract: false, final false
  inline void WriteScalableImage(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::UIElements::StyleSheets::ScalableImage scalableImage);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method WriteString, addr 0x7117ce0, size 0x6c, virtual false, abstract: false, final false
  inline void WriteString(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::StringW value);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method WriteStylePropertyName, addr 0x7118014, size 0xb8, virtual false, abstract: false, final false
  inline void WriteStylePropertyName(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::UIElements::StylePropertyName propertyName);

  /// @brief Method WriteTimeValue, addr 0x7118274, size 0x7c, virtual false, abstract: false, final false
  inline void WriteTimeValue(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::UIElements::TimeValue value);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method WriteVariable, addr 0x7117db8, size 0x6c, virtual false, abstract: false, final false
  inline void WriteVariable(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::StringW variableName);

  constexpr ::ArrayW<::UnityW<::UnityEngine::Object>> const& __cordl_internal_get_assets() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Object>>& __cordl_internal_get_assets();

  constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_colors() const;

  constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_colors();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension> const& __cordl_internal_get_dimensions() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension>& __cordl_internal_get_dimensions();

  constexpr ::UnityEngine::UIElements::StyleComplexSelector* const& __cordl_internal_get_firstRootSelector() const;

  constexpr ::UnityEngine::UIElements::StyleComplexSelector*& __cordl_internal_get_firstRootSelector();

  constexpr ::UnityEngine::UIElements::StyleComplexSelector* const& __cordl_internal_get_firstWildCardSelector() const;

  constexpr ::UnityEngine::UIElements::StyleComplexSelector*& __cordl_internal_get_firstWildCardSelector();

  constexpr ::ArrayW<float_t> const& __cordl_internal_get_floats() const;

  constexpr ::ArrayW<float_t>& __cordl_internal_get_floats();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheet_ImportStruct> const& __cordl_internal_get_imports() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheet_ImportStruct>& __cordl_internal_get_imports();

  constexpr int32_t const& __cordl_internal_get_m_ContentHash() const;

  constexpr int32_t& __cordl_internal_get_m_ContentHash();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* const& __cordl_internal_get_m_FlattenedImportedStyleSheets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*& __cordl_internal_get_m_FlattenedImportedStyleSheets();

  constexpr bool const& __cordl_internal_get_m_ImportedWithErrors() const;

  constexpr bool& __cordl_internal_get_m_ImportedWithErrors();

  constexpr bool const& __cordl_internal_get_m_ImportedWithWarnings() const;

  constexpr bool& __cordl_internal_get_m_ImportedWithWarnings();

  constexpr bool const& __cordl_internal_get_m_IsDefaultStyleSheet() const;

  constexpr bool& __cordl_internal_get_m_IsDefaultStyleSheet();

  constexpr bool const& __cordl_internal_get_m_RequiresRebuild() const;

  constexpr bool& __cordl_internal_get_m_RequiresRebuild();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleRule*> const& __cordl_internal_get_m_Rules() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleRule*>& __cordl_internal_get_m_Rules();

  constexpr ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*> const& __cordl_internal_get_m_Tables() const;

  constexpr ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*>& __cordl_internal_get_m_Tables();

  constexpr int32_t const& __cordl_internal_get_nonEmptyTablesMask() const;

  constexpr int32_t& __cordl_internal_get_nonEmptyTablesMask();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage> const& __cordl_internal_get_scalableImages() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage>& __cordl_internal_get_scalableImages();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get_strings() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get_strings();

  constexpr void __cordl_internal_set_assets(::ArrayW<::UnityW<::UnityEngine::Object>> value);

  constexpr void __cordl_internal_set_colors(::ArrayW<::UnityEngine::Color> value);

  constexpr void __cordl_internal_set_dimensions(::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension> value);

  constexpr void __cordl_internal_set_firstRootSelector(::UnityEngine::UIElements::StyleComplexSelector* value);

  constexpr void __cordl_internal_set_firstWildCardSelector(::UnityEngine::UIElements::StyleComplexSelector* value);

  constexpr void __cordl_internal_set_floats(::ArrayW<float_t> value);

  constexpr void __cordl_internal_set_imports(::ArrayW<::UnityEngine::UIElements::StyleSheet_ImportStruct> value);

  constexpr void __cordl_internal_set_m_ContentHash(int32_t value);

  constexpr void __cordl_internal_set_m_FlattenedImportedStyleSheets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* value);

  constexpr void __cordl_internal_set_m_ImportedWithErrors(bool value);

  constexpr void __cordl_internal_set_m_ImportedWithWarnings(bool value);

  constexpr void __cordl_internal_set_m_IsDefaultStyleSheet(bool value);

  constexpr void __cordl_internal_set_m_RequiresRebuild(bool value);

  constexpr void __cordl_internal_set_m_Rules(::ArrayW<::UnityEngine::UIElements::StyleRule*> value);

  constexpr void __cordl_internal_set_m_Tables(::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*> value);

  constexpr void __cordl_internal_set_nonEmptyTablesMask(int32_t value);

  constexpr void __cordl_internal_set_scalableImages(::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage> value);

  constexpr void __cordl_internal_set_strings(::ArrayW<::StringW> value);

  /// @brief Method .ctor, addr 0x71182f0, size 0x424, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_contentHash, addr 0x7115c54, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_contentHash();

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method get_flattenedRecursiveImports, addr 0x7115c4c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* get_flattenedRecursiveImports();

  /// @brief Method get_importedWithErrors, addr 0x7115c24, size 0x8, virtual false, abstract: false, final false
  inline bool get_importedWithErrors();

  /// @brief Method get_importedWithWarnings, addr 0x7115c34, size 0x8, virtual false, abstract: false, final false
  inline bool get_importedWithWarnings();

  /// @brief Method get_isDefaultStyleSheet, addr 0x7115f48, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDefaultStyleSheet();

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method get_rules, addr 0x7115c44, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::StyleRule*> get_rules();

  /// @brief Method get_tables, addr 0x7115c64, size 0x2e4, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*> get_tables();

  /// @brief Method set_contentHash, addr 0x7115c5c, size 0x8, virtual false, abstract: false, final false
  inline void set_contentHash(int32_t value);

  /// @brief Method set_importedWithErrors, addr 0x7115c2c, size 0x8, virtual false, abstract: false, final false
  inline void set_importedWithErrors(bool value);

  /// @brief Method set_importedWithWarnings, addr 0x7115c3c, size 0x8, virtual false, abstract: false, final false
  inline void set_importedWithWarnings(bool value);

  /// @brief Method set_isDefaultStyleSheet, addr 0x7115f50, size 0x118, virtual false, abstract: false, final false
  inline void set_isDefaultStyleSheet(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSheet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleSheet", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleSheet(StyleSheet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleSheet", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleSheet(StyleSheet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5149 };

  /// @brief Field m_RequiresRebuild, offset: 0x18, size: 0x1, def value: None
  bool ___m_RequiresRebuild;

  /// [SerializeField]
  /// @brief Field m_ImportedWithErrors, offset: 0x19, size: 0x1, def value: None
  bool ___m_ImportedWithErrors;

  /// [SerializeField]
  /// @brief Field m_ImportedWithWarnings, offset: 0x1a, size: 0x1, def value: None
  bool ___m_ImportedWithWarnings;

  /// [SerializeField]
  /// @brief Field m_Rules, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleRule*> ___m_Rules;

  /// [SerializeField]
  /// @brief Field floats, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<float_t> ___floats;

  /// [SerializeField]
  /// @brief Field dimensions, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension> ___dimensions;

  /// [SerializeField]
  /// @brief Field colors, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color> ___colors;

  /// [SerializeField]
  /// @brief Field strings, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::StringW> ___strings;

  /// [SerializeField]
  /// @brief Field assets, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Object>> ___assets;

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// [SerializeField]
  /// @brief Field imports, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleSheet_ImportStruct> ___imports;

  /// [SerializeField]
  /// @brief Field m_FlattenedImportedStyleSheets, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* ___m_FlattenedImportedStyleSheets;

  /// [SerializeField]
  /// @brief Field m_ContentHash, offset: 0x60, size: 0x4, def value: None
  int32_t ___m_ContentHash;

  /// [SerializeField]
  /// @brief Field scalableImages, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage> ___scalableImages;

  /// @brief Field m_Tables, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*> ___m_Tables;

  /// @brief Field nonEmptyTablesMask, offset: 0x78, size: 0x4, def value: None
  int32_t ___nonEmptyTablesMask;

  /// @brief Field firstRootSelector, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleComplexSelector* ___firstRootSelector;

  /// @brief Field firstWildCardSelector, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleComplexSelector* ___firstWildCardSelector;

  /// @brief Field m_IsDefaultStyleSheet, offset: 0x90, size: 0x1, def value: None
  bool ___m_IsDefaultStyleSheet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_RequiresRebuild) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_ImportedWithErrors) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_ImportedWithWarnings) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_Rules) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___floats) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___dimensions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___colors) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___strings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___assets) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___imports) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_FlattenedImportedStyleSheets) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_ContentHash) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___scalableImages) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_Tables) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___nonEmptyTablesMask) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___firstRootSelector) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___firstWildCardSelector) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_IsDefaultStyleSheet) == 0x90, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleSheet) == 0x98, "Size mismatch!");

} // namespace UnityEngine::UIElements
