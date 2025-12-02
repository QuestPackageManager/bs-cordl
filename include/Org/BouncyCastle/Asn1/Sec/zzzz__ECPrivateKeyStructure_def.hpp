#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Sec/ECPrivateKeyStructure.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECPrivateKeyStructure)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Sec {
class ECPrivateKeyStructure;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Sec {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Sec.ECPrivateKeyStructure
class CORDL_TYPE ECPrivateKeyStructure : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field seq, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_seq, put = __cordl_internal_set_seq)) ::Org::BouncyCastle::Asn1::Asn1Sequence* seq;

  /// @brief Method GetInstance, addr 0x341c038, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* GetInstance(::System::Object* obj);

  /// @brief Method GetKey, addr 0x341c91c, size 0xdc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* GetKey();

  /// @brief Method GetObjectInTag, addr 0x341ca7c, size 0x334, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* GetObjectInTag(int32_t tagNo);

  /// @brief Method GetParameters, addr 0x341cdb0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* GetParameters();

  /// @brief Method GetPublicKey, addr 0x341c9f8, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* GetPublicKey();

  static inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* New_ctor(::Org::BouncyCastle::Math::BigInteger* key);

  static inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* New_ctor(::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  static inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* New_ctor(::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::DerBitString* publicKey,
                                                                                ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  static inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* New_ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key);

  static inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* New_ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key,
                                                                                ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  static inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* New_ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::DerBitString* publicKey,
                                                                                ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  static inline ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x341cdb8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_seq() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_seq();

  constexpr void __cordl_internal_set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x341c130, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* key);

  /// @brief Method .ctor, addr 0x341c2fc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method .ctor, addr 0x341c308, size 0x2d0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::DerBitString* publicKey, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method .ctor, addr 0x341c2e4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key);

  /// @brief Method .ctor, addr 0x341c2f0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method .ctor, addr 0x341c5d8, size 0x344, virtual false, abstract: false, final false
  inline void _ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger* key, ::Org::BouncyCastle::Asn1::DerBitString* publicKey, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method .ctor, addr 0x341c0d8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECPrivateKeyStructure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECPrivateKeyStructure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECPrivateKeyStructure(ECPrivateKeyStructure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECPrivateKeyStructure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECPrivateKeyStructure(ECPrivateKeyStructure const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 255 };

  /// @brief Field seq, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___seq;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure, ___seq) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Sec
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure*, "Org.BouncyCastle.Asn1.Sec", "ECPrivateKeyStructure");
