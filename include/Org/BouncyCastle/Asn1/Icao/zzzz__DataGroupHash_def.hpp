#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataGroupHash)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Icao {
class DataGroupHash;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Icao::DataGroupHash);
// Type: Org.BouncyCastle.Asn1.Icao::DataGroupHash
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Icao {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(175))
// CS Name: ::Org.BouncyCastle.Asn1.Icao::DataGroupHash*
class CORDL_TYPE DataGroupHash : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field dataGroupNumber, offset 0x10, size 0x8
  __declspec(property(get = __get_dataGroupNumber, put = __set_dataGroupNumber))::Org::BouncyCastle::Asn1::DerInteger* dataGroupNumber;

  /// @brief Field dataGroupHashValue, offset 0x18, size 0x8
  __declspec(property(get = __get_dataGroupHashValue, put = __set_dataGroupHashValue))::Org::BouncyCastle::Asn1::Asn1OctetString* dataGroupHashValue;

  __declspec(property(get = get_DataGroupNumber)) int32_t DataGroupNumber;

  __declspec(property(get = get_DataGroupHashValue))::Org::BouncyCastle::Asn1::Asn1OctetString* DataGroupHashValue;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_dataGroupNumber();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_dataGroupNumber() const;

  constexpr void __set_dataGroupNumber(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_dataGroupHashValue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_dataGroupHashValue() const;

  constexpr void __set_dataGroupHashValue(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method GetInstance addr 0xefe5fc size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Icao::DataGroupHash* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Icao::DataGroupHash* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xefe6a0 size 0xe8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Icao::DataGroupHash* New_ctor(int32_t dataGroupNumber, ::Org::BouncyCastle::Asn1::Asn1OctetString* dataGroupHashValue);

  /// @brief Method .ctor addr 0xefe788 size 0x80 virtual false final false
  inline void _ctor(int32_t dataGroupNumber, ::Org::BouncyCastle::Asn1::Asn1OctetString* dataGroupHashValue);

  /// @brief Method get_DataGroupNumber addr 0xefe808 size 0x1c virtual false final false
  inline int32_t get_DataGroupNumber();

  /// @brief Method get_DataGroupHashValue addr 0xefe824 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_DataGroupHashValue();

  /// @brief Method ToAsn1Object addr 0xefe82c size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "DataGroupHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataGroupHash(DataGroupHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataGroupHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataGroupHash(DataGroupHash const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataGroupHash();

public:
  /// @brief Field dataGroupNumber, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___dataGroupNumber;

  /// @brief Field dataGroupHashValue, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___dataGroupHashValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Icao::DataGroupHash, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Icao::DataGroupHash, ___dataGroupNumber) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Icao::DataGroupHash, ___dataGroupHashValue) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Icao
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Icao::DataGroupHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, "Org.BouncyCastle.Asn1.Icao", "DataGroupHash");
