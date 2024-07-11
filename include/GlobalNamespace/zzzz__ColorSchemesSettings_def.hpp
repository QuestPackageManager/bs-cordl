#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemesSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorSchemesSettings)
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class __ColorSchemesSettings____c;
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
class __ColorSchemesSettings____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemesSettings);
MARK_REF_PTR_T(::GlobalNamespace::__ColorSchemesSettings____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorSchemesSettings::<>c*
class CORDL_TYPE __ColorSchemesSettings____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__ColorSchemesSettings____c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>* __9__8_0;

  static inline ::GlobalNamespace::__ColorSchemesSettings____c* New_ctor();

  /// @brief Method <.ctor>b__8_0, addr 0x14f45a8, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* __ctor_b__8_0(::GlobalNamespace::ColorSchemeSO* csSO);

  /// @brief Method .ctor, addr 0x14f45a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__ColorSchemesSettings____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>* getStaticF___9__8_0();

  static inline void setStaticF___9(::GlobalNamespace::__ColorSchemesSettings____c* value);

  static inline void setStaticF___9__8_0(::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ColorSchemesSettings____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ColorSchemesSettings____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ColorSchemesSettings____c(__ColorSchemesSettings____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ColorSchemesSettings____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ColorSchemesSettings____c(__ColorSchemesSettings____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ColorSchemesSettings____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ColorSchemesSettings
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorSchemesSettings*
class CORDL_TYPE ColorSchemesSettings : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__ColorSchemesSettings____c;

  /// @brief Field _colorSchemesDict, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemesDict,
                      put = __cordl_internal_set__colorSchemesDict))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* _colorSchemesDict;

  /// @brief Field _colorSchemesList, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemesList,
                      put = __cordl_internal_set__colorSchemesList))::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>* _colorSchemesList;

  /// @brief Field _selectedColorSchemeId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedColorSchemeId, put = __cordl_internal_set__selectedColorSchemeId))::StringW _selectedColorSchemeId;

  /// @brief Field overrideDefaultColors, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideDefaultColors, put = __cordl_internal_set_overrideDefaultColors)) bool overrideDefaultColors;

  __declspec(property(get = get_selectedColorSchemeId, put = set_selectedColorSchemeId))::StringW selectedColorSchemeId;

  /// @brief Method GetColorSchemeForId, addr 0x14f42cc, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* GetColorSchemeForId(::StringW id);

  /// @brief Method GetColorSchemeForIdx, addr 0x14f4274, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* GetColorSchemeForIdx(int32_t idx);

  /// @brief Method GetNumberOfColorSchemes, addr 0x14f422c, size 0x48, virtual false, abstract: false, final false
  inline int32_t GetNumberOfColorSchemes();

  /// @brief Method GetOverrideColorScheme, addr 0x14f4528, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* GetOverrideColorScheme();

  /// @brief Method GetSelectedColorScheme, addr 0x14f4434, size 0x54, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* GetSelectedColorScheme();

  /// @brief Method GetSelectedColorSchemeIdx, addr 0x14f4488, size 0xa0, virtual false, abstract: false, final false
  inline int32_t GetSelectedColorSchemeIdx();

  static inline ::GlobalNamespace::ColorSchemesSettings* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* colorSchemeSOs);

  static inline ::GlobalNamespace::ColorSchemesSettings* New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>* colorSchemes);

  /// @brief Method SetColorSchemeForId, addr 0x14f4324, size 0x110, virtual false, abstract: false, final false
  inline void SetColorSchemeForId(::GlobalNamespace::ColorScheme* colorScheme);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>*& __cordl_internal_get__colorSchemesDict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>*> const& __cordl_internal_get__colorSchemesDict() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>*& __cordl_internal_get__colorSchemesList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>*> const& __cordl_internal_get__colorSchemesList() const;

  constexpr ::StringW const& __cordl_internal_get__selectedColorSchemeId() const;

  constexpr ::StringW& __cordl_internal_get__selectedColorSchemeId();

  constexpr bool const& __cordl_internal_get_overrideDefaultColors() const;

  constexpr bool& __cordl_internal_get_overrideDefaultColors();

  constexpr void __cordl_internal_set__colorSchemesDict(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* value);

  constexpr void __cordl_internal_set__colorSchemesList(::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>* value);

  constexpr void __cordl_internal_set__selectedColorSchemeId(::StringW value);

  constexpr void __cordl_internal_set_overrideDefaultColors(bool value);

  /// @brief Method .ctor, addr 0x14f4124, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* colorSchemeSOs);

  /// @brief Method .ctor, addr 0x14f3ec4, size 0x260, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>* colorSchemes);

  /// @brief Method get_selectedColorSchemeId, addr 0x14f3ebc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_selectedColorSchemeId();

  /// @brief Method set_selectedColorSchemeId, addr 0x14f3eb4, size 0x8, virtual false, abstract: false, final false
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
NEED_NO_BOX(::GlobalNamespace::__ColorSchemesSettings____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ColorSchemesSettings____c*, "", "ColorSchemesSettings/<>c");
