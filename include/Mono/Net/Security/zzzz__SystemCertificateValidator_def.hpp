#pragma once
// IWYU pragma private; include "Mono/Net/Security/SystemCertificateValidator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyUsageFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SystemCertificateValidator)
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
// Forward declare root types
namespace Mono::Net::Security {
class SystemCertificateValidator;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::SystemCertificateValidator);
// Dependencies System.Object, System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.SystemCertificateValidator
class CORDL_TYPE SystemCertificateValidator : public ::System::Object {
public:
  // Declarations
  /// @brief Field is_macosx, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_is_macosx, put = setStaticF_is_macosx)) bool is_macosx;

  /// @brief Field s_flags, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_flags, put = setStaticF_s_flags)) ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags s_flags;

  /// @brief Method NeedsChain, addr 0x4117b68, size 0x8, virtual false, abstract: false, final false
  static inline bool NeedsChain(::Mono::Security::Interface::MonoTlsSettings* settings);

  static inline bool getStaticF_is_macosx();

  static inline ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags getStaticF_s_flags();

  static inline void setStaticF_is_macosx(bool value);

  static inline void setStaticF_s_flags(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemCertificateValidator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SystemCertificateValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemCertificateValidator(SystemCertificateValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemCertificateValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemCertificateValidator(SystemCertificateValidator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9165 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::SystemCertificateValidator, 0x10>, "Size mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::SystemCertificateValidator);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::SystemCertificateValidator*, "Mono.Net.Security", "SystemCertificateValidator");
