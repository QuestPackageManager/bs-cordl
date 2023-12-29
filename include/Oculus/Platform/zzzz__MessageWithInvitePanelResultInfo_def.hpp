#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__InvitePanelResultInfo_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithInvitePanelResultInfo)
namespace Oculus::Platform::Models {
class InvitePanelResultInfo;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithInvitePanelResultInfo;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithInvitePanelResultInfo);
// Type: Oculus.Platform::MessageWithInvitePanelResultInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13269)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst: 4488 }),
// TypeDefinitionIndex(TypeDefinitionIndex(13485))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13305)) CS Name: ::Oculus.Platform::MessageWithInvitePanelResultInfo*
class CORDL_TYPE MessageWithInvitePanelResultInfo : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithInvitePanelResultInfo* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x2593034 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetInvitePanelResultInfo addr 0x2595ea4 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::InvitePanelResultInfo* GetInvitePanelResultInfo();

  /// @brief Method GetDataFromMessage addr 0x2595ee0 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::InvitePanelResultInfo* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithInvitePanelResultInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithInvitePanelResultInfo(MessageWithInvitePanelResultInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithInvitePanelResultInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithInvitePanelResultInfo(MessageWithInvitePanelResultInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithInvitePanelResultInfo();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithInvitePanelResultInfo, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithInvitePanelResultInfo);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithInvitePanelResultInfo*, "Oculus.Platform", "MessageWithInvitePanelResultInfo");
