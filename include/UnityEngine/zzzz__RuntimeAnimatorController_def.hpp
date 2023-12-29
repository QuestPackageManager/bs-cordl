#pragma once
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10128))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15088))
// CS Name: ::UnityEngine::RuntimeAnimatorController*
class CORDL_TYPE RuntimeAnimatorController : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_animationClips))::ArrayW<::UnityEngine::AnimationClip*, ::Array<::UnityEngine::AnimationClip*>*> animationClips;

  static inline ::UnityEngine::RuntimeAnimatorController* New_ctor();

  /// @brief Method .ctor addr 0x2b29238 size 0x58 virtual false final false
  inline void _ctor();

  /// @brief Method get_animationClips addr 0x2b2a26c size 0x3c virtual false final false
  inline ::ArrayW<::UnityEngine::AnimationClip*, ::Array<::UnityEngine::AnimationClip*>*> get_animationClips();

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeAnimatorController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeAnimatorController(RuntimeAnimatorController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeAnimatorController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeAnimatorController(RuntimeAnimatorController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeAnimatorController();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RuntimeAnimatorController, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RuntimeAnimatorController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RuntimeAnimatorController*, "UnityEngine", "RuntimeAnimatorController");
