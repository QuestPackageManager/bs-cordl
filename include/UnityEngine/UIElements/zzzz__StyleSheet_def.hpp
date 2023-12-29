#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSheet)
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements {
struct StyleValueFunction;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
struct StyleValueType;
}
namespace UnityEngine::UIElements {
struct StyleValueKeyword;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine::UIElements::StyleSheets {
struct ScalableImage;
}
namespace UnityEngine::UIElements::StyleSheets {
struct Dimension;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct __StyleSheet__ImportStruct;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct __StyleSheet__ImportStruct;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheet);
MARK_VAL_T(::UnityEngine::UIElements::__StyleSheet__ImportStruct);
// Type: ::ImportStruct
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7364))
// CS Name: ::StyleSheet::ImportStruct
struct CORDL_TYPE __StyleSheet__ImportStruct {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "styleSheet", ty: "::UnityEngine::UIElements::StyleSheet*", modifiers: "", def_value: None }, CppParam { name: "mediaQueries", ty:
  // "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
  constexpr __StyleSheet__ImportStruct(::UnityEngine::UIElements::StyleSheet* styleSheet, ::ArrayW<::StringW, ::Array<::StringW>*> mediaQueries) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StyleSheet__ImportStruct();

  /// @brief Field styleSheet, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleSheet* styleSheet;

  /// @brief Field mediaQueries, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> mediaQueries;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StyleSheet__ImportStruct, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StyleSheet__ImportStruct, styleSheet) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StyleSheet__ImportStruct, mediaQueries) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleSheet
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7365))
// CS Name: ::UnityEngine.UIElements::StyleSheet*
class CORDL_TYPE StyleSheet : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using ImportStruct = ::UnityEngine::UIElements::__StyleSheet__ImportStruct;

  /// @brief Field m_ImportedWithErrors, offset 0x18, size 0x1
  __declspec(property(get = __get_m_ImportedWithErrors, put = __set_m_ImportedWithErrors)) bool m_ImportedWithErrors;

  /// @brief Field m_ImportedWithWarnings, offset 0x19, size 0x1
  __declspec(property(get = __get_m_ImportedWithWarnings, put = __set_m_ImportedWithWarnings)) bool m_ImportedWithWarnings;

  /// @brief Field m_Rules, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Rules, put = __set_m_Rules))::ArrayW<::UnityEngine::UIElements::StyleRule*, ::Array<::UnityEngine::UIElements::StyleRule*>*> m_Rules;

  /// @brief Field m_ComplexSelectors, offset 0x28, size 0x8
  __declspec(property(get = __get_m_ComplexSelectors,
                      put = __set_m_ComplexSelectors))::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*, ::Array<::UnityEngine::UIElements::StyleComplexSelector*>*> m_ComplexSelectors;

  /// @brief Field floats, offset 0x30, size 0x8
  __declspec(property(get = __get_floats, put = __set_floats))::ArrayW<float_t, ::Array<float_t>*> floats;

  /// @brief Field dimensions, offset 0x38, size 0x8
  __declspec(property(get = __get_dimensions,
                      put = __set_dimensions))::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension, ::Array<::UnityEngine::UIElements::StyleSheets::Dimension>*> dimensions;

  /// @brief Field colors, offset 0x40, size 0x8
  __declspec(property(get = __get_colors, put = __set_colors))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors;

  /// @brief Field strings, offset 0x48, size 0x8
  __declspec(property(get = __get_strings, put = __set_strings))::ArrayW<::StringW, ::Array<::StringW>*> strings;

  /// @brief Field assets, offset 0x50, size 0x8
  __declspec(property(get = __get_assets, put = __set_assets))::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> assets;

  /// @brief Field imports, offset 0x58, size 0x8
  __declspec(property(get = __get_imports,
                      put = __set_imports))::ArrayW<::UnityEngine::UIElements::__StyleSheet__ImportStruct, ::Array<::UnityEngine::UIElements::__StyleSheet__ImportStruct>*> imports;

  /// @brief Field m_FlattenedImportedStyleSheets, offset 0x60, size 0x8
  __declspec(property(get = __get_m_FlattenedImportedStyleSheets,
                      put = __set_m_FlattenedImportedStyleSheets))::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* m_FlattenedImportedStyleSheets;

  /// @brief Field m_ContentHash, offset 0x68, size 0x4
  __declspec(property(get = __get_m_ContentHash, put = __set_m_ContentHash)) int32_t m_ContentHash;

  /// @brief Field scalableImages, offset 0x70, size 0x8
  __declspec(property(get = __get_scalableImages,
                      put = __set_scalableImages))::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage, ::Array<::UnityEngine::UIElements::StyleSheets::ScalableImage>*> scalableImages;

  /// @brief Field orderedNameSelectors, offset 0x78, size 0x8
  __declspec(property(get = __get_orderedNameSelectors,
                      put = __set_orderedNameSelectors))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>* orderedNameSelectors;

  /// @brief Field orderedTypeSelectors, offset 0x80, size 0x8
  __declspec(property(get = __get_orderedTypeSelectors,
                      put = __set_orderedTypeSelectors))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>* orderedTypeSelectors;

  /// @brief Field orderedClassSelectors, offset 0x88, size 0x8
  __declspec(property(get = __get_orderedClassSelectors,
                      put = __set_orderedClassSelectors))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>* orderedClassSelectors;

  /// @brief Field m_IsDefaultStyleSheet, offset 0x90, size 0x1
  __declspec(property(get = __get_m_IsDefaultStyleSheet, put = __set_m_IsDefaultStyleSheet)) bool m_IsDefaultStyleSheet;

  /// @brief Field kCustomPropertyMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kCustomPropertyMarker, put = setStaticF_kCustomPropertyMarker))::StringW kCustomPropertyMarker;

  __declspec(property(get = get_importedWithErrors, put = set_importedWithErrors)) bool importedWithErrors;

  __declspec(property(get = get_importedWithWarnings, put = set_importedWithWarnings)) bool importedWithWarnings;

  __declspec(property(get = get_rules, put = set_rules))::ArrayW<::UnityEngine::UIElements::StyleRule*, ::Array<::UnityEngine::UIElements::StyleRule*>*> rules;

  __declspec(property(get = get_complexSelectors,
                      put = set_complexSelectors))::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*, ::Array<::UnityEngine::UIElements::StyleComplexSelector*>*> complexSelectors;

  __declspec(property(get = get_flattenedRecursiveImports))::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* flattenedRecursiveImports;

  __declspec(property(get = get_contentHash, put = set_contentHash)) int32_t contentHash;

  __declspec(property(get = get_isDefaultStyleSheet, put = set_isDefaultStyleSheet)) bool isDefaultStyleSheet;

  constexpr bool& __get_m_ImportedWithErrors();

  constexpr bool const& __get_m_ImportedWithErrors() const;

  constexpr void __set_m_ImportedWithErrors(bool value);

  constexpr bool& __get_m_ImportedWithWarnings();

  constexpr bool const& __get_m_ImportedWithWarnings() const;

  constexpr void __set_m_ImportedWithWarnings(bool value);

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleRule*, ::Array<::UnityEngine::UIElements::StyleRule*>*>& __get_m_Rules();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleRule*, ::Array<::UnityEngine::UIElements::StyleRule*>*> const& __get_m_Rules() const;

  constexpr void __set_m_Rules(::ArrayW<::UnityEngine::UIElements::StyleRule*, ::Array<::UnityEngine::UIElements::StyleRule*>*> value);

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*, ::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>& __get_m_ComplexSelectors();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*, ::Array<::UnityEngine::UIElements::StyleComplexSelector*>*> const& __get_m_ComplexSelectors() const;

  constexpr void __set_m_ComplexSelectors(::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*, ::Array<::UnityEngine::UIElements::StyleComplexSelector*>*> value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get_floats();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get_floats() const;

  constexpr void __set_floats(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension, ::Array<::UnityEngine::UIElements::StyleSheets::Dimension>*>& __get_dimensions();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension, ::Array<::UnityEngine::UIElements::StyleSheets::Dimension>*> const& __get_dimensions() const;

  constexpr void __set_dimensions(::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension, ::Array<::UnityEngine::UIElements::StyleSheets::Dimension>*> value);

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& __get_colors();

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& __get_colors() const;

  constexpr void __set_colors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_strings();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_strings() const;

  constexpr void __set_strings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>& __get_assets();

  constexpr ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> const& __get_assets() const;

  constexpr void __set_assets(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> value);

  constexpr ::ArrayW<::UnityEngine::UIElements::__StyleSheet__ImportStruct, ::Array<::UnityEngine::UIElements::__StyleSheet__ImportStruct>*>& __get_imports();

  constexpr ::ArrayW<::UnityEngine::UIElements::__StyleSheet__ImportStruct, ::Array<::UnityEngine::UIElements::__StyleSheet__ImportStruct>*> const& __get_imports() const;

  constexpr void __set_imports(::ArrayW<::UnityEngine::UIElements::__StyleSheet__ImportStruct, ::Array<::UnityEngine::UIElements::__StyleSheet__ImportStruct>*> value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*& __get_m_FlattenedImportedStyleSheets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*> const& __get_m_FlattenedImportedStyleSheets() const;

  constexpr void __set_m_FlattenedImportedStyleSheets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* value);

  constexpr int32_t& __get_m_ContentHash();

  constexpr int32_t const& __get_m_ContentHash() const;

  constexpr void __set_m_ContentHash(int32_t value);

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage, ::Array<::UnityEngine::UIElements::StyleSheets::ScalableImage>*>& __get_scalableImages();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage, ::Array<::UnityEngine::UIElements::StyleSheets::ScalableImage>*> const& __get_scalableImages() const;

  constexpr void __set_scalableImages(::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage, ::Array<::UnityEngine::UIElements::StyleSheets::ScalableImage>*> value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*& __get_orderedNameSelectors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*> const& __get_orderedNameSelectors() const;

  constexpr void __set_orderedNameSelectors(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*& __get_orderedTypeSelectors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*> const& __get_orderedTypeSelectors() const;

  constexpr void __set_orderedTypeSelectors(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*& __get_orderedClassSelectors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*> const& __get_orderedClassSelectors() const;

  constexpr void __set_orderedClassSelectors(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>* value);

  constexpr bool& __get_m_IsDefaultStyleSheet();

  constexpr bool const& __get_m_IsDefaultStyleSheet() const;

  constexpr void __set_m_IsDefaultStyleSheet(bool value);

  static inline void setStaticF_kCustomPropertyMarker(::StringW value);

  static inline ::StringW getStaticF_kCustomPropertyMarker();

  /// @brief Method get_importedWithErrors addr 0x2d02194 size 0x8 virtual false final false
  inline bool get_importedWithErrors();

  /// @brief Method set_importedWithErrors addr 0x2d0219c size 0xc virtual false final false
  inline void set_importedWithErrors(bool value);

  /// @brief Method get_importedWithWarnings addr 0x2d021a8 size 0x8 virtual false final false
  inline bool get_importedWithWarnings();

  /// @brief Method set_importedWithWarnings addr 0x2d021b0 size 0xc virtual false final false
  inline void set_importedWithWarnings(bool value);

  /// @brief Method get_rules addr 0x2d021bc size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::UIElements::StyleRule*, ::Array<::UnityEngine::UIElements::StyleRule*>*> get_rules();

  /// @brief Method set_rules addr 0x2d021c4 size 0x8 virtual false final false
  inline void set_rules(::ArrayW<::UnityEngine::UIElements::StyleRule*, ::Array<::UnityEngine::UIElements::StyleRule*>*> value);

  /// @brief Method get_complexSelectors addr 0x2d02728 size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*, ::Array<::UnityEngine::UIElements::StyleComplexSelector*>*> get_complexSelectors();

  /// @brief Method set_complexSelectors addr 0x2d02730 size 0x8 virtual false final false
  inline void set_complexSelectors(::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*, ::Array<::UnityEngine::UIElements::StyleComplexSelector*>*> value);

  /// @brief Method get_flattenedRecursiveImports addr 0x2d02738 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* get_flattenedRecursiveImports();

  /// @brief Method get_contentHash addr 0x2d02740 size 0x8 virtual false final false
  inline int32_t get_contentHash();

  /// @brief Method set_contentHash addr 0x2d02748 size 0x8 virtual false final false
  inline void set_contentHash(int32_t value);

  /// @brief Method get_isDefaultStyleSheet addr 0x2d02750 size 0x8 virtual false final false
  inline bool get_isDefaultStyleSheet();

  /// @brief Method set_isDefaultStyleSheet addr 0x2d01ec4 size 0x160 virtual false final false
  inline void set_isDefaultStyleSheet(bool value);

  /// @brief Method TryCheckAccess addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  static inline bool TryCheckAccess(::ArrayW<T, ::Array<T>*> list, ::UnityEngine::UIElements::StyleValueType type, ::UnityEngine::UIElements::StyleValueHandle handle, ByRef<T> value);

  /// @brief Method CheckAccess addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T CheckAccess(::ArrayW<T, ::Array<T>*> list, ::UnityEngine::UIElements::StyleValueType type, ::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method OnEnable addr 0x2d02024 size 0x4 virtual true final false
  inline void OnEnable();

  /// @brief Method FlattenImportedStyleSheetsRecursive addr 0x2d02758 size 0x7c virtual false final false
  inline void FlattenImportedStyleSheetsRecursive();

  /// @brief Method FlattenImportedStyleSheetsRecursive addr 0x2d027d4 size 0x148 virtual false final false
  inline void FlattenImportedStyleSheetsRecursive(::UnityEngine::UIElements::StyleSheet* sheet);

  /// @brief Method SetupReferences addr 0x2d021cc size 0x55c virtual false final false
  inline void SetupReferences();

  /// @brief Method ReadKeyword addr 0x2d029e0 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::StyleValueKeyword ReadKeyword(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method ReadFloat addr 0x2d019c0 size 0xd4 virtual false final false
  inline float_t ReadFloat(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method TryReadFloat addr 0x2d029e8 size 0xf4 virtual false final false
  inline bool TryReadFloat(::UnityEngine::UIElements::StyleValueHandle handle, ByRef<float_t> value);

  /// @brief Method ReadDimension addr 0x2d02adc size 0xf0 virtual false final false
  inline ::UnityEngine::UIElements::StyleSheets::Dimension ReadDimension(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method TryReadDimension addr 0x2d02bcc size 0x11c virtual false final false
  inline bool TryReadDimension(::UnityEngine::UIElements::StyleValueHandle handle, ByRef<::UnityEngine::UIElements::StyleSheets::Dimension> value);

  /// @brief Method ReadColor addr 0x2d02ce8 size 0x84 virtual false final false
  inline ::UnityEngine::Color ReadColor(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method TryReadColor addr 0x2d02d6c size 0x8c virtual false final false
  inline bool TryReadColor(::UnityEngine::UIElements::StyleValueHandle handle, ByRef<::UnityEngine::Color> value);

  /// @brief Method ReadString addr 0x2d02df8 size 0x84 virtual false final false
  inline ::StringW ReadString(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method TryReadString addr 0x2d02e7c size 0x8c virtual false final false
  inline bool TryReadString(::UnityEngine::UIElements::StyleValueHandle handle, ByRef<::StringW> value);

  /// @brief Method ReadEnum addr 0x2d02f08 size 0x84 virtual false final false
  inline ::StringW ReadEnum(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method TryReadEnum addr 0x2d02f8c size 0x8c virtual false final false
  inline bool TryReadEnum(::UnityEngine::UIElements::StyleValueHandle handle, ByRef<::StringW> value);

  /// @brief Method ReadVariable addr 0x2d01a94 size 0x84 virtual false final false
  inline ::StringW ReadVariable(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method TryReadVariable addr 0x2d03018 size 0x8c virtual false final false
  inline bool TryReadVariable(::UnityEngine::UIElements::StyleValueHandle handle, ByRef<::StringW> value);

  /// @brief Method ReadResourcePath addr 0x2d030a4 size 0x84 virtual false final false
  inline ::StringW ReadResourcePath(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method TryReadResourcePath addr 0x2d03128 size 0x8c virtual false final false
  inline bool TryReadResourcePath(::UnityEngine::UIElements::StyleValueHandle handle, ByRef<::StringW> value);

  /// @brief Method ReadAssetReference addr 0x2d031b4 size 0x84 virtual false final false
  inline ::UnityEngine::Object* ReadAssetReference(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method ReadMissingAssetReferenceUrl addr 0x2d03238 size 0x84 virtual false final false
  inline ::StringW ReadMissingAssetReferenceUrl(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method TryReadAssetReference addr 0x2d032bc size 0x8c virtual false final false
  inline bool TryReadAssetReference(::UnityEngine::UIElements::StyleValueHandle handle, ByRef<::UnityEngine::Object*> value);

  /// @brief Method ReadFunction addr 0x2d03348 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::StyleValueFunction ReadFunction(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method ReadFunctionName addr 0x2d03350 size 0x154 virtual false final false
  inline ::StringW ReadFunctionName(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method ReadScalableImage addr 0x2d034a4 size 0x84 virtual false final false
  inline ::UnityEngine::UIElements::StyleSheets::ScalableImage ReadScalableImage(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method CustomStartsWith addr 0x2d0291c size 0xc4 virtual false final false
  static inline bool CustomStartsWith(::StringW originalString, ::StringW pattern);

  static inline ::UnityEngine::UIElements::StyleSheet* New_ctor();

  /// @brief Method .ctor addr 0x2d02080 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StyleSheet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleSheet(StyleSheet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleSheet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleSheet(StyleSheet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSheet();

public:
  /// @brief Field m_ImportedWithErrors, offset: 0x18, size: 0x1, def value: None
  bool ___m_ImportedWithErrors;

  /// @brief Field m_ImportedWithWarnings, offset: 0x19, size: 0x1, def value: None
  bool ___m_ImportedWithWarnings;

  /// @brief Field m_Rules, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleRule*, ::Array<::UnityEngine::UIElements::StyleRule*>*> ___m_Rules;

  /// @brief Field m_ComplexSelectors, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*, ::Array<::UnityEngine::UIElements::StyleComplexSelector*>*> ___m_ComplexSelectors;

  /// @brief Field floats, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___floats;

  /// @brief Field dimensions, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension, ::Array<::UnityEngine::UIElements::StyleSheets::Dimension>*> ___dimensions;

  /// @brief Field colors, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ___colors;

  /// @brief Field strings, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___strings;

  /// @brief Field assets, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> ___assets;

  /// @brief Field imports, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::__StyleSheet__ImportStruct, ::Array<::UnityEngine::UIElements::__StyleSheet__ImportStruct>*> ___imports;

  /// @brief Field m_FlattenedImportedStyleSheets, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* ___m_FlattenedImportedStyleSheets;

  /// @brief Field m_ContentHash, offset: 0x68, size: 0x4, def value: None
  int32_t ___m_ContentHash;

  /// @brief Field scalableImages, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage, ::Array<::UnityEngine::UIElements::StyleSheets::ScalableImage>*> ___scalableImages;

  /// @brief Field orderedNameSelectors, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>* ___orderedNameSelectors;

  /// @brief Field orderedTypeSelectors, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>* ___orderedTypeSelectors;

  /// @brief Field orderedClassSelectors, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>* ___orderedClassSelectors;

  /// @brief Field m_IsDefaultStyleSheet, offset: 0x90, size: 0x1, def value: None
  bool ___m_IsDefaultStyleSheet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheet, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_ImportedWithErrors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_ImportedWithWarnings) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_Rules) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_ComplexSelectors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___floats) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___dimensions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___colors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___strings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___assets) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___imports) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_FlattenedImportedStyleSheets) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_ContentHash) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___scalableImages) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___orderedNameSelectors) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___orderedTypeSelectors) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___orderedClassSelectors) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_IsDefaultStyleSheet) == 0x90, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheet*, "UnityEngine.UIElements", "StyleSheet");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StyleSheet__ImportStruct, "UnityEngine.UIElements", "StyleSheet/ImportStruct");
