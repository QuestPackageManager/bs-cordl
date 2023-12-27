#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__NetSyncSetSessionPropertyResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithNetSyncSetSessionPropertyResult)
namespace Oculus::Platform::Models {
class NetSyncSetSessionPropertyResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithNetSyncSetSessionPropertyResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult);
// Type: Oculus.Platform::MessageWithNetSyncSetSessionPropertyResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13462)), TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst:
// 4599 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(13309)) CS Name: ::Oculus.Platform::MessageWithNetSyncSetSessionPropertyResult*
class CORDL_TYPE MessageWithNetSyncSetSessionPropertyResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x26f2d08 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetNetSyncSetSessionPropertyResult addr 0x26f2d60 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* GetNetSyncSetSessionPropertyResult();

  /// @brief Method GetDataFromMessage addr 0x26f2d9c size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSetSessionPropertyResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithNetSyncSetSessionPropertyResult(MessageWithNetSyncSetSessionPropertyResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSetSessionPropertyResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithNetSyncSetSessionPropertyResult(MessageWithNetSyncSetSessionPropertyResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithNetSyncSetSessionPropertyResult();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*, "Oculus.Platform", "MessageWithNetSyncSetSessionPropertyResult");
