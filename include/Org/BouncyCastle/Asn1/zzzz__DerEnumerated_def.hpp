#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerEnumerated.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerEnumerated)
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
class DerEnumerated;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerEnumerated);
// Type: Org.BouncyCastle.Asn1::DerEnumerated
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::DerEnumerated*
class CORDL_TYPE DerEnumerated : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  __declspec(property(get = get_IntValueExact)) int32_t IntValueExact;

  __declspec(property(get = get_Value))::Org::BouncyCastle::Math::BigInteger* Value;

  /// @brief Field bytes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bytes, put = __cordl_internal_set_bytes))::ArrayW<uint8_t, ::Array<uint8_t>*> bytes;

  /// @brief Field cache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cache, put = setStaticF_cache))::ArrayW<::Org::BouncyCastle::Asn1::DerEnumerated*, ::Array<::Org::BouncyCastle::Asn1::DerEnumerated*>*> cache;

  /// @brief Field start, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_start, put = __cordl_internal_set_start)) int32_t start;

  /// @brief Method Asn1Equals, addr 0x11e06e8, size 0xc8, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Asn1GetHashCode, addr 0x11e07b0, size 0x5c, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Encode, addr 0x11e06c0, size 0x28, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method FromOctetString, addr 0x11e0008, size 0x1ac, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerEnumerated* FromOctetString(::ArrayW<uint8_t, ::Array<uint8_t>*> enc);

  /// @brief Method GetInstance, addr 0x11dfec8, size 0x140, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerEnumerated* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x11dfc30, size 0xf0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerEnumerated* GetInstance(::System::Object* obj);

  /// @brief Method HasValue, addr 0x11e05c4, size 0x78, virtual false, abstract: false, final false
  inline bool HasValue(::Org::BouncyCastle::Math::BigInteger* x);

  static inline ::Org::BouncyCastle::Asn1::DerEnumerated* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  static inline ::Org::BouncyCastle::Asn1::DerEnumerated* New_ctor(::Org::BouncyCastle::Math::BigInteger* val);

  static inline ::Org::BouncyCastle::Asn1::DerEnumerated* New_ctor(int32_t val);

  static inline ::Org::BouncyCastle::Asn1::DerEnumerated* New_ctor(int64_t val);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_bytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_bytes();

  constexpr int32_t const& __cordl_internal_get_start() const;

  constexpr int32_t& __cordl_internal_get_start();

  constexpr void __cordl_internal_set_bytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_start(int32_t value);

  /// @brief Method .ctor, addr 0x11e042c, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method .ctor, addr 0x11e0384, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* val);

  /// @brief Method .ctor, addr 0x11e01b4, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(int32_t val);

  /// @brief Method .ctor, addr 0x11e029c, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(int64_t val);

  static inline ::ArrayW<::Org::BouncyCastle::Asn1::DerEnumerated*, ::Array<::Org::BouncyCastle::Asn1::DerEnumerated*>*> getStaticF_cache();

  /// @brief Method get_IntValueExact, addr 0x11e063c, size 0x84, virtual false, abstract: false, final false
  inline int32_t get_IntValueExact();

  /// @brief Method get_Value, addr 0x11e055c, size 0x68, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Value();

  static inline void setStaticF_cache(::ArrayW<::Org::BouncyCastle::Asn1::DerEnumerated*, ::Array<::Org::BouncyCastle::Asn1::DerEnumerated*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerEnumerated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerEnumerated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerEnumerated(DerEnumerated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerEnumerated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerEnumerated(DerEnumerated const&) = delete;

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
