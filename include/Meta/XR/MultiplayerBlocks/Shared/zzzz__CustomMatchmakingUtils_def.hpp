#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/CustomMatchmakingUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CustomMatchmakingUtils)
namespace Meta::XR::MultiplayerBlocks::Shared {
struct MatchInfo;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class CustomMatchmakingUtils;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils);
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmakingUtils
class CORDL_TYPE CustomMatchmakingUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method DecodeMatchInfoWithStruct, addr 0x585e5f4, size 0x1b0, virtual false, abstract: false, final false
  static inline ::Meta::XR::MultiplayerBlocks::Shared::MatchInfo DecodeMatchInfoWithStruct(::StringW matchInfoString);

  /// @brief Method EncodeMatchInfoToSessionId, addr 0x585e9c0, size 0xd4, virtual false, abstract: false, final false
  static inline ::StringW EncodeMatchInfoToSessionId(::StringW roomId, ::StringW roomPassword);

  /// @brief Method EncodeMatchInfoWithStruct, addr 0x585e7a4, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW EncodeMatchInfoWithStruct(::StringW roomId, ::StringW roomPassword, ::StringW extra);

  /// @brief Method ExtractMatchInfoFromSessionId, addr 0x585e868, size 0x158, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_2<::StringW, ::StringW> ExtractMatchInfoFromSessionId(::StringW matchSessionId);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomMatchmakingUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomMatchmakingUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomMatchmakingUtils(CustomMatchmakingUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomMatchmakingUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomMatchmakingUtils(CustomMatchmakingUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20326 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils, 0x10>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils*, "Meta.XR.MultiplayerBlocks.Shared", "CustomMatchmakingUtils");
