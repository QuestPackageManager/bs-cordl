#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(BipedLimbOrientations)
namespace RootMotion {
class __BipedLimbOrientations__LimbOrientation;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion {
class BipedLimbOrientations;
}
namespace RootMotion {
class __BipedLimbOrientations__LimbOrientation;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::BipedLimbOrientations);
MARK_REF_PTR_T(::RootMotion::__BipedLimbOrientations__LimbOrientation);
// Type: ::LimbOrientation
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// CS Name: ::BipedLimbOrientations::LimbOrientation*
class CORDL_TYPE __BipedLimbOrientations__LimbOrientation : public ::System::Object {
public:
  // Declarations
  /// @brief Field lastBoneLeftAxis, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_lastBoneLeftAxis, put = __cordl_internal_set_lastBoneLeftAxis))::UnityEngine::Vector3 lastBoneLeftAxis;

  /// @brief Field lowerBoneForwardAxis, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_lowerBoneForwardAxis, put = __cordl_internal_set_lowerBoneForwardAxis))::UnityEngine::Vector3 lowerBoneForwardAxis;

  /// @brief Field upperBoneForwardAxis, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_upperBoneForwardAxis, put = __cordl_internal_set_upperBoneForwardAxis))::UnityEngine::Vector3 upperBoneForwardAxis;

  static inline ::RootMotion::__BipedLimbOrientations__LimbOrientation* New_ctor(::UnityEngine::Vector3 upperBoneForwardAxis, ::UnityEngine::Vector3 lowerBoneForwardAxis,
                                                                                 ::UnityEngine::Vector3 lastBoneLeftAxis);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastBoneLeftAxis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastBoneLeftAxis();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lowerBoneForwardAxis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lowerBoneForwardAxis();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_upperBoneForwardAxis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_upperBoneForwardAxis();

  constexpr void __cordl_internal_set_lastBoneLeftAxis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_lowerBoneForwardAxis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_upperBoneForwardAxis(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x13120f0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 upperBoneForwardAxis, ::UnityEngine::Vector3 lowerBoneForwardAxis, ::UnityEngine::Vector3 lastBoneLeftAxis);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BipedLimbOrientations__LimbOrientation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BipedLimbOrientations__LimbOrientation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BipedLimbOrientations__LimbOrientation(__BipedLimbOrientations__LimbOrientation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BipedLimbOrientations__LimbOrientation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BipedLimbOrientations__LimbOrientation(__BipedLimbOrientations__LimbOrientation const&) = delete;

  /// @brief Field upperBoneForwardAxis, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___upperBoneForwardAxis;

  /// @brief Field lowerBoneForwardAxis, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lowerBoneForwardAxis;

  /// @brief Field lastBoneLeftAxis, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastBoneLeftAxis;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::__BipedLimbOrientations__LimbOrientation, 0x38>, "Size mismatch!");

static_assert(offsetof(::RootMotion::__BipedLimbOrientations__LimbOrientation, ___upperBoneForwardAxis) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::__BipedLimbOrientations__LimbOrientation, ___lowerBoneForwardAxis) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::__BipedLimbOrientations__LimbOrientation, ___lastBoneLeftAxis) == 0x28, "Offset mismatch!");

} // namespace RootMotion
// Type: RootMotion::BipedLimbOrientations
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// CS Name: ::RootMotion::BipedLimbOrientations*
class CORDL_TYPE BipedLimbOrientations : public ::System::Object {
public:
  // Declarations
  using LimbOrientation = ::RootMotion::__BipedLimbOrientations__LimbOrientation;

  /// @brief Field leftArm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_leftArm, put = __cordl_internal_set_leftArm))::RootMotion::__BipedLimbOrientations__LimbOrientation* leftArm;

  /// @brief Field leftLeg, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_leftLeg, put = __cordl_internal_set_leftLeg))::RootMotion::__BipedLimbOrientations__LimbOrientation* leftLeg;

  /// @brief Field rightArm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_rightArm, put = __cordl_internal_set_rightArm))::RootMotion::__BipedLimbOrientations__LimbOrientation* rightArm;

  /// @brief Field rightLeg, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_rightLeg, put = __cordl_internal_set_rightLeg))::RootMotion::__BipedLimbOrientations__LimbOrientation* rightLeg;

  static inline ::RootMotion::BipedLimbOrientations* New_ctor(::RootMotion::__BipedLimbOrientations__LimbOrientation* leftArm, ::RootMotion::__BipedLimbOrientations__LimbOrientation* rightArm,
                                                              ::RootMotion::__BipedLimbOrientations__LimbOrientation* leftLeg, ::RootMotion::__BipedLimbOrientations__LimbOrientation* rightLeg);

  constexpr ::RootMotion::__BipedLimbOrientations__LimbOrientation*& __cordl_internal_get_leftArm();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::__BipedLimbOrientations__LimbOrientation*> const& __cordl_internal_get_leftArm() const;

  constexpr ::RootMotion::__BipedLimbOrientations__LimbOrientation*& __cordl_internal_get_leftLeg();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::__BipedLimbOrientations__LimbOrientation*> const& __cordl_internal_get_leftLeg() const;

  constexpr ::RootMotion::__BipedLimbOrientations__LimbOrientation*& __cordl_internal_get_rightArm();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::__BipedLimbOrientations__LimbOrientation*> const& __cordl_internal_get_rightArm() const;

  constexpr ::RootMotion::__BipedLimbOrientations__LimbOrientation*& __cordl_internal_get_rightLeg();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::__BipedLimbOrientations__LimbOrientation*> const& __cordl_internal_get_rightLeg() const;

  constexpr void __cordl_internal_set_leftArm(::RootMotion::__BipedLimbOrientations__LimbOrientation* value);

  constexpr void __cordl_internal_set_leftLeg(::RootMotion::__BipedLimbOrientations__LimbOrientation* value);

  constexpr void __cordl_internal_set_rightArm(::RootMotion::__BipedLimbOrientations__LimbOrientation* value);

  constexpr void __cordl_internal_set_rightLeg(::RootMotion::__BipedLimbOrientations__LimbOrientation* value);

  /// @brief Method .ctor, addr 0x1311dfc, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::RootMotion::__BipedLimbOrientations__LimbOrientation* leftArm, ::RootMotion::__BipedLimbOrientations__LimbOrientation* rightArm,
                    ::RootMotion::__BipedLimbOrientations__LimbOrientation* leftLeg, ::RootMotion::__BipedLimbOrientations__LimbOrientation* rightLeg);

  /// @brief Method get_MaxBiped, addr 0x1312164, size 0x2b4, virtual false, abstract: false, final false
  static inline ::RootMotion::BipedLimbOrientations* get_MaxBiped();

  /// @brief Method get_UMA, addr 0x1311e3c, size 0x2b4, virtual false, abstract: false, final false
  static inline ::RootMotion::BipedLimbOrientations* get_UMA();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BipedLimbOrientations();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BipedLimbOrientations", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BipedLimbOrientations(BipedLimbOrientations&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BipedLimbOrientations", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BipedLimbOrientations(BipedLimbOrientations const&) = delete;

  /// @brief Field leftArm, offset: 0x10, size: 0x8, def value: None
  ::RootMotion::__BipedLimbOrientations__LimbOrientation* ___leftArm;

  /// @brief Field rightArm, offset: 0x18, size: 0x8, def value: None
  ::RootMotion::__BipedLimbOrientations__LimbOrientation* ___rightArm;

  /// @brief Field leftLeg, offset: 0x20, size: 0x8, def value: None
  ::RootMotion::__BipedLimbOrientations__LimbOrientation* ___leftLeg;

  /// @brief Field rightLeg, offset: 0x28, size: 0x8, def value: None
  ::RootMotion::__BipedLimbOrientations__LimbOrientation* ___rightLeg;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::BipedLimbOrientations, 0x30>, "Size mismatch!");

static_assert(offsetof(::RootMotion::BipedLimbOrientations, ___leftArm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedLimbOrientations, ___rightArm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedLimbOrientations, ___leftLeg) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedLimbOrientations, ___rightLeg) == 0x28, "Offset mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::BipedLimbOrientations);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::BipedLimbOrientations*, "RootMotion", "BipedLimbOrientations");
NEED_NO_BOX(::RootMotion::__BipedLimbOrientations__LimbOrientation);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::__BipedLimbOrientations__LimbOrientation*, "RootMotion", "BipedLimbOrientations/LimbOrientation");
