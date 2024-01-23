#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__LaunchReportFlowResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLaunchReportFlowResult)
namespace Oculus::Platform::Models {
class LaunchReportFlowResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLaunchReportFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLaunchReportFlowResult);
// Type: Oculus.Platform::MessageWithLaunchReportFlowResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13445)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst:
// 4590 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13296)) CS Name: ::Oculus.Platform::MessageWithLaunchReportFlowResult*
class CORDL_TYPE MessageWithLaunchReportFlowResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchReportFlowResult*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithLaunchReportFlowResult* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x26f2000, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetLaunchReportFlowResult, addr 0x26f2058, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LaunchReportFlowResult* GetLaunchReportFlowResult();

  /// @brief Method GetDataFromMessage, addr 0x26f2094, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LaunchReportFlowResult* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchReportFlowResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithLaunchReportFlowResult(MessageWithLaunchReportFlowResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchReportFlowResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithLaunchReportFlowResult(MessageWithLaunchReportFlowResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithLaunchReportFlowResult();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLaunchReportFlowResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLaunchReportFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLaunchReportFlowResult*, "Oculus.Platform", "MessageWithLaunchReportFlowResult");
