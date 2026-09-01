#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXInputAxisBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VFXInputAxisBinder)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXInputAxisBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXInputAxisBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXInputAxisBinder*, "UnityEngine.VFX.Utility", "VFXInputAxisBinder");
// Dependencies UnityEngine.VFX.Utility.VFXBinderBase
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXInputAxisBinder
class CORDL_TYPE VFXInputAxisBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
  // Declarations
  /// @brief Field Accumulate, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_Accumulate, put = __cordl_internal_set_Accumulate)) bool Accumulate;

  /// @brief Field AccumulateSpeed, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_AccumulateSpeed, put = __cordl_internal_set_AccumulateSpeed)) float_t AccumulateSpeed;

  /// @brief Field AxisName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_AxisName, put = __cordl_internal_set_AxisName)) ::StringW AxisName;

  __declspec(property(get = get_AxisProperty, put = set_AxisProperty)) ::StringW AxisProperty;

  /// @brief Field m_AxisProperty, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AxisProperty, put = __cordl_internal_set_m_AxisProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* m_AxisProperty;

  /// @brief Method IsValid, addr 0x69e38d4, size 0x2c, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXInputAxisBinder* New_ctor();

  /// @brief Method ToString, addr 0x69e39c0, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x69e3900, size 0xc0, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  constexpr bool const& __cordl_internal_get_Accumulate() const;

  constexpr bool& __cordl_internal_get_Accumulate();

  constexpr float_t const& __cordl_internal_get_AccumulateSpeed() const;

  constexpr float_t& __cordl_internal_get_AccumulateSpeed();

  constexpr ::StringW const& __cordl_internal_get_AxisName() const;

  constexpr ::StringW& __cordl_internal_get_AxisName();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_AxisProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_AxisProperty();

  constexpr void __cordl_internal_set_Accumulate(bool value);

  constexpr void __cordl_internal_set_AccumulateSpeed(float_t value);

  constexpr void __cordl_internal_set_AxisName(::StringW value);

  constexpr void __cordl_internal_set_m_AxisProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69e3a60, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AxisProperty, addr 0x69e38a0, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_AxisProperty();

  /// @brief Method set_AxisProperty, addr 0x69e38b8, size 0x1c, virtual false, abstract: false, final false
  inline void set_AxisProperty(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXInputAxisBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXInputAxisBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXInputAxisBinder(VFXInputAxisBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXInputAxisBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXInputAxisBinder(VFXInputAxisBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19992 };

  /// @brief Field m_AxisProperty, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_AxisProperty;

  /// @brief Field AxisName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___AxisName;

  /// @brief Field AccumulateSpeed, offset: 0x38, size: 0x4, def value: None
  float_t ___AccumulateSpeed;

  /// @brief Field Accumulate, offset: 0x3c, size: 0x1, def value: None
  bool ___Accumulate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputAxisBinder, ___m_AxisProperty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputAxisBinder, ___AxisName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputAxisBinder, ___AccumulateSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputAxisBinder, ___Accumulate) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXInputAxisBinder) == 0x40, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
