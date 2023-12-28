#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__LaunchInvitePanelFlowResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLaunchInvitePanelFlowResult)
namespace Oculus::Platform::Models {
class LaunchInvitePanelFlowResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLaunchInvitePanelFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult);
// Type: Oculus.Platform::MessageWithLaunchInvitePanelFlowResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 975 }), TypeDefinitionIndex(TypeDefinitionIndex(13262)),
// TypeDefinitionIndex(TypeDefinitionIndex(13444))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13295)) CS Name: ::Oculus.Platform::MessageWithLaunchInvitePanelFlowResult*
class CORDL_TYPE MessageWithLaunchInvitePanelFlowResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x26ef1e8 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetLaunchInvitePanelFlowResult addr 0x26f1f28 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::LaunchInvitePanelFlowResult* GetLaunchInvitePanelFlowResult();

  /// @brief Method GetDataFromMessage addr 0x26f1f64 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::LaunchInvitePanelFlowResult* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchInvitePanelFlowResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithLaunchInvitePanelFlowResult(MessageWithLaunchInvitePanelFlowResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchInvitePanelFlowResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithLaunchInvitePanelFlowResult(MessageWithLaunchInvitePanelFlowResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithLaunchInvitePanelFlowResult();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult*, "Oculus.Platform", "MessageWithLaunchInvitePanelFlowResult");
