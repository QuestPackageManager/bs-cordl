#pragma once
// IWYU pragma private; include "GlobalNamespace/MirrorCamera.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MirrorCamera)
// Forward declare root types
namespace GlobalNamespace {
class MirrorCamera;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MirrorCamera);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirrorCamera
class CORDL_TYPE MirrorCamera : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::MirrorCamera* New_ctor();

  /// @brief Method .ctor, addr 0x5d96e74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorCamera();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirrorCamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirrorCamera(MirrorCamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirrorCamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirrorCamera(MirrorCamera const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20792 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirrorCamera, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirrorCamera);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirrorCamera*, "", "MirrorCamera");
