#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__Team_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TeamList)
// Forward declare root types
namespace Oculus::Platform::Models {
class TeamList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::TeamList);
// Type: Oculus.Platform.Models::TeamList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13369)), TypeDefinitionIndex(TypeDefinitionIndex(13437)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13369), inst:
// 1165 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13438)) CS Name: ::Oculus.Platform.Models::TeamList*
class CORDL_TYPE TeamList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::Team*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::TeamList* New_ctor(void* a);

  /// @brief Method .ctor, addr 0x273cc28, size 0x23c, virtual false, abstract: false, final false
  inline void _ctor(void* a);

  // Ctor Parameters [CppParam { name: "", ty: "TeamList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TeamList(TeamList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TeamList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TeamList(TeamList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TeamList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::TeamList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::TeamList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::TeamList*, "Oculus.Platform.Models", "TeamList");
