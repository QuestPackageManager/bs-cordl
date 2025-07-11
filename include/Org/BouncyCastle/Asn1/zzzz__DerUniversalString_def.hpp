#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerUniversalString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerUniversalString)
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
class DerUniversalString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerUniversalString);
// Dependencies Org.BouncyCastle.Asn1.DerStringBase
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.DerUniversalString
class CORDL_TYPE DerUniversalString : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
  // Declarations
  /// @brief Field str, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_str, put = __cordl_internal_set_str)) ::ArrayW<uint8_t, ::Array<uint8_t>*> str;

  /// @brief Field table, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_table, put = setStaticF_table)) ::ArrayW<char16_t, ::Array<char16_t>*> table;

  /// @brief Method Asn1Equals, addr 0x263babc, size 0xbc, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Encode, addr 0x263ba98, size 0x24, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method GetInstance, addr 0x263b794, size 0x11c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerUniversalString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x263b6ac, size 0xe8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerUniversalString* GetInstance(::System::Object* obj);

  /// @brief Method GetOctets, addr 0x263ba20, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetOctets();

  /// @brief Method GetString, addr 0x263b8b0, size 0x170, virtual true, abstract: false, final false
  inline ::StringW GetString();

  static inline ::Org::BouncyCastle::Asn1::DerUniversalString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_str() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_str();

  constexpr void __cordl_internal_set_str(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x262e760, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_table();

  static inline void setStaticF_table(::ArrayW<char16_t, ::Array<char16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerUniversalString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerUniversalString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerUniversalString(DerUniversalString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerUniversalString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerUniversalString(DerUniversalString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 518 };

  /// @brief Field str, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___str;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::DerUniversalString, ___str) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerUniversalString, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerUniversalString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerUniversalString*, "Org.BouncyCastle.Asn1", "DerUniversalString");
