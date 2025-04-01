#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/SdkAccountList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
CORDL_MODULE_EXPORT(SdkAccountList)
namespace Oculus::Platform::Models {
class SdkAccount;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class SdkAccountList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::SdkAccountList);
// Dependencies Oculus.Platform.Models.DeserializableList`1<T>
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.SdkAccountList
class CORDL_TYPE SdkAccountList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::SdkAccount*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::SdkAccountList* New_ctor(::System::IntPtr a);

  /// @brief Method .ctor, addr 0x3f8edb0, size 0x1f0, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SdkAccountList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SdkAccountList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SdkAccountList(SdkAccountList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SdkAccountList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SdkAccountList(SdkAccountList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15568 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::SdkAccountList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::SdkAccountList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::SdkAccountList*, "Oculus.Platform.Models", "SdkAccountList");
