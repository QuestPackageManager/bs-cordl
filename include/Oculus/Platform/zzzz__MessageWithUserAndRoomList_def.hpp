#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__UserAndRoomList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithUserAndRoomList)
namespace Oculus::Platform::Models {
class UserAndRoomList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserAndRoomList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithUserAndRoomList);
// Type: Oculus.Platform::MessageWithUserAndRoomList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13549)), TypeDefinitionIndex(TypeDefinitionIndex(13269)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst:
// 968 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(13350)) CS Name: ::Oculus.Platform::MessageWithUserAndRoomList*
class CORDL_TYPE MessageWithUserAndRoomList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAndRoomList*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithUserAndRoomList* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x2593cec size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetUserAndRoomList addr 0x25987c4 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::UserAndRoomList* GetUserAndRoomList();

  /// @brief Method GetDataFromMessage addr 0x2598800 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::UserAndRoomList* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserAndRoomList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithUserAndRoomList(MessageWithUserAndRoomList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserAndRoomList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithUserAndRoomList(MessageWithUserAndRoomList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithUserAndRoomList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithUserAndRoomList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithUserAndRoomList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUserAndRoomList*, "Oculus.Platform", "MessageWithUserAndRoomList");
