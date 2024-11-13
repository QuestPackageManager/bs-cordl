#pragma once
// IWYU pragma private; include "UnityEngine/RuntimeAnimatorController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(RuntimeAnimatorController)
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace UnityEngine {
class RuntimeAnimatorController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RuntimeAnimatorController);
// Type: UnityEngine::RuntimeAnimatorController
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::RuntimeAnimatorController*
class CORDL_TYPE RuntimeAnimatorController : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_animationClips)) ::ArrayW<::UnityW<::UnityEngine::AnimationClip>, ::Array<::UnityW<::UnityEngine::AnimationClip>>*> animationClips;

  static inline ::UnityEngine::RuntimeAnimatorController* New_ctor();

  /// @brief Method .ctor, addr 0x47f0d94, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_animationClips, addr 0x47f1bc4, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::AnimationClip>, ::Array<::UnityW<::UnityEngine::AnimationClip>>*> get_animationClips();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeAnimatorController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeAnimatorController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeAnimatorController(RuntimeAnimatorController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeAnimatorController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeAnimatorController(RuntimeAnimatorController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16842 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RuntimeAnimatorController, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RuntimeAnimatorController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RuntimeAnimatorController*, "UnityEngine", "RuntimeAnimatorController");
