#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithUserList)
namespace Oculus::Platform::Models {
class UserList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithUserList);
// Type: Oculus.Platform::MessageWithUserList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst: 969 }), TypeDefinitionIndex(TypeDefinitionIndex(13269)),
// TypeDefinitionIndex(TypeDefinitionIndex(13547))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13351)) CS Name: ::Oculus.Platform::MessageWithUserList*
class CORDL_TYPE MessageWithUserList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithUserList* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x2593d44 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetUserList addr 0x259889c size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::UserList* GetUserList();

  /// @brief Method GetDataFromMessage addr 0x25988d8 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::UserList* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithUserList(MessageWithUserList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithUserList(MessageWithUserList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithUserList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithUserList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithUserList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUserList*, "Oculus.Platform", "MessageWithUserList");
