#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerInteger)
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
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerInteger);
// Type: Org.BouncyCastle.Asn1::DerInteger
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(31))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(123))
// CS Name: ::Org.BouncyCastle.Asn1::DerInteger*
class CORDL_TYPE DerInteger : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  /// @brief Field bytes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bytes, put = __cordl_internal_set_bytes))::ArrayW<uint8_t, ::Array<uint8_t>*> bytes;

  /// @brief Field start, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_start, put = __cordl_internal_set_start)) int32_t start;

  __declspec(property(get = get_PositiveValue))::Org::BouncyCastle::Math::BigInteger* PositiveValue;

  __declspec(property(get = get_Value))::Org::BouncyCastle::Math::BigInteger* Value;

  __declspec(property(get = get_IntPositiveValueExact)) int32_t IntPositiveValueExact;

  __declspec(property(get = get_IntValueExact)) int32_t IntValueExact;

  __declspec(property(get = get_LongValueExact)) int64_t LongValueExact;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_bytes();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_bytes() const;

  constexpr void __cordl_internal_set_bytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __cordl_internal_get_start();

  constexpr int32_t const& __cordl_internal_get_start() const;

  constexpr void __cordl_internal_set_start(int32_t value);

  /// @brief Method AllowUnsafe, addr 0xe88b2c, size 0xb0, virtual false, abstract: false, final false
  static inline bool AllowUnsafe();

  /// @brief Method GetInstance, addr 0xe825e4, size 0xf0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerInteger* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance, addr 0xe85214, size 0x124, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerInteger* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  static inline ::Org::BouncyCastle::Asn1::DerInteger* New_ctor(int32_t value);

  /// @brief Method .ctor, addr 0xe81538, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  static inline ::Org::BouncyCastle::Asn1::DerInteger* New_ctor(int64_t value);

  /// @brief Method .ctor, addr 0xe88be4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int64_t value);

  static inline ::Org::BouncyCastle::Asn1::DerInteger* New_ctor(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0xe88c70, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Asn1::DerInteger* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method .ctor, addr 0xe88bdc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  static inline ::Org::BouncyCastle::Asn1::DerInteger* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, bool clone);

  /// @brief Method .ctor, addr 0xe88cf8, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, bool clone);

  /// @brief Method get_PositiveValue, addr 0xe88edc, size 0x6c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PositiveValue();

  /// @brief Method get_Value, addr 0xe88f48, size 0x68, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Value();

  /// @brief Method HasValue, addr 0xe88fb0, size 0x74, virtual false, abstract: false, final false
  inline bool HasValue(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method get_IntPositiveValueExact, addr 0xe890f8, size 0x9c, virtual false, abstract: false, final false
  inline int32_t get_IntPositiveValueExact();

  /// @brief Method get_IntValueExact, addr 0xe853f4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_IntValueExact();

  /// @brief Method get_LongValueExact, addr 0xe89194, size 0x80, virtual false, abstract: false, final false
  inline int64_t get_LongValueExact();

  /// @brief Method Encode, addr 0xe892ec, size 0x28, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method Asn1GetHashCode, addr 0xe89314, size 0x5c, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Asn1Equals, addr 0xe89370, size 0xc8, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method ToString, addr 0xe89438, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method IntValue, addr 0xe89024, size 0xd4, virtual false, abstract: false, final false
  static inline int32_t IntValue(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t start, int32_t signExt);

  /// @brief Method LongValue, addr 0xe89214, size 0xd8, virtual false, abstract: false, final false
  static inline int64_t LongValue(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t start, int32_t signExt);

  /// @brief Method IsMalformed, addr 0xe88dfc, size 0x7c, virtual false, abstract: false, final false
  static inline bool IsMalformed(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method SignBytesToSkip, addr 0xe88e78, size 0x64, virtual false, abstract: false, final false
  static inline int32_t SignBytesToSkip(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  // Ctor Parameters [CppParam { name: "", ty: "DerInteger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerInteger(DerInteger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerInteger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerInteger(DerInteger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerInteger();

public:
  /// @brief Field bytes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___bytes;

  /// @brief Field start, offset: 0x18, size: 0x4, def value: None
  int32_t ___start;

  /// @brief Field AllowUnsafeProperty offset 0xffffffff size 0x8
  static constexpr ::ConstString AllowUnsafeProperty{ u"Org.BouncyCastle.Asn1.AllowUnsafeInteger" };

  /// @brief Field SignExtSigned offset 0xffffffff size 0x4
  static constexpr int32_t SignExtSigned{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field SignExtUnsigned offset 0xffffffff size 0x4
  static constexpr int32_t SignExtUnsigned{ static_cast<int32_t>(0xff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerInteger, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerInteger, ___bytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerInteger, ___start) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerInteger);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerInteger*, "Org.BouncyCastle.Asn1", "DerInteger");
