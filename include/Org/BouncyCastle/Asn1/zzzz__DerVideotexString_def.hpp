#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerVideotexString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerVideotexString)
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
class DerVideotexString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerVideotexString);
// Dependencies Org.BouncyCastle.Asn1.DerStringBase
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.DerVideotexString
class CORDL_TYPE DerVideotexString : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
  // Declarations
  /// @brief Field mString, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mString, put = __cordl_internal_set_mString)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mString;

  /// @brief Method Asn1Equals, addr 0x263cd64, size 0xbc, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Asn1GetHashCode, addr 0x263cd08, size 0x5c, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Encode, addr 0x263cce4, size 0x24, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method GetInstance, addr 0x263cb70, size 0x10c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerVideotexString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x263c954, size 0x21c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerVideotexString* GetInstance(::System::Object* obj);

  /// @brief Method GetOctets, addr 0x263cc88, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetOctets();

  /// @brief Method GetString, addr 0x263cc7c, size 0xc, virtual true, abstract: false, final false
  inline ::StringW GetString();

  static inline ::Org::BouncyCastle::Asn1::DerVideotexString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mString() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mString();

  constexpr void __cordl_internal_set_mString(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x262e85c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerVideotexString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerVideotexString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerVideotexString(DerVideotexString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerVideotexString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerVideotexString(DerVideotexString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 521 };

  /// @brief Field mString, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::DerVideotexString, ___mString) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerVideotexString, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerVideotexString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerVideotexString*, "Org.BouncyCastle.Asn1", "DerVideotexString");
