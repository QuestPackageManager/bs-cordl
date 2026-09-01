#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXUISliderBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VFXUISliderBinder)
namespace UnityEngine::UI {
class Slider;
}
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXUISliderBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXUISliderBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXUISliderBinder*, "UnityEngine.VFX.Utility", "VFXUISliderBinder");
// Dependencies UnityEngine.VFX.Utility.VFXBinderBase
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXUISliderBinder
class CORDL_TYPE VFXUISliderBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
  // Declarations
  __declspec(property(get = get_Property, put = set_Property)) ::StringW Property;

  /// @brief Field Target, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Target, put = __cordl_internal_set_Target)) ::UnityW<::UnityEngine::UI::Slider> Target;

  /// @brief Field m_Property, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Property, put = __cordl_internal_set_m_Property)) ::UnityEngine::VFX::Utility::ExposedProperty* m_Property;

  /// @brief Method IsValid, addr 0x69e87a8, size 0xac, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXUISliderBinder* New_ctor();

  /// @brief Method ToString, addr 0x69e88b0, size 0xfc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x69e8854, size 0x5c, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  constexpr ::UnityW<::UnityEngine::UI::Slider> const& __cordl_internal_get_Target() const;

  constexpr ::UnityW<::UnityEngine::UI::Slider>& __cordl_internal_get_Target();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_Property() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_Property();

  constexpr void __cordl_internal_set_Target(::UnityW<::UnityEngine::UI::Slider> value);

  constexpr void __cordl_internal_set_m_Property(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69e89ac, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Property, addr 0x69e8770, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_Property();

  /// @brief Method set_Property, addr 0x69e8788, size 0x20, virtual false, abstract: false, final false
  inline void set_Property(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXUISliderBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXUISliderBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXUISliderBinder(VFXUISliderBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXUISliderBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXUISliderBinder(VFXUISliderBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20011 };

  /// @brief Field m_Property, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_Property;

  /// @brief Field Target, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Slider> ___Target;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXUISliderBinder, ___m_Property) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXUISliderBinder, ___Target) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXUISliderBinder) == 0x38, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
