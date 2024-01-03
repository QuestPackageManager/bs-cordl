#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithUser)
namespace Oculus::Platform::Models {
class User;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUser;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithUser);
// Type: Oculus.Platform::MessageWithUser
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13484)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst:
// 1184 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(13326)) CS Name: ::Oculus.Platform::MessageWithUser*
class CORDL_TYPE MessageWithUser : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithUser* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x26ef978, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetUser, addr 0x26f3c78, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::User* GetUser();

  /// @brief Method GetDataFromMessage, addr 0x26f3cb4, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::User* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithUser(MessageWithUser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithUser(MessageWithUser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithUser();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithUser, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithUser);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUser*, "Oculus.Platform", "MessageWithUser");
