#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXRigidBodyCollisionEventBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXEventBinderBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(VFXRigidBodyCollisionEventBinder)
namespace System {
class Object;
}
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine {
class Collision;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXRigidBodyCollisionEventBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder*, "UnityEngine.VFX.Utility", "VFXRigidBodyCollisionEventBinder");
// Dependencies UnityEngine.VFX.Utility.VFXEventBinderBase
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXRigidBodyCollisionEventBinder
class CORDL_TYPE VFXRigidBodyCollisionEventBinder : public ::UnityEngine::VFX::Utility::VFXEventBinderBase {
public:
  // Declarations
  /// @brief Field directionParameter, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_directionParameter, put = __cordl_internal_set_directionParameter)) ::UnityEngine::VFX::Utility::ExposedProperty* directionParameter;

  /// @brief Field positionParameter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_positionParameter, put = __cordl_internal_set_positionParameter)) ::UnityEngine::VFX::Utility::ExposedProperty* positionParameter;

  static inline ::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder* New_ctor();

  /// @brief Method OnCollisionEnter, addr 0x69e15e0, size 0x154, virtual false, abstract: false, final false
  inline void OnCollisionEnter(::UnityEngine::Collision* collision);

  /// @brief Method SetEventAttribute, addr 0x69e14e4, size 0xfc, virtual true, abstract: false, final false
  inline void SetEventAttribute(::ArrayW<::System::Object*> parameters);

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_directionParameter() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_directionParameter();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_positionParameter() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_positionParameter();

  constexpr void __cordl_internal_set_directionParameter(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_positionParameter(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69e1734, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXRigidBodyCollisionEventBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXRigidBodyCollisionEventBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXRigidBodyCollisionEventBinder(VFXRigidBodyCollisionEventBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXRigidBodyCollisionEventBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXRigidBodyCollisionEventBinder(VFXRigidBodyCollisionEventBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19977 };

  /// @brief Field positionParameter, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___positionParameter;

  /// @brief Field directionParameter, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___directionParameter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder, ___positionParameter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder, ___directionParameter) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder) == 0x48, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
