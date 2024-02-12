#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AvatarUtility)
namespace RootMotion {
class TQ;
}
namespace UnityEngine {
struct AvatarIKGoal;
}
namespace UnityEngine {
class Avatar;
}
namespace UnityEngine {
struct HumanBodyBones;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion {
class AvatarUtility;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::AvatarUtility);
// Type: RootMotion::AvatarUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12372))
// CS Name: ::RootMotion::AvatarUtility*
class CORDL_TYPE AvatarUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetPostRotation, addr 0x12ccd7c, size 0x230, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion GetPostRotation(::UnityEngine::Avatar* avatar, ::UnityEngine::AvatarIKGoal avatarIKGoal);

  /// @brief Method GetIKGoalTQ, addr 0x12ccfcc, size 0x658, virtual false, abstract: false, final false
  static inline ::RootMotion::TQ* GetIKGoalTQ(::UnityEngine::Avatar* avatar, float_t humanScale, ::UnityEngine::AvatarIKGoal avatarIKGoal, ::RootMotion::TQ* bodyPositionRotation,
                                              ::RootMotion::TQ* boneTQ);

  /// @brief Method HumanIDFromAvatarIKGoal, addr 0x12ccfac, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::HumanBodyBones HumanIDFromAvatarIKGoal(::UnityEngine::AvatarIKGoal avatarIKGoal);

  static inline ::RootMotion::AvatarUtility* New_ctor();

  /// @brief Method .ctor, addr 0x12cd624, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarUtility(AvatarUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarUtility(AvatarUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::AvatarUtility, 0x10>, "Size mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::AvatarUtility);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::AvatarUtility*, "RootMotion", "AvatarUtility");
