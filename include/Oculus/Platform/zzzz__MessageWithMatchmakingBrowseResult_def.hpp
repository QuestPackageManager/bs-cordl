#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__MatchmakingBrowseResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithMatchmakingBrowseResult)
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResult;
}
namespace Oculus::Platform::Models {
class RoomList;
}
namespace Oculus::Platform::Models {
class MatchmakingBrowseResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithMatchmakingBrowseResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithMatchmakingBrowseResult);
// Type: Oculus.Platform::MessageWithMatchmakingBrowseResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13269)), TypeDefinitionIndex(TypeDefinitionIndex(13506)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst:
// 4499 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(13360)) CS Name: ::Oculus.Platform::MessageWithMatchmakingBrowseResult*
class CORDL_TYPE MessageWithMatchmakingBrowseResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::MatchmakingBrowseResult*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithMatchmakingBrowseResult* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x25933a4 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetMatchmakingEnqueueResult addr 0x25990d8 size 0x48 virtual true final false
  inline ::Oculus::Platform::Models::MatchmakingEnqueueResult* GetMatchmakingEnqueueResult();

  /// @brief Method GetRoomList addr 0x2599120 size 0x48 virtual true final false
  inline ::Oculus::Platform::Models::RoomList* GetRoomList();

  /// @brief Method GetDataFromMessage addr 0x2599168 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::MatchmakingBrowseResult* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingBrowseResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithMatchmakingBrowseResult(MessageWithMatchmakingBrowseResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingBrowseResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithMatchmakingBrowseResult(MessageWithMatchmakingBrowseResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithMatchmakingBrowseResult();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithMatchmakingBrowseResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithMatchmakingBrowseResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithMatchmakingBrowseResult*, "Oculus.Platform", "MessageWithMatchmakingBrowseResult");
