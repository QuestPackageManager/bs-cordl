#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECPrivateKeyStructure)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Sec {
class ECPrivateKeyStructure;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure);
// Type: Org.BouncyCastle.Asn1.Sec::ECPrivateKeyStructure
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(255))
// CS Name: ::Org.BouncyCastle.Asn1.Sec::ECPrivateKeyStructure*
class CORDL_TYPE ECPrivateKeyStructure : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field seq, offset 0x10, size 0x8
  __declspec(property(get = __get_seq, put = __set_seq))::Org::BouncyCastle::Asn1::Asn1Sequence* seq;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_seq();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_seq() const;

  constexpr void __set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance addr 0xff9970 size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xff9a14 size 0x78 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* New_ctor(::Org::BouncyCastle::Math::BigInteger* key);

  /// @brief Method .ctor addr 0xff9a8c size 0x1c0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* key);

  static inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* New_ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key);

  /// @brief Method .ctor addr 0xff9c4c size 0xc virtual false final false
  inline void _ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key);

  static inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* New_ctor(::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method .ctor addr 0xff9c64 size 0xc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  static inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* New_ctor(::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::DerBitString* publicKey,
                                                                                ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method .ctor addr 0xff9c70 size 0x284 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::DerBitString* publicKey, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  static inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* New_ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key,
                                                                                ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method .ctor addr 0xff9c58 size 0xc virtual false final false
  inline void _ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  static inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* New_ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::DerBitString* publicKey,
                                                                                ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method .ctor addr 0xff9ef4 size 0x2fc virtual false final false
  inline void _ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::DerBitString* publicKey, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method GetKey addr 0xffa1f0 size 0xd8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* GetKey();

  /// @brief Method GetPublicKey addr 0xffa2c8 size 0x80 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* GetPublicKey();

  /// @brief Method GetParameters addr 0xffa6a4 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* GetParameters();

  /// @brief Method GetObjectInTag addr 0xffa348 size 0x35c virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* GetObjectInTag(int32_t tagNo);

  /// @brief Method ToAsn1Object addr 0xffa6ac size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "ECPrivateKeyStructure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECPrivateKeyStructure(ECPrivateKeyStructure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECPrivateKeyStructure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECPrivateKeyStructure(ECPrivateKeyStructure const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECPrivateKeyStructure();

public:
  /// @brief Field seq, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___seq;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure, ___seq) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Sec
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*, "Org.BouncyCastle.Asn1.Sec", "ECPrivateKeyStructure");
