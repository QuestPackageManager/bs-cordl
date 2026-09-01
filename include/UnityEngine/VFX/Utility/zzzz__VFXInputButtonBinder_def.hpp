#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXInputButtonBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VFXInputButtonBinder)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXInputButtonBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXInputButtonBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXInputButtonBinder*, "UnityEngine.VFX.Utility", "VFXInputButtonBinder");
// Dependencies UnityEngine.VFX.Utility.VFXBinderBase
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXInputButtonBinder
class CORDL_TYPE VFXInputButtonBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
  // Declarations
  /// @brief Field ButtonName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_ButtonName, put = __cordl_internal_set_ButtonName)) ::StringW ButtonName;

  __declspec(property(get = get_ButtonProperty, put = set_ButtonProperty)) ::StringW ButtonProperty;

  __declspec(property(get = get_ButtonSmoothProperty, put = set_ButtonSmoothProperty)) ::StringW ButtonSmoothProperty;

  /// @brief Field SmoothSpeed, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_SmoothSpeed, put = __cordl_internal_set_SmoothSpeed)) float_t SmoothSpeed;

  /// @brief Field UseButtonSmooth, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_UseButtonSmooth, put = __cordl_internal_set_UseButtonSmooth)) bool UseButtonSmooth;

  /// @brief Field m_ButtonProperty, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ButtonProperty, put = __cordl_internal_set_m_ButtonProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* m_ButtonProperty;

  /// @brief Field m_ButtonSmoothProperty, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ButtonSmoothProperty, put = __cordl_internal_set_m_ButtonSmoothProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* m_ButtonSmoothProperty;

  /// @brief Field m_CachedSmoothValue, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CachedSmoothValue, put = __cordl_internal_set_m_CachedSmoothValue)) float_t m_CachedSmoothValue;

  /// @brief Method IsValid, addr 0x69e3b48, size 0x74, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXInputButtonBinder* New_ctor();

  /// @brief Method Start, addr 0x69e3bbc, size 0x34, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method ToString, addr 0x69e3cdc, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x69e3bf0, size 0xec, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  constexpr ::StringW const& __cordl_internal_get_ButtonName() const;

  constexpr ::StringW& __cordl_internal_get_ButtonName();

  constexpr float_t const& __cordl_internal_get_SmoothSpeed() const;

  constexpr float_t& __cordl_internal_get_SmoothSpeed();

  constexpr bool const& __cordl_internal_get_UseButtonSmooth() const;

  constexpr bool& __cordl_internal_get_UseButtonSmooth();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_ButtonProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_ButtonProperty();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_ButtonSmoothProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_ButtonSmoothProperty();

  constexpr float_t const& __cordl_internal_get_m_CachedSmoothValue() const;

  constexpr float_t& __cordl_internal_get_m_CachedSmoothValue();

  constexpr void __cordl_internal_set_ButtonName(::StringW value);

  constexpr void __cordl_internal_set_SmoothSpeed(float_t value);

  constexpr void __cordl_internal_set_UseButtonSmooth(bool value);

  constexpr void __cordl_internal_set_m_ButtonProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_ButtonSmoothProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_CachedSmoothValue(float_t value);

  /// @brief Method .ctor, addr 0x69e3d7c, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ButtonProperty, addr 0x69e3ae0, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_ButtonProperty();

  /// @brief Method get_ButtonSmoothProperty, addr 0x69e3b14, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_ButtonSmoothProperty();

  /// @brief Method set_ButtonProperty, addr 0x69e3af8, size 0x1c, virtual false, abstract: false, final false
  inline void set_ButtonProperty(::StringW value);

  /// @brief Method set_ButtonSmoothProperty, addr 0x69e3b2c, size 0x1c, virtual false, abstract: false, final false
  inline void set_ButtonSmoothProperty(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXInputButtonBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXInputButtonBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXInputButtonBinder(VFXInputButtonBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXInputButtonBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXInputButtonBinder(VFXInputButtonBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19993 };

  /// @brief Field m_ButtonProperty, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_ButtonProperty;

  /// @brief Field m_ButtonSmoothProperty, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_ButtonSmoothProperty;

  /// @brief Field ButtonName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___ButtonName;

  /// @brief Field SmoothSpeed, offset: 0x40, size: 0x4, def value: None
  float_t ___SmoothSpeed;

  /// @brief Field UseButtonSmooth, offset: 0x44, size: 0x1, def value: None
  bool ___UseButtonSmooth;

  /// @brief Field m_CachedSmoothValue, offset: 0x48, size: 0x4, def value: None
  float_t ___m_CachedSmoothValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputButtonBinder, ___m_ButtonProperty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputButtonBinder, ___m_ButtonSmoothProperty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputButtonBinder, ___ButtonName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputButtonBinder, ___SmoothSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputButtonBinder, ___UseButtonSmooth) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputButtonBinder, ___m_CachedSmoothValue) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXInputButtonBinder) == 0x50, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
