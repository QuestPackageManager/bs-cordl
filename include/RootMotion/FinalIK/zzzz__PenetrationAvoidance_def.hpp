#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PenetrationAvoidance)
namespace GlobalNamespace {
class __PenetrationAvoidance__Avoider__EffectorLink;
}
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
namespace RootMotion::FinalIK {
class __PenetrationAvoidance__Avoider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class __PenetrationAvoidance__Avoider__EffectorLink;
}
namespace RootMotion::FinalIK {
class PenetrationAvoidance;
}
namespace RootMotion::FinalIK {
class __PenetrationAvoidance__Avoider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink);
MARK_REF_PTR_T(::RootMotion::FinalIK::PenetrationAvoidance);
MARK_REF_PTR_T(::RootMotion::FinalIK::__PenetrationAvoidance__Avoider);
// Type: ::EffectorLink
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PenetrationAvoidance::Avoider::EffectorLink*
class CORDL_TYPE __PenetrationAvoidance__Avoider__EffectorLink : public ::System::Object {
public:
  // Declarations
  /// @brief Field effector, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_effector, put = __cordl_internal_set_effector))::RootMotion::FinalIK::FullBodyBipedEffector effector;

  /// @brief Field weight, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  static inline ::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink* New_ctor();

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& __cordl_internal_get_effector() const;

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& __cordl_internal_get_effector();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr float_t& __cordl_internal_get_weight();

  constexpr void __cordl_internal_set_effector(::RootMotion::FinalIK::FullBodyBipedEffector value);

  constexpr void __cordl_internal_set_weight(float_t value);

  /// @brief Method .ctor, addr 0x139c614, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PenetrationAvoidance__Avoider__EffectorLink();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PenetrationAvoidance__Avoider__EffectorLink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PenetrationAvoidance__Avoider__EffectorLink(__PenetrationAvoidance__Avoider__EffectorLink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PenetrationAvoidance__Avoider__EffectorLink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PenetrationAvoidance__Avoider__EffectorLink(__PenetrationAvoidance__Avoider__EffectorLink const&) = delete;

  /// @brief Field effector, offset: 0x10, size: 0x4, def value: None
  ::RootMotion::FinalIK::FullBodyBipedEffector ___effector;

  /// @brief Field weight, offset: 0x14, size: 0x4, def value: None
  float_t ___weight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink, ___effector) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink, ___weight) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Avoider
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::PenetrationAvoidance::Avoider*
class CORDL_TYPE __PenetrationAvoidance__Avoider : public ::System::Object {
public:
  // Declarations
  using EffectorLink = ::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink;

  /// @brief Field effectors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_effectors, put = __cordl_internal_set_effectors))::ArrayW<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*,
                                                                                                           ::Array<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>*> effectors;

  /// @brief Field layers, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_layers, put = __cordl_internal_set_layers))::UnityEngine::LayerMask layers;

  /// @brief Field offset, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset))::UnityEngine::Vector3 offset;

  /// @brief Field offsetTarget, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get_offsetTarget, put = __cordl_internal_set_offsetTarget))::UnityEngine::Vector3 offsetTarget;

  /// @brief Field offsetV, offset 0x54, size 0xc
  __declspec(property(get = __cordl_internal_get_offsetV, put = __cordl_internal_set_offsetV))::UnityEngine::Vector3 offsetV;

  /// @brief Field raycastFrom, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_raycastFrom,
                      put = __cordl_internal_set_raycastFrom))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> raycastFrom;

  /// @brief Field raycastRadius, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_raycastRadius, put = __cordl_internal_set_raycastRadius)) float_t raycastRadius;

  /// @brief Field raycastTo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_raycastTo, put = __cordl_internal_set_raycastTo))::UnityW<::UnityEngine::Transform> raycastTo;

  /// @brief Field smoothTimeIn, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothTimeIn, put = __cordl_internal_set_smoothTimeIn)) float_t smoothTimeIn;

  /// @brief Field smoothTimeOut, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothTimeOut, put = __cordl_internal_set_smoothTimeOut)) float_t smoothTimeOut;

  /// @brief Method GetOffsetTarget, addr 0x139c1d8, size 0x108, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetOffsetTarget(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver);

  static inline ::RootMotion::FinalIK::__PenetrationAvoidance__Avoider* New_ctor();

  /// @brief Method Raycast, addr 0x139c2e0, size 0x320, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 Raycast(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to);

  /// @brief Method Solve, addr 0x139c038, size 0x190, virtual false, abstract: false, final false
  inline void Solve(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float_t weight);

  constexpr ::ArrayW<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*, ::Array<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>*> const&
  __cordl_internal_get_effectors() const;

  constexpr ::ArrayW<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*, ::Array<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>*>& __cordl_internal_get_effectors();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layers() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layers();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offsetTarget() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_offsetTarget();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offsetV() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_offsetV();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_raycastFrom() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_raycastFrom();

  constexpr float_t const& __cordl_internal_get_raycastRadius() const;

  constexpr float_t& __cordl_internal_get_raycastRadius();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_raycastTo() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_raycastTo();

  constexpr float_t const& __cordl_internal_get_smoothTimeIn() const;

  constexpr float_t& __cordl_internal_get_smoothTimeIn();

  constexpr float_t const& __cordl_internal_get_smoothTimeOut() const;

  constexpr float_t& __cordl_internal_get_smoothTimeOut();

  constexpr void
  __cordl_internal_set_effectors(::ArrayW<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*, ::Array<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>*> value);

  constexpr void __cordl_internal_set_layers(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_offsetTarget(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_offsetV(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_raycastFrom(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_raycastRadius(float_t value);

  constexpr void __cordl_internal_set_raycastTo(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_smoothTimeIn(float_t value);

  constexpr void __cordl_internal_set_smoothTimeOut(float_t value);

  /// @brief Method .ctor, addr 0x139c600, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PenetrationAvoidance__Avoider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PenetrationAvoidance__Avoider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PenetrationAvoidance__Avoider(__PenetrationAvoidance__Avoider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PenetrationAvoidance__Avoider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PenetrationAvoidance__Avoider(__PenetrationAvoidance__Avoider const&) = delete;

  /// @brief Field raycastFrom, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___raycastFrom;

  /// @brief Field raycastTo, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___raycastTo;

  /// @brief Field raycastRadius, offset: 0x20, size: 0x4, def value: None
  float_t ___raycastRadius;

  /// @brief Field effectors, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*, ::Array<::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*>*> ___effectors;

  /// @brief Field smoothTimeIn, offset: 0x30, size: 0x4, def value: None
  float_t ___smoothTimeIn;

  /// @brief Field smoothTimeOut, offset: 0x34, size: 0x4, def value: None
  float_t ___smoothTimeOut;

  /// @brief Field layers, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___layers;

  /// @brief Field offset, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___offset;

  /// @brief Field offsetTarget, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___offsetTarget;

  /// @brief Field offsetV, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___offsetV;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider, 0x60>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__PenetrationAvoidance__Avoider, ___raycastFrom) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__PenetrationAvoidance__Avoider, ___raycastTo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__PenetrationAvoidance__Avoider, ___raycastRadius) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__PenetrationAvoidance__Avoider, ___effectors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__PenetrationAvoidance__Avoider, ___smoothTimeIn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__PenetrationAvoidance__Avoider, ___smoothTimeOut) == 0x34, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__PenetrationAvoidance__Avoider, ___layers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__PenetrationAvoidance__Avoider, ___offset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__PenetrationAvoidance__Avoider, ___offsetTarget) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__PenetrationAvoidance__Avoider, ___offsetV) == 0x54, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::PenetrationAvoidance
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::PenetrationAvoidance*
class CORDL_TYPE PenetrationAvoidance : public ::RootMotion::FinalIK::OffsetModifier {
public:
  // Declarations
  using Avoider = ::RootMotion::FinalIK::__PenetrationAvoidance__Avoider;

  /// @brief Field avoiders, offset 0x30, size 0x8
  __declspec(
      property(get = __cordl_internal_get_avoiders,
               put = __cordl_internal_set_avoiders))::ArrayW<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*, ::Array<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>*> avoiders;

  static inline ::RootMotion::FinalIK::PenetrationAvoidance* New_ctor();

  /// @brief Method OnModifyOffset, addr 0x139bfc8, size 0x70, virtual true, abstract: false, final false
  inline void OnModifyOffset();

  constexpr ::ArrayW<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*, ::Array<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>*> const& __cordl_internal_get_avoiders() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*, ::Array<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>*>& __cordl_internal_get_avoiders();

  constexpr void __cordl_internal_set_avoiders(::ArrayW<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*, ::Array<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>*> value);

  /// @brief Method .ctor, addr 0x139c1c8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PenetrationAvoidance();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PenetrationAvoidance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PenetrationAvoidance(PenetrationAvoidance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PenetrationAvoidance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PenetrationAvoidance(PenetrationAvoidance const&) = delete;

  /// @brief Field avoiders, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*, ::Array<::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*>*> ___avoiders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::PenetrationAvoidance, 0x38>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::PenetrationAvoidance, ___avoiders) == 0x30, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PenetrationAvoidance__Avoider__EffectorLink*, "RootMotion.FinalIK", "PenetrationAvoidance/Avoider/EffectorLink");
NEED_NO_BOX(::RootMotion::FinalIK::PenetrationAvoidance);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::PenetrationAvoidance*, "RootMotion.FinalIK", "PenetrationAvoidance");
NEED_NO_BOX(::RootMotion::FinalIK::__PenetrationAvoidance__Avoider);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__PenetrationAvoidance__Avoider*, "RootMotion.FinalIK", "PenetrationAvoidance/Avoider");
