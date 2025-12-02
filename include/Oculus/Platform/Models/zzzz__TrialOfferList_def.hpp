#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/TrialOfferList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
CORDL_MODULE_EXPORT(TrialOfferList)
namespace Oculus::Platform::Models {
class TrialOffer;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class TrialOfferList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::TrialOfferList);
// Dependencies Oculus.Platform.Models.DeserializableList`1<T>
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.TrialOfferList
class CORDL_TYPE TrialOfferList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::TrialOffer*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::TrialOfferList* New_ctor(::System::IntPtr a);

  /// @brief Method .ctor, addr 0x5bd8f54, size 0x1dc, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrialOfferList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrialOfferList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrialOfferList(TrialOfferList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrialOfferList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrialOfferList(TrialOfferList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18052 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::TrialOfferList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::TrialOfferList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::TrialOfferList*, "Oculus.Platform.Models", "TrialOfferList");
