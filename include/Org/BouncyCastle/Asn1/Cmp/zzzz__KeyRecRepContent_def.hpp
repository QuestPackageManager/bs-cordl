#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(KeyRecRepContent)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CertifiedKeyPair;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpCertificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class KeyRecRepContent;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent);
// Type: Org.BouncyCastle.Asn1.Cmp::KeyRecRepContent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(26))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::KeyRecRepContent*
class CORDL_TYPE KeyRecRepContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field status, offset 0x10, size 0x8
  __declspec(property(get = __get_status, put = __set_status))::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status;

  /// @brief Field newSigCert, offset 0x18, size 0x8
  __declspec(property(get = __get_newSigCert, put = __set_newSigCert))::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* newSigCert;

  /// @brief Field caCerts, offset 0x20, size 0x8
  __declspec(property(get = __get_caCerts, put = __set_caCerts))::Org::BouncyCastle::Asn1::Asn1Sequence* caCerts;

  /// @brief Field keyPairHist, offset 0x28, size 0x8
  __declspec(property(get = __get_keyPairHist, put = __set_keyPairHist))::Org::BouncyCastle::Asn1::Asn1Sequence* keyPairHist;

  __declspec(property(get = get_Status))::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Status;

  __declspec(property(get = get_NewSigCert))::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* NewSigCert;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*& __get_status();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*> const& __get_status() const;

  constexpr void __set_status(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*& __get_newSigCert();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*> const& __get_newSigCert() const;

  constexpr void __set_newSigCert(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_caCerts();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_caCerts() const;

  constexpr void __set_caCerts(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_keyPairHist();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_keyPairHist() const;

  constexpr void __set_keyPairHist(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe67fdc size 0x19c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xe68178 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent* GetInstance(::System::Object* obj);

  /// @brief Method get_Status addr 0xe68300 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* get_Status();

  /// @brief Method get_NewSigCert addr 0xe68308 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* get_NewSigCert();

  /// @brief Method GetCACerts addr 0xe68310 size 0xfc virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>*> GetCACerts();

  /// @brief Method GetKeyPairHist addr 0xe6840c size 0xfc virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>*> GetKeyPairHist();

  /// @brief Method ToAsn1Object addr 0xe68508 size 0x144 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "KeyRecRepContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyRecRepContent(KeyRecRepContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyRecRepContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyRecRepContent(KeyRecRepContent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyRecRepContent();

public:
  /// @brief Field status, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* ___status;

  /// @brief Field newSigCert, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* ___newSigCert;

  /// @brief Field caCerts, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___caCerts;

  /// @brief Field keyPairHist, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___keyPairHist;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*, "Org.BouncyCastle.Asn1.Cmp", "KeyRecRepContent");
