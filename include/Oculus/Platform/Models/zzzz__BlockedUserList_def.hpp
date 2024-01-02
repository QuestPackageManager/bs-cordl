#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__BlockedUser_def.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BlockedUserList)
// Forward declare root types
namespace Oculus::Platform::Models {
class BlockedUserList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::BlockedUserList);
// Type: Oculus.Platform.Models::BlockedUserList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13430)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13430), inst: 1170 }),
// TypeDefinitionIndex(TypeDefinitionIndex(13424))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13425)) CS Name: ::Oculus.Platform.Models::BlockedUserList*
class CORDL_TYPE BlockedUserList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::BlockedUser*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::BlockedUserList* New_ctor(void* a);

  /// @brief Method .ctor, addr 0x2704d54, size 0x25c, virtual false, abstract: false, final false
  inline void _ctor(void* a);

  // Ctor Parameters [CppParam { name: "", ty: "BlockedUserList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlockedUserList(BlockedUserList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlockedUserList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlockedUserList(BlockedUserList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlockedUserList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::BlockedUserList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::BlockedUserList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::BlockedUserList*, "Oculus.Platform.Models", "BlockedUserList");
