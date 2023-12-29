#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorSchemesSettings)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class ColorScheme;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemesSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemesSettings);
// Type: ::ColorSchemesSettings
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4722))
// CS Name: ::ColorSchemesSettings*
class CORDL_TYPE ColorSchemesSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field overrideDefaultColors, offset 0x10, size 0x1
  __declspec(property(get = __get_overrideDefaultColors, put = __set_overrideDefaultColors)) bool overrideDefaultColors;

  /// @brief Field _colorSchemesList, offset 0x18, size 0x8
  __declspec(property(get = __get__colorSchemesList, put = __set__colorSchemesList))::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>* _colorSchemesList;

  /// @brief Field _colorSchemesDict, offset 0x20, size 0x8
  __declspec(property(get = __get__colorSchemesDict, put = __set__colorSchemesDict))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* _colorSchemesDict;

  /// @brief Field _selectedColorSchemeId, offset 0x28, size 0x8
  __declspec(property(get = __get__selectedColorSchemeId, put = __set__selectedColorSchemeId))::StringW _selectedColorSchemeId;

  __declspec(property(get = get_selectedColorSchemeId, put = set_selectedColorSchemeId))::StringW selectedColorSchemeId;

  constexpr bool& __get_overrideDefaultColors();

  constexpr bool const& __get_overrideDefaultColors() const;

  constexpr void __set_overrideDefaultColors(bool value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>*& __get__colorSchemesList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>*> const& __get__colorSchemesList() const;

  constexpr void __set__colorSchemesList(::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>*& __get__colorSchemesDict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>*> const& __get__colorSchemesDict() const;

  constexpr void __set__colorSchemesDict(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* value);

  constexpr ::StringW& __get__selectedColorSchemeId();

  constexpr ::StringW const& __get__selectedColorSchemeId() const;

  constexpr void __set__selectedColorSchemeId(::StringW value);

  /// @brief Method set_selectedColorSchemeId addr 0x2233f3c size 0x8 virtual false final false
  inline void set_selectedColorSchemeId(::StringW value);

  /// @brief Method get_selectedColorSchemeId addr 0x2233f44 size 0x8 virtual false final false
  inline ::StringW get_selectedColorSchemeId();

  static inline ::GlobalNamespace::ColorSchemesSettings* New_ctor(::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*> colorSchemes);

  /// @brief Method .ctor addr 0x2233f4c size 0x160 virtual false final false
  inline void _ctor(::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*> colorSchemes);

  static inline ::GlobalNamespace::ColorSchemesSettings* New_ctor(::ArrayW<::GlobalNamespace::ColorSchemeSO*, ::Array<::GlobalNamespace::ColorSchemeSO*>*> colorSchemeSOs);

  /// @brief Method .ctor addr 0x22340ac size 0x20 virtual false final false
  inline void _ctor(::ArrayW<::GlobalNamespace::ColorSchemeSO*, ::Array<::GlobalNamespace::ColorSchemeSO*>*> colorSchemeSOs);

  /// @brief Method ConvertColorSchemeSOs addr 0x22340cc size 0x114 virtual false final false
  static inline ::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*>
  ConvertColorSchemeSOs(::ArrayW<::GlobalNamespace::ColorSchemeSO*, ::Array<::GlobalNamespace::ColorSchemeSO*>*> colorSchemeSOs);

  /// @brief Method GetNumberOfColorSchemes addr 0x22341e0 size 0x48 virtual false final false
  inline int32_t GetNumberOfColorSchemes();

  /// @brief Method GetColorSchemeForIdx addr 0x2234228 size 0x58 virtual false final false
  inline ::GlobalNamespace::ColorScheme* GetColorSchemeForIdx(int32_t idx);

  /// @brief Method GetColorSchemeForId addr 0x2234280 size 0x58 virtual false final false
  inline ::GlobalNamespace::ColorScheme* GetColorSchemeForId(::StringW id);

  /// @brief Method SetColorSchemeForId addr 0x22342d8 size 0x110 virtual false final false
  inline void SetColorSchemeForId(::GlobalNamespace::ColorScheme* colorScheme);

  /// @brief Method GetSelectedColorScheme addr 0x22343e8 size 0x54 virtual false final false
  inline ::GlobalNamespace::ColorScheme* GetSelectedColorScheme();

  /// @brief Method GetSelectedColorSchemeIdx addr 0x223443c size 0xa0 virtual false final false
  inline int32_t GetSelectedColorSchemeIdx();

  /// @brief Method GetOverrideColorScheme addr 0x22344dc size 0x14 virtual false final false
  inline ::GlobalNamespace::ColorScheme* GetOverrideColorScheme();

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemesSettings(ColorSchemesSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemesSettings(ColorSchemesSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemesSettings();

public:
  /// @brief Field overrideDefaultColors, offset: 0x10, size: 0x1, def value: None
  bool ___overrideDefaultColors;

  /// @brief Field _colorSchemesList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>* ____colorSchemesList;

  /// @brief Field _colorSchemesDict, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* ____colorSchemesDict;

  /// @brief Field _selectedColorSchemeId, offset: 0x28, size: 0x8, def value: None
  ::StringW ____selectedColorSchemeId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemesSettings, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemesSettings, ___overrideDefaultColors) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemesSettings, ____colorSchemesList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemesSettings, ____colorSchemesDict) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemesSettings, ____selectedColorSchemeId) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemesSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemesSettings*, "", "ColorSchemesSettings");
