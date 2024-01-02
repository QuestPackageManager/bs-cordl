#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OtherHash)
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHashAlgAndValue;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHash;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::OtherHash);
// Type: Org.BouncyCastle.Asn1.Esf::OtherHash
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(149))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::OtherHash*
class CORDL_TYPE OtherHash : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field sha1Hash, offset 0x10, size 0x8
  __declspec(property(get = __get_sha1Hash, put = __set_sha1Hash))::Org::BouncyCastle::Asn1::Asn1OctetString* sha1Hash;

  /// @brief Field otherHash, offset 0x18, size 0x8
  __declspec(property(get = __get_otherHash, put = __set_otherHash))::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* otherHash;

  __declspec(property(get = get_HashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlgorithm;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_sha1Hash();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_sha1Hash() const;

  constexpr void __set_sha1Hash(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*& __get_otherHash();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*> const& __get_otherHash() const;

  constexpr void __set_otherHash(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* value);

  /// @brief Method GetInstance, addr 0xe9302c, size 0x128, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sha1Hash);

  /// @brief Method .ctor, addr 0xe94d44, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sha1Hash);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* sha1Hash);

  /// @brief Method .ctor, addr 0xe94acc, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* sha1Hash);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* New_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* otherHash);

  /// @brief Method .ctor, addr 0xe94ccc, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* otherHash);

  /// @brief Method get_HashAlgorithm, addr 0xe94e08, size 0xa4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();

  /// @brief Method GetHashValue, addr 0xe94eac, size 0x30, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetHashValue();

  /// @brief Method ToAsn1Object, addr 0xe94efc, size 0x20, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "OtherHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherHash(OtherHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherHash(OtherHash const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherHash();

public:
  /// @brief Field sha1Hash, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___sha1Hash;

  /// @brief Field otherHash, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* ___otherHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OtherHash, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherHash, ___sha1Hash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherHash, ___otherHash) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OtherHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OtherHash*, "Org.BouncyCastle.Asn1.Esf", "OtherHash");
