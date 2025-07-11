#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerPrintableString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerPrintableString)
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
class DerPrintableString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerPrintableString);
// Dependencies Org.BouncyCastle.Asn1.DerStringBase
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.DerPrintableString
class CORDL_TYPE DerPrintableString : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
  // Declarations
  /// @brief Field str, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_str, put = __cordl_internal_set_str)) ::StringW str;

  /// @brief Method Asn1Equals, addr 0x263ae0c, size 0x98, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Encode, addr 0x263addc, size 0x30, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method GetInstance, addr 0x263aaf4, size 0x10c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerPrintableString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x263aa0c, size 0xe8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerPrintableString* GetInstance(::System::Object* obj);

  /// @brief Method GetOctets, addr 0x263add0, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetOctets();

  /// @brief Method GetString, addr 0x263adc8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW GetString();

  /// @brief Method IsPrintableString, addr 0x263acd8, size 0xf0, virtual false, abstract: false, final false
  static inline bool IsPrintableString(::StringW str);

  static inline ::Org::BouncyCastle::Asn1::DerPrintableString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  static inline ::Org::BouncyCastle::Asn1::DerPrintableString* New_ctor(::StringW str);

  static inline ::Org::BouncyCastle::Asn1::DerPrintableString* New_ctor(::StringW str, bool validate);

  constexpr ::StringW const& __cordl_internal_get_str() const;

  constexpr ::StringW& __cordl_internal_get_str();

  constexpr void __cordl_internal_set_str(::StringW value);

  /// @brief Method .ctor, addr 0x262e714, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  /// @brief Method .ctor, addr 0x263acd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW str);

  /// @brief Method .ctor, addr 0x263ac00, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::StringW str, bool validate);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerPrintableString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerPrintableString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerPrintableString(DerPrintableString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerPrintableString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerPrintableString(DerPrintableString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 512 };

  /// @brief Field str, offset: 0x10, size: 0x8, def value: None
  ::StringW ___str;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::DerPrintableString, ___str) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerPrintableString, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerPrintableString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerPrintableString*, "Org.BouncyCastle.Asn1", "DerPrintableString");
