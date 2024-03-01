#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__Grounder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GrounderFBBIK)
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace RootMotion::FinalIK {
class FullBodyBipedIK;
}
namespace RootMotion::FinalIK {
class IKEffector;
}
namespace RootMotion::FinalIK {
class __GrounderFBBIK__SpineEffector;
}
namespace RootMotion::FinalIK {
class __Grounding__Leg;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class GrounderFBBIK;
}
namespace RootMotion::FinalIK {
class __GrounderFBBIK__SpineEffector;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::GrounderFBBIK);
MARK_REF_PTR_T(::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector);
// Type: ::SpineEffector
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::GrounderFBBIK::SpineEffector*
class CORDL_TYPE __GrounderFBBIK__SpineEffector : public ::System::Object {
public:
  // Declarations
  /// @brief Field effectorType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_effectorType, put = __cordl_internal_set_effectorType))::RootMotion::FinalIK::FullBodyBipedEffector effectorType;

  /// @brief Field horizontalWeight, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_horizontalWeight, put = __cordl_internal_set_horizontalWeight)) float_t horizontalWeight;

  /// @brief Field verticalWeight, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_verticalWeight, put = __cordl_internal_set_verticalWeight)) float_t verticalWeight;

  static inline ::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector* New_ctor();

  static inline ::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector* New_ctor(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, float_t horizontalWeight, float_t verticalWeight);

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& __cordl_internal_get_effectorType() const;

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& __cordl_internal_get_effectorType();

  constexpr float_t const& __cordl_internal_get_horizontalWeight() const;

  constexpr float_t& __cordl_internal_get_horizontalWeight();

  constexpr float_t const& __cordl_internal_get_verticalWeight() const;

  constexpr float_t& __cordl_internal_get_verticalWeight();

  constexpr void __cordl_internal_set_effectorType(::RootMotion::FinalIK::FullBodyBipedEffector value);

  constexpr void __cordl_internal_set_horizontalWeight(float_t value);

  constexpr void __cordl_internal_set_verticalWeight(float_t value);

  /// @brief Method .ctor, addr 0x1323890, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x13238a0, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, float_t horizontalWeight, float_t verticalWeight);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GrounderFBBIK__SpineEffector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GrounderFBBIK__SpineEffector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GrounderFBBIK__SpineEffector(__GrounderFBBIK__SpineEffector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GrounderFBBIK__SpineEffector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GrounderFBBIK__SpineEffector(__GrounderFBBIK__SpineEffector const&) = delete;

  /// @brief Field effectorType, offset: 0x10, size: 0x4, def value: None
  ::RootMotion::FinalIK::FullBodyBipedEffector ___effectorType;

  /// @brief Field horizontalWeight, offset: 0x14, size: 0x4, def value: None
  float_t ___horizontalWeight;

  /// @brief Field verticalWeight, offset: 0x18, size: 0x4, def value: None
  float_t ___verticalWeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector, 0x20>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector, ___effectorType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector, ___horizontalWeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector, ___verticalWeight) == 0x18, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::GrounderFBBIK
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 109, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::GrounderFBBIK*
class CORDL_TYPE GrounderFBBIK : public ::RootMotion::FinalIK::Grounder {
public:
  // Declarations
  using SpineEffector = ::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector;

  /// @brief Field feet, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_feet, put = __cordl_internal_set_feet))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> feet;

  /// @brief Field firstSolve, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get_firstSolve, put = __cordl_internal_set_firstSolve)) bool firstSolve;

  /// @brief Field ik, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_ik, put = __cordl_internal_set_ik))::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> ik;

  /// @brief Field spine, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_spine,
                      put = __cordl_internal_set_spine))::ArrayW<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*, ::Array<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>*> spine;

  /// @brief Field spineBend, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_spineBend, put = __cordl_internal_set_spineBend)) float_t spineBend;

  /// @brief Field spineOffset, offset 0x60, size 0xc
  __declspec(property(get = __cordl_internal_get_spineOffset, put = __cordl_internal_set_spineOffset))::UnityEngine::Vector3 spineOffset;

  /// @brief Field spineSpeed, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_spineSpeed, put = __cordl_internal_set_spineSpeed)) float_t spineSpeed;

  /// @brief Method FixedUpdate, addr 0x1322c40, size 0xc, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method Initiate, addr 0x1322a2c, size 0x214, virtual false, abstract: false, final false
  inline void Initiate();

  /// @brief Method IsReadyToInitiate, addr 0x1322948, size 0x88, virtual false, abstract: false, final false
  inline bool IsReadyToInitiate();

  /// @brief Method LateUpdate, addr 0x1322c4c, size 0xc, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::RootMotion::FinalIK::GrounderFBBIK* New_ctor();

  /// @brief Method OnDestroy, addr 0x13236ec, size 0x114, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDrawGizmosSelected, addr 0x13235b8, size 0x134, virtual false, abstract: false, final false
  inline void OnDrawGizmosSelected();

  /// @brief Method OnSolverUpdate, addr 0x1322ecc, size 0x374, virtual false, abstract: false, final false
  inline void OnSolverUpdate();

  /// @brief Method OpenScriptReference, addr 0x1322824, size 0x44, virtual true, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenTutorial, addr 0x132279c, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial();

  /// @brief Method OpenUserManual, addr 0x13227e0, size 0x44, virtual true, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method ResetPosition, addr 0x1322868, size 0x68, virtual true, abstract: false, final false
  inline void ResetPosition();

  /// @brief Method SetLegIK, addr 0x1323434, size 0x184, virtual false, abstract: false, final false
  inline void SetLegIK(::RootMotion::FinalIK::IKEffector* effector, ::RootMotion::FinalIK::__Grounding__Leg* leg);

  /// @brief Method Update, addr 0x13229d0, size 0x5c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_feet() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_feet();

  constexpr bool const& __cordl_internal_get_firstSolve() const;

  constexpr bool& __cordl_internal_get_firstSolve();

  constexpr ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> const& __cordl_internal_get_ik() const;

  constexpr ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK>& __cordl_internal_get_ik();

  constexpr ::ArrayW<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*, ::Array<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>*> const& __cordl_internal_get_spine() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*, ::Array<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>*>& __cordl_internal_get_spine();

  constexpr float_t const& __cordl_internal_get_spineBend() const;

  constexpr float_t& __cordl_internal_get_spineBend();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_spineOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_spineOffset();

  constexpr float_t const& __cordl_internal_get_spineSpeed() const;

  constexpr float_t& __cordl_internal_get_spineSpeed();

  constexpr void __cordl_internal_set_feet(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_firstSolve(bool value);

  constexpr void __cordl_internal_set_ik(::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> value);

  constexpr void __cordl_internal_set_spine(::ArrayW<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*, ::Array<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>*> value);

  constexpr void __cordl_internal_set_spineBend(float_t value);

  constexpr void __cordl_internal_set_spineOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_spineSpeed(float_t value);

  /// @brief Method .ctor, addr 0x1323800, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GrounderFBBIK();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GrounderFBBIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GrounderFBBIK(GrounderFBBIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GrounderFBBIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GrounderFBBIK(GrounderFBBIK const&) = delete;

  /// @brief Field ik, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> ___ik;

  /// @brief Field spineBend, offset: 0x48, size: 0x4, def value: None
  float_t ___spineBend;

  /// @brief Field spineSpeed, offset: 0x4c, size: 0x4, def value: None
  float_t ___spineSpeed;

  /// @brief Field spine, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*, ::Array<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>*> ___spine;

  /// @brief Field feet, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___feet;

  /// @brief Field spineOffset, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___spineOffset;

  /// @brief Field firstSolve, offset: 0x6c, size: 0x1, def value: None
  bool ___firstSolve;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::GrounderFBBIK, 0x70>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderFBBIK, ___ik) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderFBBIK, ___spineBend) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderFBBIK, ___spineSpeed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderFBBIK, ___spine) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderFBBIK, ___feet) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderFBBIK, ___spineOffset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderFBBIK, ___firstSolve) == 0x6c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::GrounderFBBIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GrounderFBBIK*, "RootMotion.FinalIK", "GrounderFBBIK");
NEED_NO_BOX(::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*, "RootMotion.FinalIK", "GrounderFBBIK/SpineEffector");
