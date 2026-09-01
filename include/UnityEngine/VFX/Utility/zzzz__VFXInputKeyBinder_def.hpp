#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXInputKeyBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VFXInputKeyBinder)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXInputKeyBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXInputKeyBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXInputKeyBinder*, "UnityEngine.VFX.Utility", "VFXInputKeyBinder");
// Dependencies UnityEngine.KeyCode, UnityEngine.VFX.Utility.VFXBinderBase
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXInputKeyBinder
class CORDL_TYPE VFXInputKeyBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
  // Declarations
  /// @brief Field Key, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_Key, put = __cordl_internal_set_Key)) ::UnityEngine::KeyCode Key;

  __declspec(property(get = get_KeyProperty, put = set_KeyProperty)) ::StringW KeyProperty;

  __declspec(property(get = get_KeySmoothProperty, put = set_KeySmoothProperty)) ::StringW KeySmoothProperty;

  /// @brief Field SmoothSpeed, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_SmoothSpeed, put = __cordl_internal_set_SmoothSpeed)) float_t SmoothSpeed;

  /// @brief Field UseKeySmooth, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_UseKeySmooth, put = __cordl_internal_set_UseKeySmooth)) bool UseKeySmooth;

  /// @brief Field m_CachedSmoothValue, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CachedSmoothValue, put = __cordl_internal_set_m_CachedSmoothValue)) float_t m_CachedSmoothValue;

  /// @brief Field m_KeyProperty, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_KeyProperty, put = __cordl_internal_set_m_KeyProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* m_KeyProperty;

  /// @brief Field m_KeySmoothProperty, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_KeySmoothProperty, put = __cordl_internal_set_m_KeySmoothProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* m_KeySmoothProperty;

  /// @brief Method IsValid, addr 0x69e3e8c, size 0x74, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXInputKeyBinder* New_ctor();

  /// @brief Method Start, addr 0x69e3f00, size 0x60, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method ToString, addr 0x69e4070, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x69e3f60, size 0x110, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_Key() const;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get_Key();

  constexpr float_t const& __cordl_internal_get_SmoothSpeed() const;

  constexpr float_t& __cordl_internal_get_SmoothSpeed();

  constexpr bool const& __cordl_internal_get_UseKeySmooth() const;

  constexpr bool& __cordl_internal_get_UseKeySmooth();

  constexpr float_t const& __cordl_internal_get_m_CachedSmoothValue() const;

  constexpr float_t& __cordl_internal_get_m_CachedSmoothValue();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_KeyProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_KeyProperty();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_KeySmoothProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_KeySmoothProperty();

  constexpr void __cordl_internal_set_Key(::UnityEngine::KeyCode value);

  constexpr void __cordl_internal_set_SmoothSpeed(float_t value);

  constexpr void __cordl_internal_set_UseKeySmooth(bool value);

  constexpr void __cordl_internal_set_m_CachedSmoothValue(float_t value);

  constexpr void __cordl_internal_set_m_KeyProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_KeySmoothProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69e4130, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_KeyProperty, addr 0x69e3e24, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_KeyProperty();

  /// @brief Method get_KeySmoothProperty, addr 0x69e3e58, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_KeySmoothProperty();

  /// @brief Method set_KeyProperty, addr 0x69e3e3c, size 0x1c, virtual false, abstract: false, final false
  inline void set_KeyProperty(::StringW value);

  /// @brief Method set_KeySmoothProperty, addr 0x69e3e70, size 0x1c, virtual false, abstract: false, final false
  inline void set_KeySmoothProperty(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXInputKeyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXInputKeyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXInputKeyBinder(VFXInputKeyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXInputKeyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXInputKeyBinder(VFXInputKeyBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19994 };

  /// @brief Field m_KeyProperty, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_KeyProperty;

  /// @brief Field m_KeySmoothProperty, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_KeySmoothProperty;

  /// @brief Field Key, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___Key;

  /// @brief Field SmoothSpeed, offset: 0x3c, size: 0x4, def value: None
  float_t ___SmoothSpeed;

  /// @brief Field UseKeySmooth, offset: 0x40, size: 0x1, def value: None
  bool ___UseKeySmooth;

  /// @brief Field m_CachedSmoothValue, offset: 0x44, size: 0x4, def value: None
  float_t ___m_CachedSmoothValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputKeyBinder, ___m_KeyProperty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputKeyBinder, ___m_KeySmoothProperty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputKeyBinder, ___Key) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputKeyBinder, ___SmoothSpeed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputKeyBinder, ___UseKeySmooth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputKeyBinder, ___m_CachedSmoothValue) == 0x44, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXInputKeyBinder) == 0x48, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
