#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteDebrisPhysics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NoteDebrisPhysics)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteDebrisPhysics;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteDebrisPhysics);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteDebrisPhysics
class CORDL_TYPE NoteDebrisPhysics : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Init, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::Vector3 linearVelocity, ::UnityEngine::Vector3 angularVelocity, bool forceOnlySimplePhysics);

  static inline ::GlobalNamespace::NoteDebrisPhysics* New_ctor();

  /// @brief Method .ctor, addr 0x3afa4d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteDebrisPhysics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteDebrisPhysics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteDebrisPhysics(NoteDebrisPhysics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteDebrisPhysics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteDebrisPhysics(NoteDebrisPhysics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4130 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteDebrisPhysics, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteDebrisPhysics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDebrisPhysics*, "", "NoteDebrisPhysics");
