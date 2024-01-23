#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Asn1::DerObjectIdentifier
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(31))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(350))
// CS Name: ::Org.BouncyCastle.Asn1::DerObjectIdentifier*
class CORDL_TYPE DerObjectIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  /// @brief Field identifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_identifier, put = __cordl_internal_set_identifier))::StringW identifier;

  /// @brief Field body, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_body, put = __cordl_internal_set_body))::ArrayW<uint8_t, ::Array<uint8_t>*> body;

  /// @brief Field cache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cache, put = setStaticF_cache))::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> cache;

  __declspec(property(get = get_Id))::StringW Id;

  constexpr ::StringW& __cordl_internal_get_identifier();

  constexpr ::StringW const& __cordl_internal_get_identifier() const;

  constexpr void __cordl_internal_set_identifier(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_body();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_body() const;

  constexpr void __cordl_internal_set_body(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_cache(::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> value);

  static inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> getStaticF_cache();

  /// @brief Method GetInstance, addr 0x10742e0, size 0x1d8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance, addr 0x1087fdc, size 0xe8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* New_ctor(::StringW identifier);

  /// @brief Method .ctor, addr 0x106aa7c, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::StringW identifier);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::StringW branchID);

  /// @brief Method .ctor, addr 0x108817c, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::StringW branchID);

  /// @brief Method get_Id, addr 0x10883a4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method Branch, addr 0x10883ac, size 0x70, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Branch(::StringW branchID);

  /// @brief Method On, addr 0x108841c, size 0xb0, virtual true, abstract: false, final false
  inline bool On(::Org::BouncyCastle::Asn1::DerObjectIdentifier* stem);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method .ctor, addr 0x10884cc, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method WriteField, addr 0x10887d0, size 0xe0, virtual false, abstract: false, final false
  inline void WriteField(::System::IO::Stream* outputStream, int64_t fieldValue);

  /// @brief Method WriteField, addr 0x10888b0, size 0x17c, virtual false, abstract: false, final false
  inline void WriteField(::System::IO::Stream* outputStream, ::Org::BouncyCastle::Math::BigInteger* fieldValue);

  /// @brief Method DoOutput, addr 0x1088a2c, size 0x1b4, virtual false, abstract: false, final false
  inline void DoOutput(::System::IO::MemoryStream* bOut);

  /// @brief Method GetBody, addr 0x1088be0, size 0x114, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBody();

  /// @brief Method Encode, addr 0x1088cf4, size 0x2c, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method Asn1GetHashCode, addr 0x1088d20, size 0x1c, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Asn1Equals, addr 0x1088d3c, size 0xa0, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method ToString, addr 0x1088ddc, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method IsValidBranchID, addr 0x10882b4, size 0xf0, virtual false, abstract: false, final false
  static inline bool IsValidBranchID(::StringW branchID, int32_t start);

  /// @brief Method IsValidIdentifier, addr 0x10880c4, size 0xb8, virtual false, abstract: false, final false
  static inline bool IsValidIdentifier(::StringW identifier);

  /// @brief Method MakeOidStringFromBytes, addr 0x1088578, size 0x258, virtual false, abstract: false, final false
  static inline ::StringW MakeOidStringFromBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method FromOctetString, addr 0x1087da4, size 0x238, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* FromOctetString(::ArrayW<uint8_t, ::Array<uint8_t>*> enc);

  // Ctor Parameters [CppParam { name: "", ty: "DerObjectIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerObjectIdentifier(DerObjectIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerObjectIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerObjectIdentifier(DerObjectIdentifier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerObjectIdentifier();

public:
  /// @brief Field identifier, offset: 0x10, size: 0x8, def value: None
  ::StringW ___identifier;

  /// @brief Field body, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___body;

  /// @brief Field LONG_LIMIT offset 0xffffffff size 0x8
  static constexpr int64_t LONG_LIMIT{ static_cast<int64_t>(0xffffffffffff80) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerObjectIdentifier, ___identifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerObjectIdentifier, ___body) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerObjectIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Org.BouncyCastle.Asn1", "DerObjectIdentifier");
