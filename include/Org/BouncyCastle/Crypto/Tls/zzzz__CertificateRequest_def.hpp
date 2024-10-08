#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/CertificateRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateRequest)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::CertificateRequest);
// Type: Org.BouncyCastle.Crypto.Tls::CertificateRequest
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::CertificateRequest*
class CORDL_TYPE CertificateRequest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CertificateAuthorities)) ::System::Collections::IList* CertificateAuthorities;

  __declspec(property(get = get_CertificateTypes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> CertificateTypes;

  __declspec(property(get = get_SupportedSignatureAlgorithms)) ::System::Collections::IList* SupportedSignatureAlgorithms;

  /// @brief Field mCertificateAuthorities, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mCertificateAuthorities, put = __cordl_internal_set_mCertificateAuthorities)) ::System::Collections::IList* mCertificateAuthorities;

  /// @brief Field mCertificateTypes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mCertificateTypes, put = __cordl_internal_set_mCertificateTypes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mCertificateTypes;

  /// @brief Field mSupportedSignatureAlgorithms, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mSupportedSignatureAlgorithms, put = __cordl_internal_set_mSupportedSignatureAlgorithms)) ::System::Collections::IList* mSupportedSignatureAlgorithms;

  /// @brief Method Encode, addr 0x23a4e20, size 0x900, virtual true, abstract: false, final false
  inline void Encode(::System::IO::Stream* output);

  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> certificateTypes, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                               ::System::Collections::IList* certificateAuthorities);

  /// @brief Method Parse, addr 0x23a5720, size 0x328, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* Parse(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::System::IO::Stream* input);

  constexpr ::System::Collections::IList*& __cordl_internal_get_mCertificateAuthorities();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_mCertificateAuthorities() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mCertificateTypes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mCertificateTypes();

  constexpr ::System::Collections::IList*& __cordl_internal_get_mSupportedSignatureAlgorithms();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_mSupportedSignatureAlgorithms() const;

  constexpr void __cordl_internal_set_mCertificateAuthorities(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_mCertificateTypes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mSupportedSignatureAlgorithms(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x23a4dcc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> certificateTypes, ::System::Collections::IList* supportedSignatureAlgorithms, ::System::Collections::IList* certificateAuthorities);

  /// @brief Method get_CertificateAuthorities, addr 0x23a4e18, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::IList* get_CertificateAuthorities();

  /// @brief Method get_CertificateTypes, addr 0x23a4e08, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_CertificateTypes();

  /// @brief Method get_SupportedSignatureAlgorithms, addr 0x23a4e10, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::IList* get_SupportedSignatureAlgorithms();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertificateRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateRequest(CertificateRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateRequest(CertificateRequest const&) = delete;

  /// @brief Field mCertificateTypes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mCertificateTypes;

  /// @brief Field mSupportedSignatureAlgorithms, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___mSupportedSignatureAlgorithms;

  /// @brief Field mCertificateAuthorities, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IList* ___mCertificateAuthorities;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1187 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::CertificateRequest, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::CertificateRequest, ___mCertificateTypes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::CertificateRequest, ___mSupportedSignatureAlgorithms) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::CertificateRequest, ___mCertificateAuthorities) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CertificateRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*, "Org.BouncyCastle.Crypto.Tls", "CertificateRequest");
