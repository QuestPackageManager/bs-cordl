#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXVelocityBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXSpaceableBinder_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VFXVelocityBinder)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXVelocityBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXVelocityBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXVelocityBinder*, "UnityEngine.VFX.Utility", "VFXVelocityBinder");
// Dependencies UnityEngine.VFX.Utility.VFXSpaceableBinder, UnityEngine.Vector3
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXVelocityBinder
class CORDL_TYPE VFXVelocityBinder : public ::UnityEngine::VFX::Utility::VFXSpaceableBinder {
public:
  // Declarations
  __declspec(property(get = get_Property, put = set_Property)) ::StringW Property;

  /// @brief Field Target, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Target, put = __cordl_internal_set_Target)) ::UnityW<::UnityEngine::Transform> Target;

  /// @brief Field invalidPreviousTime, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_invalidPreviousTime, put = setStaticF_invalidPreviousTime)) float_t invalidPreviousTime;

  /// @brief Field m_PreviousPosition, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get_m_PreviousPosition, put = __cordl_internal_set_m_PreviousPosition)) ::UnityEngine::Vector3 m_PreviousPosition;

  /// @brief Field m_PreviousTime, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousTime, put = __cordl_internal_set_m_PreviousTime)) float_t m_PreviousTime;

  /// @brief Field m_Property, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Property, put = __cordl_internal_set_m_Property)) ::UnityEngine::VFX::Utility::ExposedProperty* m_Property;

  /// @brief Method IsValid, addr 0x69e8cc4, size 0xac, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXVelocityBinder* New_ctor();

  /// @brief Method Reset, addr 0x69e8d70, size 0x64, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ToString, addr 0x69e8fa0, size 0xfc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x69e8dd4, size 0x1cc, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Target() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Target();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PreviousPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PreviousPosition();

  constexpr float_t const& __cordl_internal_get_m_PreviousTime() const;

  constexpr float_t& __cordl_internal_get_m_PreviousTime();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_Property() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_Property();

  constexpr void __cordl_internal_set_Target(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_PreviousPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_PreviousTime(float_t value);

  constexpr void __cordl_internal_set_m_Property(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69e909c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline float_t getStaticF_invalidPreviousTime();

  /// @brief Method get_Property, addr 0x69e8c8c, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_Property();

  static inline void setStaticF_invalidPreviousTime(float_t value);

  /// @brief Method set_Property, addr 0x69e8ca4, size 0x20, virtual false, abstract: false, final false
  inline void set_Property(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXVelocityBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXVelocityBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXVelocityBinder(VFXVelocityBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXVelocityBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXVelocityBinder(VFXVelocityBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20013 };

  /// @brief Field m_Property, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_Property;

  /// @brief Field Target, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___Target;

  /// @brief Field m_PreviousTime, offset: 0x40, size: 0x4, def value: None
  float_t ___m_PreviousTime;

  /// @brief Field m_PreviousPosition, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_PreviousPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXVelocityBinder, ___m_Property) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXVelocityBinder, ___Target) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXVelocityBinder, ___m_PreviousTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXVelocityBinder, ___m_PreviousPosition) == 0x44, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXVelocityBinder) == 0x50, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
