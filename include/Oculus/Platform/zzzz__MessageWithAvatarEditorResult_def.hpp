#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__AvatarEditorResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithAvatarEditorResult)
namespace Oculus::Platform::Models {
class AvatarEditorResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAvatarEditorResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAvatarEditorResult);
// Type: Oculus.Platform::MessageWithAvatarEditorResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13423)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst:
// 4581 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(13281)) CS Name: ::Oculus.Platform::MessageWithAvatarEditorResult*
class CORDL_TYPE MessageWithAvatarEditorResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AvatarEditorResult*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithAvatarEditorResult* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x26eed70, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetAvatarEditorResult, addr 0x26f1380, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AvatarEditorResult* GetAvatarEditorResult();

  /// @brief Method GetDataFromMessage, addr 0x26f13bc, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AvatarEditorResult* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAvatarEditorResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithAvatarEditorResult(MessageWithAvatarEditorResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAvatarEditorResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithAvatarEditorResult(MessageWithAvatarEditorResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithAvatarEditorResult();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAvatarEditorResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAvatarEditorResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAvatarEditorResult*, "Oculus.Platform", "MessageWithAvatarEditorResult");
