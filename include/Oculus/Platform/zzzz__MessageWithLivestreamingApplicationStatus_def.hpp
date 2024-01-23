#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__LivestreamingApplicationStatus_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLivestreamingApplicationStatus)
namespace Oculus::Platform::Models {
class LivestreamingApplicationStatus;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLivestreamingApplicationStatus;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLivestreamingApplicationStatus);
// Type: Oculus.Platform::MessageWithLivestreamingApplicationStatus
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13453)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst:
// 4594 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13301)) CS Name: ::Oculus.Platform::MessageWithLivestreamingApplicationStatus*
class CORDL_TYPE MessageWithLivestreamingApplicationStatus : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LivestreamingApplicationStatus*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithLivestreamingApplicationStatus* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x26f24e8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetLivestreamingApplicationStatus, addr 0x26f2540, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingApplicationStatus* GetLivestreamingApplicationStatus();

  /// @brief Method GetDataFromMessage, addr 0x26f257c, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingApplicationStatus* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingApplicationStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithLivestreamingApplicationStatus(MessageWithLivestreamingApplicationStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingApplicationStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithLivestreamingApplicationStatus(MessageWithLivestreamingApplicationStatus const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithLivestreamingApplicationStatus();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLivestreamingApplicationStatus, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLivestreamingApplicationStatus);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLivestreamingApplicationStatus*, "Oculus.Platform", "MessageWithLivestreamingApplicationStatus");
