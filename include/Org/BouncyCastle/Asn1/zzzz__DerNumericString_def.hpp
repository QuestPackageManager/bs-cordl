#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerNumericString)
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
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerNumericString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerNumericString);
// Type: Org.BouncyCastle.Asn1::DerNumericString
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(510))
// CS Name: ::Org.BouncyCastle.Asn1::DerNumericString*
class CORDL_TYPE DerNumericString : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
  // Declarations
  /// @brief Field str, offset 0x10, size 0x8
  __declspec(property(get = __get_str, put = __set_str))::StringW str;

  constexpr ::StringW& __get_str();

  constexpr ::StringW const& __get_str() const;

  constexpr void __set_str(::StringW value);

  /// @brief Method GetInstance addr 0x11c32b0 size 0xf0 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerNumericString* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance addr 0x11c33a0 size 0xec virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerNumericString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  static inline ::Org::BouncyCastle::Asn1::DerNumericString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  /// @brief Method .ctor addr 0x11b7314 size 0x28 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  static inline ::Org::BouncyCastle::Asn1::DerNumericString* New_ctor(::StringW str);

  /// @brief Method .ctor addr 0x11c3564 size 0x8 virtual false final false
  inline void _ctor(::StringW str);

  static inline ::Org::BouncyCastle::Asn1::DerNumericString* New_ctor(::StringW str, bool validate);

  /// @brief Method .ctor addr 0x11c348c size 0xd8 virtual false final false
  inline void _ctor(::StringW str, bool validate);

  /// @brief Method GetString addr 0x11c3630 size 0x8 virtual true final false
  inline ::StringW GetString();

  /// @brief Method GetOctets addr 0x11c3638 size 0xc virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetOctets();

  /// @brief Method Encode addr 0x11c3644 size 0x30 virtual true final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method Asn1Equals addr 0x11c3674 size 0xa0 virtual true final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method IsNumericString addr 0x11c356c size 0xc4 virtual false final false
  static inline bool IsNumericString(::StringW str);

  // Ctor Parameters [CppParam { name: "", ty: "DerNumericString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerNumericString(DerNumericString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerNumericString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerNumericString(DerNumericString const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerNumericString();

public:
  /// @brief Field str, offset: 0x10, size: 0x8, def value: None
  ::StringW ___str;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerNumericString, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerNumericString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerNumericString*, "Org.BouncyCastle.Asn1", "DerNumericString");
