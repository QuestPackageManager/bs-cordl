#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/Pbkdf2Params.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pbkdf2Params)
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
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::Pbkdf2Params*
class CORDL_TYPE Pbkdf2Params : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_IsDefaultPrf)) bool IsDefaultPrf;

  __declspec(property(get = get_IterationCount)) ::Org::BouncyCastle::Math::BigInteger* IterationCount;

  __declspec(property(get = get_KeyLength)) ::Org::BouncyCastle::Math::BigInteger* KeyLength;

  __declspec(property(get = get_Prf)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Prf;

  /// @brief Field algid_hmacWithSHA1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_algid_hmacWithSHA1, put = setStaticF_algid_hmacWithSHA1)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algid_hmacWithSHA1;

  /// @brief Field iterationCount, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_iterationCount, put = __cordl_internal_set_iterationCount)) ::Org::BouncyCastle::Asn1::DerInteger* iterationCount;

  /// @brief Field keyLength, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_keyLength, put = __cordl_internal_set_keyLength)) ::Org::BouncyCastle::Asn1::DerInteger* keyLength;

  /// @brief Field octStr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_octStr, put = __cordl_internal_set_octStr)) ::Org::BouncyCastle::Asn1::Asn1OctetString* octStr;

  /// @brief Field prf, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_prf, put = __cordl_internal_set_prf)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf;

  /// @brief Method GetInstance, addr 0x23cf040, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* GetInstance(::System::Object* obj);

  /// @brief Method GetSalt, addr 0x23cf760, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSalt();

  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, int32_t keyLength);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, int32_t keyLength,
                                                                        ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x23cf890, size 0x18c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_iterationCount();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_iterationCount() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_keyLength();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_keyLength() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_octStr();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_octStr() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_prf();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_prf() const;

  constexpr void __cordl_internal_set_iterationCount(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_keyLength(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_octStr(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_prf(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  /// @brief Method .ctor, addr 0x23cf5e0, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  /// @brief Method .ctor, addr 0x23cf690, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, int32_t keyLength);

  /// @brief Method .ctor, addr 0x23cf718, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, int32_t keyLength, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf);

  /// @brief Method .ctor, addr 0x23cf73c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf);

  /// @brief Method .ctor, addr 0x23cf2b8, size 0x328, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* getStaticF_algid_hmacWithSHA1();

  /// @brief Method get_IsDefaultPrf, addr 0x23cf7b0, size 0x7c, virtual false, abstract: false, final false
  inline bool get_IsDefaultPrf();

  /// @brief Method get_IterationCount, addr 0x23cf780, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_IterationCount();

  /// @brief Method get_KeyLength, addr 0x23cf79c, size 0x14, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_KeyLength();

  /// @brief Method get_Prf, addr 0x23cf82c, size 0x64, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Prf();

  static inline void setStaticF_algid_hmacWithSHA1(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pbkdf2Params();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pbkdf2Params", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pbkdf2Params(Pbkdf2Params&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pbkdf2Params", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pbkdf2Params(Pbkdf2Params const&) = delete;

  /// @brief Field octStr, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___octStr;

  /// @brief Field iterationCount, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___iterationCount;

  /// @brief Field keyLength, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___keyLength;

  /// @brief Field prf, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___prf;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 242 };

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
