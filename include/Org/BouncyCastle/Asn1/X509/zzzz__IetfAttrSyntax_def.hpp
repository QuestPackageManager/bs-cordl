#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/IetfAttrSyntax.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IetfAttrSyntax)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class IetfAttrSyntax;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.IetfAttrSyntax
class CORDL_TYPE IetfAttrSyntax : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_PolicyAuthority)) ::Org::BouncyCastle::Asn1::X509::GeneralNames* PolicyAuthority;

  __declspec(property(get = get_ValueType)) int32_t ValueType;

  /// @brief Field policyAuthority, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_policyAuthority, put = __cordl_internal_set_policyAuthority)) ::Org::BouncyCastle::Asn1::X509::GeneralNames* policyAuthority;

  /// @brief Field valueChoice, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_valueChoice, put = __cordl_internal_set_valueChoice)) int32_t valueChoice;

  /// @brief Field values, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values)) ::Org::BouncyCastle::Asn1::Asn1EncodableVector* values;

  /// @brief Method GetValues, addr 0x26073ac, size 0x348, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetValues();

  static inline ::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x26076f4, size 0xd8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames* const& __cordl_internal_get_policyAuthority() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& __cordl_internal_get_policyAuthority();

  constexpr int32_t const& __cordl_internal_get_valueChoice() const;

  constexpr int32_t& __cordl_internal_get_valueChoice();

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector* const& __cordl_internal_get_values() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& __cordl_internal_get_values();

  constexpr void __cordl_internal_set_policyAuthority(::Org::BouncyCastle::Asn1::X509::GeneralNames* value);

  constexpr void __cordl_internal_set_valueChoice(int32_t value);

  constexpr void __cordl_internal_set_values(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value);

  /// @brief Method .ctor, addr 0x2606d38, size 0x664, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_PolicyAuthority, addr 0x260739c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* get_PolicyAuthority();

  /// @brief Method get_ValueType, addr 0x26073a4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ValueType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IetfAttrSyntax();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IetfAttrSyntax", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IetfAttrSyntax(IetfAttrSyntax&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IetfAttrSyntax", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IetfAttrSyntax(IetfAttrSyntax const&) = delete;

  /// @brief Field ValueOctets offset 0xffffffff size 0x4
  static constexpr int32_t ValueOctets{ static_cast<int32_t>(0x1) };

  /// @brief Field ValueOid offset 0xffffffff size 0x4
  static constexpr int32_t ValueOid{ static_cast<int32_t>(0x2) };

  /// @brief Field ValueUtf8 offset 0xffffffff size 0x4
  static constexpr int32_t ValueUtf8{ static_cast<int32_t>(0x3) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 365 };

  /// @brief Field policyAuthority, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralNames* ___policyAuthority;

  /// @brief Field values, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ___values;

  /// @brief Field valueChoice, offset: 0x20, size: 0x4, def value: None
  int32_t ___valueChoice;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax, ___policyAuthority) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax, ___values) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax, ___valueChoice) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax*, "Org.BouncyCastle.Asn1.X509", "IetfAttrSyntax");
