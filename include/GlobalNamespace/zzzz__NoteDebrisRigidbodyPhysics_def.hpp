#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteDebrisRigidbodyPhysics.hpp"
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
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteDebrisRigidbodyPhysics*
class CORDL_TYPE NoteDebrisRigidbodyPhysics : public ::GlobalNamespace::NoteDebrisPhysics {
public:
  // Declarations
  /// @brief Field _firstUpdate, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__firstUpdate, put = __cordl_internal_set__firstUpdate)) bool _firstUpdate;

  /// @brief Field _rigidbody, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rigidbody, put = __cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody> _rigidbody;

  /// @brief Field _simplePhysics, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__simplePhysics, put = __cordl_internal_set__simplePhysics)) ::UnityW<::GlobalNamespace::NoteDebrisSimplePhysics> _simplePhysics;

  /// @brief Method Awake, addr 0x3a9165c, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method FixedUpdate, addr 0x3a9167c, size 0x118, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method Init, addr 0x3a9190c, size 0x13c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::Vector3 linearVelocity, ::UnityEngine::Vector3 angularVelocity);

  static inline ::GlobalNamespace::NoteDebrisRigidbodyPhysics* New_ctor();

  constexpr bool const& __cordl_internal_get__firstUpdate() const;

  constexpr bool& __cordl_internal_get__firstUpdate();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody();

  constexpr ::UnityW<::GlobalNamespace::NoteDebrisSimplePhysics> const& __cordl_internal_get__simplePhysics() const;

  constexpr ::UnityW<::GlobalNamespace::NoteDebrisSimplePhysics>& __cordl_internal_get__simplePhysics();

  constexpr void __cordl_internal_set__firstUpdate(bool value);

  constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr void __cordl_internal_set__simplePhysics(::UnityW<::GlobalNamespace::NoteDebrisSimplePhysics> value);

  /// @brief Method .ctor, addr 0x3a91a48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteDebrisRigidbodyPhysics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteDebrisRigidbodyPhysics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteDebrisRigidbodyPhysics(NoteDebrisRigidbodyPhysics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteDebrisRigidbodyPhysics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteDebrisRigidbodyPhysics(NoteDebrisRigidbodyPhysics const&) = delete;

  /// @brief Field _rigidbody, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ____rigidbody;

  /// @brief Field _simplePhysics, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteDebrisSimplePhysics> ____simplePhysics;

  /// @brief Field _firstUpdate, offset: 0x30, size: 0x1, def value: None
  bool ____firstUpdate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4115 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteDebrisRigidbodyPhysics, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisRigidbodyPhysics, ____rigidbody) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisRigidbodyPhysics, ____simplePhysics) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisRigidbodyPhysics, ____firstUpdate) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteDebrisRigidbodyPhysics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDebrisRigidbodyPhysics*, "", "NoteDebrisRigidbodyPhysics");
