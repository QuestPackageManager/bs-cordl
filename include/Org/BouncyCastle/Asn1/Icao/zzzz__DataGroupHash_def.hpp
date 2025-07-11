#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Icao/DataGroupHash.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataGroupHash)
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
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Icao {
class DataGroupHash;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Icao::DataGroupHash);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Icao {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Icao.DataGroupHash
class CORDL_TYPE DataGroupHash : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_DataGroupHashValue)) ::Org::BouncyCastle::Asn1::Asn1OctetString* DataGroupHashValue;

  __declspec(property(get = get_DataGroupNumber)) int32_t DataGroupNumber;

  /// @brief Field dataGroupHashValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dataGroupHashValue, put = __cordl_internal_set_dataGroupHashValue)) ::Org::BouncyCastle::Asn1::Asn1OctetString* dataGroupHashValue;

  /// @brief Field dataGroupNumber, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dataGroupNumber, put = __cordl_internal_set_dataGroupNumber)) ::Org::BouncyCastle::Asn1::DerInteger* dataGroupNumber;

  /// @brief Method GetInstance, addr 0x23fa8e4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Icao::DataGroupHash* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Icao::DataGroupHash* New_ctor(int32_t dataGroupNumber, ::Org::BouncyCastle::Asn1::Asn1OctetString* dataGroupHashValue);

  static inline ::Org::BouncyCastle::Asn1::Icao::DataGroupHash* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x23fab08, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_dataGroupHashValue() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_dataGroupHashValue();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_dataGroupNumber() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_dataGroupNumber();

  constexpr void __cordl_internal_set_dataGroupHashValue(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_dataGroupNumber(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x23faa6c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(int32_t dataGroupNumber, ::Org::BouncyCastle::Asn1::Asn1OctetString* dataGroupHashValue);

  /// @brief Method .ctor, addr 0x23fa988, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_DataGroupHashValue, addr 0x23fab00, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_DataGroupHashValue();

  /// @brief Method get_DataGroupNumber, addr 0x23faae4, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_DataGroupNumber();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataGroupHash();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataGroupHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataGroupHash(DataGroupHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataGroupHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataGroupHash(DataGroupHash const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 175 };

  /// @brief Field dataGroupNumber, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___dataGroupNumber;

  /// @brief Field dataGroupHashValue, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___dataGroupHashValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Icao::DataGroupHash, ___dataGroupNumber) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Icao::DataGroupHash, ___dataGroupHashValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Icao::DataGroupHash, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Icao
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Icao::DataGroupHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, "Org.BouncyCastle.Asn1.Icao", "DataGroupHash");
