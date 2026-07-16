#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/OtherHashAlgAndValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OtherHashAlgAndValue)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHashAlgAndValue;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*, "Org.BouncyCastle.Asn1.Esf", "OtherHashAlgAndValue");
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Esf.OtherHashAlgAndValue
class CORDL_TYPE OtherHashAlgAndValue : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_HashAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlgorithm;

  /// @brief Field hashAlgorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_hashAlgorithm, put = __cordl_internal_set_hashAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm;

  /// @brief Field hashValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_hashValue, put = __cordl_internal_set_hashValue)) ::Org::BouncyCastle::Asn1::Asn1OctetString* hashValue;

  /// @brief Method GetHashValue, addr 0x33735bc, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t> GetHashValue();

  /// @brief Method GetInstance, addr 0x3373268, size 0x184, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::ArrayW<uint8_t> hashValue);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm,
                                                                               ::Org::BouncyCastle::Asn1::Asn1OctetString* hashValue);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x3373964, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_hashAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_hashAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_hashValue() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_hashValue();

  constexpr void __cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_hashValue(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method .ctor, addr 0x33737fc, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::ArrayW<uint8_t> hashValue);

  /// @brief Method .ctor, addr 0x33738dc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString* hashValue);

  /// @brief Method .ctor, addr 0x33735f8, size 0x204, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_HashAlgorithm, addr 0x337395c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherHashAlgAndValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OtherHashAlgAndValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherHashAlgAndValue(OtherHashAlgAndValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherHashAlgAndValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherHashAlgAndValue(OtherHashAlgAndValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 150 };

  /// @brief Field hashAlgorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___hashAlgorithm;

  /// @brief Field hashValue, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___hashValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue, ___hashAlgorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue, ___hashValue) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue) == 0x20, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
