#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/UserList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
CORDL_MODULE_EXPORT(UserList)
namespace Oculus::Platform::Models {
class User;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class UserList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::UserList);
// Dependencies Oculus.Platform.Models.DeserializableList`1<T>
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.UserList
class CORDL_TYPE UserList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::User*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::UserList* New_ctor(::System::IntPtr a);

  /// @brief Method .ctor, addr 0x3f94cfc, size 0x210, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserList(UserList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserList(UserList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15571 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::UserList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::UserList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserList*, "Oculus.Platform.Models", "UserList");
