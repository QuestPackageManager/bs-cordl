#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberNetworkConstants.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatSaberNetworkConstants)
// Forward declare root types
namespace GlobalNamespace {
class BeatSaberNetworkConstants;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatSaberNetworkConstants);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatSaberNetworkConstants
class CORDL_TYPE BeatSaberNetworkConstants : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatSaberNetworkConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberNetworkConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatSaberNetworkConstants(BeatSaberNetworkConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberNetworkConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatSaberNetworkConstants(BeatSaberNetworkConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18809 };

  /// @brief Field dedicatedServerState offset 0xffffffff size 0x8
  static constexpr ::ConstString dedicatedServerState{ u"dedicated_server" };

  /// @brief Field finishedLevel offset 0xffffffff size 0x8
  static constexpr ::ConstString finishedLevel{ u"finished_level" };

  /// @brief Field isActive offset 0xffffffff size 0x8
  static constexpr ::ConstString isActive{ u"is_active" };

  /// @brief Field wantsToPlayNextLevel offset 0xffffffff size 0x8
  static constexpr ::ConstString wantsToPlayNextLevel{ u"wants_to_play_next_level" };

  /// @brief Field wasActiveAtLevelStart offset 0xffffffff size 0x8
  static constexpr ::ConstString wasActiveAtLevelStart{ u"was_active_at_level_start" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatSaberNetworkConstants, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatSaberNetworkConstants);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatSaberNetworkConstants*, "", "BeatSaberNetworkConstants");
