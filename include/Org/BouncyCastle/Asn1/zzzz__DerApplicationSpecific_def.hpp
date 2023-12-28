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
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(471))
// CS Name: ::Org.BouncyCastle.Asn1::DerApplicationSpecific*
class CORDL_TYPE DerApplicationSpecific : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  /// @brief Field isConstructed, offset 0x10, size 0x1
  __declspec(property(get = __get_isConstructed, put = __set_isConstructed)) bool isConstructed;

  /// @brief Field tag, offset 0x14, size 0x4
  __declspec(property(get = __get_tag, put = __set_tag)) int32_t tag;

  /// @brief Field octets, offset 0x18, size 0x8
  __declspec(property(get = __get_octets, put = __set_octets))::ArrayW<uint8_t, ::Array<uint8_t>*> octets;

  __declspec(property(get = get_ApplicationTag)) int32_t ApplicationTag;

  constexpr bool& __get_isConstructed();

  constexpr bool const& __get_isConstructed() const;

  constexpr void __set_isConstructed(bool value);

  constexpr int32_t& __get_tag();

  constexpr int32_t const& __get_tag() const;

  constexpr void __set_tag(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_octets();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_octets() const;

  constexpr void __set_octets(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Asn1::DerApplicationSpecific* New_ctor(bool isConstructed, int32_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> octets);

  /// @brief Method .ctor addr 0x11b4b90 size 0x40 virtual false final false
  inline void _ctor(bool isConstructed, int32_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> octets);

  static inline ::Org::BouncyCastle::Asn1::DerApplicationSpecific* New_ctor(int32_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> octets);

  /// @brief Method .ctor addr 0x11bb3d0 size 0x34 virtual false final false
  inline void _ctor(int32_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> octets);

  static inline ::Org::BouncyCastle::Asn1::DerApplicationSpecific* New_ctor(int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method .ctor addr 0x11bb404 size 0x10 virtual false final false
  inline void _ctor(int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  static inline ::Org::BouncyCastle::Asn1::DerApplicationSpecific* New_ctor(bool isExplicit, int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method .ctor addr 0x11bb414 size 0xf8 virtual false final false
  inline void _ctor(bool isExplicit, int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  static inline ::Org::BouncyCastle::Asn1::DerApplicationSpecific* New_ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* vec);

  /// @brief Method .ctor addr 0x11bb5d8 size 0x1d0 virtual false final false
  inline void _ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* vec);

  /// @brief Method GetLengthOfHeader addr 0x11bb50c size 0xcc virtual false final false
  inline int32_t GetLengthOfHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method IsConstructed addr 0x11bb7a8 size 0x8 virtual false final false
  inline bool IsConstructed();

  /// @brief Method GetContents addr 0x11bb7b0 size 0x8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetContents();

  /// @brief Method get_ApplicationTag addr 0x11bb7b8 size 0x8 virtual false final false
  inline int32_t get_ApplicationTag();

  /// @brief Method GetObject addr 0x11bb7c0 size 0xc virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* GetObject();

  /// @brief Method GetObject addr 0x11bb7cc size 0xbc virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* GetObject(int32_t derTagNo);

  /// @brief Method Encode addr 0x11bb9d0 size 0x38 virtual true final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method Asn1Equals addr 0x11bba08 size 0xe8 virtual true final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Asn1GetHashCode addr 0x11bbaf0 size 0xa4 virtual true final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method ReplaceTagNumber addr 0x11bb888 size 0x148 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReplaceTagNumber(int32_t newTag, ::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  // Ctor Parameters [CppParam { name: "", ty: "DerApplicationSpecific", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerApplicationSpecific(DerApplicationSpecific&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerApplicationSpecific", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerApplicationSpecific(DerApplicationSpecific const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerApplicationSpecific();

public:
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

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerApplicationSpecific);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerApplicationSpecific*, "Org.BouncyCastle.Asn1", "DerApplicationSpecific");
