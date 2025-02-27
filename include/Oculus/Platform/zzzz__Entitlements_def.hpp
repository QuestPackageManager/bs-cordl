#pragma once
// IWYU pragma private; include "Oculus/Platform/Entitlements.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Entitlements)
namespace Oculus::Platform {
class Request;
}
// Forward declare root types
namespace Oculus::Platform {
class Entitlements;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Entitlements);
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Entitlements
class CORDL_TYPE Entitlements : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsUserEntitledToApplication, addr 0x3f96cd8, size 0x13c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* IsUserEntitledToApplication();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Entitlements();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Entitlements", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Entitlements(Entitlements&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Entitlements", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Entitlements(Entitlements const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15451 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Entitlements, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Entitlements);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Entitlements*, "Oculus.Platform", "Entitlements");
