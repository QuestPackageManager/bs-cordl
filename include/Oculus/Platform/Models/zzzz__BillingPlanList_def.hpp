#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/BillingPlanList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
CORDL_MODULE_EXPORT(BillingPlanList)
namespace Oculus::Platform::Models {
class BillingPlan;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class BillingPlanList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::BillingPlanList);
// Dependencies Oculus.Platform.Models.DeserializableList`1<T>
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.BillingPlanList
class CORDL_TYPE BillingPlanList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::BillingPlan*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::BillingPlanList* New_ctor(::System::IntPtr a);

  /// @brief Method .ctor, addr 0x5c3fc10, size 0x1dc, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BillingPlanList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BillingPlanList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BillingPlanList(BillingPlanList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BillingPlanList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BillingPlanList(BillingPlanList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17995 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::BillingPlanList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::BillingPlanList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::BillingPlanList*, "Oculus.Platform.Models", "BillingPlanList");
