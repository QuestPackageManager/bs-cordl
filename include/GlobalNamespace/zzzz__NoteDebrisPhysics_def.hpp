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
// Type: ::NoteDebrisPhysics
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteDebrisPhysics*
class CORDL_TYPE NoteDebrisPhysics : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_position))::UnityEngine::Vector3 position;

  /// @brief Method AddVelocity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddVelocity(::UnityEngine::Vector3 force);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Init(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 torque);

  static inline ::GlobalNamespace::NoteDebrisPhysics* New_ctor();

  /// @brief Method .ctor, addr 0x264cde4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_position, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector3 get_position();

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteDebrisPhysics, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteDebrisPhysics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDebrisPhysics*, "", "NoteDebrisPhysics");
