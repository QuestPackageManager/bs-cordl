#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAvatarPoseDataProvider)
namespace BeatSaber::AvatarCore {
struct AvatarPoseData;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class IAvatarPoseDataProvider;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::IAvatarPoseDataProvider);
// Type: BeatSaber.AvatarCore::IAvatarPoseDataProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15190))
// CS Name: ::BeatSaber.AvatarCore::IAvatarPoseDataProvider*
class CORDL_TYPE IAvatarPoseDataProvider {
public:
  // Declarations
  __declspec(property(get = get_currentPose))::BeatSaber::AvatarCore::AvatarPoseData currentPose;

  /// @brief Method get_currentPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::BeatSaber::AvatarCore::AvatarPoseData get_currentPose();

  /// @brief Method add_poseDidChangeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* value);

  /// @brief Method remove_poseDidChangeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IAvatarPoseDataProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAvatarPoseDataProvider(IAvatarPoseDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAvatarPoseDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAvatarPoseDataProvider(IAvatarPoseDataProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::IAvatarPoseDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::IAvatarPoseDataProvider*, "BeatSaber.AvatarCore", "IAvatarPoseDataProvider");
