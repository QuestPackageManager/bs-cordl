#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/Certificates/zzzz__CertificateException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CertificateNotYetValidException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security::Certificates {
class CertificateNotYetValidException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::Certificates::CertificateNotYetValidException);
// Type: Org.BouncyCastle.Security.Certificates::CertificateNotYetValidException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security::Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1733))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1736))
// CS Name: ::Org.BouncyCastle.Security.Certificates::CertificateNotYetValidException*
class CORDL_TYPE CertificateNotYetValidException : public ::Org::BouncyCastle::Security::Certificates::CertificateException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Security::Certificates::CertificateNotYetValidException* New_ctor();

  /// @brief Method .ctor addr 0x111d9dc size 0x8 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Security::Certificates::CertificateNotYetValidException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x111d9e4 size 0x8 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::Org::BouncyCastle::Security::Certificates::CertificateNotYetValidException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor addr 0x111d9ec size 0x8 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

  // Ctor Parameters [CppParam { name: "", ty: "CertificateNotYetValidException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateNotYetValidException(CertificateNotYetValidException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateNotYetValidException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateNotYetValidException(CertificateNotYetValidException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateNotYetValidException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::Certificates::CertificateNotYetValidException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security::Certificates
NEED_NO_BOX(::Org::BouncyCastle::Security::Certificates::CertificateNotYetValidException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::Certificates::CertificateNotYetValidException*, "Org.BouncyCastle.Security.Certificates", "CertificateNotYetValidException");
