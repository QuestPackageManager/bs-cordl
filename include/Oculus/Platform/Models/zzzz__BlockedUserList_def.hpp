#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/BlockedUserList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BlockedUserList)
namespace Oculus::Platform::Models {
class BlockedUser;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class BlockedUserList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::BlockedUserList);
// Type: Oculus.Platform.Models::BlockedUserList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::BlockedUserList*
class CORDL_TYPE BlockedUserList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::BlockedUser*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::BlockedUserList* New_ctor(::System::IntPtr a);

  /// @brief Method .ctor, addr 0x3f2e998, size 0x210, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlockedUserList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BlockedUserList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlockedUserList(BlockedUserList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlockedUserList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlockedUserList(BlockedUserList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15472 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::BlockedUserList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::BlockedUserList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::BlockedUserList*, "Oculus.Platform.Models", "BlockedUserList");
