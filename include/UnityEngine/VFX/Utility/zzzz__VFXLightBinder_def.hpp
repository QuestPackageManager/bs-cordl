#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXLightBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VFXLightBinder)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXLightBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXLightBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXLightBinder*, "UnityEngine.VFX.Utility", "VFXLightBinder");
// Dependencies UnityEngine.VFX.Utility.VFXBinderBase
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXLightBinder
class CORDL_TYPE VFXLightBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
  // Declarations
  /// @brief Field BindBrightness, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get_BindBrightness, put = __cordl_internal_set_BindBrightness)) bool BindBrightness;

  /// @brief Field BindColor, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_BindColor, put = __cordl_internal_set_BindColor)) bool BindColor;

  /// @brief Field BindRadius, offset 0x4a, size 0x1
  __declspec(property(get = __cordl_internal_get_BindRadius, put = __cordl_internal_set_BindRadius)) bool BindRadius;

  __declspec(property(get = get_BrightnessProperty, put = set_BrightnessProperty)) ::StringW BrightnessProperty;

  __declspec(property(get = get_ColorProperty, put = set_ColorProperty)) ::StringW ColorProperty;

  __declspec(property(get = get_RadiusProperty, put = set_RadiusProperty)) ::StringW RadiusProperty;

  /// @brief Field Target, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Target, put = __cordl_internal_set_Target)) ::UnityW<::UnityEngine::Light> Target;

  /// @brief Field m_BrightnessProperty, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BrightnessProperty, put = __cordl_internal_set_m_BrightnessProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* m_BrightnessProperty;

  /// @brief Field m_ColorProperty, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorProperty, put = __cordl_internal_set_m_ColorProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* m_ColorProperty;

  /// @brief Field m_RadiusProperty, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RadiusProperty, put = __cordl_internal_set_m_RadiusProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* m_RadiusProperty;

  /// @brief Method IsValid, addr 0x69e5418, size 0x120, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXLightBinder* New_ctor();

  /// @brief Method ToString, addr 0x69e5668, size 0x100, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x69e5538, size 0x130, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  constexpr bool const& __cordl_internal_get_BindBrightness() const;

  constexpr bool& __cordl_internal_get_BindBrightness();

  constexpr bool const& __cordl_internal_get_BindColor() const;

  constexpr bool& __cordl_internal_get_BindColor();

  constexpr bool const& __cordl_internal_get_BindRadius() const;

  constexpr bool& __cordl_internal_get_BindRadius();

  constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_Target() const;

  constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_Target();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_BrightnessProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_BrightnessProperty();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_ColorProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_ColorProperty();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_RadiusProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_RadiusProperty();

  constexpr void __cordl_internal_set_BindBrightness(bool value);

  constexpr void __cordl_internal_set_BindColor(bool value);

  constexpr void __cordl_internal_set_BindRadius(bool value);

  constexpr void __cordl_internal_set_Target(::UnityW<::UnityEngine::Light> value);

  constexpr void __cordl_internal_set_m_BrightnessProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_ColorProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_RadiusProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69e5768, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BrightnessProperty, addr 0x69e53a8, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_BrightnessProperty();

  /// @brief Method get_ColorProperty, addr 0x69e5370, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_ColorProperty();

  /// @brief Method get_RadiusProperty, addr 0x69e53e0, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_RadiusProperty();

  /// @brief Method set_BrightnessProperty, addr 0x69e53c0, size 0x20, virtual false, abstract: false, final false
  inline void set_BrightnessProperty(::StringW value);

  /// @brief Method set_ColorProperty, addr 0x69e5388, size 0x20, virtual false, abstract: false, final false
  inline void set_ColorProperty(::StringW value);

  /// @brief Method set_RadiusProperty, addr 0x69e53f8, size 0x20, virtual false, abstract: false, final false
  inline void set_RadiusProperty(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXLightBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXLightBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXLightBinder(VFXLightBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXLightBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXLightBinder(VFXLightBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19998 };

  /// @brief Field m_ColorProperty, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_ColorProperty;

  /// @brief Field m_BrightnessProperty, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_BrightnessProperty;

  /// @brief Field m_RadiusProperty, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_RadiusProperty;

  /// @brief Field Target, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Light> ___Target;

  /// @brief Field BindColor, offset: 0x48, size: 0x1, def value: None
  bool ___BindColor;

  /// @brief Field BindBrightness, offset: 0x49, size: 0x1, def value: None
  bool ___BindBrightness;

  /// @brief Field BindRadius, offset: 0x4a, size: 0x1, def value: None
  bool ___BindRadius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXLightBinder, ___m_ColorProperty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXLightBinder, ___m_BrightnessProperty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXLightBinder, ___m_RadiusProperty) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXLightBinder, ___Target) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXLightBinder, ___BindColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXLightBinder, ___BindBrightness) == 0x49, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXLightBinder, ___BindRadius) == 0x4a, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXLightBinder) == 0x50, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
