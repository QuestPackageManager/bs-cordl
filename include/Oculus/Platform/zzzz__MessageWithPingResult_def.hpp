#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__PingResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithPingResult)
namespace Oculus::Platform::Models {
class PingResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPingResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithPingResult);
// Type: Oculus.Platform::MessageWithPingResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13162)), TypeDefinitionIndex(TypeDefinitionIndex(13420)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13162), inst:
// 978 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13250)) CS Name: ::Oculus.Platform::MessageWithPingResult*
class CORDL_TYPE MessageWithPingResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PingResult*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithPingResult* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x2719784, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetPingResult, addr 0x271e6a0, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PingResult* GetPingResult();

  /// @brief Method GetDataFromMessage, addr 0x271e6dc, size 0x114, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PingResult* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPingResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithPingResult(MessageWithPingResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPingResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithPingResult(MessageWithPingResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithPingResult();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithPingResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithPingResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPingResult*, "Oculus.Platform", "MessageWithPingResult");
