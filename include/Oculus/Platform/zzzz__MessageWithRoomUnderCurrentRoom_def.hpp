#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithRoomUnderCurrentRoom)
namespace Oculus::Platform::Models {
class Room;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithRoomUnderCurrentRoom;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithRoomUnderCurrentRoom);
// Type: Oculus.Platform::MessageWithRoomUnderCurrentRoom
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13269)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst: 965 }),
// TypeDefinitionIndex(TypeDefinitionIndex(13534))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13339)) CS Name: ::Oculus.Platform::MessageWithRoomUnderCurrentRoom*
class CORDL_TYPE MessageWithRoomUnderCurrentRoom : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithRoomUnderCurrentRoom* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x2593924 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetRoom addr 0x2597ec4 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::Room* GetRoom();

  /// @brief Method GetDataFromMessage addr 0x2597f00 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::Room* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomUnderCurrentRoom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithRoomUnderCurrentRoom(MessageWithRoomUnderCurrentRoom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomUnderCurrentRoom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithRoomUnderCurrentRoom(MessageWithRoomUnderCurrentRoom const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithRoomUnderCurrentRoom();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithRoomUnderCurrentRoom, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithRoomUnderCurrentRoom);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithRoomUnderCurrentRoom*, "Oculus.Platform", "MessageWithRoomUnderCurrentRoom");
