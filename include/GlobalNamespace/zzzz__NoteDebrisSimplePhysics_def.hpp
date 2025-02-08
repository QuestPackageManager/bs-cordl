#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteDebrisSimplePhysics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteDebrisPhysics_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
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
// Dependencies NoteDebrisPhysics, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteDebrisSimplePhysics
class CORDL_TYPE NoteDebrisSimplePhysics : public ::GlobalNamespace::NoteDebrisPhysics {
public:
  // Declarations
  /// @brief Field _currentAngularVelocityDegrees, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get__currentAngularVelocityDegrees, put = __cordl_internal_set__currentAngularVelocityDegrees)) ::UnityEngine::Vector3 _currentAngularVelocityDegrees;

  /// @brief Field _currentLinearVelocity, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get__currentLinearVelocity, put = __cordl_internal_set__currentLinearVelocity)) ::UnityEngine::Vector3 _currentLinearVelocity;

  /// @brief Field _firstUpdate, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get__firstUpdate, put = __cordl_internal_set__firstUpdate)) bool _firstUpdate;

  /// @brief Field _gravity, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get__gravity, put = __cordl_internal_set__gravity)) ::UnityEngine::Vector3 _gravity;

  /// @brief Field _position, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get__position, put = __cordl_internal_set__position)) ::UnityEngine::Vector3 _position;

  /// @brief Field _rotation, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get__rotation, put = __cordl_internal_set__rotation)) ::UnityEngine::Quaternion _rotation;

  /// @brief Field _transform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  __declspec(property(get = get_currentAngularVelocityDegrees)) ::UnityEngine::Vector3 currentAngularVelocityDegrees;

  __declspec(property(get = get_currentLinearVelocity)) ::UnityEngine::Vector3 currentLinearVelocity;

  /// @brief Method Awake, addr 0x3af1e7c, size 0x70, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Init, addr 0x3af1eec, size 0xa4, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::Vector3 linearVelocity, ::UnityEngine::Vector3 angularVelocity, bool forceOnlySimplePhysics);

  /// @brief Method LateUpdate, addr 0x3af1b9c, size 0x178, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::NoteDebrisSimplePhysics* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__currentAngularVelocityDegrees() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__currentAngularVelocityDegrees();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__currentLinearVelocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__currentLinearVelocity();

  constexpr bool const& __cordl_internal_get__firstUpdate() const;

  constexpr bool& __cordl_internal_get__firstUpdate();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__gravity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__gravity();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__position();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__rotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__rotation();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr void __cordl_internal_set__currentAngularVelocityDegrees(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__currentLinearVelocity(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__firstUpdate(bool value);

  constexpr void __cordl_internal_set__gravity(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__rotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x3af1f90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_currentAngularVelocityDegrees, addr 0x3af1e70, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_currentAngularVelocityDegrees();

  /// @brief Method get_currentLinearVelocity, addr 0x3af1e64, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_currentLinearVelocity();

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4132 };

  /// @brief Field _currentLinearVelocity, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____currentLinearVelocity;

  /// @brief Field _currentAngularVelocityDegrees, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____currentAngularVelocityDegrees;

  /// @brief Field _transform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _gravity, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____gravity;

  /// @brief Field _firstUpdate, offset: 0x4c, size: 0x1, def value: None
  bool ____firstUpdate;

  /// @brief Field _position, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____position;

  /// @brief Field _rotation, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____rotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteDebrisSimplePhysics, ____currentLinearVelocity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSimplePhysics, ____currentAngularVelocityDegrees) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSimplePhysics, ____transform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSimplePhysics, ____gravity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSimplePhysics, ____firstUpdate) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSimplePhysics, ____position) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSimplePhysics, ____rotation) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteDebrisSimplePhysics, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteDebrisSimplePhysics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDebrisSimplePhysics*, "", "NoteDebrisSimplePhysics");
