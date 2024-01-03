#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__UserAccountAgeCategory_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithUserAccountAgeCategory)
namespace Oculus::Platform::Models {
class UserAccountAgeCategory;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserAccountAgeCategory;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithUserAccountAgeCategory);
// Type: Oculus.Platform::MessageWithUserAccountAgeCategory
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4611 }), TypeDefinitionIndex(TypeDefinitionIndex(13486)),
// TypeDefinitionIndex(TypeDefinitionIndex(13262))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13327)) CS Name: ::Oculus.Platform::MessageWithUserAccountAgeCategory*
class CORDL_TYPE MessageWithUserAccountAgeCategory : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithUserAccountAgeCategory* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x26ef9d0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetUserAccountAgeCategory, addr 0x26f3d50, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserAccountAgeCategory* GetUserAccountAgeCategory();

  /// @brief Method GetDataFromMessage, addr 0x26f3d8c, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserAccountAgeCategory* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserAccountAgeCategory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithUserAccountAgeCategory(MessageWithUserAccountAgeCategory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserAccountAgeCategory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithUserAccountAgeCategory(MessageWithUserAccountAgeCategory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithUserAccountAgeCategory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithUserAccountAgeCategory, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithUserAccountAgeCategory);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUserAccountAgeCategory*, "Oculus.Platform", "MessageWithUserAccountAgeCategory");
