#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pbkdf2Params)
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class Pbkdf2Params;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params);
// Type: Org.BouncyCastle.Asn1.Pkcs::Pbkdf2Params
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(242))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::Pbkdf2Params*
class CORDL_TYPE Pbkdf2Params : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field octStr, offset 0x10, size 0x8
  __declspec(property(get = __get_octStr, put = __set_octStr))::Org::BouncyCastle::Asn1::Asn1OctetString* octStr;

  /// @brief Field iterationCount, offset 0x18, size 0x8
  __declspec(property(get = __get_iterationCount, put = __set_iterationCount))::Org::BouncyCastle::Asn1::DerInteger* iterationCount;

  /// @brief Field keyLength, offset 0x20, size 0x8
  __declspec(property(get = __get_keyLength, put = __set_keyLength))::Org::BouncyCastle::Asn1::DerInteger* keyLength;

  /// @brief Field prf, offset 0x28, size 0x8
  __declspec(property(get = __get_prf, put = __set_prf))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf;

  /// @brief Field algid_hmacWithSHA1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_algid_hmacWithSHA1, put = setStaticF_algid_hmacWithSHA1))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algid_hmacWithSHA1;

  __declspec(property(get = get_IterationCount))::Org::BouncyCastle::Math::BigInteger* IterationCount;

  __declspec(property(get = get_KeyLength))::Org::BouncyCastle::Math::BigInteger* KeyLength;

  __declspec(property(get = get_IsDefaultPrf)) bool IsDefaultPrf;

  __declspec(property(get = get_Prf))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Prf;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_octStr();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_octStr() const;

  constexpr void __set_octStr(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_iterationCount();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_iterationCount() const;

  constexpr void __set_iterationCount(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_keyLength();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_keyLength() const;

  constexpr void __set_keyLength(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_prf();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_prf() const;

  constexpr void __set_prf(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  static inline void setStaticF_algid_hmacWithSHA1(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* getStaticF_algid_hmacWithSHA1();

  /// @brief Method GetInstance, addr 0xf89d18, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xf89fa0, size 0x330, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  /// @brief Method .ctor, addr 0xf8a2d0, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, int32_t keyLength);

  /// @brief Method .ctor, addr 0xf8a384, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, int32_t keyLength);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, int32_t keyLength,
                                                                        ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf);

  /// @brief Method .ctor, addr 0xf8a414, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, int32_t keyLength, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf);

  /// @brief Method .ctor, addr 0xf8a438, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf);

  /// @brief Method GetSalt, addr 0xf8a45c, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSalt();

  /// @brief Method get_IterationCount, addr 0xf8a47c, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_IterationCount();

  /// @brief Method get_KeyLength, addr 0xf8a498, size 0x14, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_KeyLength();

  /// @brief Method get_IsDefaultPrf, addr 0xf8a4ac, size 0x7c, virtual false, abstract: false, final false
  inline bool get_IsDefaultPrf();

  /// @brief Method get_Prf, addr 0xf8a528, size 0x64, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Prf();

  /// @brief Method ToAsn1Object, addr 0xf8a58c, size 0x190, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "Pbkdf2Params", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pbkdf2Params(Pbkdf2Params&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pbkdf2Params", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pbkdf2Params(Pbkdf2Params const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pbkdf2Params();

public:
  /// @brief Field octStr, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___octStr;

  /// @brief Field iterationCount, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___iterationCount;

  /// @brief Field keyLength, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___keyLength;

  /// @brief Field prf, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___prf;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params, ___octStr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params, ___iterationCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params, ___keyLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params, ___prf) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*, "Org.BouncyCastle.Asn1.Pkcs", "Pbkdf2Params");
