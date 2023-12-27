#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__Destination_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DestinationList)
// Forward declare root types
namespace Oculus::Platform::Models {
class DestinationList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::DestinationList);
// Type: Oculus.Platform.Models::DestinationList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13431)), TypeDefinitionIndex(TypeDefinitionIndex(13430)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13430), inst:
// 1173 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(13432)) CS Name: ::Oculus.Platform.Models::DestinationList*
class CORDL_TYPE DestinationList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::Destination*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::DestinationList* New_ctor(void* a);

  /// @brief Method .ctor addr 0x2705b64 size 0x25c virtual false final false
  inline void _ctor(void* a);

  // Ctor Parameters [CppParam { name: "", ty: "DestinationList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DestinationList(DestinationList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DestinationList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DestinationList(DestinationList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DestinationList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::DestinationList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::DestinationList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::DestinationList*, "Oculus.Platform.Models", "DestinationList");
