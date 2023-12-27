#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ICertificateValidator)
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace GlobalNamespace {
class DnsEndPoint;
}
// Forward declare root types
namespace GlobalNamespace {
class ICertificateValidator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ICertificateValidator);
// Type: ::ICertificateValidator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12777))
// CS Name: ::ICertificateValidator*
class CORDL_TYPE ICertificateValidator {
public:
  // Declarations
  /// @brief Method ValidateCertificateChain addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ValidateCertificateChain(::GlobalNamespace::DnsEndPoint* endPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                       ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> certificateChain);

  // Ctor Parameters [CppParam { name: "", ty: "ICertificateValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICertificateValidator(ICertificateValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICertificateValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICertificateValidator(ICertificateValidator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ICertificateValidator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ICertificateValidator*, "", "ICertificateValidator");
