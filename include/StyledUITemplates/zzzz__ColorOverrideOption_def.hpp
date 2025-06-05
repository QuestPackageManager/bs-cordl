#pragma once
// IWYU pragma private; include "StyledUITemplates/ColorOverrideOption.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorOverrideOption)
namespace GlobalNamespace {
class ColorSO;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace StyledUITemplates {
class ColorOverrideOption;
}
// Write type traits
MARK_REF_PTR_T(::StyledUITemplates::ColorOverrideOption);
// Dependencies System.IEquatable`1<T>, System.Object, UnityEngine.Color
namespace StyledUITemplates {
// Is value type: false
// CS Name: StyledUITemplates.ColorOverrideOption
class CORDL_TYPE ColorOverrideOption : public ::System::Object {
public:
  // Declarations
  /// @brief Field _fixedColor, offset 0x14, size 0x10
  __declspec(property(get = __cordl_internal_get__fixedColor, put = __cordl_internal_set__fixedColor)) ::UnityEngine::Color _fixedColor;

  /// @brief Field _override, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__override, put = __cordl_internal_set__override)) bool _override;

  /// @brief Field _scriptableObjectColor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__scriptableObjectColor, put = __cordl_internal_set__scriptableObjectColor)) ::UnityW<::GlobalNamespace::ColorSO> _scriptableObjectColor;

  /// @brief Field _useFixedColor, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__useFixedColor, put = __cordl_internal_set__useFixedColor)) bool _useFixedColor;

  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_fixedColor, put = set_fixedColor)) ::UnityEngine::Color fixedColor;

  __declspec(property(get = get_overrideEnabled, put = set_overrideEnabled)) bool overrideEnabled;

  __declspec(property(get = get_scriptableObjectColor, put = set_scriptableObjectColor)) ::UnityW<::GlobalNamespace::ColorSO> scriptableObjectColor;

  __declspec(property(get = get_useFixedColor, put = set_useFixedColor)) bool useFixedColor;

  /// @brief Convert operator to "::System::IEquatable_1<::StyledUITemplates::ColorOverrideOption*>"
  constexpr operator ::System::IEquatable_1<::StyledUITemplates::ColorOverrideOption*>*() noexcept;

  /// @brief Method Equals, addr 0x407e6a0, size 0x10c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x407e5c8, size 0xd8, virtual true, abstract: false, final true
  inline bool Equals(::StyledUITemplates::ColorOverrideOption* other);

  /// @brief Method GetHashCode, addr 0x407e7ac, size 0x174, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::StyledUITemplates::ColorOverrideOption* New_ctor();

  static inline ::StyledUITemplates::ColorOverrideOption* New_ctor(::StyledUITemplates::ColorOverrideOption* other);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__fixedColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__fixedColor();

  constexpr bool const& __cordl_internal_get__override() const;

  constexpr bool& __cordl_internal_get__override();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__scriptableObjectColor() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__scriptableObjectColor();

  constexpr bool const& __cordl_internal_get__useFixedColor() const;

  constexpr bool& __cordl_internal_get__useFixedColor();

  constexpr void __cordl_internal_set__fixedColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__override(bool value);

  constexpr void __cordl_internal_set__scriptableObjectColor(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__useFixedColor(bool value);

  /// @brief Method .ctor, addr 0x407e564, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x407e574, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::StyledUITemplates::ColorOverrideOption* other);

  /// @brief Method get_color, addr 0x407e4e8, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_fixedColor, addr 0x407e53c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_fixedColor();

  /// @brief Method get_overrideEnabled, addr 0x407e514, size 0x8, virtual false, abstract: false, final false
  inline bool get_overrideEnabled();

  /// @brief Method get_scriptableObjectColor, addr 0x407e554, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ColorSO> get_scriptableObjectColor();

  /// @brief Method get_useFixedColor, addr 0x407e528, size 0x8, virtual false, abstract: false, final false
  inline bool get_useFixedColor();

  /// @brief Convert to "::System::IEquatable_1<::StyledUITemplates::ColorOverrideOption*>"
  constexpr ::System::IEquatable_1<::StyledUITemplates::ColorOverrideOption*>* i___System__IEquatable_1___StyledUITemplates__ColorOverrideOption__() noexcept;

  /// @brief Method set_fixedColor, addr 0x407e548, size 0xc, virtual false, abstract: false, final false
  inline void set_fixedColor(::UnityEngine::Color value);

  /// @brief Method set_overrideEnabled, addr 0x407e51c, size 0xc, virtual false, abstract: false, final false
  inline void set_overrideEnabled(bool value);

  /// @brief Method set_scriptableObjectColor, addr 0x407e55c, size 0x8, virtual false, abstract: false, final false
  inline void set_scriptableObjectColor(::GlobalNamespace::ColorSO* value);

  /// @brief Method set_useFixedColor, addr 0x407e530, size 0xc, virtual false, abstract: false, final false
  inline void set_useFixedColor(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorOverrideOption();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorOverrideOption", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorOverrideOption(ColorOverrideOption&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorOverrideOption", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorOverrideOption(ColorOverrideOption const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19187 };

  /// @brief Field _override, offset: 0x10, size: 0x1, def value: None
  bool ____override;

  /// @brief Field _useFixedColor, offset: 0x11, size: 0x1, def value: None
  bool ____useFixedColor;

  /// @brief Field _fixedColor, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Color ____fixedColor;

  /// @brief Field _scriptableObjectColor, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____scriptableObjectColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::StyledUITemplates::ColorOverrideOption, ____override) == 0x10, "Offset mismatch!");

static_assert(offsetof(::StyledUITemplates::ColorOverrideOption, ____useFixedColor) == 0x11, "Offset mismatch!");

static_assert(offsetof(::StyledUITemplates::ColorOverrideOption, ____fixedColor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::StyledUITemplates::ColorOverrideOption, ____scriptableObjectColor) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::StyledUITemplates::ColorOverrideOption, 0x30>, "Size mismatch!");

} // namespace StyledUITemplates
NEED_NO_BOX(::StyledUITemplates::ColorOverrideOption);
DEFINE_IL2CPP_ARG_TYPE(::StyledUITemplates::ColorOverrideOption*, "StyledUITemplates", "ColorOverrideOption");
