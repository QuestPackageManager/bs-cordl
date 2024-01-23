#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__SdkAccountList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithSdkAccountList)
namespace Oculus::Platform::Models {
class SdkAccountList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithSdkAccountList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithSdkAccountList);
// Type: Oculus.Platform::MessageWithSdkAccountList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13479)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst:
// 4608 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13321)) CS Name: ::Oculus.Platform::MessageWithSdkAccountList*
class CORDL_TYPE MessageWithSdkAccountList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::SdkAccountList*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithSdkAccountList* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x26ef7c0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetSdkAccountList, addr 0x26f3888, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::SdkAccountList* GetSdkAccountList();

  /// @brief Method GetDataFromMessage, addr 0x26f38c4, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::SdkAccountList* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithSdkAccountList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithSdkAccountList(MessageWithSdkAccountList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithSdkAccountList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithSdkAccountList(MessageWithSdkAccountList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithSdkAccountList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithSdkAccountList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithSdkAccountList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithSdkAccountList*, "Oculus.Platform", "MessageWithSdkAccountList");
