#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\DerBitString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerBitString)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
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
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Asn1::DerBitString*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Asn1::DerBitString*, "Org.BouncyCastle.Asn1", "DerBitString");
// Dependencies Org.BouncyCastle.Asn1.DerStringBase
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.DerBitString
class CORDL_TYPE DerBitString : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
  // Declarations
  __declspec(property(get = get_IntValue)) int32_t IntValue;

  __declspec(property(get = get_PadBits)) int32_t PadBits;

  /// @brief Field mData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mData, put = __cordl_internal_set_mData)) ::ArrayW<uint8_t> mData;

  /// @brief Field mPadBits, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_mPadBits, put = __cordl_internal_set_mPadBits)) int32_t mPadBits;

  /// @brief Field table, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_table, put = setStaticF_table)) ::ArrayW<char16_t> table;

  /// @brief Method Asn1Equals, addr 0x334dad4, size 0xe0, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Asn1GetHashCode, addr 0x334da68, size 0x6c, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Encode, addr 0x334d954, size 0x114, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method FromAsn1Octets, addr 0x334d2b0, size 0x184, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerBitString* FromAsn1Octets(::ArrayW<uint8_t> octets);

  /// @brief Method GetBytes, addr 0x334d7a4, size 0xa0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t> GetBytes();

  /// @brief Method GetInstance, addr 0x334d16c, size 0x144, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerBitString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x334b374, size 0x210, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerBitString* GetInstance(::System::Object* obj);

  /// @brief Method GetOctets, addr 0x334d6f4, size 0xb0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t> GetOctets();

  /// @brief Method GetString, addr 0x334dbb4, size 0x194, virtual true, abstract: false, final false
  inline ::StringW GetString();

  static inline ::Org::BouncyCastle::Asn1::DerBitString* New_ctor(::ArrayW<uint8_t> data);

  static inline ::Org::BouncyCastle::Asn1::DerBitString* New_ctor(::ArrayW<uint8_t> data, int32_t padBits);

  static inline ::Org::BouncyCastle::Asn1::DerBitString* New_ctor(int32_t namedBits);

  static inline ::Org::BouncyCastle::Asn1::DerBitString* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_mData() const;

  constexpr ::ArrayW<uint8_t>& __cordl_internal_get_mData();

  constexpr int32_t const& __cordl_internal_get_mPadBits() const;

  constexpr int32_t& __cordl_internal_get_mPadBits();

  constexpr void __cordl_internal_set_mData(::ArrayW<uint8_t> value);

  constexpr void __cordl_internal_set_mPadBits(int32_t value);

  /// @brief Method .ctor, addr 0x334d588, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t> data);

  /// @brief Method .ctor, addr 0x334d434, size 0x154, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t> data, int32_t padBits);

  /// @brief Method .ctor, addr 0x334d590, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(int32_t namedBits);

  /// @brief Method .ctor, addr 0x334d6c8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  static inline ::ArrayW<char16_t> getStaticF_table();

  /// @brief Method get_IntValue, addr 0x334d84c, size 0x108, virtual true, abstract: false, final false
  inline int32_t get_IntValue();

  /// @brief Method get_PadBits, addr 0x334d844, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_PadBits();

  static inline void setStaticF_table(::ArrayW<char16_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerBitString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerBitString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerBitString(DerBitString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerBitString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerBitString(DerBitString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 34 };

  /// @brief Field mData, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t> ___mData;

  /// @brief Field mPadBits, offset: 0x18, size: 0x4, def value: None
  int32_t ___mPadBits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::DerBitString, ___mData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerBitString, ___mPadBits) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Asn1::DerBitString) == 0x20, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
