#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomList)
// Forward declare root types
namespace Oculus::Platform::Models {
class RoomList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::RoomList);
// Type: Oculus.Platform.Models::RoomList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13476)), TypeDefinitionIndex(TypeDefinitionIndex(13534)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13476), inst:
// 965 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(13535)) CS Name: ::Oculus.Platform.Models::RoomList*
class CORDL_TYPE RoomList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::Room*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::RoomList* New_ctor(void* a);

  /// @brief Method .ctor addr 0x25b50dc size 0x25c virtual false final false
  inline void _ctor(void* a);

  // Ctor Parameters [CppParam { name: "", ty: "RoomList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomList(RoomList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomList(RoomList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::RoomList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::RoomList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::RoomList*, "Oculus.Platform.Models", "RoomList");
