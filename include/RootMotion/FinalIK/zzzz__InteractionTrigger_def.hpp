#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InteractionTrigger)
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace RootMotion::FinalIK {
class InteractionObject;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class __InteractionTrigger__Range;
}
namespace RootMotion::FinalIK {
class __InteractionTrigger__CharacterPosition;
}
namespace RootMotion::FinalIK {
class __InteractionTrigger__CameraPosition;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class __InteractionTrigger__Range__Interaction;
}
// Forward declare root types
namespace GlobalNamespace {
class __InteractionTrigger__Range__Interaction;
}
namespace RootMotion::FinalIK {
class InteractionTrigger;
}
namespace RootMotion::FinalIK {
class __InteractionTrigger__CameraPosition;
}
namespace RootMotion::FinalIK {
class __InteractionTrigger__CharacterPosition;
}
namespace RootMotion::FinalIK {
class __InteractionTrigger__Range;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__InteractionTrigger__Range__Interaction);
MARK_REF_PTR_T(::RootMotion::FinalIK::InteractionTrigger);
MARK_REF_PTR_T(::RootMotion::FinalIK::__InteractionTrigger__CameraPosition);
MARK_REF_PTR_T(::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition);
MARK_REF_PTR_T(::RootMotion::FinalIK::__InteractionTrigger__Range);
// Type: ::CharacterPosition
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12609))
// CS Name: ::InteractionTrigger::CharacterPosition*
class CORDL_TYPE __InteractionTrigger__CharacterPosition : public ::System::Object {
public:
  // Declarations
  /// @brief Field use, offset 0x10, size 0x1
  __declspec(property(get = __get_use, put = __set_use)) bool use;

  /// @brief Field offset, offset 0x14, size 0x8
  __declspec(property(get = __get_offset, put = __set_offset))::UnityEngine::Vector2 offset;

  /// @brief Field angleOffset, offset 0x1c, size 0x4
  __declspec(property(get = __get_angleOffset, put = __set_angleOffset)) float_t angleOffset;

  /// @brief Field maxAngle, offset 0x20, size 0x4
  __declspec(property(get = __get_maxAngle, put = __set_maxAngle)) float_t maxAngle;

  /// @brief Field radius, offset 0x24, size 0x4
  __declspec(property(get = __get_radius, put = __set_radius)) float_t radius;

  /// @brief Field orbit, offset 0x28, size 0x1
  __declspec(property(get = __get_orbit, put = __set_orbit)) bool orbit;

  /// @brief Field fixYAxis, offset 0x29, size 0x1
  __declspec(property(get = __get_fixYAxis, put = __set_fixYAxis)) bool fixYAxis;

  __declspec(property(get = get_offset3D))::UnityEngine::Vector3 offset3D;

  __declspec(property(get = get_direction3D))::UnityEngine::Vector3 direction3D;

  constexpr bool& __get_use();

  constexpr bool const& __get_use() const;

  constexpr void __set_use(bool value);

  constexpr ::UnityEngine::Vector2& __get_offset();

  constexpr ::UnityEngine::Vector2 const& __get_offset() const;

  constexpr void __set_offset(::UnityEngine::Vector2 value);

  constexpr float_t& __get_angleOffset();

  constexpr float_t const& __get_angleOffset() const;

  constexpr void __set_angleOffset(float_t value);

  constexpr float_t& __get_maxAngle();

  constexpr float_t const& __get_maxAngle() const;

  constexpr void __set_maxAngle(float_t value);

  constexpr float_t& __get_radius();

  constexpr float_t const& __get_radius() const;

  constexpr void __set_radius(float_t value);

  constexpr bool& __get_orbit();

  constexpr bool const& __get_orbit() const;

  constexpr void __set_orbit(bool value);

  constexpr bool& __get_fixYAxis();

  constexpr bool const& __get_fixYAxis() const;

  constexpr void __set_fixYAxis(bool value);

  /// @brief Method get_offset3D addr 0x128ba18 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_offset3D();

  /// @brief Method get_direction3D addr 0x128ba24 size 0xc0 virtual false final false
  inline ::UnityEngine::Vector3 get_direction3D();

  /// @brief Method IsInRange addr 0x128bae4 size 0x764 virtual false final false
  inline bool IsInRange(::UnityEngine::Transform* character, ::UnityEngine::Transform* trigger, ByRef<float_t> error);

  static inline ::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition* New_ctor();

  /// @brief Method .ctor addr 0x128c248 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTrigger__CharacterPosition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionTrigger__CharacterPosition(__InteractionTrigger__CharacterPosition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTrigger__CharacterPosition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionTrigger__CharacterPosition(__InteractionTrigger__CharacterPosition const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionTrigger__CharacterPosition();

public:
  /// @brief Field use, offset: 0x10, size: 0x1, def value: None
  bool ___use;

  /// @brief Field offset, offset: 0x14, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___offset;

  /// @brief Field angleOffset, offset: 0x1c, size: 0x4, def value: None
  float_t ___angleOffset;

  /// @brief Field maxAngle, offset: 0x20, size: 0x4, def value: None
  float_t ___maxAngle;

  /// @brief Field radius, offset: 0x24, size: 0x4, def value: None
  float_t ___radius;

  /// @brief Field orbit, offset: 0x28, size: 0x1, def value: None
  bool ___orbit;

  /// @brief Field fixYAxis, offset: 0x29, size: 0x1, def value: None
  bool ___fixYAxis;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition, 0x30>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::CameraPosition
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12610))
// CS Name: ::InteractionTrigger::CameraPosition*
class CORDL_TYPE __InteractionTrigger__CameraPosition : public ::System::Object {
public:
  // Declarations
  /// @brief Field lookAtTarget, offset 0x10, size 0x8
  __declspec(property(get = __get_lookAtTarget, put = __set_lookAtTarget))::UnityEngine::Collider* lookAtTarget;

  /// @brief Field direction, offset 0x18, size 0xc
  __declspec(property(get = __get_direction, put = __set_direction))::UnityEngine::Vector3 direction;

  /// @brief Field maxDistance, offset 0x24, size 0x4
  __declspec(property(get = __get_maxDistance, put = __set_maxDistance)) float_t maxDistance;

  /// @brief Field maxAngle, offset 0x28, size 0x4
  __declspec(property(get = __get_maxAngle, put = __set_maxAngle)) float_t maxAngle;

  /// @brief Field fixYAxis, offset 0x2c, size 0x1
  __declspec(property(get = __get_fixYAxis, put = __set_fixYAxis)) bool fixYAxis;

  constexpr ::UnityEngine::Collider*& __get_lookAtTarget();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> const& __get_lookAtTarget() const;

  constexpr void __set_lookAtTarget(::UnityEngine::Collider* value);

  constexpr ::UnityEngine::Vector3& __get_direction();

  constexpr ::UnityEngine::Vector3 const& __get_direction() const;

  constexpr void __set_direction(::UnityEngine::Vector3 value);

  constexpr float_t& __get_maxDistance();

  constexpr float_t const& __get_maxDistance() const;

  constexpr void __set_maxDistance(float_t value);

  constexpr float_t& __get_maxAngle();

  constexpr float_t const& __get_maxAngle() const;

  constexpr void __set_maxAngle(float_t value);

  constexpr bool& __get_fixYAxis();

  constexpr bool const& __get_fixYAxis() const;

  constexpr void __set_fixYAxis(bool value);

  /// @brief Method GetRotation addr 0x128c25c size 0x178 virtual false final false
  inline ::UnityEngine::Quaternion GetRotation();

  /// @brief Method IsInRange addr 0x128c3d4 size 0x308 virtual false final false
  inline bool IsInRange(::UnityEngine::Transform* raycastFrom, ::UnityEngine::RaycastHit hit, ::UnityEngine::Transform* trigger, ByRef<float_t> error);

  static inline ::RootMotion::FinalIK::__InteractionTrigger__CameraPosition* New_ctor();

  /// @brief Method .ctor addr 0x128c6dc size 0x74 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTrigger__CameraPosition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionTrigger__CameraPosition(__InteractionTrigger__CameraPosition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTrigger__CameraPosition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionTrigger__CameraPosition(__InteractionTrigger__CameraPosition const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionTrigger__CameraPosition();

public:
  /// @brief Field lookAtTarget, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Collider* ___lookAtTarget;

  /// @brief Field direction, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___direction;

  /// @brief Field maxDistance, offset: 0x24, size: 0x4, def value: None
  float_t ___maxDistance;

  /// @brief Field maxAngle, offset: 0x28, size: 0x4, def value: None
  float_t ___maxAngle;

  /// @brief Field fixYAxis, offset: 0x2c, size: 0x1, def value: None
  bool ___fixYAxis;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__InteractionTrigger__CameraPosition, 0x30>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Interaction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12611))
// CS Name: ::InteractionTrigger::Range::Interaction*
class CORDL_TYPE __InteractionTrigger__Range__Interaction : public ::System::Object {
public:
  // Declarations
  /// @brief Field interactionObject, offset 0x10, size 0x8
  __declspec(property(get = __get_interactionObject, put = __set_interactionObject))::RootMotion::FinalIK::InteractionObject* interactionObject;

  /// @brief Field effectors, offset 0x18, size 0x8
  __declspec(property(get = __get_effectors, put = __set_effectors))::ArrayW<::RootMotion::FinalIK::FullBodyBipedEffector, ::Array<::RootMotion::FinalIK::FullBodyBipedEffector>*> effectors;

  constexpr ::RootMotion::FinalIK::InteractionObject*& __get_interactionObject();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::InteractionObject*> const& __get_interactionObject() const;

  constexpr void __set_interactionObject(::RootMotion::FinalIK::InteractionObject* value);

  constexpr ::ArrayW<::RootMotion::FinalIK::FullBodyBipedEffector, ::Array<::RootMotion::FinalIK::FullBodyBipedEffector>*>& __get_effectors();

  constexpr ::ArrayW<::RootMotion::FinalIK::FullBodyBipedEffector, ::Array<::RootMotion::FinalIK::FullBodyBipedEffector>*> const& __get_effectors() const;

  constexpr void __set_effectors(::ArrayW<::RootMotion::FinalIK::FullBodyBipedEffector, ::Array<::RootMotion::FinalIK::FullBodyBipedEffector>*> value);

  static inline ::GlobalNamespace::__InteractionTrigger__Range__Interaction* New_ctor();

  /// @brief Method .ctor addr 0x128c760 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTrigger__Range__Interaction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionTrigger__Range__Interaction(__InteractionTrigger__Range__Interaction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTrigger__Range__Interaction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionTrigger__Range__Interaction(__InteractionTrigger__Range__Interaction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionTrigger__Range__Interaction();

public:
  /// @brief Field interactionObject, offset: 0x10, size: 0x8, def value: None
  ::RootMotion::FinalIK::InteractionObject* ___interactionObject;

  /// @brief Field effectors, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::FullBodyBipedEffector, ::Array<::RootMotion::FinalIK::FullBodyBipedEffector>*> ___effectors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InteractionTrigger__Range__Interaction, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Range
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12612))
// CS Name: ::InteractionTrigger::Range*
class CORDL_TYPE __InteractionTrigger__Range : public ::System::Object {
public:
  // Declarations
  using Interaction = ::GlobalNamespace::__InteractionTrigger__Range__Interaction;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field show, offset 0x18, size 0x1
  __declspec(property(get = __get_show, put = __set_show)) bool show;

  /// @brief Field characterPosition, offset 0x20, size 0x8
  __declspec(property(get = __get_characterPosition, put = __set_characterPosition))::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition* characterPosition;

  /// @brief Field cameraPosition, offset 0x28, size 0x8
  __declspec(property(get = __get_cameraPosition, put = __set_cameraPosition))::RootMotion::FinalIK::__InteractionTrigger__CameraPosition* cameraPosition;

  /// @brief Field interactions, offset 0x30, size 0x8
  __declspec(
      property(get = __get_interactions,
               put = __set_interactions))::ArrayW<::GlobalNamespace::__InteractionTrigger__Range__Interaction*, ::Array<::GlobalNamespace::__InteractionTrigger__Range__Interaction*>*> interactions;

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr bool& __get_show();

  constexpr bool const& __get_show() const;

  constexpr void __set_show(bool value);

  constexpr ::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition*& __get_characterPosition();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition*> const& __get_characterPosition() const;

  constexpr void __set_characterPosition(::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition* value);

  constexpr ::RootMotion::FinalIK::__InteractionTrigger__CameraPosition*& __get_cameraPosition();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionTrigger__CameraPosition*> const& __get_cameraPosition() const;

  constexpr void __set_cameraPosition(::RootMotion::FinalIK::__InteractionTrigger__CameraPosition* value);

  constexpr ::ArrayW<::GlobalNamespace::__InteractionTrigger__Range__Interaction*, ::Array<::GlobalNamespace::__InteractionTrigger__Range__Interaction*>*>& __get_interactions();

  constexpr ::ArrayW<::GlobalNamespace::__InteractionTrigger__Range__Interaction*, ::Array<::GlobalNamespace::__InteractionTrigger__Range__Interaction*>*> const& __get_interactions() const;

  constexpr void __set_interactions(::ArrayW<::GlobalNamespace::__InteractionTrigger__Range__Interaction*, ::Array<::GlobalNamespace::__InteractionTrigger__Range__Interaction*>*> value);

  /// @brief Method IsInRange addr 0x128b910 size 0xb0 virtual false final false
  inline bool IsInRange(::UnityEngine::Transform* character, ::UnityEngine::Transform* raycastFrom, ::UnityEngine::RaycastHit raycastHit, ::UnityEngine::Transform* trigger, ByRef<float_t> maxError);

  static inline ::RootMotion::FinalIK::__InteractionTrigger__Range* New_ctor();

  /// @brief Method .ctor addr 0x128c750 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTrigger__Range", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionTrigger__Range(__InteractionTrigger__Range&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTrigger__Range", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionTrigger__Range(__InteractionTrigger__Range const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionTrigger__Range();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field show, offset: 0x18, size: 0x1, def value: None
  bool ___show;

  /// @brief Field characterPosition, offset: 0x20, size: 0x8, def value: None
  ::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition* ___characterPosition;

  /// @brief Field cameraPosition, offset: 0x28, size: 0x8, def value: None
  ::RootMotion::FinalIK::__InteractionTrigger__CameraPosition* ___cameraPosition;

  /// @brief Field interactions, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__InteractionTrigger__Range__Interaction*, ::Array<::GlobalNamespace::__InteractionTrigger__Range__Interaction*>*> ___interactions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__InteractionTrigger__Range, 0x38>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::InteractionTrigger
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12613))
// CS Name: ::RootMotion.FinalIK::InteractionTrigger*
class CORDL_TYPE InteractionTrigger : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Range = ::RootMotion::FinalIK::__InteractionTrigger__Range;

  using CameraPosition = ::RootMotion::FinalIK::__InteractionTrigger__CameraPosition;

  using CharacterPosition = ::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition;

  /// @brief Field ranges, offset 0x18, size 0x8
  __declspec(property(get = __get_ranges, put = __set_ranges))::ArrayW<::RootMotion::FinalIK::__InteractionTrigger__Range*, ::Array<::RootMotion::FinalIK::__InteractionTrigger__Range*>*> ranges;

  constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionTrigger__Range*, ::Array<::RootMotion::FinalIK::__InteractionTrigger__Range*>*>& __get_ranges();

  constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionTrigger__Range*, ::Array<::RootMotion::FinalIK::__InteractionTrigger__Range*>*> const& __get_ranges() const;

  constexpr void __set_ranges(::ArrayW<::RootMotion::FinalIK::__InteractionTrigger__Range*, ::Array<::RootMotion::FinalIK::__InteractionTrigger__Range*>*> value);

  /// @brief Method OpenUserManual addr 0x128b7b8 size 0x44 virtual false final false
  inline void OpenUserManual();

  /// @brief Method OpenScriptReference addr 0x128b7fc size 0x44 virtual false final false
  inline void OpenScriptReference();

  /// @brief Method OpenTutorial4 addr 0x128b840 size 0x44 virtual false final false
  inline void OpenTutorial4();

  /// @brief Method SupportGroup addr 0x128b884 size 0x44 virtual false final false
  inline void SupportGroup();

  /// @brief Method ASThread addr 0x128b8c8 size 0x44 virtual false final false
  inline void ASThread();

  /// @brief Method Start addr 0x128b90c size 0x4 virtual false final false
  inline void Start();

  /// @brief Method GetBestRangeIndex addr 0x128a250 size 0x1b4 virtual false final false
  inline int32_t GetBestRangeIndex(::UnityEngine::Transform* character, ::UnityEngine::Transform* raycastFrom, ::UnityEngine::RaycastHit raycastHit);

  static inline ::RootMotion::FinalIK::InteractionTrigger* New_ctor();

  /// @brief Method .ctor addr 0x128b9c0 size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InteractionTrigger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractionTrigger(InteractionTrigger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractionTrigger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractionTrigger(InteractionTrigger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractionTrigger();

public:
  /// @brief Field ranges, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__InteractionTrigger__Range*, ::Array<::RootMotion::FinalIK::__InteractionTrigger__Range*>*> ___ranges;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::InteractionTrigger, 0x20>, "Size mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::GlobalNamespace::__InteractionTrigger__Range__Interaction);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InteractionTrigger__Range__Interaction*, "RootMotion.FinalIK", "InteractionTrigger/Range/Interaction");
NEED_NO_BOX(::RootMotion::FinalIK::InteractionTrigger);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionTrigger*, "RootMotion.FinalIK", "InteractionTrigger");
NEED_NO_BOX(::RootMotion::FinalIK::__InteractionTrigger__CameraPosition);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__InteractionTrigger__CameraPosition*, "RootMotion.FinalIK", "InteractionTrigger/CameraPosition");
NEED_NO_BOX(::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition*, "RootMotion.FinalIK", "InteractionTrigger/CharacterPosition");
NEED_NO_BOX(::RootMotion::FinalIK::__InteractionTrigger__Range);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__InteractionTrigger__Range*, "RootMotion.FinalIK", "InteractionTrigger/Range");
