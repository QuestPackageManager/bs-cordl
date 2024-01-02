#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__PidList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithPidList)
namespace Oculus::Platform::Models {
class PidList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPidList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithPidList);
// Type: Oculus.Platform::MessageWithPidList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4604 }),
// TypeDefinitionIndex(TypeDefinitionIndex(13470))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13316)) CS Name: ::Oculus.Platform::MessageWithPidList*
class CORDL_TYPE MessageWithPidList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PidList*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithPidList* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x26ef608, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetPidList, addr 0x26f3450, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PidList* GetPidList();

  /// @brief Method GetDataFromMessage, addr 0x26f348c, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PidList* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPidList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithPidList(MessageWithPidList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPidList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithPidList(MessageWithPidList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithPidList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithPidList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithPidList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPidList*, "Oculus.Platform", "MessageWithPidList");
