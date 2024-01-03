#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerIA5String)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerIA5String);
// Type: Org.BouncyCastle.Asn1::DerIA5String
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(199))
// CS Name: ::Org.BouncyCastle.Asn1::DerIA5String*
class CORDL_TYPE DerIA5String : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
  // Declarations
  /// @brief Field str, offset 0x10, size 0x8
  __declspec(property(get = __get_str, put = __set_str))::StringW str;

  constexpr ::StringW& __get_str();

  constexpr ::StringW const& __get_str() const;

  constexpr void __set_str(::StringW value);

  /// @brief Method GetInstance, addr 0xf79138, size 0xf0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerIA5String* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance, addr 0xf7d128, size 0x13c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerIA5String* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  static inline ::Org::BouncyCastle::Asn1::DerIA5String* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  /// @brief Method .ctor, addr 0xf7d264, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  static inline ::Org::BouncyCastle::Asn1::DerIA5String* New_ctor(::StringW str);

  /// @brief Method .ctor, addr 0xf7d28c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW str);

  static inline ::Org::BouncyCastle::Asn1::DerIA5String* New_ctor(::StringW str, bool validate);

  /// @brief Method .ctor, addr 0xf79418, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::StringW str, bool validate);

  /// @brief Method GetString, addr 0xf7d2fc, size 0x8, virtual true, abstract: false, final false
  inline ::StringW GetString();

  /// @brief Method GetOctets, addr 0xf7d304, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetOctets();

  /// @brief Method Encode, addr 0xf7d310, size 0x34, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method Asn1GetHashCode, addr 0xf7d344, size 0x1c, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Asn1Equals, addr 0xf7d360, size 0xa0, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method IsIA5String, addr 0xf7d294, size 0x68, virtual false, abstract: false, final false
  static inline bool IsIA5String(::StringW str);

  // Ctor Parameters [CppParam { name: "", ty: "DerIA5String", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerIA5String(DerIA5String&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerIA5String", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerIA5String(DerIA5String const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerIA5String();

public:
  /// @brief Field str, offset: 0x10, size: 0x8, def value: None
  ::StringW ___str;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerIA5String, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerIA5String, ___str) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerIA5String);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerIA5String*, "Org.BouncyCastle.Asn1", "DerIA5String");
