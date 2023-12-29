#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserAndRoom_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserAndRoomList)
// Forward declare root types
namespace Oculus::Platform::Models {
class UserAndRoomList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::UserAndRoomList);
// Type: Oculus.Platform.Models::UserAndRoomList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13476), inst: 1164 }), TypeDefinitionIndex(TypeDefinitionIndex(13548)),
// TypeDefinitionIndex(TypeDefinitionIndex(13476))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13549)) CS Name: ::Oculus.Platform.Models::UserAndRoomList*
class CORDL_TYPE UserAndRoomList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::UserAndRoom*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::UserAndRoomList* New_ctor(void* a);

  /// @brief Method .ctor addr 0x25b7f80 size 0x25c virtual false final false
  inline void _ctor(void* a);

  // Ctor Parameters [CppParam { name: "", ty: "UserAndRoomList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserAndRoomList(UserAndRoomList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserAndRoomList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserAndRoomList(UserAndRoomList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserAndRoomList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::UserAndRoomList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::UserAndRoomList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserAndRoomList*, "Oculus.Platform.Models", "UserAndRoomList");
