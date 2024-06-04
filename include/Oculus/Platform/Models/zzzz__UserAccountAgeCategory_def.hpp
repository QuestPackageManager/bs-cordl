#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/UserAccountAgeCategory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__AccountAgeCategory_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserAccountAgeCategory)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class UserAccountAgeCategory;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::UserAccountAgeCategory);
// Type: Oculus.Platform.Models::UserAccountAgeCategory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::UserAccountAgeCategory*
class CORDL_TYPE UserAccountAgeCategory : public ::System::Object {
public:
  // Declarations
  /// @brief Field AgeCategory, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_AgeCategory, put = __cordl_internal_set_AgeCategory))::Oculus::Platform::AccountAgeCategory AgeCategory;

  static inline ::Oculus::Platform::Models::UserAccountAgeCategory* New_ctor(::System::IntPtr o);

  constexpr ::Oculus::Platform::AccountAgeCategory const& __cordl_internal_get_AgeCategory() const;

  constexpr ::Oculus::Platform::AccountAgeCategory& __cordl_internal_get_AgeCategory();

  constexpr void __cordl_internal_set_AgeCategory(::Oculus::Platform::AccountAgeCategory value);

  /// @brief Method .ctor, addr 0x2aff800, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserAccountAgeCategory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserAccountAgeCategory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserAccountAgeCategory(UserAccountAgeCategory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserAccountAgeCategory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserAccountAgeCategory(UserAccountAgeCategory const&) = delete;

  /// @brief Field AgeCategory, offset: 0x10, size: 0x4, def value: None
  ::Oculus::Platform::AccountAgeCategory ___AgeCategory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::UserAccountAgeCategory, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::UserAccountAgeCategory, ___AgeCategory) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::UserAccountAgeCategory);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserAccountAgeCategory*, "Oculus.Platform.Models", "UserAccountAgeCategory");
