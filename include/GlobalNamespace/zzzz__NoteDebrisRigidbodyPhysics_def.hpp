#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteDebrisPhysics_def.hpp"
CORDL_MODULE_EXPORT(NoteDebrisRigidbodyPhysics)
namespace GlobalNamespace {
class NoteDebrisSimplePhysics;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteDebrisRigidbodyPhysics;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteDebrisRigidbodyPhysics);
// Type: ::NoteDebrisRigidbodyPhysics
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4125))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4126))
// CS Name: ::NoteDebrisRigidbodyPhysics*
class CORDL_TYPE NoteDebrisRigidbodyPhysics : public ::GlobalNamespace::NoteDebrisPhysics {
public:
  // Declarations
  /// @brief Field _rigidbody, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rigidbody, put = __cordl_internal_set__rigidbody))::UnityW<::UnityEngine::Rigidbody> _rigidbody;

  /// @brief Field _simplePhysics, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__simplePhysics, put = __cordl_internal_set__simplePhysics))::UnityW<::GlobalNamespace::NoteDebrisSimplePhysics> _simplePhysics;

  /// @brief Field _firstUpdate, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__firstUpdate, put = __cordl_internal_set__firstUpdate)) bool _firstUpdate;

  __declspec(property(get = get_position))::UnityEngine::Vector3 position;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

  constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr ::UnityW<::GlobalNamespace::NoteDebrisSimplePhysics>& __cordl_internal_get__simplePhysics();

  constexpr ::UnityW<::GlobalNamespace::NoteDebrisSimplePhysics> const& __cordl_internal_get__simplePhysics() const;

  constexpr void __cordl_internal_set__simplePhysics(::UnityW<::GlobalNamespace::NoteDebrisSimplePhysics> value);

  constexpr bool& __cordl_internal_get__firstUpdate();

  constexpr bool const& __cordl_internal_get__firstUpdate() const;

  constexpr void __cordl_internal_set__firstUpdate(bool value);

  /// @brief Method get_position, addr 0x22cff38, size 0x1c, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method FixedUpdate, addr 0x22cff54, size 0x48, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method Init, addr 0x22cff9c, size 0xc4, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 torque);

  /// @brief Method AddVelocity, addr 0x22d0060, size 0x60, virtual true, abstract: false, final false
  inline void AddVelocity(::UnityEngine::Vector3 force);

  static inline ::GlobalNamespace::NoteDebrisRigidbodyPhysics* New_ctor();

  /// @brief Method .ctor, addr 0x22d00c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteDebrisRigidbodyPhysics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteDebrisRigidbodyPhysics(NoteDebrisRigidbodyPhysics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteDebrisRigidbodyPhysics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteDebrisRigidbodyPhysics(NoteDebrisRigidbodyPhysics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteDebrisRigidbodyPhysics();

public:
  /// @brief Field _rigidbody, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ____rigidbody;

  /// @brief Field _simplePhysics, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteDebrisSimplePhysics> ____simplePhysics;

  /// @brief Field _firstUpdate, offset: 0x28, size: 0x1, def value: None
  bool ____firstUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteDebrisRigidbodyPhysics, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisRigidbodyPhysics, ____rigidbody) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisRigidbodyPhysics, ____simplePhysics) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisRigidbodyPhysics, ____firstUpdate) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteDebrisRigidbodyPhysics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDebrisRigidbodyPhysics*, "", "NoteDebrisRigidbodyPhysics");
