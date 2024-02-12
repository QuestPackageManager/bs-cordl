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
CORDL_MODULE_EXPORT(Amplifier)
namespace GlobalNamespace {
class __Amplifier__Body__EffectorLink;
}
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
namespace RootMotion::FinalIK {
class __Amplifier__Body;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class __Amplifier__Body__EffectorLink;
}
namespace RootMotion::FinalIK {
class Amplifier;
}
namespace RootMotion::FinalIK {
class __Amplifier__Body;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__Amplifier__Body__EffectorLink);
MARK_REF_PTR_T(::RootMotion::FinalIK::Amplifier);
MARK_REF_PTR_T(::RootMotion::FinalIK::__Amplifier__Body);
// Type: ::EffectorLink
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12469))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12531))
// CS Name: ::Amplifier::Body::EffectorLink*
class CORDL_TYPE __Amplifier__Body__EffectorLink : public ::System::Object {
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

  static inline ::GlobalNamespace::__Amplifier__Body__EffectorLink* New_ctor();

  /// @brief Method .ctor, addr 0x132cad4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Amplifier__Body__EffectorLink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Amplifier__Body__EffectorLink(__Amplifier__Body__EffectorLink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Amplifier__Body__EffectorLink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Amplifier__Body__EffectorLink(__Amplifier__Body__EffectorLink const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Amplifier__Body__EffectorLink();

public:
  /// @brief Field effector, offset: 0x10, size: 0x4, def value: None
  ::RootMotion::FinalIK::FullBodyBipedEffector ___effector;

  /// @brief Field weight, offset: 0x14, size: 0x4, def value: None
  float_t ___weight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Amplifier__Body__EffectorLink, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Amplifier__Body__EffectorLink, ___effector) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Amplifier__Body__EffectorLink, ___weight) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Body
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 77, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8993))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12532))
// CS Name: ::Amplifier::Body*
class CORDL_TYPE __Amplifier__Body : public ::System::Object {
public:
  // Declarations
  using EffectorLink = ::GlobalNamespace::__Amplifier__Body__EffectorLink;

  /// @brief Field transform, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_transform, put = __cordl_internal_set_transform))::UnityW<::UnityEngine::Transform> transform;

  /// @brief Field relativeTo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_relativeTo, put = __cordl_internal_set_relativeTo))::UnityW<::UnityEngine::Transform> relativeTo;

  /// @brief Field effectorLinks, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get_effectorLinks,
               put = __cordl_internal_set_effectorLinks))::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*, ::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*> effectorLinks;

  /// @brief Field verticalWeight, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_verticalWeight, put = __cordl_internal_set_verticalWeight)) float_t verticalWeight;

  /// @brief Field horizontalWeight, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_horizontalWeight, put = __cordl_internal_set_horizontalWeight)) float_t horizontalWeight;

  /// @brief Field speed, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_speed, put = __cordl_internal_set_speed)) float_t speed;

  /// @brief Field lastRelativePos, offset 0x34, size 0xc
  __declspec(property(get = __cordl_internal_get_lastRelativePos, put = __cordl_internal_set_lastRelativePos))::UnityEngine::Vector3 lastRelativePos;

  /// @brief Field smoothDelta, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_smoothDelta, put = __cordl_internal_set_smoothDelta))::UnityEngine::Vector3 smoothDelta;

  /// @brief Field firstUpdate, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_firstUpdate, put = __cordl_internal_set_firstUpdate)) bool firstUpdate;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

  constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_relativeTo();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_relativeTo() const;

  constexpr void __cordl_internal_set_relativeTo(::UnityW<::UnityEngine::Transform> value);

  constexpr ::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*, ::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*>& __cordl_internal_get_effectorLinks();

  constexpr ::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*, ::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*> const& __cordl_internal_get_effectorLinks() const;

  constexpr void __cordl_internal_set_effectorLinks(::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*, ::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*> value);

  constexpr float_t& __cordl_internal_get_verticalWeight();

  constexpr float_t const& __cordl_internal_get_verticalWeight() const;

  constexpr void __cordl_internal_set_verticalWeight(float_t value);

  constexpr float_t& __cordl_internal_get_horizontalWeight();

  constexpr float_t const& __cordl_internal_get_horizontalWeight() const;

  constexpr void __cordl_internal_set_horizontalWeight(float_t value);

  constexpr float_t& __cordl_internal_get_speed();

  constexpr float_t const& __cordl_internal_get_speed() const;

  constexpr void __cordl_internal_set_speed(float_t value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastRelativePos();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastRelativePos() const;

  constexpr void __cordl_internal_set_lastRelativePos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_smoothDelta();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_smoothDelta() const;

  constexpr void __cordl_internal_set_smoothDelta(::UnityEngine::Vector3 value);

  constexpr bool& __cordl_internal_get_firstUpdate();

  constexpr bool const& __cordl_internal_get_firstUpdate() const;

  constexpr void __cordl_internal_set_firstUpdate(bool value);

  /// @brief Method Update, addr 0x132c77c, size 0x310, virtual false, abstract: false, final false
  inline void Update(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float_t w, float_t deltaTime);

  /// @brief Method Multiply, addr 0x132caac, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Multiply(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2);

  static inline ::RootMotion::FinalIK::__Amplifier__Body* New_ctor();

  /// @brief Method .ctor, addr 0x132cabc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Amplifier__Body", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Amplifier__Body(__Amplifier__Body&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Amplifier__Body", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Amplifier__Body(__Amplifier__Body const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Amplifier__Body();

public:
  /// @brief Field transform, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___transform;

  /// @brief Field relativeTo, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___relativeTo;

  /// @brief Field effectorLinks, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*, ::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*> ___effectorLinks;

  /// @brief Field verticalWeight, offset: 0x28, size: 0x4, def value: None
  float_t ___verticalWeight;

  /// @brief Field horizontalWeight, offset: 0x2c, size: 0x4, def value: None
  float_t ___horizontalWeight;

  /// @brief Field speed, offset: 0x30, size: 0x4, def value: None
  float_t ___speed;

  /// @brief Field lastRelativePos, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastRelativePos;

  /// @brief Field smoothDelta, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___smoothDelta;

  /// @brief Field firstUpdate, offset: 0x4c, size: 0x1, def value: None
  bool ___firstUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__Amplifier__Body, 0x50>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Amplifier__Body, ___transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Amplifier__Body, ___relativeTo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Amplifier__Body, ___effectorLinks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Amplifier__Body, ___verticalWeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Amplifier__Body, ___horizontalWeight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Amplifier__Body, ___speed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Amplifier__Body, ___lastRelativePos) == 0x34, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Amplifier__Body, ___smoothDelta) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Amplifier__Body, ___firstUpdate) == 0x4c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::Amplifier
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12554))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12533))
// CS Name: ::RootMotion.FinalIK::Amplifier*
class CORDL_TYPE Amplifier : public ::RootMotion::FinalIK::OffsetModifier {
public:
  // Declarations
  using Body = ::RootMotion::FinalIK::__Amplifier__Body;

  /// @brief Field bodies, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_bodies,
                      put = __cordl_internal_set_bodies))::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*, ::Array<::RootMotion::FinalIK::__Amplifier__Body*>*> bodies;

  constexpr ::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*, ::Array<::RootMotion::FinalIK::__Amplifier__Body*>*>& __cordl_internal_get_bodies();

  constexpr ::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*, ::Array<::RootMotion::FinalIK::__Amplifier__Body*>*> const& __cordl_internal_get_bodies() const;

  constexpr void __cordl_internal_set_bodies(::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*, ::Array<::RootMotion::FinalIK::__Amplifier__Body*>*> value);

  /// @brief Method OnModifyOffset, addr 0x132c62c, size 0x130, virtual true, abstract: false, final false
  inline void OnModifyOffset();

  static inline ::RootMotion::FinalIK::Amplifier* New_ctor();

  /// @brief Method .ctor, addr 0x132ca8c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Amplifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Amplifier(Amplifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Amplifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Amplifier(Amplifier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Amplifier();

public:
  /// @brief Field bodies, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*, ::Array<::RootMotion::FinalIK::__Amplifier__Body*>*> ___bodies;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::Amplifier, 0x38>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Amplifier, ___bodies) == 0x30, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::GlobalNamespace::__Amplifier__Body__EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Amplifier__Body__EffectorLink*, "RootMotion.FinalIK", "Amplifier/Body/EffectorLink");
NEED_NO_BOX(::RootMotion::FinalIK::Amplifier);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Amplifier*, "RootMotion.FinalIK", "Amplifier");
NEED_NO_BOX(::RootMotion::FinalIK::__Amplifier__Body);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__Amplifier__Body*, "RootMotion.FinalIK", "Amplifier/Body");
