#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MacData)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class DigestInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class MacData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::MacData);
// Type: Org.BouncyCastle.Asn1.Pkcs::MacData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(239))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::MacData*
class CORDL_TYPE MacData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field digInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_digInfo, put = __set_digInfo))::Org::BouncyCastle::Asn1::X509::DigestInfo* digInfo;

  /// @brief Field salt, offset 0x18, size 0x8
  __declspec(property(get = __get_salt, put = __set_salt))::ArrayW<uint8_t, ::Array<uint8_t>*> salt;

  /// @brief Field iterationCount, offset 0x20, size 0x8
  __declspec(property(get = __get_iterationCount, put = __set_iterationCount))::Org::BouncyCastle::Math::BigInteger* iterationCount;

  __declspec(property(get = get_Mac))::Org::BouncyCastle::Asn1::X509::DigestInfo* Mac;

  __declspec(property(get = get_IterationCount))::Org::BouncyCastle::Math::BigInteger* IterationCount;

  constexpr ::Org::BouncyCastle::Asn1::X509::DigestInfo*& __get_digInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::DigestInfo*> const& __get_digInfo() const;

  constexpr void __set_digInfo(::Org::BouncyCastle::Asn1::X509::DigestInfo* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_salt();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_salt() const;

  constexpr void __set_salt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_iterationCount();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_iterationCount() const;

  constexpr void __set_iterationCount(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method GetInstance, addr 0xf88ee0, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::MacData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::MacData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xf89068, size 0x1ac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::MacData* New_ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo* digInfo, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  /// @brief Method .ctor, addr 0xf89214, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo* digInfo, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  /// @brief Method get_Mac, addr 0xf89300, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* get_Mac();

  /// @brief Method GetSalt, addr 0xf89308, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSalt();

  /// @brief Method get_IterationCount, addr 0xf89380, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_IterationCount();

  /// @brief Method ToAsn1Object, addr 0xf89388, size 0x1e4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "MacData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MacData(MacData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MacData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MacData(MacData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MacData();

public:
  /// @brief Field digInfo, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::DigestInfo* ___digInfo;

  /// @brief Field salt, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___salt;

  /// @brief Field iterationCount, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___iterationCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::MacData, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::MacData, ___digInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::MacData, ___salt) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::MacData, ___iterationCount) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::MacData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::MacData*, "Org.BouncyCastle.Asn1.Pkcs", "MacData");
