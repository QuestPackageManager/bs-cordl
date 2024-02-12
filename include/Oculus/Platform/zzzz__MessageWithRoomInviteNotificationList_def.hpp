#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__RoomInviteNotificationList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithRoomInviteNotificationList)
namespace Oculus::Platform::Models {
class RoomInviteNotificationList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithRoomInviteNotificationList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithRoomInviteNotificationList);
// Type: Oculus.Platform::MessageWithRoomInviteNotificationList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13162)), TypeDefinitionIndex(TypeDefinitionIndex(13430)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13162), inst:
// 4587 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13236)) CS Name: ::Oculus.Platform::MessageWithRoomInviteNotificationList*
class CORDL_TYPE MessageWithRoomInviteNotificationList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotificationList*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithRoomInviteNotificationList* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x271930c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetRoomInviteNotificationList, addr 0x271daac, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::RoomInviteNotificationList* GetRoomInviteNotificationList();

  /// @brief Method GetDataFromMessage, addr 0x271dae8, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::RoomInviteNotificationList* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomInviteNotificationList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithRoomInviteNotificationList(MessageWithRoomInviteNotificationList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomInviteNotificationList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithRoomInviteNotificationList(MessageWithRoomInviteNotificationList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithRoomInviteNotificationList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithRoomInviteNotificationList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithRoomInviteNotificationList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithRoomInviteNotificationList*, "Oculus.Platform", "MessageWithRoomInviteNotificationList");
