#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1Tags)
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Tags;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1Tags);
// Type: Org.BouncyCastle.Asn1::Asn1Tags
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::Asn1Tags*
class CORDL_TYPE Asn1Tags : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::Asn1Tags* New_ctor();

  /// @brief Method .ctor, addr 0x141dbd4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Tags();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1Tags", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Tags(Asn1Tags&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Tags", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Tags(Asn1Tags const&) = delete;

  /// @brief Field Application offset 0xffffffff size 0x4
  static constexpr int32_t Application{ static_cast<int32_t>(0x40) };

  /// @brief Field BitString offset 0xffffffff size 0x4
  static constexpr int32_t BitString{ static_cast<int32_t>(0x3) };

  /// @brief Field BmpString offset 0xffffffff size 0x4
  static constexpr int32_t BmpString{ static_cast<int32_t>(0x1e) };

  /// @brief Field Boolean offset 0xffffffff size 0x4
  static constexpr int32_t Boolean{ static_cast<int32_t>(0x1) };

  /// @brief Field Constructed offset 0xffffffff size 0x4
  static constexpr int32_t Constructed{ static_cast<int32_t>(0x20) };

  /// @brief Field Enumerated offset 0xffffffff size 0x4
  static constexpr int32_t Enumerated{ static_cast<int32_t>(0xa) };

  /// @brief Field External offset 0xffffffff size 0x4
  static constexpr int32_t External{ static_cast<int32_t>(0x8) };

  /// @brief Field GeneralString offset 0xffffffff size 0x4
  static constexpr int32_t GeneralString{ static_cast<int32_t>(0x1b) };

  /// @brief Field GeneralizedTime offset 0xffffffff size 0x4
  static constexpr int32_t GeneralizedTime{ static_cast<int32_t>(0x18) };

  /// @brief Field GraphicString offset 0xffffffff size 0x4
  static constexpr int32_t GraphicString{ static_cast<int32_t>(0x19) };

  /// @brief Field IA5String offset 0xffffffff size 0x4
  static constexpr int32_t IA5String{ static_cast<int32_t>(0x16) };

  /// @brief Field Integer offset 0xffffffff size 0x4
  static constexpr int32_t Integer{ static_cast<int32_t>(0x2) };

  /// @brief Field Null offset 0xffffffff size 0x4
  static constexpr int32_t Null{ static_cast<int32_t>(0x5) };

  /// @brief Field NumericString offset 0xffffffff size 0x4
  static constexpr int32_t NumericString{ static_cast<int32_t>(0x12) };

  /// @brief Field ObjectIdentifier offset 0xffffffff size 0x4
  static constexpr int32_t ObjectIdentifier{ static_cast<int32_t>(0x6) };

  /// @brief Field OctetString offset 0xffffffff size 0x4
  static constexpr int32_t OctetString{ static_cast<int32_t>(0x4) };

  /// @brief Field PrintableString offset 0xffffffff size 0x4
  static constexpr int32_t PrintableString{ static_cast<int32_t>(0x13) };

  /// @brief Field Sequence offset 0xffffffff size 0x4
  static constexpr int32_t Sequence{ static_cast<int32_t>(0x10) };

  /// @brief Field SequenceOf offset 0xffffffff size 0x4
  static constexpr int32_t SequenceOf{ static_cast<int32_t>(0x10) };

  /// @brief Field Set offset 0xffffffff size 0x4
  static constexpr int32_t Set{ static_cast<int32_t>(0x11) };

  /// @brief Field SetOf offset 0xffffffff size 0x4
  static constexpr int32_t SetOf{ static_cast<int32_t>(0x11) };

  /// @brief Field T61String offset 0xffffffff size 0x4
  static constexpr int32_t T61String{ static_cast<int32_t>(0x14) };

  /// @brief Field Tagged offset 0xffffffff size 0x4
  static constexpr int32_t Tagged{ static_cast<int32_t>(0x80) };

  /// @brief Field UniversalString offset 0xffffffff size 0x4
  static constexpr int32_t UniversalString{ static_cast<int32_t>(0x1c) };

  /// @brief Field UtcTime offset 0xffffffff size 0x4
  static constexpr int32_t UtcTime{ static_cast<int32_t>(0x17) };

  /// @brief Field Utf8String offset 0xffffffff size 0x4
  static constexpr int32_t Utf8String{ static_cast<int32_t>(0xc) };

  /// @brief Field VideotexString offset 0xffffffff size 0x4
  static constexpr int32_t VideotexString{ static_cast<int32_t>(0x15) };

  /// @brief Field VisibleString offset 0xffffffff size 0x4
  static constexpr int32_t VisibleString{ static_cast<int32_t>(0x1a) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1Tags, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Tags);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Tags*, "Org.BouncyCastle.Asn1", "Asn1Tags");
