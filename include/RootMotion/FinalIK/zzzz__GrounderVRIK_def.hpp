#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Grounder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(GrounderVRIK)
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
struct __IKSolverVR__PositionOffset;
}
namespace RootMotion::FinalIK {
class VRIK;
}
namespace RootMotion::FinalIK {
class __Grounding__Leg;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class GrounderVRIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::GrounderVRIK);
// Type: RootMotion.FinalIK::GrounderVRIK
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12446))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12453))
// CS Name: ::RootMotion.FinalIK::GrounderVRIK*
class CORDL_TYPE GrounderVRIK : public ::RootMotion::FinalIK::Grounder {
public:
  // Declarations
  /// @brief Field ik, offset 0x40, size 0x8
  __declspec(property(get = __get_ik, put = __set_ik))::RootMotion::FinalIK::VRIK* ik;

  /// @brief Field feet, offset 0x48, size 0x8
  __declspec(property(get = __get_feet, put = __set_feet))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> feet;

  constexpr ::RootMotion::FinalIK::VRIK*& __get_ik();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::VRIK*> const& __get_ik() const;

  constexpr void __set_ik(::RootMotion::FinalIK::VRIK* value);

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get_feet();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get_feet() const;

  constexpr void __set_feet(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  /// @brief Method OpenTutorial addr 0x11dae84 size 0x44 virtual false final false
  inline void OpenTutorial();

  /// @brief Method OpenUserManual addr 0x11daec8 size 0x44 virtual true final false
  inline void OpenUserManual();

  /// @brief Method OpenScriptReference addr 0x11daf0c size 0x44 virtual true final false
  inline void OpenScriptReference();

  /// @brief Method ResetPosition addr 0x11daf50 size 0x18 virtual true final false
  inline void ResetPosition();

  /// @brief Method IsReadyToInitiate addr 0x11daf68 size 0x88 virtual false final false
  inline bool IsReadyToInitiate();

  /// @brief Method Update addr 0x11daff0 size 0x54 virtual false final false
  inline void Update();

  /// @brief Method Initiate addr 0x11db044 size 0x238 virtual false final false
  inline void Initiate();

  /// @brief Method OnSolverUpdate addr 0x11db27c size 0x1f4 virtual false final false
  inline void OnSolverUpdate();

  /// @brief Method SetLegIK addr 0x11db470 size 0x84 virtual false final false
  inline void SetLegIK(::RootMotion::FinalIK::__IKSolverVR__PositionOffset positionOffset, ::UnityEngine::Transform* bone, ::RootMotion::FinalIK::__Grounding__Leg* leg);

  /// @brief Method OnPostSolverUpdate addr 0x11db4f4 size 0x29c virtual false final false
  inline void OnPostSolverUpdate();

  /// @brief Method OnDrawGizmosSelected addr 0x11db790 size 0x134 virtual false final false
  inline void OnDrawGizmosSelected();

  /// @brief Method OnDestroy addr 0x11db8c4 size 0x198 virtual false final false
  inline void OnDestroy();

  static inline ::RootMotion::FinalIK::GrounderVRIK* New_ctor();

  /// @brief Method .ctor addr 0x11dba5c size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GrounderVRIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GrounderVRIK(GrounderVRIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GrounderVRIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GrounderVRIK(GrounderVRIK const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GrounderVRIK();

public:
  /// @brief Field ik, offset: 0x40, size: 0x8, def value: None
  ::RootMotion::FinalIK::VRIK* ___ik;

  /// @brief Field feet, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ___feet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::GrounderVRIK, 0x50>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderVRIK, ___ik) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderVRIK, ___feet) == 0x48, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::GrounderVRIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GrounderVRIK*, "RootMotion.FinalIK", "GrounderVRIK");
