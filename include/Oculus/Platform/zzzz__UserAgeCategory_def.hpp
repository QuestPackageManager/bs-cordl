#pragma once
// IWYU pragma private; include "Oculus/Platform/UserAgeCategory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UserAgeCategory)
namespace Oculus::Platform::Models {
class UserAccountAgeCategory;
}
namespace Oculus::Platform {
struct AppAgeCategory;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
class Request;
}
// Forward declare root types
namespace Oculus::Platform {
class UserAgeCategory;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::UserAgeCategory);
// Type: Oculus.Platform::UserAgeCategory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::UserAgeCategory*
class CORDL_TYPE UserAgeCategory : public ::System::Object {
public:
  // Declarations
  /// @brief Method Get, addr 0x3f15ef4, size 0x150, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserAccountAgeCategory*>* Get();

  /// @brief Method Report, addr 0x3f16044, size 0x144, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* Report(::Oculus::Platform::AppAgeCategory age_category);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserAgeCategory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserAgeCategory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserAgeCategory(UserAgeCategory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserAgeCategory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserAgeCategory(UserAgeCategory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15409 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::UserAgeCategory, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::UserAgeCategory);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::UserAgeCategory*, "Oculus.Platform", "UserAgeCategory");
