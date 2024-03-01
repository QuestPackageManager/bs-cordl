#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerApplicationSpecific)
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerApplicationSpecific;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerApplicationSpecific);
// Type: Org.BouncyCastle.Asn1::DerApplicationSpecific
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::DerApplicationSpecific*
class CORDL_TYPE DerApplicationSpecific : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  __declspec(property(get = get_ApplicationTag)) int32_t ApplicationTag;

  /// @brief Field isConstructed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isConstructed, put = __cordl_internal_set_isConstructed)) bool isConstructed;

  /// @brief Field octets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_octets, put = __cordl_internal_set_octets))::ArrayW<uint8_t, ::Array<uint8_t>*> octets;

  /// @brief Field tag, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_tag, put = __cordl_internal_set_tag)) int32_t tag;

  /// @brief Method Asn1Equals, addr 0x122b868, size 0xe8, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Asn1GetHashCode, addr 0x122b950, size 0xa4, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Encode, addr 0x122b830, size 0x38, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method GetContents, addr 0x122b610, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetContents();

  /// @brief Method GetLengthOfHeader, addr 0x122b36c, size 0xcc, virtual false, abstract: false, final false
  inline int32_t GetLengthOfHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method GetObject, addr 0x122b620, size 0xc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* GetObject();

  /// @brief Method GetObject, addr 0x122b62c, size 0xbc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* GetObject(int32_t derTagNo);

  /// @brief Method IsConstructed, addr 0x122b608, size 0x8, virtual false, abstract: false, final false
  inline bool IsConstructed();

  static inline ::Org::BouncyCastle::Asn1::DerApplicationSpecific* New_ctor(bool isConstructed, int32_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> octets);

  static inline ::Org::BouncyCastle::Asn1::DerApplicationSpecific* New_ctor(bool isExplicit, int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  static inline ::Org::BouncyCastle::Asn1::DerApplicationSpecific* New_ctor(int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  static inline ::Org::BouncyCastle::Asn1::DerApplicationSpecific* New_ctor(int32_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> octets);

  static inline ::Org::BouncyCastle::Asn1::DerApplicationSpecific* New_ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* vec);

  /// @brief Method ReplaceTagNumber, addr 0x122b6e8, size 0x148, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReplaceTagNumber(int32_t newTag, ::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  constexpr bool const& __cordl_internal_get_isConstructed() const;

  constexpr bool& __cordl_internal_get_isConstructed();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_octets() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_octets();

  constexpr int32_t const& __cordl_internal_get_tag() const;

  constexpr int32_t& __cordl_internal_get_tag();

  constexpr void __cordl_internal_set_isConstructed(bool value);

  constexpr void __cordl_internal_set_octets(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_tag(int32_t value);

  /// @brief Method .ctor, addr 0x12249f0, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(bool isConstructed, int32_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> octets);

  /// @brief Method .ctor, addr 0x122b274, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(bool isExplicit, int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method .ctor, addr 0x122b264, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method .ctor, addr 0x122b230, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> octets);

  /// @brief Method .ctor, addr 0x122b438, size 0x1d0, virtual false, abstract: false, final false
  inline void _ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* vec);

  /// @brief Method get_ApplicationTag, addr 0x122b618, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ApplicationTag();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerApplicationSpecific();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerApplicationSpecific", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerApplicationSpecific(DerApplicationSpecific&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerApplicationSpecific", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerApplicationSpecific(DerApplicationSpecific const&) = delete;

  /// @brief Field isConstructed, offset: 0x10, size: 0x1, def value: None
  bool ___isConstructed;

  /// @brief Field tag, offset: 0x14, size: 0x4, def value: None
  int32_t ___tag;

  /// @brief Field octets, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___octets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerApplicationSpecific, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerApplicationSpecific, ___isConstructed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerApplicationSpecific, ___tag) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerApplicationSpecific, ___octets) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerApplicationSpecific);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerApplicationSpecific*, "Org.BouncyCastle.Asn1", "DerApplicationSpecific");
