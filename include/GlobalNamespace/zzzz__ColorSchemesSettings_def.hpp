#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemesSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorSchemesSettings)
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
struct ColorSchemesSettings_ColorOverrideType;
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
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct ColorSchemesSettings_ColorOverrideType;
}
namespace GlobalNamespace {
class ColorSchemesSettings;
}
namespace GlobalNamespace {
class ColorSchemesSettings___c;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColorSchemesSettings_ColorOverrideType);
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemesSettings);
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemesSettings___c);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ColorSchemesSettings/ColorOverrideType
struct CORDL_TYPE ColorSchemesSettings_ColorOverrideType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ColorSchemesSettings_ColorOverrideType_Unwrapped
  enum struct __ColorSchemesSettings_ColorOverrideType_Unwrapped : int32_t {
    __E_All = static_cast<int32_t>(0x0),
    __E_NotesOnly = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ColorSchemesSettings_ColorOverrideType_Unwrapped() const noexcept {
    return static_cast<__ColorSchemesSettings_ColorOverrideType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemesSettings_ColorOverrideType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ColorSchemesSettings_ColorOverrideType(int32_t value__) noexcept;

  /// @brief Field All value: I32(0)
  static ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType const All;

  /// @brief Field NotesOnly value: I32(1)
  static ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType const NotesOnly;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13216 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorSchemesSettings_ColorOverrideType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemesSettings_ColorOverrideType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorSchemesSettings/<>c
class CORDL_TYPE ColorSchemesSettings___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::ColorSchemesSettings___c* __9;

  /// @brief Field <>9__19_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_0, put = setStaticF___9__19_0)) ::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>* __9__19_0;

  static inline ::GlobalNamespace::ColorSchemesSettings___c* New_ctor();

  /// @brief Method <.ctor>b__19_0, addr 0x26f1db0, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* __ctor_b__19_0(::GlobalNamespace::ColorSchemeSO* csSO);

  /// @brief Method .ctor, addr 0x26f1da8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::ColorSchemesSettings___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>* getStaticF___9__19_0();

  static inline void setStaticF___9(::GlobalNamespace::ColorSchemesSettings___c* value);

  static inline void setStaticF___9__19_0(::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemesSettings___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesSettings___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemesSettings___c(ColorSchemesSettings___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesSettings___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemesSettings___c(ColorSchemesSettings___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13217 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemesSettings___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ColorSchemesSettings::ColorOverrideType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorSchemesSettings
class CORDL_TYPE ColorSchemesSettings : public ::System::Object {
public:
  // Declarations
  using ColorOverrideType = ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType;

  using __c = ::GlobalNamespace::ColorSchemesSettings___c;

  /// @brief Field <colorOverrideType>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__colorOverrideType_k__BackingField,
                      put = __cordl_internal_set__colorOverrideType_k__BackingField)) ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType _colorOverrideType_k__BackingField;

  /// @brief Field _colorSchemesDict, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemesDict,
                      put = __cordl_internal_set__colorSchemesDict)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* _colorSchemesDict;

  /// @brief Field _colorSchemesList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemesList,
                      put = __cordl_internal_set__colorSchemesList)) ::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>* _colorSchemesList;

  /// @brief Field _overrideDefaultColors, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideDefaultColors, put = __cordl_internal_set__overrideDefaultColors)) bool _overrideDefaultColors;

  /// @brief Field _selectedColorSchemeId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedColorSchemeId, put = __cordl_internal_set__selectedColorSchemeId)) ::StringW _selectedColorSchemeId;

  __declspec(property(get = get_colorOverrideType, put = set_colorOverrideType)) ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType colorOverrideType;

  /// @brief Field didChangeOverrideSettingsEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeOverrideSettingsEvent, put = __cordl_internal_set_didChangeOverrideSettingsEvent)) ::System::Action* didChangeOverrideSettingsEvent;

  __declspec(property(get = get_overrideDefaultColors, put = set_overrideDefaultColors)) bool overrideDefaultColors;

  __declspec(property(get = get_selectedColorSchemeId, put = set_selectedColorSchemeId)) ::StringW selectedColorSchemeId;

  /// @brief Method GetColorSchemeForId, addr 0x26f1aa4, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* GetColorSchemeForId(::StringW id);

  /// @brief Method GetColorSchemeForIdx, addr 0x26f1a4c, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* GetColorSchemeForIdx(int32_t idx);

  /// @brief Method GetNumberOfColorSchemes, addr 0x26f1a04, size 0x48, virtual false, abstract: false, final false
  inline int32_t GetNumberOfColorSchemes();

  /// @brief Method GetOverrideColorScheme, addr 0x26f1d18, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* GetOverrideColorScheme();

  /// @brief Method GetSelectedColorScheme, addr 0x26f1c24, size 0x54, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* GetSelectedColorScheme();

  /// @brief Method GetSelectedColorSchemeIdx, addr 0x26f1c78, size 0xa0, virtual false, abstract: false, final false
  inline int32_t GetSelectedColorSchemeIdx();

  static inline ::GlobalNamespace::ColorSchemesSettings* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* colorSchemeSOs);

  static inline ::GlobalNamespace::ColorSchemesSettings* New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>* colorSchemes);

  /// @brief Method SetColorSchemeForId, addr 0x26f1afc, size 0x128, virtual false, abstract: false, final false
  inline void SetColorSchemeForId(::GlobalNamespace::ColorScheme* colorScheme);

  /// @brief Method ShouldOverrideLightshowColors, addr 0x26f1d2c, size 0x20, virtual false, abstract: false, final false
  inline bool ShouldOverrideLightshowColors();

  constexpr ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType const& __cordl_internal_get__colorOverrideType_k__BackingField() const;

  constexpr ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType& __cordl_internal_get__colorOverrideType_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* const& __cordl_internal_get__colorSchemesDict() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>*& __cordl_internal_get__colorSchemesDict();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>* const& __cordl_internal_get__colorSchemesList() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>*& __cordl_internal_get__colorSchemesList();

  constexpr bool const& __cordl_internal_get__overrideDefaultColors() const;

  constexpr bool& __cordl_internal_get__overrideDefaultColors();

  constexpr ::StringW const& __cordl_internal_get__selectedColorSchemeId() const;

  constexpr ::StringW& __cordl_internal_get__selectedColorSchemeId();

  constexpr ::System::Action* const& __cordl_internal_get_didChangeOverrideSettingsEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didChangeOverrideSettingsEvent();

  constexpr void __cordl_internal_set__colorOverrideType_k__BackingField(::GlobalNamespace::ColorSchemesSettings_ColorOverrideType value);

  constexpr void __cordl_internal_set__colorSchemesDict(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* value);

  constexpr void __cordl_internal_set__colorSchemesList(::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>* value);

  constexpr void __cordl_internal_set__overrideDefaultColors(bool value);

  constexpr void __cordl_internal_set__selectedColorSchemeId(::StringW value);

  constexpr void __cordl_internal_set_didChangeOverrideSettingsEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x26f18fc, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* colorSchemeSOs);

  /// @brief Method .ctor, addr 0x26f16a0, size 0x25c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>* colorSchemes);

  /// @brief Method add_didChangeOverrideSettingsEvent, addr 0x26f1568, size 0x9c, virtual false, abstract: false, final false
  inline void add_didChangeOverrideSettingsEvent(::System::Action* value);

  /// @brief Method get_colorOverrideType, addr 0x26f1558, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType get_colorOverrideType();

  /// @brief Method get_overrideDefaultColors, addr 0x26f1504, size 0x8, virtual false, abstract: false, final false
  inline bool get_overrideDefaultColors();

  /// @brief Method get_selectedColorSchemeId, addr 0x26f1550, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_selectedColorSchemeId();

  /// @brief Method remove_didChangeOverrideSettingsEvent, addr 0x26f1604, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didChangeOverrideSettingsEvent(::System::Action* value);

  /// @brief Method set_colorOverrideType, addr 0x26f1560, size 0x8, virtual false, abstract: false, final false
  inline void set_colorOverrideType(::GlobalNamespace::ColorSchemesSettings_ColorOverrideType value);

  /// @brief Method set_overrideDefaultColors, addr 0x26f150c, size 0x24, virtual false, abstract: false, final false
  inline void set_overrideDefaultColors(bool value);

  /// @brief Method set_selectedColorSchemeId, addr 0x26f1530, size 0x20, virtual false, abstract: false, final false
  inline void set_selectedColorSchemeId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemesSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemesSettings(ColorSchemesSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemesSettings(ColorSchemesSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13218 };

  /// @brief Field <colorOverrideType>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType ____colorOverrideType_k__BackingField;

  /// @brief Field didChangeOverrideSettingsEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___didChangeOverrideSettingsEvent;

  /// @brief Field _colorSchemesList, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>* ____colorSchemesList;

  /// @brief Field _colorSchemesDict, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* ____colorSchemesDict;

  /// @brief Field _selectedColorSchemeId, offset: 0x30, size: 0x8, def value: None
  ::StringW ____selectedColorSchemeId;

  /// @brief Field _overrideDefaultColors, offset: 0x38, size: 0x1, def value: None
  bool ____overrideDefaultColors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorSchemesSettings, ____colorOverrideType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemesSettings, ___didChangeOverrideSettingsEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemesSettings, ____colorSchemesList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemesSettings, ____colorSchemesDict) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemesSettings, ____selectedColorSchemeId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemesSettings, ____overrideDefaultColors) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemesSettings, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemesSettings_ColorOverrideType, "", "ColorSchemesSettings/ColorOverrideType");
NEED_NO_BOX(::GlobalNamespace::ColorSchemesSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemesSettings*, "", "ColorSchemesSettings");
NEED_NO_BOX(::GlobalNamespace::ColorSchemesSettings___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemesSettings___c*, "", "ColorSchemesSettings/<>c");
