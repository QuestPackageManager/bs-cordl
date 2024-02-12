#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__RoomList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithRoomList)
namespace Oculus::Platform::Models {
class RoomList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithRoomList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithRoomList);
// Type: Oculus.Platform::MessageWithRoomList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13162)), TypeDefinitionIndex(TypeDefinitionIndex(13428)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13162), inst:
// 4588 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13234)) CS Name: ::Oculus.Platform::MessageWithRoomList*
class CORDL_TYPE MessageWithRoomList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomList*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithRoomList* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x271925c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetRoomList, addr 0x271d8fc, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::RoomList* GetRoomList();

  /// @brief Method GetDataFromMessage, addr 0x271d938, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::RoomList* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithRoomList(MessageWithRoomList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithRoomList(MessageWithRoomList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithRoomList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithRoomList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithRoomList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithRoomList*, "Oculus.Platform", "MessageWithRoomList");
