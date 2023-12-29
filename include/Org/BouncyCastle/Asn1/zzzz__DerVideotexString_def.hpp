#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerVideotexString)
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerVideotexString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerVideotexString);
// Type: Org.BouncyCastle.Asn1::DerVideotexString
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(521))
// CS Name: ::Org.BouncyCastle.Asn1::DerVideotexString*
class CORDL_TYPE DerVideotexString : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
  // Declarations
  /// @brief Field mString, offset 0x10, size 0x8
  __declspec(property(get = __get_mString, put = __set_mString))::ArrayW<uint8_t, ::Array<uint8_t>*> mString;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mString();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mString() const;

  constexpr void __set_mString(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method GetInstance addr 0x1154684 size 0x220 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerVideotexString* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance addr 0x11548a4 size 0x130 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerVideotexString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  static inline ::Org::BouncyCastle::Asn1::DerVideotexString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method .ctor addr 0x1146238 size 0x78 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method GetString addr 0x11549d4 size 0xc virtual true final false
  inline ::StringW GetString();

  /// @brief Method GetOctets addr 0x11549e0 size 0x5c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetOctets();

  /// @brief Method Encode addr 0x1154a3c size 0x24 virtual true final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method Asn1GetHashCode addr 0x1154a60 size 0x5c virtual true final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Asn1Equals addr 0x1154abc size 0xc8 virtual true final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  // Ctor Parameters [CppParam { name: "", ty: "DerVideotexString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerVideotexString(DerVideotexString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerVideotexString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerVideotexString(DerVideotexString const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerVideotexString();

public:
  /// @brief Field mString, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerVideotexString, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerVideotexString, ___mString) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerVideotexString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerVideotexString*, "Org.BouncyCastle.Asn1", "DerVideotexString");
