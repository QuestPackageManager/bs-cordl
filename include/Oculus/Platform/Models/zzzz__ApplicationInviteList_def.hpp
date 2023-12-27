#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__ApplicationInvite_def.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ApplicationInviteList)
// Forward declare root types
namespace Oculus::Platform::Models {
class ApplicationInviteList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::ApplicationInviteList);
// Type: Oculus.Platform.Models::ApplicationInviteList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13430), inst: 1168 }), TypeDefinitionIndex(TypeDefinitionIndex(13430)),
// TypeDefinitionIndex(TypeDefinitionIndex(13414))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13415)) CS Name: ::Oculus.Platform.Models::ApplicationInviteList*
class CORDL_TYPE ApplicationInviteList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::ApplicationInvite*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::ApplicationInviteList* New_ctor(void* a);

  /// @brief Method .ctor addr 0x2704264 size 0x25c virtual false final false
  inline void _ctor(void* a);

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationInviteList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApplicationInviteList(ApplicationInviteList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationInviteList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApplicationInviteList(ApplicationInviteList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApplicationInviteList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::ApplicationInviteList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::ApplicationInviteList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ApplicationInviteList*, "Oculus.Platform.Models", "ApplicationInviteList");
