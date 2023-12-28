#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerPrintableString)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerPrintableString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerPrintableString);
// Type: Org.BouncyCastle.Asn1::DerPrintableString
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(512))
// CS Name: ::Org.BouncyCastle.Asn1::DerPrintableString*
class CORDL_TYPE DerPrintableString : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
  // Declarations
  /// @brief Field str, offset 0x10, size 0x8
  __declspec(property(get = __get_str, put = __set_str))::StringW str;

  constexpr ::StringW& __get_str();

  constexpr ::StringW const& __get_str() const;

  constexpr void __set_str(::StringW value);

  /// @brief Method GetInstance addr 0x11c3888 size 0xf0 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerPrintableString* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance addr 0x11c3978 size 0xec virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerPrintableString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  static inline ::Org::BouncyCastle::Asn1::DerPrintableString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  /// @brief Method .ctor addr 0x11b733c size 0x28 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  static inline ::Org::BouncyCastle::Asn1::DerPrintableString* New_ctor(::StringW str);

  /// @brief Method .ctor addr 0x11c3b3c size 0x8 virtual false final false
  inline void _ctor(::StringW str);

  static inline ::Org::BouncyCastle::Asn1::DerPrintableString* New_ctor(::StringW str, bool validate);

  /// @brief Method .ctor addr 0x11c3a64 size 0xd8 virtual false final false
  inline void _ctor(::StringW str, bool validate);

  /// @brief Method GetString addr 0x11c3c34 size 0x8 virtual true final false
  inline ::StringW GetString();

  /// @brief Method GetOctets addr 0x11c3c3c size 0xc virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetOctets();

  /// @brief Method Encode addr 0x11c3c48 size 0x30 virtual true final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method Asn1Equals addr 0x11c3c78 size 0xa0 virtual true final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method IsPrintableString addr 0x11c3b44 size 0xf0 virtual false final false
  static inline bool IsPrintableString(::StringW str);

  // Ctor Parameters [CppParam { name: "", ty: "DerPrintableString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerPrintableString(DerPrintableString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerPrintableString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerPrintableString(DerPrintableString const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerPrintableString();

public:
  /// @brief Field str, offset: 0x10, size: 0x8, def value: None
  ::StringW ___str;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerPrintableString, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerPrintableString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerPrintableString*, "Org.BouncyCastle.Asn1", "DerPrintableString");
