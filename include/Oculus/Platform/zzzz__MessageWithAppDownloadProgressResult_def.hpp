#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__AppDownloadProgressResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithAppDownloadProgressResult)
namespace Oculus::Platform::Models {
class AppDownloadProgressResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAppDownloadProgressResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAppDownloadProgressResult);
// Type: Oculus.Platform::MessageWithAppDownloadProgressResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13412)), TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst:
// 4573 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(13271)) CS Name: ::Oculus.Platform::MessageWithAppDownloadProgressResult*
class CORDL_TYPE MessageWithAppDownloadProgressResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AppDownloadProgressResult*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithAppDownloadProgressResult* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x26eea00, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetAppDownloadProgressResult, addr 0x26f0b10, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AppDownloadProgressResult* GetAppDownloadProgressResult();

  /// @brief Method GetDataFromMessage, addr 0x26f0b4c, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AppDownloadProgressResult* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAppDownloadProgressResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithAppDownloadProgressResult(MessageWithAppDownloadProgressResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAppDownloadProgressResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithAppDownloadProgressResult(MessageWithAppDownloadProgressResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithAppDownloadProgressResult();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAppDownloadProgressResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAppDownloadProgressResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAppDownloadProgressResult*, "Oculus.Platform", "MessageWithAppDownloadProgressResult");
