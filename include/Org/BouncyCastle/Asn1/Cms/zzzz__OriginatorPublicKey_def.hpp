#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/OriginatorPublicKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OriginatorPublicKey)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorPublicKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.OriginatorPublicKey
class CORDL_TYPE OriginatorPublicKey : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Algorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Algorithm;

  __declspec(property(get = get_PublicKey)) ::Org::BouncyCastle::Asn1::DerBitString* PublicKey;

  /// @brief Field mAlgorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mAlgorithm, put = __cordl_internal_set_mAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* mAlgorithm;

  /// @brief Field mPublicKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mPublicKey, put = __cordl_internal_set_mPublicKey)) ::Org::BouncyCastle::Asn1::DerBitString* mPublicKey;

  /// @brief Method GetInstance, addr 0x230a1c0, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x22fea28, size 0x150, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x230a6c8, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_mAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_mAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_mPublicKey() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_mPublicKey();

  constexpr void __cordl_internal_set_mAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_mPublicKey(::Org::BouncyCastle::Asn1::DerBitString* value);

  /// @brief Method .ctor, addr 0x230a58c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  /// @brief Method .ctor, addr 0x230a608, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Algorithm, addr 0x230a6b8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Algorithm();

  /// @brief Method get_PublicKey, addr 0x230a6c0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_PublicKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OriginatorPublicKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OriginatorPublicKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OriginatorPublicKey(OriginatorPublicKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OriginatorPublicKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OriginatorPublicKey(OriginatorPublicKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 83 };

  /// @brief Field mAlgorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___mAlgorithm;

  /// @brief Field mPublicKey, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___mPublicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey, ___mAlgorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey, ___mPublicKey) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey*, "Org.BouncyCastle.Asn1.Cms", "OriginatorPublicKey");
