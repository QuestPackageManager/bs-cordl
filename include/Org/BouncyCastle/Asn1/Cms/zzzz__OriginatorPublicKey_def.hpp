#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OriginatorPublicKey)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorPublicKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey);
// Type: Org.BouncyCastle.Asn1.Cms::OriginatorPublicKey
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(83))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::OriginatorPublicKey*
class CORDL_TYPE OriginatorPublicKey : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field mAlgorithm, offset 0x10, size 0x8
  __declspec(property(get = __get_mAlgorithm, put = __set_mAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* mAlgorithm;

  /// @brief Field mPublicKey, offset 0x18, size 0x8
  __declspec(property(get = __get_mPublicKey, put = __set_mPublicKey))::Org::BouncyCastle::Asn1::DerBitString* mPublicKey;

  __declspec(property(get = get_Algorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Algorithm;

  __declspec(property(get = get_PublicKey))::Org::BouncyCastle::Asn1::DerBitString* PublicKey;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_mAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_mAlgorithm() const;

  constexpr void __set_mAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_mPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_mPublicKey() const;

  constexpr void __set_mPublicKey(::Org::BouncyCastle::Asn1::DerBitString* value);

  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  /// @brief Method .ctor addr 0xe7b524 size 0x84 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe7b5a8 size 0xb0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xe7b150 size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0xe6f748 size 0x158 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* GetInstance(::System::Object* obj);

  /// @brief Method get_Algorithm addr 0xe7b658 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Algorithm();

  /// @brief Method get_PublicKey addr 0xe7b660 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_PublicKey();

  /// @brief Method ToAsn1Object addr 0xe7b668 size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "OriginatorPublicKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OriginatorPublicKey(OriginatorPublicKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OriginatorPublicKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OriginatorPublicKey(OriginatorPublicKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OriginatorPublicKey();

public:
  /// @brief Field mAlgorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___mAlgorithm;

  /// @brief Field mPublicKey, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___mPublicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey*, "Org.BouncyCastle.Asn1.Cms", "OriginatorPublicKey");
