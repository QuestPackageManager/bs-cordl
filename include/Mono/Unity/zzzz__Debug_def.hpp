#pragma once
// IWYU pragma private; include "Mono/Unity/Debug.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Debug)
namespace Mono::Security::Interface {
struct AlertDescription;
}
namespace Mono::Unity {
struct UnityTls_unitytls_errorstate;
}
namespace Mono::Unity {
struct UnityTls_unitytls_x509verify_result;
}
// Forward declare root types
namespace Mono::Unity {
class Debug;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Unity::Debug);
// Dependencies System.Object
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.Debug
class CORDL_TYPE Debug : public ::System::Object {
public:
  // Declarations
  /// @brief Method CheckAndThrow, addr 0x410a7dc, size 0x98, virtual false, abstract: false, final false
  static inline void CheckAndThrow(::Mono::Unity::UnityTls_unitytls_errorstate errorState, ::StringW context, ::Mono::Security::Interface::AlertDescription defaultAlert);

  /// @brief Method CheckAndThrow, addr 0x410a874, size 0xd0, virtual false, abstract: false, final false
  static inline void CheckAndThrow(::Mono::Unity::UnityTls_unitytls_errorstate errorState, ::Mono::Unity::UnityTls_unitytls_x509verify_result verifyResult, ::StringW context,
                                   ::Mono::Security::Interface::AlertDescription defaultAlert);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Debug();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Debug(Debug&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Debug(Debug const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9077 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::Debug, 0x10>, "Size mismatch!");

} // namespace Mono::Unity
NEED_NO_BOX(::Mono::Unity::Debug);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::Debug*, "Mono.Unity", "Debug");
