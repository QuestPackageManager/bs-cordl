#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ColorScheme)
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorScheme;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorScheme);
// Type: ::ColorScheme
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorScheme*
class CORDL_TYPE ColorScheme : public ::System::Object {
public:
  // Declarations
  /// @brief Field _colorSchemeId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemeId, put = __cordl_internal_set__colorSchemeId))::StringW _colorSchemeId;

  /// @brief Field _colorSchemeNameLocalizationKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemeNameLocalizationKey, put = __cordl_internal_set__colorSchemeNameLocalizationKey))::StringW _colorSchemeNameLocalizationKey;

  /// @brief Field _environmentColor0, offset 0x64, size 0x10
  __declspec(property(get = __cordl_internal_get__environmentColor0, put = __cordl_internal_set__environmentColor0))::UnityEngine::Color _environmentColor0;

  /// @brief Field _environmentColor0Boost, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get__environmentColor0Boost, put = __cordl_internal_set__environmentColor0Boost))::UnityEngine::Color _environmentColor0Boost;

  /// @brief Field _environmentColor1, offset 0x74, size 0x10
  __declspec(property(get = __cordl_internal_get__environmentColor1, put = __cordl_internal_set__environmentColor1))::UnityEngine::Color _environmentColor1;

  /// @brief Field _environmentColor1Boost, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get__environmentColor1Boost, put = __cordl_internal_set__environmentColor1Boost))::UnityEngine::Color _environmentColor1Boost;

  /// @brief Field _environmentColorW, offset 0x84, size 0x10
  __declspec(property(get = __cordl_internal_get__environmentColorW, put = __cordl_internal_set__environmentColorW))::UnityEngine::Color _environmentColorW;

  /// @brief Field _environmentColorWBoost, offset 0xb8, size 0x10
  __declspec(property(get = __cordl_internal_get__environmentColorWBoost, put = __cordl_internal_set__environmentColorWBoost))::UnityEngine::Color _environmentColorWBoost;

  /// @brief Field _isEditable, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isEditable, put = __cordl_internal_set__isEditable)) bool _isEditable;

  /// @brief Field _nonLocalizedName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__nonLocalizedName, put = __cordl_internal_set__nonLocalizedName))::StringW _nonLocalizedName;

  /// @brief Field _obstaclesColor, offset 0x54, size 0x10
  __declspec(property(get = __cordl_internal_get__obstaclesColor, put = __cordl_internal_set__obstaclesColor))::UnityEngine::Color _obstaclesColor;

  /// @brief Field _saberAColor, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get__saberAColor, put = __cordl_internal_set__saberAColor))::UnityEngine::Color _saberAColor;

  /// @brief Field _saberBColor, offset 0x44, size 0x10
  __declspec(property(get = __cordl_internal_get__saberBColor, put = __cordl_internal_set__saberBColor))::UnityEngine::Color _saberBColor;

  /// @brief Field _supportsEnvironmentColorBoost, offset 0x94, size 0x1
  __declspec(property(get = __cordl_internal_get__supportsEnvironmentColorBoost, put = __cordl_internal_set__supportsEnvironmentColorBoost)) bool _supportsEnvironmentColorBoost;

  /// @brief Field _useNonLocalizedName, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__useNonLocalizedName, put = __cordl_internal_set__useNonLocalizedName)) bool _useNonLocalizedName;

  __declspec(property(get = get_colorSchemeId))::StringW colorSchemeId;

  __declspec(property(get = get_colorSchemeNameLocalizationKey))::StringW colorSchemeNameLocalizationKey;

  __declspec(property(get = get_environmentColor0))::UnityEngine::Color environmentColor0;

  __declspec(property(get = get_environmentColor0Boost))::UnityEngine::Color environmentColor0Boost;

  __declspec(property(get = get_environmentColor1))::UnityEngine::Color environmentColor1;

  __declspec(property(get = get_environmentColor1Boost))::UnityEngine::Color environmentColor1Boost;

  __declspec(property(get = get_environmentColorW))::UnityEngine::Color environmentColorW;

  __declspec(property(get = get_environmentColorWBoost))::UnityEngine::Color environmentColorWBoost;

  __declspec(property(get = get_isEditable)) bool isEditable;

  __declspec(property(get = get_nonLocalizedName))::StringW nonLocalizedName;

  __declspec(property(get = get_obstaclesColor))::UnityEngine::Color obstaclesColor;

  __declspec(property(get = get_saberAColor))::UnityEngine::Color saberAColor;

  __declspec(property(get = get_saberBColor))::UnityEngine::Color saberBColor;

  __declspec(property(get = get_supportsEnvironmentColorBoost)) bool supportsEnvironmentColorBoost;

  __declspec(property(get = get_useNonLocalizedName)) bool useNonLocalizedName;

  static inline ::GlobalNamespace::ColorScheme* New_ctor(::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::ColorSchemeSO* environmentColorScheme);

  static inline ::GlobalNamespace::ColorScheme* New_ctor(::GlobalNamespace::ColorScheme* colorScheme, ::UnityEngine::Color environmentColorW, ::UnityEngine::Color environmentColorWBoost);

  static inline ::GlobalNamespace::ColorScheme* New_ctor(::GlobalNamespace::ColorScheme* colorScheme, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor,
                                                         ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1, ::UnityEngine::Color environmentColorW,
                                                         bool supportsEnvironmentColorBoost, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost,
                                                         ::UnityEngine::Color environmentColorWBoost, ::UnityEngine::Color obstaclesColor);

  static inline ::GlobalNamespace::ColorScheme* New_ctor(::GlobalNamespace::ColorSchemeSO* colorScheme);

  static inline ::GlobalNamespace::ColorScheme* New_ctor(::StringW colorSchemeId, ::StringW colorSchemeNameLocalizationKey, bool useNonLocalizedName, ::StringW nonLocalizedName, bool isEditable,
                                                         ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environmentColor0,
                                                         ::UnityEngine::Color environmentColor1, ::UnityEngine::Color environmentColorW, bool supportsEnvironmentColorBoost,
                                                         ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost, ::UnityEngine::Color environmentColorWBoost,
                                                         ::UnityEngine::Color obstaclesColor);

  constexpr ::StringW const& __cordl_internal_get__colorSchemeId() const;

  constexpr ::StringW& __cordl_internal_get__colorSchemeId();

  constexpr ::StringW const& __cordl_internal_get__colorSchemeNameLocalizationKey() const;

  constexpr ::StringW& __cordl_internal_get__colorSchemeNameLocalizationKey();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__environmentColor0() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__environmentColor0();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__environmentColor0Boost() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__environmentColor0Boost();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__environmentColor1() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__environmentColor1();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__environmentColor1Boost() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__environmentColor1Boost();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__environmentColorW() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__environmentColorW();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__environmentColorWBoost() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__environmentColorWBoost();

  constexpr bool const& __cordl_internal_get__isEditable() const;

  constexpr bool& __cordl_internal_get__isEditable();

  constexpr ::StringW const& __cordl_internal_get__nonLocalizedName() const;

  constexpr ::StringW& __cordl_internal_get__nonLocalizedName();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__obstaclesColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__obstaclesColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__saberAColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__saberAColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__saberBColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__saberBColor();

  constexpr bool const& __cordl_internal_get__supportsEnvironmentColorBoost() const;

  constexpr bool& __cordl_internal_get__supportsEnvironmentColorBoost();

  constexpr bool const& __cordl_internal_get__useNonLocalizedName() const;

  constexpr bool& __cordl_internal_get__useNonLocalizedName();

  constexpr void __cordl_internal_set__colorSchemeId(::StringW value);

  constexpr void __cordl_internal_set__colorSchemeNameLocalizationKey(::StringW value);

  constexpr void __cordl_internal_set__environmentColor0(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__environmentColor0Boost(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__environmentColor1(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__environmentColor1Boost(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__environmentColorW(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__environmentColorWBoost(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__isEditable(bool value);

  constexpr void __cordl_internal_set__nonLocalizedName(::StringW value);

  constexpr void __cordl_internal_set__obstaclesColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__saberAColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__saberBColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__supportsEnvironmentColorBoost(bool value);

  constexpr void __cordl_internal_set__useNonLocalizedName(bool value);

  /// @brief Method .ctor, addr 0x129e2a4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::ColorSchemeSO* environmentColorScheme);

  /// @brief Method .ctor, addr 0x129e2d0, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ColorScheme* colorScheme, ::UnityEngine::Color environmentColorW, ::UnityEngine::Color environmentColorWBoost);

  /// @brief Method .ctor, addr 0x129e1cc, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ColorScheme* colorScheme, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environmentColor0,
                    ::UnityEngine::Color environmentColor1, ::UnityEngine::Color environmentColorW, bool supportsEnvironmentColorBoost, ::UnityEngine::Color environmentColor0Boost,
                    ::UnityEngine::Color environmentColor1Boost, ::UnityEngine::Color environmentColorWBoost, ::UnityEngine::Color obstaclesColor);

  /// @brief Method .ctor, addr 0x129e3b4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ColorSchemeSO* colorScheme);

  /// @brief Method .ctor, addr 0x129e09c, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::StringW colorSchemeId, ::StringW colorSchemeNameLocalizationKey, bool useNonLocalizedName, ::StringW nonLocalizedName, bool isEditable, ::UnityEngine::Color saberAColor,
                    ::UnityEngine::Color saberBColor, ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1, ::UnityEngine::Color environmentColorW,
                    bool supportsEnvironmentColorBoost, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost, ::UnityEngine::Color environmentColorWBoost,
                    ::UnityEngine::Color obstaclesColor);

  /// @brief Method get_colorSchemeId, addr 0x129e000, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_colorSchemeId();

  /// @brief Method get_colorSchemeNameLocalizationKey, addr 0x129e008, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_colorSchemeNameLocalizationKey();

  /// @brief Method get_environmentColor0, addr 0x129e040, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColor0();

  /// @brief Method get_environmentColor0Boost, addr 0x129e06c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColor0Boost();

  /// @brief Method get_environmentColor1, addr 0x129e04c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColor1();

  /// @brief Method get_environmentColor1Boost, addr 0x129e078, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColor1Boost();

  /// @brief Method get_environmentColorW, addr 0x129e058, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColorW();

  /// @brief Method get_environmentColorWBoost, addr 0x129e084, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColorWBoost();

  /// @brief Method get_isEditable, addr 0x129e020, size 0x8, virtual false, abstract: false, final false
  inline bool get_isEditable();

  /// @brief Method get_nonLocalizedName, addr 0x129e010, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_nonLocalizedName();

  /// @brief Method get_obstaclesColor, addr 0x129e090, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_obstaclesColor();

  /// @brief Method get_saberAColor, addr 0x129e028, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_saberAColor();

  /// @brief Method get_saberBColor, addr 0x129e034, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_saberBColor();

  /// @brief Method get_supportsEnvironmentColorBoost, addr 0x129e064, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsEnvironmentColorBoost();

  /// @brief Method get_useNonLocalizedName, addr 0x129e018, size 0x8, virtual false, abstract: false, final false
  inline bool get_useNonLocalizedName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorScheme();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorScheme", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorScheme(ColorScheme&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorScheme", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorScheme(ColorScheme const&) = delete;

  /// @brief Field _colorSchemeId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____colorSchemeId;

  /// @brief Field _colorSchemeNameLocalizationKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ____colorSchemeNameLocalizationKey;

  /// @brief Field _useNonLocalizedName, offset: 0x20, size: 0x1, def value: None
  bool ____useNonLocalizedName;

  /// @brief Field _nonLocalizedName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____nonLocalizedName;

  /// @brief Field _isEditable, offset: 0x30, size: 0x1, def value: None
  bool ____isEditable;

  /// @brief Field _saberAColor, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Color ____saberAColor;

  /// @brief Field _saberBColor, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Color ____saberBColor;

  /// @brief Field _obstaclesColor, offset: 0x54, size: 0x10, def value: None
  ::UnityEngine::Color ____obstaclesColor;

  /// @brief Field _environmentColor0, offset: 0x64, size: 0x10, def value: None
  ::UnityEngine::Color ____environmentColor0;

  /// @brief Field _environmentColor1, offset: 0x74, size: 0x10, def value: None
  ::UnityEngine::Color ____environmentColor1;

  /// @brief Field _environmentColorW, offset: 0x84, size: 0x10, def value: None
  ::UnityEngine::Color ____environmentColorW;

  /// @brief Field _supportsEnvironmentColorBoost, offset: 0x94, size: 0x1, def value: None
  bool ____supportsEnvironmentColorBoost;

  /// @brief Field _environmentColor0Boost, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Color ____environmentColor0Boost;

  /// @brief Field _environmentColor1Boost, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Color ____environmentColor1Boost;

  /// @brief Field _environmentColorWBoost, offset: 0xb8, size: 0x10, def value: None
  ::UnityEngine::Color ____environmentColorWBoost;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorScheme, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorScheme, ____colorSchemeId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorScheme, ____colorSchemeNameLocalizationKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorScheme, ____useNonLocalizedName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorScheme, ____nonLocalizedName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorScheme, ____isEditable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorScheme, ____saberAColor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorScheme, ____saberBColor) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorScheme, ____obstaclesColor) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorScheme, ____environmentColor0) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorScheme, ____environmentColor1) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorScheme, ____environmentColorW) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorScheme, ____supportsEnvironmentColorBoost) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorScheme, ____environmentColor0Boost) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorScheme, ____environmentColor1Boost) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorScheme, ____environmentColorWBoost) == 0xb8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorScheme);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorScheme*, "", "ColorScheme");
