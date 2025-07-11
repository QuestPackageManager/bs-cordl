#pragma once
// IWYU pragma private; include "Mono/Security/Interface/TlsException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TlsException)
namespace Mono::Security::Interface {
struct AlertDescription;
}
namespace Mono::Security::Interface {
class Alert;
}
// Forward declare root types
namespace Mono::Security::Interface {
class TlsException;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Interface::TlsException);
// Dependencies System.Exception
namespace Mono::Security::Interface {
// Is value type: false
// CS Name: Mono.Security.Interface.TlsException
class CORDL_TYPE TlsException : public ::System::Exception {
public:
  // Declarations
  /// @brief Field alert, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_alert, put = __cordl_internal_set_alert)) ::Mono::Security::Interface::Alert* alert;

  static inline ::Mono::Security::Interface::TlsException* New_ctor(::Mono::Security::Interface::Alert* alert, ::StringW message);

  static inline ::Mono::Security::Interface::TlsException* New_ctor(::Mono::Security::Interface::AlertDescription description, ::StringW message);

  constexpr ::Mono::Security::Interface::Alert* const& __cordl_internal_get_alert() const;

  constexpr ::Mono::Security::Interface::Alert*& __cordl_internal_get_alert();

  constexpr void __cordl_internal_set_alert(::Mono::Security::Interface::Alert* value);

  /// @brief Method .ctor, addr 0x3c464a8, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::Interface::Alert* alert, ::StringW message);

  /// @brief Method .ctor, addr 0x3c4651c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::Interface::AlertDescription description, ::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsException(TlsException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsException(TlsException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15965 };

  /// @brief Field alert, offset: 0x90, size: 0x8, def value: None
  ::Mono::Security::Interface::Alert* ___alert;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Interface::TlsException, ___alert) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::TlsException, 0x98>, "Size mismatch!");

} // namespace Mono::Security::Interface
NEED_NO_BOX(::Mono::Security::Interface::TlsException);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::TlsException*, "Mono.Security.Interface", "TlsException");
