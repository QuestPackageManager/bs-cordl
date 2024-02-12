#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__RoomInviteNotification_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithRoomInviteNotification)
namespace Oculus::Platform::Models {
class RoomInviteNotification;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithRoomInviteNotification;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithRoomInviteNotification);
// Type: Oculus.Platform::MessageWithRoomInviteNotification
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13162)), TypeDefinitionIndex(TypeDefinitionIndex(13429)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13162), inst:
// 981 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13235)) CS Name: ::Oculus.Platform::MessageWithRoomInviteNotification*
class CORDL_TYPE MessageWithRoomInviteNotification : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithRoomInviteNotification* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x27192b4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetRoomInviteNotification, addr 0x271d9d4, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::RoomInviteNotification* GetRoomInviteNotification();

  /// @brief Method GetDataFromMessage, addr 0x271da10, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::RoomInviteNotification* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomInviteNotification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithRoomInviteNotification(MessageWithRoomInviteNotification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomInviteNotification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithRoomInviteNotification(MessageWithRoomInviteNotification const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithRoomInviteNotification();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithRoomInviteNotification, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithRoomInviteNotification);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithRoomInviteNotification*, "Oculus.Platform", "MessageWithRoomInviteNotification");
