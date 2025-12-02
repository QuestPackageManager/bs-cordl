#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/PurchaseList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
CORDL_MODULE_EXPORT(PurchaseList)
namespace Oculus::Platform::Models {
class Purchase;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class PurchaseList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::PurchaseList);
// Dependencies Oculus.Platform.Models.DeserializableList`1<T>
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.PurchaseList
class CORDL_TYPE PurchaseList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::Purchase*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::PurchaseList* New_ctor(::System::IntPtr a);

  /// @brief Method .ctor, addr 0x5bdd198, size 0x1fc, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PurchaseList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PurchaseList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PurchaseList(PurchaseList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PurchaseList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PurchaseList(PurchaseList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18042 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::PurchaseList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::PurchaseList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::PurchaseList*, "Oculus.Platform.Models", "PurchaseList");
