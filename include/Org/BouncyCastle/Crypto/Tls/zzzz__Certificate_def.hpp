#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Certificate)
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::Certificate);
// Type: Org.BouncyCastle.Crypto.Tls::Certificate
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1186))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::Certificate*
class CORDL_TYPE Certificate : public ::System::Object {
public:
  // Declarations
  /// @brief Field mCertificateList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mCertificateList,
                      put = __cordl_internal_set_mCertificateList))::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,
                                                                            ::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> mCertificateList;

  /// @brief Field EmptyChain, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyChain, put = setStaticF_EmptyChain))::Org::BouncyCastle::Crypto::Tls::Certificate* EmptyChain;

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, ::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>& __cordl_internal_get_mCertificateList();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, ::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> const&
  __cordl_internal_get_mCertificateList() const;

  constexpr void
  __cordl_internal_set_mCertificateList(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, ::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> value);

  static inline void setStaticF_EmptyChain(::Org::BouncyCastle::Crypto::Tls::Certificate* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::Certificate* getStaticF_EmptyChain();

  static inline ::Org::BouncyCastle::Crypto::Tls::Certificate*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, ::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> certificateList);

  /// @brief Method .ctor, addr 0xf88308, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, ::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> certificateList);

  /// @brief Method GetCertificateList, addr 0xf88380, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, ::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> GetCertificateList();

  /// @brief Method GetCertificateAt, addr 0xf8838c, size 0x30, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* GetCertificateAt(int32_t index);

  /// @brief Method get_Length, addr 0xf883bc, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_IsEmpty, addr 0xf883d8, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method Encode, addr 0xf883fc, size 0x4c4, virtual true, abstract: false, final false
  inline void Encode(::System::IO::Stream* output);

  /// @brief Method Parse, addr 0xf888c0, size 0x464, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::Certificate* Parse(::System::IO::Stream* input);

  /// @brief Method CloneCertificateList, addr 0xf88d24, size 0x78, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, ::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> CloneCertificateList();

  // Ctor Parameters [CppParam { name: "", ty: "Certificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Certificate(Certificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Certificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Certificate(Certificate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Certificate();

public:
  /// @brief Field mCertificateList, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, ::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> ___mCertificateList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::Certificate, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::Certificate, ___mCertificateList) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::Certificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::Certificate*, "Org.BouncyCastle.Crypto.Tls", "Certificate");
