#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IetfAttrSyntax)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class IetfAttrSyntax;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax);
// Type: Org.BouncyCastle.Asn1.X509::IetfAttrSyntax
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(365))
// CS Name: ::Org.BouncyCastle.Asn1.X509::IetfAttrSyntax*
class CORDL_TYPE IetfAttrSyntax : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field policyAuthority, offset 0x10, size 0x8
  __declspec(property(get = __get_policyAuthority, put = __set_policyAuthority))::Org::BouncyCastle::Asn1::X509::GeneralNames* policyAuthority;

  /// @brief Field values, offset 0x18, size 0x8
  __declspec(property(get = __get_values, put = __set_values))::Org::BouncyCastle::Asn1::Asn1EncodableVector* values;

  /// @brief Field valueChoice, offset 0x20, size 0x4
  __declspec(property(get = __get_valueChoice, put = __set_valueChoice)) int32_t valueChoice;

  __declspec(property(get = get_PolicyAuthority))::Org::BouncyCastle::Asn1::X509::GeneralNames* PolicyAuthority;

  __declspec(property(get = get_ValueType)) int32_t ValueType;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& __get_policyAuthority();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralNames*> const& __get_policyAuthority() const;

  constexpr void __set_policyAuthority(::Org::BouncyCastle::Asn1::X509::GeneralNames* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& __get_values();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1EncodableVector*> const& __get_values() const;

  constexpr void __set_values(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value);

  constexpr int32_t& __get_valueChoice();

  constexpr int32_t const& __get_valueChoice() const;

  constexpr void __set_valueChoice(int32_t value);

  static inline ::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x1190488 size 0x67c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_PolicyAuthority addr 0x1190b04 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* get_PolicyAuthority();

  /// @brief Method get_ValueType addr 0x1190b0c size 0x8 virtual false final false
  inline int32_t get_ValueType();

  /// @brief Method GetValues addr 0x1190b14 size 0x348 virtual false final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetValues();

  /// @brief Method ToAsn1Object addr 0x1190e5c size 0xe0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "IetfAttrSyntax", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IetfAttrSyntax(IetfAttrSyntax&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IetfAttrSyntax", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IetfAttrSyntax(IetfAttrSyntax const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IetfAttrSyntax();

public:
  /// @brief Field policyAuthority, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralNames* ___policyAuthority;

  /// @brief Field values, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ___values;

  /// @brief Field valueChoice, offset: 0x20, size: 0x4, def value: None
  int32_t ___valueChoice;

  /// @brief Field ValueOctets offset 0xffffffff size 0x4
  static constexpr int32_t ValueOctets{ static_cast<int32_t>(0x1) };

  /// @brief Field ValueOid offset 0xffffffff size 0x4
  static constexpr int32_t ValueOid{ static_cast<int32_t>(0x2) };

  /// @brief Field ValueUtf8 offset 0xffffffff size 0x4
  static constexpr int32_t ValueUtf8{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax*, "Org.BouncyCastle.Asn1.X509", "IetfAttrSyntax");
