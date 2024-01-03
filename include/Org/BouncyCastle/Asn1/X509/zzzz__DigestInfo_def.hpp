#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DigestInfo)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class DigestInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::DigestInfo);
// Type: Org.BouncyCastle.Asn1.X509::DigestInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(355))
// CS Name: ::Org.BouncyCastle.Asn1.X509::DigestInfo*
class CORDL_TYPE DigestInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::ArrayW<uint8_t, ::Array<uint8_t>*> digest;

  /// @brief Field algID, offset 0x18, size 0x8
  __declspec(property(get = __get_algID, put = __set_algID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID;

  __declspec(property(get = get_AlgorithmID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* AlgorithmID;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_digest();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_digest() const;

  constexpr void __set_digest(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_algID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_algID() const;

  constexpr void __set_algID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  /// @brief Method GetInstance, addr 0x118b554, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x118b56c, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::ArrayW<uint8_t, ::Array<uint8_t>*> digest);

  /// @brief Method .ctor, addr 0x118b7ec, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::ArrayW<uint8_t, ::Array<uint8_t>*> digest);

  static inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x118b6f4, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_AlgorithmID, addr 0x118b818, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_AlgorithmID();

  /// @brief Method GetDigest, addr 0x118b820, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetDigest();

  /// @brief Method ToAsn1Object, addr 0x118b828, size 0x11c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "DigestInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DigestInfo(DigestInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DigestInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DigestInfo(DigestInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DigestInfo();

public:
  /// @brief Field digest, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___digest;

  /// @brief Field algID, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::DigestInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DigestInfo, ___digest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DigestInfo, ___algID) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::DigestInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::DigestInfo*, "Org.BouncyCastle.Asn1.X509", "DigestInfo");
