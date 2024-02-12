#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__SendInvitesResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithSendInvitesResult)
namespace Oculus::Platform::Models {
class SendInvitesResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithSendInvitesResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithSendInvitesResult);
// Type: Oculus.Platform::MessageWithSendInvitesResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13162)), TypeDefinitionIndex(TypeDefinitionIndex(13433)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13162), inst:
// 4590 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13238)) CS Name: ::Oculus.Platform::MessageWithSendInvitesResult*
class CORDL_TYPE MessageWithSendInvitesResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::SendInvitesResult*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithSendInvitesResult* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x27193bc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetSendInvitesResult, addr 0x271dc5c, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::SendInvitesResult* GetSendInvitesResult();

  /// @brief Method GetDataFromMessage, addr 0x271dc98, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::SendInvitesResult* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithSendInvitesResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithSendInvitesResult(MessageWithSendInvitesResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithSendInvitesResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithSendInvitesResult(MessageWithSendInvitesResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithSendInvitesResult();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithSendInvitesResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithSendInvitesResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithSendInvitesResult*, "Oculus.Platform", "MessageWithSendInvitesResult");
