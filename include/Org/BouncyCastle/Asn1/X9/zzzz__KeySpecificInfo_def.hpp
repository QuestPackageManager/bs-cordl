#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(KeySpecificInfo)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class KeySpecificInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::KeySpecificInfo);
// Type: Org.BouncyCastle.Asn1.X9::KeySpecificInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(415))
// CS Name: ::Org.BouncyCastle.Asn1.X9::KeySpecificInfo*
class CORDL_TYPE KeySpecificInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field algorithm, offset 0x10, size 0x8
  __declspec(property(get = __get_algorithm, put = __set_algorithm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm;

  /// @brief Field counter, offset 0x18, size 0x8
  __declspec(property(get = __get_counter, put = __set_counter))::Org::BouncyCastle::Asn1::Asn1OctetString* counter;

  __declspec(property(get = get_Algorithm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Algorithm;

  __declspec(property(get = get_Counter))::Org::BouncyCastle::Asn1::Asn1OctetString* Counter;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_algorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_algorithm() const;

  constexpr void __set_algorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_counter();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_counter() const;

  constexpr void __set_counter(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  static inline ::Org::BouncyCastle::Asn1::X9::KeySpecificInfo* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString* counter);

  /// @brief Method .ctor addr 0x11aa3e8 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString* counter);

  static inline ::Org::BouncyCastle::Asn1::X9::KeySpecificInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x11aa414 size 0x2b8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Algorithm addr 0x11aa6cc size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Algorithm();

  /// @brief Method get_Counter addr 0x11aa6d4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_Counter();

  /// @brief Method ToAsn1Object addr 0x11aa6dc size 0xec virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "KeySpecificInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeySpecificInfo(KeySpecificInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeySpecificInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeySpecificInfo(KeySpecificInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeySpecificInfo();

public:
  /// @brief Field algorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___algorithm;

  /// @brief Field counter, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___counter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::KeySpecificInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::KeySpecificInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::KeySpecificInfo*, "Org.BouncyCastle.Asn1.X9", "KeySpecificInfo");
