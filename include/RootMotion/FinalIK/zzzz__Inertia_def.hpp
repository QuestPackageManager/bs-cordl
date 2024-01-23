#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Inertia)
namespace GlobalNamespace {
class __Inertia__Body__EffectorLink;
}
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
namespace RootMotion::FinalIK {
class __Inertia__Body;
}
namespace RootMotion::FinalIK {
class __OffsetModifier__OffsetLimits;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class __Inertia__Body__EffectorLink;
}
namespace RootMotion::FinalIK {
class Inertia;
}
namespace RootMotion::FinalIK {
class __Inertia__Body;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__Inertia__Body__EffectorLink);
MARK_REF_PTR_T(::RootMotion::FinalIK::Inertia);
MARK_REF_PTR_T(::RootMotion::FinalIK::__Inertia__Body);
// Type: ::EffectorLink
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12571))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12650))
// CS Name: ::Inertia::Body::EffectorLink*
class CORDL_TYPE __Inertia__Body__EffectorLink : public ::System::Object {
public:
  // Declarations
  /// @brief Field effector, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_effector, put = __cordl_internal_set_effector))::RootMotion::FinalIK::FullBodyBipedEffector effector;

  /// @brief Field weight, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& __cordl_internal_get_effector();

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& __cordl_internal_get_effector() const;

  constexpr void __cordl_internal_set_effector(::RootMotion::FinalIK::FullBodyBipedEffector value);

  constexpr float_t& __cordl_internal_get_weight();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr void __cordl_internal_set_weight(float_t value);

  static inline ::GlobalNamespace::__Inertia__Body__EffectorLink* New_ctor();

  /// @brief Method .ctor, addr 0x12971b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Inertia__Body__EffectorLink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Inertia__Body__EffectorLink(__Inertia__Body__EffectorLink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Inertia__Body__EffectorLink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Inertia__Body__EffectorLink(__Inertia__Body__EffectorLink const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Inertia__Body__EffectorLink();

public:
  /// @brief Field effector, offset: 0x10, size: 0x4, def value: None
  ::RootMotion::FinalIK::FullBodyBipedEffector ___effector;

  /// @brief Field weight, offset: 0x14, size: 0x4, def value: None
  float_t ___weight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Inertia__Body__EffectorLink, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Inertia__Body__EffectorLink, ___effector) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Inertia__Body__EffectorLink, ___weight) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Body
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12651))
// CS Name: ::Inertia::Body*
class CORDL_TYPE __Inertia__Body : public ::System::Object {
public:
  // Declarations
  using EffectorLink = ::GlobalNamespace::__Inertia__Body__EffectorLink;

  /// @brief Field transform, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_transform, put = __cordl_internal_set_transform))::UnityW<::UnityEngine::Transform> transform;

  /// @brief Field effectorLinks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_effectorLinks,
                      put = __cordl_internal_set_effectorLinks))::ArrayW<::GlobalNamespace::__Inertia__Body__EffectorLink*, ::Array<::GlobalNamespace::__Inertia__Body__EffectorLink*>*> effectorLinks;

  /// @brief Field speed, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_speed, put = __cordl_internal_set_speed)) float_t speed;

  /// @brief Field acceleration, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_acceleration, put = __cordl_internal_set_acceleration)) float_t acceleration;

  /// @brief Field matchVelocity, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_matchVelocity, put = __cordl_internal_set_matchVelocity)) float_t matchVelocity;

  /// @brief Field gravity, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_gravity, put = __cordl_internal_set_gravity)) float_t gravity;

  /// @brief Field delta, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get_delta, put = __cordl_internal_set_delta))::UnityEngine::Vector3 delta;

  /// @brief Field lazyPoint, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get_lazyPoint, put = __cordl_internal_set_lazyPoint))::UnityEngine::Vector3 lazyPoint;

  /// @brief Field direction, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get_direction, put = __cordl_internal_set_direction))::UnityEngine::Vector3 direction;

  /// @brief Field lastPosition, offset 0x54, size 0xc
  __declspec(property(get = __cordl_internal_get_lastPosition, put = __cordl_internal_set_lastPosition))::UnityEngine::Vector3 lastPosition;

  /// @brief Field firstUpdate, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_firstUpdate, put = __cordl_internal_set_firstUpdate)) bool firstUpdate;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

  constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value);

  constexpr ::ArrayW<::GlobalNamespace::__Inertia__Body__EffectorLink*, ::Array<::GlobalNamespace::__Inertia__Body__EffectorLink*>*>& __cordl_internal_get_effectorLinks();

  constexpr ::ArrayW<::GlobalNamespace::__Inertia__Body__EffectorLink*, ::Array<::GlobalNamespace::__Inertia__Body__EffectorLink*>*> const& __cordl_internal_get_effectorLinks() const;

  constexpr void __cordl_internal_set_effectorLinks(::ArrayW<::GlobalNamespace::__Inertia__Body__EffectorLink*, ::Array<::GlobalNamespace::__Inertia__Body__EffectorLink*>*> value);

  constexpr float_t& __cordl_internal_get_speed();

  constexpr float_t const& __cordl_internal_get_speed() const;

  constexpr void __cordl_internal_set_speed(float_t value);

  constexpr float_t& __cordl_internal_get_acceleration();

  constexpr float_t const& __cordl_internal_get_acceleration() const;

  constexpr void __cordl_internal_set_acceleration(float_t value);

  constexpr float_t& __cordl_internal_get_matchVelocity();

  constexpr float_t const& __cordl_internal_get_matchVelocity() const;

  constexpr void __cordl_internal_set_matchVelocity(float_t value);

  constexpr float_t& __cordl_internal_get_gravity();

  constexpr float_t const& __cordl_internal_get_gravity() const;

  constexpr void __cordl_internal_set_gravity(float_t value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_delta();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_delta() const;

  constexpr void __cordl_internal_set_delta(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lazyPoint();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lazyPoint() const;

  constexpr void __cordl_internal_set_lazyPoint(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_direction();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_direction() const;

  constexpr void __cordl_internal_set_direction(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

  constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3 value);

  constexpr bool& __cordl_internal_get_firstUpdate();

  constexpr bool const& __cordl_internal_get_firstUpdate() const;

  constexpr void __cordl_internal_set_firstUpdate(bool value);

  /// @brief Method Reset, addr 0x1296cb8, size 0xdc, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x1296e38, size 0x2a4, virtual false, abstract: false, final false
  inline void Update(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float_t weight, float_t deltaTime);

  static inline ::RootMotion::FinalIK::__Inertia__Body* New_ctor();

  /// @brief Method .ctor, addr 0x1297194, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Inertia__Body", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Inertia__Body(__Inertia__Body&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Inertia__Body", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Inertia__Body(__Inertia__Body const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Inertia__Body();

public:
  /// @brief Field transform, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___transform;

  /// @brief Field effectorLinks, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__Inertia__Body__EffectorLink*, ::Array<::GlobalNamespace::__Inertia__Body__EffectorLink*>*> ___effectorLinks;

  /// @brief Field speed, offset: 0x20, size: 0x4, def value: None
  float_t ___speed;

  /// @brief Field acceleration, offset: 0x24, size: 0x4, def value: None
  float_t ___acceleration;

  /// @brief Field matchVelocity, offset: 0x28, size: 0x4, def value: None
  float_t ___matchVelocity;

  /// @brief Field gravity, offset: 0x2c, size: 0x4, def value: None
  float_t ___gravity;

  /// @brief Field delta, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___delta;

  /// @brief Field lazyPoint, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lazyPoint;

  /// @brief Field direction, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___direction;

  /// @brief Field lastPosition, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastPosition;

  /// @brief Field firstUpdate, offset: 0x60, size: 0x1, def value: None
  bool ___firstUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__Inertia__Body, 0x68>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Inertia__Body, ___transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Inertia__Body, ___effectorLinks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Inertia__Body, ___speed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Inertia__Body, ___acceleration) == 0x24, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Inertia__Body, ___matchVelocity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Inertia__Body, ___gravity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Inertia__Body, ___delta) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Inertia__Body, ___lazyPoint) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Inertia__Body, ___direction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Inertia__Body, ___lastPosition) == 0x54, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Inertia__Body, ___firstUpdate) == 0x60, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::Inertia
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12656))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12652))
// CS Name: ::RootMotion.FinalIK::Inertia*
class CORDL_TYPE Inertia : public ::RootMotion::FinalIK::OffsetModifier {
public:
  // Declarations
  using Body = ::RootMotion::FinalIK::__Inertia__Body;

  /// @brief Field bodies, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_bodies, put = __cordl_internal_set_bodies))::ArrayW<::RootMotion::FinalIK::__Inertia__Body*, ::Array<::RootMotion::FinalIK::__Inertia__Body*>*> bodies;

  /// @brief Field limits, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_limits,
                      put = __cordl_internal_set_limits))::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*, ::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*> limits;

  constexpr ::ArrayW<::RootMotion::FinalIK::__Inertia__Body*, ::Array<::RootMotion::FinalIK::__Inertia__Body*>*>& __cordl_internal_get_bodies();

  constexpr ::ArrayW<::RootMotion::FinalIK::__Inertia__Body*, ::Array<::RootMotion::FinalIK::__Inertia__Body*>*> const& __cordl_internal_get_bodies() const;

  constexpr void __cordl_internal_set_bodies(::ArrayW<::RootMotion::FinalIK::__Inertia__Body*, ::Array<::RootMotion::FinalIK::__Inertia__Body*>*> value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*, ::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*>& __cordl_internal_get_limits();

  constexpr ::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*, ::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*> const& __cordl_internal_get_limits() const;

  constexpr void __cordl_internal_set_limits(::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*, ::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*> value);

  /// @brief Method ResetBodies, addr 0x1296c4c, size 0x6c, virtual false, abstract: false, final false
  inline void ResetBodies();

  /// @brief Method OnModifyOffset, addr 0x1296d94, size 0xa4, virtual true, abstract: false, final false
  inline void OnModifyOffset();

  static inline ::RootMotion::FinalIK::Inertia* New_ctor();

  /// @brief Method .ctor, addr 0x1297184, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Inertia", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Inertia(Inertia&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Inertia", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Inertia(Inertia const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Inertia();

public:
  /// @brief Field bodies, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__Inertia__Body*, ::Array<::RootMotion::FinalIK::__Inertia__Body*>*> ___bodies;

  /// @brief Field limits, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*, ::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*> ___limits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::Inertia, 0x40>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Inertia, ___bodies) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Inertia, ___limits) == 0x38, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::GlobalNamespace::__Inertia__Body__EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Inertia__Body__EffectorLink*, "RootMotion.FinalIK", "Inertia/Body/EffectorLink");
NEED_NO_BOX(::RootMotion::FinalIK::Inertia);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Inertia*, "RootMotion.FinalIK", "Inertia");
NEED_NO_BOX(::RootMotion::FinalIK::__Inertia__Body);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__Inertia__Body*, "RootMotion.FinalIK", "Inertia/Body");
