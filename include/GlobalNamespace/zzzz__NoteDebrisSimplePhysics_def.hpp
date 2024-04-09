#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteDebrisPhysics_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(NoteDebrisSimplePhysics)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteDebrisSimplePhysics;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteDebrisSimplePhysics);
// Type: ::NoteDebrisSimplePhysics
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 69, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteDebrisSimplePhysics*
class CORDL_TYPE NoteDebrisSimplePhysics : public ::GlobalNamespace::NoteDebrisPhysics {
public:
  // Declarations
  /// @brief Field _currentForce, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get__currentForce, put = __cordl_internal_set__currentForce))::UnityEngine::Vector3 _currentForce;

  /// @brief Field _currentTorque, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get__currentTorque, put = __cordl_internal_set__currentTorque))::UnityEngine::Vector3 _currentTorque;

  /// @brief Field _firstUpdate, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__firstUpdate, put = __cordl_internal_set__firstUpdate)) bool _firstUpdate;

  /// @brief Field _gravity, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get__gravity, put = __cordl_internal_set__gravity))::UnityEngine::Vector3 _gravity;

  /// @brief Field _transform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform))::UnityW<::UnityEngine::Transform> _transform;

  __declspec(property(get = get_position))::UnityEngine::Vector3 position;

  /// @brief Method AddVelocity, addr 0x252189c, size 0x20, virtual true, abstract: false, final false
  inline void AddVelocity(::UnityEngine::Vector3 force);

  /// @brief Method Init, addr 0x2521870, size 0x2c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 torque);

  /// @brief Method LateUpdate, addr 0x25216d4, size 0x19c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::NoteDebrisSimplePhysics* New_ctor();

  /// @brief Method Start, addr 0x25216a8, size 0x2c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__currentForce() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__currentForce();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__currentTorque() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__currentTorque();

  constexpr bool const& __cordl_internal_get__firstUpdate() const;

  constexpr bool& __cordl_internal_get__firstUpdate();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__gravity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__gravity();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr void __cordl_internal_set__currentForce(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__currentTorque(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__firstUpdate(bool value);

  constexpr void __cordl_internal_set__gravity(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x25218bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_position, addr 0x252168c, size 0x1c, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteDebrisSimplePhysics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteDebrisSimplePhysics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteDebrisSimplePhysics(NoteDebrisSimplePhysics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteDebrisSimplePhysics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteDebrisSimplePhysics(NoteDebrisSimplePhysics const&) = delete;

  /// @brief Field _currentForce, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____currentForce;

  /// @brief Field _currentTorque, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____currentTorque;

  /// @brief Field _transform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _gravity, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____gravity;

  /// @brief Field _firstUpdate, offset: 0x44, size: 0x1, def value: None
  bool ____firstUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteDebrisSimplePhysics, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSimplePhysics, ____currentForce) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSimplePhysics, ____currentTorque) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSimplePhysics, ____transform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSimplePhysics, ____gravity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSimplePhysics, ____firstUpdate) == 0x44, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteDebrisSimplePhysics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDebrisSimplePhysics*, "", "NoteDebrisSimplePhysics");
