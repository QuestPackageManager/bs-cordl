#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerBitString)
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerBitString);
// Type: Org.BouncyCastle.Asn1::DerBitString
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(34))
// CS Name: ::Org.BouncyCastle.Asn1::DerBitString*
class CORDL_TYPE DerBitString : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
  // Declarations
  /// @brief Field mData, offset 0x10, size 0x8
  __declspec(property(get = __get_mData, put = __set_mData))::ArrayW<uint8_t, ::Array<uint8_t>*> mData;

  /// @brief Field mPadBits, offset 0x18, size 0x4
  __declspec(property(get = __get_mPadBits, put = __set_mPadBits)) int32_t mPadBits;

  /// @brief Field table, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_table, put = setStaticF_table))::ArrayW<char16_t, ::Array<char16_t>*> table;

  __declspec(property(get = get_PadBits)) int32_t PadBits;

  __declspec(property(get = get_IntValue)) int32_t IntValue;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mData() const;

  constexpr void __set_mData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_mPadBits();

  constexpr int32_t const& __get_mPadBits() const;

  constexpr void __set_mPadBits(int32_t value);

  static inline void setStaticF_table(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_table();

  /// @brief Method GetInstance addr 0xe68790 size 0x20c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerBitString* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance addr 0xe6a61c size 0x140 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerBitString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  static inline ::Org::BouncyCastle::Asn1::DerBitString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t padBits);

  /// @brief Method .ctor addr 0xe6a8e4 size 0x168 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t padBits);

  static inline ::Org::BouncyCastle::Asn1::DerBitString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor addr 0xe6aa4c size 0x8 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Org::BouncyCastle::Asn1::DerBitString* New_ctor(int32_t namedBits);

  /// @brief Method .ctor addr 0xe6aa54 size 0x128 virtual false final false
  inline void _ctor(int32_t namedBits);

  static inline ::Org::BouncyCastle::Asn1::DerBitString* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method .ctor addr 0xe6ab7c size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method GetOctets addr 0xe6aba8 size 0xb0 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetOctets();

  /// @brief Method GetBytes addr 0xe6ac58 size 0xa0 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes();

  /// @brief Method get_PadBits addr 0xe6acf8 size 0x8 virtual true final false
  inline int32_t get_PadBits();

  /// @brief Method get_IntValue addr 0xe6ad00 size 0x10c virtual true final false
  inline int32_t get_IntValue();

  /// @brief Method Encode addr 0xe6ae0c size 0x118 virtual true final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method Asn1GetHashCode addr 0xe6af24 size 0x88 virtual true final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Asn1Equals addr 0xe6afac size 0xd8 virtual true final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method GetString addr 0xe6b084 size 0x168 virtual true final false
  inline ::StringW GetString();

  /// @brief Method FromAsn1Octets addr 0xe6a75c size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerBitString* FromAsn1Octets(::ArrayW<uint8_t, ::Array<uint8_t>*> octets);

  // Ctor Parameters [CppParam { name: "", ty: "DerBitString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerBitString(DerBitString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerBitString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerBitString(DerBitString const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerBitString();

public:
  /// @brief Field mData, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mData;

  /// @brief Field mPadBits, offset: 0x18, size: 0x4, def value: None
  int32_t ___mPadBits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerBitString, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerBitString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerBitString*, "Org.BouncyCastle.Asn1", "DerBitString");
