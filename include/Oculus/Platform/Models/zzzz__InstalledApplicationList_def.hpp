#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/InstalledApplicationList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
CORDL_MODULE_EXPORT(InstalledApplicationList)
namespace Oculus::Platform::Models {
class InstalledApplication;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class InstalledApplicationList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::InstalledApplicationList);
// Dependencies Oculus.Platform.Models.DeserializableList`1<T>
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.InstalledApplicationList
class CORDL_TYPE InstalledApplicationList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::InstalledApplication*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::InstalledApplicationList* New_ctor(::System::IntPtr a);

  /// @brief Method .ctor, addr 0x5bdabf0, size 0x1dc, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstalledApplicationList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstalledApplicationList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstalledApplicationList(InstalledApplicationList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstalledApplicationList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstalledApplicationList(InstalledApplicationList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18001 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::InstalledApplicationList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::InstalledApplicationList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::InstalledApplicationList*, "Oculus.Platform.Models", "InstalledApplicationList");
