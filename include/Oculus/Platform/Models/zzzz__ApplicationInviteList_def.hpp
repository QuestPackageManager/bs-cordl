#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/ApplicationInviteList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
CORDL_MODULE_EXPORT(ApplicationInviteList)
namespace Oculus::Platform::Models {
class ApplicationInvite;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class ApplicationInviteList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::ApplicationInviteList);
// Dependencies Oculus.Platform.Models.DeserializableList`1<T>
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.ApplicationInviteList
class CORDL_TYPE ApplicationInviteList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::ApplicationInvite*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::ApplicationInviteList* New_ctor(::System::IntPtr a);

  /// @brief Method .ctor, addr 0x3f8e01c, size 0x210, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApplicationInviteList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApplicationInviteList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApplicationInviteList(ApplicationInviteList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationInviteList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApplicationInviteList(ApplicationInviteList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15497 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::ApplicationInviteList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::ApplicationInviteList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ApplicationInviteList*, "Oculus.Platform.Models", "ApplicationInviteList");
