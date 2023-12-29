#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerEnumerated)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerEnumerated;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerEnumerated);
// Type: Org.BouncyCastle.Asn1::DerEnumerated
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(213))
// CS Name: ::Org.BouncyCastle.Asn1::DerEnumerated*
class CORDL_TYPE DerEnumerated : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  /// @brief Field bytes, offset 0x10, size 0x8
  __declspec(property(get = __get_bytes, put = __set_bytes))::ArrayW<uint8_t, ::Array<uint8_t>*> bytes;

  /// @brief Field start, offset 0x18, size 0x4
  __declspec(property(get = __get_start, put = __set_start)) int32_t start;

  /// @brief Field cache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cache, put = setStaticF_cache))::ArrayW<::Org::BouncyCastle::Asn1::DerEnumerated*, ::Array<::Org::BouncyCastle::Asn1::DerEnumerated*>*> cache;

  __declspec(property(get = get_Value))::Org::BouncyCastle::Math::BigInteger* Value;

  __declspec(property(get = get_IntValueExact)) int32_t IntValueExact;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_bytes();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_bytes() const;

  constexpr void __set_bytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_start();

  constexpr int32_t const& __get_start() const;

  constexpr void __set_start(int32_t value);

  static inline void setStaticF_cache(::ArrayW<::Org::BouncyCastle::Asn1::DerEnumerated*, ::Array<::Org::BouncyCastle::Asn1::DerEnumerated*>*> value);

  static inline ::ArrayW<::Org::BouncyCastle::Asn1::DerEnumerated*, ::Array<::Org::BouncyCastle::Asn1::DerEnumerated*>*> getStaticF_cache();

  /// @brief Method GetInstance addr 0xf0b200 size 0xf0 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerEnumerated* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance addr 0xf0b498 size 0x140 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerEnumerated* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  static inline ::Org::BouncyCastle::Asn1::DerEnumerated* New_ctor(int32_t val);

  /// @brief Method .ctor addr 0xf0b784 size 0xe8 virtual false final false
  inline void _ctor(int32_t val);

  static inline ::Org::BouncyCastle::Asn1::DerEnumerated* New_ctor(int64_t val);

  /// @brief Method .ctor addr 0xf0b86c size 0xe8 virtual false final false
  inline void _ctor(int64_t val);

  static inline ::Org::BouncyCastle::Asn1::DerEnumerated* New_ctor(::Org::BouncyCastle::Math::BigInteger* val);

  /// @brief Method .ctor addr 0xf0b954 size 0xa8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* val);

  static inline ::Org::BouncyCastle::Asn1::DerEnumerated* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method .ctor addr 0xf0b9fc size 0x130 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method get_Value addr 0xf0bb2c size 0x68 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Value();

  /// @brief Method HasValue addr 0xf0bb94 size 0x78 virtual false final false
  inline bool HasValue(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method get_IntValueExact addr 0xf0bc0c size 0x84 virtual false final false
  inline int32_t get_IntValueExact();

  /// @brief Method Encode addr 0xf0bc90 size 0x28 virtual true final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method Asn1Equals addr 0xf0bcb8 size 0xc8 virtual true final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Asn1GetHashCode addr 0xf0bd80 size 0x5c virtual true final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method FromOctetString addr 0xf0b5d8 size 0x1ac virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerEnumerated* FromOctetString(::ArrayW<uint8_t, ::Array<uint8_t>*> enc);

  // Ctor Parameters [CppParam { name: "", ty: "DerEnumerated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerEnumerated(DerEnumerated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerEnumerated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerEnumerated(DerEnumerated const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerEnumerated();

public:
  /// @brief Field bytes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___bytes;

  /// @brief Field start, offset: 0x18, size: 0x4, def value: None
  int32_t ___start;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerEnumerated, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerEnumerated, ___bytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerEnumerated, ___start) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerEnumerated);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerEnumerated*, "Org.BouncyCastle.Asn1", "DerEnumerated");
