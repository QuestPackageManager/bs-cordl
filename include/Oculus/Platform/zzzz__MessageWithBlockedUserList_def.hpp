#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithBlockedUserList)
namespace Oculus::Platform::Models {
class BlockedUserList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithBlockedUserList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithBlockedUserList);
// Type: Oculus.Platform::MessageWithBlockedUserList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithBlockedUserList*
class CORDL_TYPE MessageWithBlockedUserList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::BlockedUserList*> {
public:
  // Declarations
  /// @brief Method GetBlockedUserList, addr 0x2ac760c, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::BlockedUserList* GetBlockedUserList();

  /// @brief Method GetDataFromMessage, addr 0x2ac7648, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::BlockedUserList* GetDataFromMessage(void* c_message);

  static inline ::Oculus::Platform::MessageWithBlockedUserList* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x2ac4f7c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithBlockedUserList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithBlockedUserList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithBlockedUserList(MessageWithBlockedUserList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithBlockedUserList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithBlockedUserList(MessageWithBlockedUserList const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithBlockedUserList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithBlockedUserList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithBlockedUserList*, "Oculus.Platform", "MessageWithBlockedUserList");
