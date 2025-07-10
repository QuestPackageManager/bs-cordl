#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/OtherHash.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OtherHash)
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHashAlgAndValue;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHash;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::OtherHash);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable, Org.BouncyCastle.Asn1.IAsn1Choice
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Esf.OtherHash
class CORDL_TYPE OtherHash : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_HashAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlgorithm;

  /// @brief Field otherHash, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_otherHash, put = __cordl_internal_set_otherHash)) ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* otherHash;

  /// @brief Field sha1Hash, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sha1Hash, put = __cordl_internal_set_sha1Hash)) ::Org::BouncyCastle::Asn1::Asn1OctetString* sha1Hash;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetHashValue, addr 0x23227c4, size 0x30, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetHashValue();

  /// @brief Method GetInstance, addr 0x2320a24, size 0x120, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* New_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* otherHash);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sha1Hash);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* sha1Hash);

  /// @brief Method ToAsn1Object, addr 0x2322814, size 0x20, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* const& __cordl_internal_get_otherHash() const;

  constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*& __cordl_internal_get_otherHash();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_sha1Hash() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_sha1Hash();

  constexpr void __cordl_internal_set_otherHash(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* value);

  constexpr void __cordl_internal_set_sha1Hash(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method .ctor, addr 0x23225fc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* otherHash);

  /// @brief Method .ctor, addr 0x2322670, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sha1Hash);

  /// @brief Method .ctor, addr 0x232240c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* sha1Hash);

  /// @brief Method get_HashAlgorithm, addr 0x2322728, size 0x9c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherHash();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OtherHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherHash(OtherHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherHash(OtherHash const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 149 };

  /// @brief Field sha1Hash, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___sha1Hash;

  /// @brief Field otherHash, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* ___otherHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherHash, ___sha1Hash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherHash, ___otherHash) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OtherHash, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OtherHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OtherHash*, "Org.BouncyCastle.Asn1.Esf", "OtherHash");
