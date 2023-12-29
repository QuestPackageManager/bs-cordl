#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__LinkedAccountList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLinkedAccountList)
namespace Oculus::Platform::Models {
class LinkedAccountList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLinkedAccountList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLinkedAccountList);
// Type: Oculus.Platform::MessageWithLinkedAccountList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13269)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst: 4494 }),
// TypeDefinitionIndex(TypeDefinitionIndex(13498))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13313)) CS Name: ::Oculus.Platform::MessageWithLinkedAccountList*
class CORDL_TYPE MessageWithLinkedAccountList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LinkedAccountList*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithLinkedAccountList* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x25965bc size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetLinkedAccountList addr 0x2596614 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::LinkedAccountList* GetLinkedAccountList();

  /// @brief Method GetDataFromMessage addr 0x2596650 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::LinkedAccountList* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLinkedAccountList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithLinkedAccountList(MessageWithLinkedAccountList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLinkedAccountList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithLinkedAccountList(MessageWithLinkedAccountList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithLinkedAccountList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLinkedAccountList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLinkedAccountList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLinkedAccountList*, "Oculus.Platform", "MessageWithLinkedAccountList");
