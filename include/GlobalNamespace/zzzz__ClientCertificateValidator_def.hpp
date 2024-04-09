#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClientCertificateValidator)
namespace GlobalNamespace {
class DnsEndPoint;
}
namespace GlobalNamespace {
class ICertificateValidator;
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
// Type: ::ClientCertificateValidator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ClientCertificateValidator*
class CORDL_TYPE ClientCertificateValidator : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::ICertificateValidator"
  constexpr operator ::GlobalNamespace::ICertificateValidator*() noexcept;

  static inline ::GlobalNamespace::ClientCertificateValidator* New_ctor();

  /// @brief Method ValidateCertificateChain, addr 0xf947e0, size 0x4, virtual true, abstract: false, final true
  inline void ValidateCertificateChain(::GlobalNamespace::DnsEndPoint* endPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                       ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> certificateChain);

  /// @brief Method ValidateCertificateChainInternal, addr 0xf947e4, size 0x1c8, virtual false, abstract: false, final false
  inline void ValidateCertificateChainInternal(::GlobalNamespace::DnsEndPoint* endPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                               ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> certificateChain);

  /// @brief Method .ctor, addr 0xf949ac, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ClientCertificateValidator, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ClientCertificateValidator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ClientCertificateValidator*, "", "ClientCertificateValidator");
