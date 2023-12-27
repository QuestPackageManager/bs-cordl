#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptedPrivateKeyInfo)
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptedPrivateKeyInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo);
// Type: Org.BouncyCastle.Asn1.Pkcs::EncryptedPrivateKeyInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(234))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::EncryptedPrivateKeyInfo*
class CORDL_TYPE EncryptedPrivateKeyInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field algId, offset 0x10, size 0x8
  __declspec(property(get = __get_algId, put = __set_algId))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::Org::BouncyCastle::Asn1::Asn1OctetString* data;

  __declspec(property(get = get_EncryptionAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* EncryptionAlgorithm;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_algId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_algId() const;

  constexpr void __set_algId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_data();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_data() const;

  constexpr void __set_data(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf87e80 size 0xe4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method .ctor addr 0xf87f64 size 0x84 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method GetInstance addr 0xf87fe8 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* GetInstance(::System::Object* obj);

  /// @brief Method get_EncryptionAlgorithm addr 0xf88170 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_EncryptionAlgorithm();

  /// @brief Method GetEncryptedData addr 0xf88178 size 0x20 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncryptedData();

  /// @brief Method ToAsn1Object addr 0xf88198 size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedPrivateKeyInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptedPrivateKeyInfo(EncryptedPrivateKeyInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedPrivateKeyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptedPrivateKeyInfo(EncryptedPrivateKeyInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptedPrivateKeyInfo();

public:
  /// @brief Field algId, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algId;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*, "Org.BouncyCastle.Asn1.Pkcs", "EncryptedPrivateKeyInfo");
