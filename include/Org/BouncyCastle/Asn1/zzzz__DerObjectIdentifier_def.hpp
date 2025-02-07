#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerObjectIdentifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerObjectIdentifier)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerObjectIdentifier);
// Dependencies Org.BouncyCastle.Asn1.Asn1Object
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.DerObjectIdentifier
class CORDL_TYPE DerObjectIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  __declspec(property(get = get_Id)) ::StringW Id;

  /// @brief Field body, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_body, put = __cordl_internal_set_body)) ::ArrayW<uint8_t, ::Array<uint8_t>*> body;

  /// @brief Field cache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_cache, put = setStaticF_cache)) ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> cache;

  /// @brief Field identifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_identifier, put = __cordl_internal_set_identifier)) ::StringW identifier;

  /// @brief Method Asn1Equals, addr 0x250a918, size 0x98, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Asn1GetHashCode, addr 0x250a8fc, size 0x1c, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Branch, addr 0x2509f60, size 0x68, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Branch(::StringW branchID);

  /// @brief Method DoOutput, addr 0x250a5f8, size 0x1c4, virtual false, abstract: false, final false
  inline void DoOutput(::System::IO::MemoryStream* bOut);

  /// @brief Method Encode, addr 0x250a8d0, size 0x2c, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method FromOctetString, addr 0x2509950, size 0x23c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* FromOctetString(::ArrayW<uint8_t, ::Array<uint8_t>*> enc);

  /// @brief Method GetBody, addr 0x250a7bc, size 0x114, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBody();

  /// @brief Method GetInstance, addr 0x2509b8c, size 0xf0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x24f62cc, size 0x1d4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetInstance(::System::Object* obj);

  /// @brief Method IsValidBranchID, addr 0x2509e68, size 0xf0, virtual false, abstract: false, final false
  static inline bool IsValidBranchID(::StringW branchID, int32_t start);

  /// @brief Method IsValidIdentifier, addr 0x2509c7c, size 0xb8, virtual false, abstract: false, final false
  static inline bool IsValidIdentifier(::StringW identifier);

  /// @brief Method MakeOidStringFromBytes, addr 0x250a124, size 0x274, virtual false, abstract: false, final false
  static inline ::StringW MakeOidStringFromBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* New_ctor(::StringW identifier);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::StringW branchID);

  /// @brief Method On, addr 0x2509fc8, size 0xb0, virtual true, abstract: false, final false
  inline bool On(::Org::BouncyCastle::Asn1::DerObjectIdentifier* stem);

  /// @brief Method ToString, addr 0x250a9b0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method WriteField, addr 0x250a47c, size 0x17c, virtual false, abstract: false, final false
  inline void WriteField(::System::IO::Stream* outputStream, ::Org::BouncyCastle::Math::BigInteger* fieldValue);

  /// @brief Method WriteField, addr 0x250a398, size 0xe4, virtual false, abstract: false, final false
  inline void WriteField(::System::IO::Stream* outputStream, int64_t fieldValue);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_body() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_body();

  constexpr ::StringW const& __cordl_internal_get_identifier() const;

  constexpr ::StringW& __cordl_internal_get_identifier();

  constexpr void __cordl_internal_set_body(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_identifier(::StringW value);

  /// @brief Method .ctor, addr 0x250a078, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method .ctor, addr 0x24ece14, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::StringW identifier);

  /// @brief Method .ctor, addr 0x2509d34, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::StringW branchID);

  static inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> getStaticF_cache();

  /// @brief Method get_Id, addr 0x2509f58, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  static inline void setStaticF_cache(::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerObjectIdentifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerObjectIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerObjectIdentifier(DerObjectIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerObjectIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerObjectIdentifier(DerObjectIdentifier const&) = delete;

  /// @brief Field LONG_LIMIT offset 0xffffffff size 0x8
  static constexpr int64_t LONG_LIMIT{ static_cast<int64_t>(0xffffffffffff80) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 350 };

  /// @brief Field identifier, offset: 0x10, size: 0x8, def value: None
  ::StringW ___identifier;

  /// @brief Field body, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___body;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::DerObjectIdentifier, ___identifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerObjectIdentifier, ___body) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerObjectIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Org.BouncyCastle.Asn1", "DerObjectIdentifier");
