#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__InstalledApplicationList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithInstalledApplicationList)
namespace Oculus::Platform::Models {
class InstalledApplicationList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithInstalledApplicationList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithInstalledApplicationList);
// Type: Oculus.Platform::MessageWithInstalledApplicationList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4586 }), TypeDefinitionIndex(TypeDefinitionIndex(13262)),
// TypeDefinitionIndex(TypeDefinitionIndex(13438))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13291)) CS Name: ::Oculus.Platform::MessageWithInstalledApplicationList*
class CORDL_TYPE MessageWithInstalledApplicationList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::InstalledApplicationList*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithInstalledApplicationList* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x26f1b70, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetInstalledApplicationList, addr 0x26f1bc8, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::InstalledApplicationList* GetInstalledApplicationList();

  /// @brief Method GetDataFromMessage, addr 0x26f1c04, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::InstalledApplicationList* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithInstalledApplicationList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithInstalledApplicationList(MessageWithInstalledApplicationList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithInstalledApplicationList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithInstalledApplicationList(MessageWithInstalledApplicationList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithInstalledApplicationList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithInstalledApplicationList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithInstalledApplicationList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithInstalledApplicationList*, "Oculus.Platform", "MessageWithInstalledApplicationList");
