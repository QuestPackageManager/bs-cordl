#pragma once
// IWYU pragma private; include "GlobalNamespace/ClientCertificateValidator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ICertificateValidator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClientCertificateValidator)
namespace GlobalNamespace {
class DnsEndPoint;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
// Forward declare root types
namespace GlobalNamespace {
class ClientCertificateValidator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ClientCertificateValidator);
// Dependencies ICertificateValidator, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ClientCertificateValidator
class CORDL_TYPE ClientCertificateValidator : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::ICertificateValidator"
  constexpr operator ::GlobalNamespace::ICertificateValidator*() noexcept;

  static inline ::GlobalNamespace::ClientCertificateValidator* New_ctor();

  /// @brief Method ValidateCertificateChain, addr 0x22ba910, size 0x4, virtual true, abstract: false, final true
  inline void ValidateCertificateChain(::GlobalNamespace::DnsEndPoint* endPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                       ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> certificateChain);

  /// @brief Method ValidateCertificateChainInternal, addr 0x22ba914, size 0x1bc, virtual false, abstract: false, final false
  inline void ValidateCertificateChainInternal(::GlobalNamespace::DnsEndPoint* endPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                               ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> certificateChain);

  /// @brief Method .ctor, addr 0x22baad0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::ICertificateValidator"
  constexpr ::GlobalNamespace::ICertificateValidator* i___GlobalNamespace__ICertificateValidator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientCertificateValidator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClientCertificateValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClientCertificateValidator(ClientCertificateValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClientCertificateValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClientCertificateValidator(ClientCertificateValidator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14697 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ClientCertificateValidator, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ClientCertificateValidator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ClientCertificateValidator*, "", "ClientCertificateValidator");
