#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost3410ParamSetParameters)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::CryptoPro {
class Gost3410ParamSetParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters);
// Type: Org.BouncyCastle.Asn1.CryptoPro::Gost3410ParamSetParameters
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(130))
// CS Name: ::Org.BouncyCastle.Asn1.CryptoPro::Gost3410ParamSetParameters*
class CORDL_TYPE Gost3410ParamSetParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field keySize, offset 0x10, size 0x4
  __declspec(property(get = __get_keySize, put = __set_keySize)) int32_t keySize;

  /// @brief Field p, offset 0x18, size 0x8
  __declspec(property(get = __get_p, put = __set_p))::Org::BouncyCastle::Asn1::DerInteger* p;

  /// @brief Field q, offset 0x20, size 0x8
  __declspec(property(get = __get_q, put = __set_q))::Org::BouncyCastle::Asn1::DerInteger* q;

  /// @brief Field a, offset 0x28, size 0x8
  __declspec(property(get = __get_a, put = __set_a))::Org::BouncyCastle::Asn1::DerInteger* a;

  __declspec(property(get = get_KeySize)) int32_t KeySize;

  __declspec(property(get = get_P))::Org::BouncyCastle::Math::BigInteger* P;

  __declspec(property(get = get_Q))::Org::BouncyCastle::Math::BigInteger* Q;

  __declspec(property(get = get_A))::Org::BouncyCastle::Math::BigInteger* A;

  constexpr int32_t& __get_keySize();

  constexpr int32_t const& __get_keySize() const;

  constexpr void __set_keySize(int32_t value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_p() const;

  constexpr void __set_p(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_q();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_q() const;

  constexpr void __set_q(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_a();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_a() const;

  constexpr void __set_a(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method GetInstance, addr 0xe8d99c, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0xe8d9b4, size 0x178, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* New_ctor(int32_t keySize, ::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                                           ::Org::BouncyCastle::Math::BigInteger* a);

  /// @brief Method .ctor, addr 0xe8d3a4, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(int32_t keySize, ::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* a);

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe8db2c, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_KeySize, addr 0xe8dc4c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_KeySize();

  /// @brief Method get_P, addr 0xe8dc54, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_P();

  /// @brief Method get_Q, addr 0xe8dc6c, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Q();

  /// @brief Method get_A, addr 0xe8dc84, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_A();

  /// @brief Method ToAsn1Object, addr 0xe8dc9c, size 0x17c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410ParamSetParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3410ParamSetParameters(Gost3410ParamSetParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410ParamSetParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3410ParamSetParameters(Gost3410ParamSetParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3410ParamSetParameters();

public:
  /// @brief Field keySize, offset: 0x10, size: 0x4, def value: None
  int32_t ___keySize;

  /// @brief Field p, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___p;

  /// @brief Field q, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___q;

  /// @brief Field a, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___a;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters, ___keySize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters, ___p) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters, ___q) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters, ___a) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::CryptoPro
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*, "Org.BouncyCastle.Asn1.CryptoPro", "Gost3410ParamSetParameters");
