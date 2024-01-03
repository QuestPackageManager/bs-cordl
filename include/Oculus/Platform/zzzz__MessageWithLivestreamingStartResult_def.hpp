#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__LivestreamingStartResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLivestreamingStartResult)
namespace Oculus::Platform::Models {
class LivestreamingStartResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLivestreamingStartResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLivestreamingStartResult);
// Type: Oculus.Platform::MessageWithLivestreamingStartResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13454)), TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst:
// 4595 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(13302)) CS Name: ::Oculus.Platform::MessageWithLivestreamingStartResult*
class CORDL_TYPE MessageWithLivestreamingStartResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LivestreamingStartResult*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithLivestreamingStartResult* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x26f2618, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetLivestreamingStartResult, addr 0x26f2670, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingStartResult* GetLivestreamingStartResult();

  /// @brief Method GetDataFromMessage, addr 0x26f26ac, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingStartResult* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingStartResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithLivestreamingStartResult(MessageWithLivestreamingStartResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingStartResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithLivestreamingStartResult(MessageWithLivestreamingStartResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithLivestreamingStartResult();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLivestreamingStartResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLivestreamingStartResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLivestreamingStartResult*, "Oculus.Platform", "MessageWithLivestreamingStartResult");
