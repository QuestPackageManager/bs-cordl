#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemesSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorOverrideType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorSchemesSettings)
namespace GlobalNamespace {
struct ColorOverrideType;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class ColorSchemesSettings___c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemesSettings;
}
namespace GlobalNamespace {
class ColorSchemesSettings___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ColorSchemesSettings*);
MARK_REF_T(::GlobalNamespace::ColorSchemesSettings___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColorSchemesSettings*, "", "ColorSchemesSettings");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColorSchemesSettings___c*, "", "ColorSchemesSettings/<>c");
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorSchemesSettings/<>c
class CORDL_TYPE ColorSchemesSettings___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::ColorSchemesSettings___c* __9;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0)) ::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>* __9__15_0;

  static inline ::GlobalNamespace::ColorSchemesSettings___c* New_ctor();

  /// @brief Method <.ctor>b__15_0, addr 0x39f8bec, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* __ctor_b__15_0(::GlobalNamespace::ColorSchemeSO* csSO);

  /// @brief Method .ctor, addr 0x39f8be8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::ColorSchemesSettings___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>* getStaticF___9__15_0();

  static inline void setStaticF___9(::GlobalNamespace::ColorSchemesSettings___c* value);

  static inline void setStaticF___9__15_0(::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemesSettings___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesSettings___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemesSettings___c(ColorSchemesSettings___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesSettings___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemesSettings___c(ColorSchemesSettings___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14627 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ColorSchemesSettings___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// [AnalyticsSettingsStruct("colors")]
// Dependencies ColorOverrideType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorSchemesSettings
class CORDL_TYPE ColorSchemesSettings : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::ColorSchemesSettings___c;

  /// @brief Field <colorOverrideType>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__colorOverrideType_k__BackingField,
                      put = __cordl_internal_set__colorOverrideType_k__BackingField)) ::GlobalNamespace::ColorOverrideType _colorOverrideType_k__BackingField;

  /// @brief Field _colorSchemesDict, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemesDict,
                      put = __cordl_internal_set__colorSchemesDict)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* _colorSchemesDict;

  /// @brief Field _colorSchemesList, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemesList,
                      put = __cordl_internal_set__colorSchemesList)) ::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>* _colorSchemesList;

  /// @brief Field _overrideDefaultColors, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideDefaultColors, put = __cordl_internal_set__overrideDefaultColors)) bool _overrideDefaultColors;

  /// @brief Field _selectedColorSchemeId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedColorSchemeId, put = __cordl_internal_set__selectedColorSchemeId)) ::StringW _selectedColorSchemeId;

  __declspec(property(get = get_colorOverrideType, put = set_colorOverrideType)) ::GlobalNamespace::ColorOverrideType colorOverrideType;

  __declspec(property(get = get_overrideDefaultColors, put = set_overrideDefaultColors)) bool overrideDefaultColors;

  /// @brief [AnalyticsExcluded("Free-form identifier; not a meaningful aggregate metric")]
  __declspec(property(get = get_selectedColorSchemeId, put = set_selectedColorSchemeId)) ::StringW selectedColorSchemeId;

  /// @brief Method GetColorSchemeForId, addr 0x39f88d0, size 0x64, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* GetColorSchemeForId(::StringW id);

  /// @brief Method GetColorSchemeForIdx, addr 0x39f886c, size 0x64, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* GetColorSchemeForIdx(int32_t idx);

  /// @brief Method GetNumberOfColorSchemes, addr 0x39f881c, size 0x50, virtual false, abstract: false, final false
  inline int32_t GetNumberOfColorSchemes();

  /// @brief Method GetOverrideColorScheme, addr 0x39f8b60, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* GetOverrideColorScheme();

  /// @brief Method GetSelectedColorScheme, addr 0x39f8a60, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* GetSelectedColorScheme();

  /// @brief Method GetSelectedColorSchemeIdx, addr 0x39f8ab8, size 0xa8, virtual false, abstract: false, final false
  inline int32_t GetSelectedColorSchemeIdx();

  static inline ::GlobalNamespace::ColorSchemesSettings* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* colorSchemeSOs);

  static inline ::GlobalNamespace::ColorSchemesSettings* New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>* colorSchemes);

  /// @brief Method SetColorSchemeForId, addr 0x39f8934, size 0x12c, virtual false, abstract: false, final false
  inline void SetColorSchemeForId(::GlobalNamespace::ColorScheme* colorScheme);

  /// @brief Method ShouldOverrideLightshowColors, addr 0x39f8b74, size 0x20, virtual false, abstract: false, final false
  inline bool ShouldOverrideLightshowColors();

  constexpr ::GlobalNamespace::ColorOverrideType const& __cordl_internal_get__colorOverrideType_k__BackingField() const;

  constexpr ::GlobalNamespace::ColorOverrideType& __cordl_internal_get__colorOverrideType_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* const& __cordl_internal_get__colorSchemesDict() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>*& __cordl_internal_get__colorSchemesDict();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>* const& __cordl_internal_get__colorSchemesList() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>*& __cordl_internal_get__colorSchemesList();

  constexpr bool const& __cordl_internal_get__overrideDefaultColors() const;

  constexpr bool& __cordl_internal_get__overrideDefaultColors();

  constexpr ::StringW const& __cordl_internal_get__selectedColorSchemeId() const;

  constexpr ::StringW& __cordl_internal_get__selectedColorSchemeId();

  constexpr void __cordl_internal_set__colorOverrideType_k__BackingField(::GlobalNamespace::ColorOverrideType value);

  constexpr void __cordl_internal_set__colorSchemesDict(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* value);

  constexpr void __cordl_internal_set__colorSchemesList(::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>* value);

  constexpr void __cordl_internal_set__overrideDefaultColors(bool value);

  constexpr void __cordl_internal_set__selectedColorSchemeId(::StringW value);

  /// @brief Method .ctor, addr 0x39f870c, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* colorSchemeSOs);

  /// @brief Method .ctor, addr 0x39f84c0, size 0x24c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>* colorSchemes);

  /// [CompilerGenerated]
  /// @brief Method get_colorOverrideType, addr 0x39f84b0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorOverrideType get_colorOverrideType();

  /// @brief Method get_overrideDefaultColors, addr 0x39f8490, size 0x8, virtual false, abstract: false, final false
  inline bool get_overrideDefaultColors();

  /// @brief Method get_selectedColorSchemeId, addr 0x39f84a8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_selectedColorSchemeId();

  /// [CompilerGenerated]
  /// @brief Method set_colorOverrideType, addr 0x39f84b8, size 0x8, virtual false, abstract: false, final false
  inline void set_colorOverrideType(::GlobalNamespace::ColorOverrideType value);

  /// @brief Method set_overrideDefaultColors, addr 0x39f8498, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideDefaultColors(bool value);

  /// @brief Method set_selectedColorSchemeId, addr 0x39f84a0, size 0x8, virtual false, abstract: false, final false
  inline void set_selectedColorSchemeId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemesSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesSettings", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemesSettings(ColorSchemesSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesSettings", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemesSettings(ColorSchemesSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14628 };

  /// [CompilerGenerated]
  /// @brief Field <colorOverrideType>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::ColorOverrideType ____colorOverrideType_k__BackingField;

  /// @brief Field _colorSchemesList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>* ____colorSchemesList;

  /// @brief Field _colorSchemesDict, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* ____colorSchemesDict;

  /// @brief Field _selectedColorSchemeId, offset: 0x28, size: 0x8, def value: None
  ::StringW ____selectedColorSchemeId;

  /// @brief Field _overrideDefaultColors, offset: 0x30, size: 0x1, def value: None
  bool ____overrideDefaultColors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorSchemesSettings, ____colorOverrideType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemesSettings, ____colorSchemesList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemesSettings, ____colorSchemesDict) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemesSettings, ____selectedColorSchemeId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemesSettings, ____overrideDefaultColors) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColorSchemesSettings) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
