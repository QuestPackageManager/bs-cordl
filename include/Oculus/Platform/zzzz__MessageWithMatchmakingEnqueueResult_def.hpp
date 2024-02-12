#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithMatchmakingEnqueueResult)
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithMatchmakingEnqueueResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithMatchmakingEnqueueResult);
// Type: Oculus.Platform::MessageWithMatchmakingEnqueueResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13162)), TypeDefinitionIndex(TypeDefinitionIndex(13402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13162), inst:
// 4573 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13212)) CS Name: ::Oculus.Platform::MessageWithMatchmakingEnqueueResult*
class CORDL_TYPE MessageWithMatchmakingEnqueueResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithMatchmakingEnqueueResult* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x2718c84, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetMatchmakingEnqueueResult, addr 0x271c4b4, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::MatchmakingEnqueueResult* GetMatchmakingEnqueueResult();

  /// @brief Method GetDataFromMessage, addr 0x271c4f0, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::MatchmakingEnqueueResult* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingEnqueueResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithMatchmakingEnqueueResult(MessageWithMatchmakingEnqueueResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingEnqueueResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithMatchmakingEnqueueResult(MessageWithMatchmakingEnqueueResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithMatchmakingEnqueueResult();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithMatchmakingEnqueueResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithMatchmakingEnqueueResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithMatchmakingEnqueueResult*, "Oculus.Platform", "MessageWithMatchmakingEnqueueResult");
