#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusRequestExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OculusRequestExtensions)
namespace GlobalNamespace {
struct PlatformException_ErrorType;
}
namespace GlobalNamespace {
class PlatformException;
}
namespace Oculus::Platform::Models {
class Error;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusRequestExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusRequestExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusRequestExtensions
class CORDL_TYPE OculusRequestExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToPlatformException, addr 0x22763d0, size 0x88, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlatformException* ToPlatformException(::Oculus::Platform::Models::Error* error, ::GlobalNamespace::PlatformException_ErrorType errorType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusRequestExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusRequestExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusRequestExtensions(OculusRequestExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusRequestExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusRequestExtensions(OculusRequestExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18316 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusRequestExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusRequestExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusRequestExtensions*, "", "OculusRequestExtensions");
