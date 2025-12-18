#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerGraphicString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerGraphicString)
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
class DerGraphicString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerGraphicString);
// Dependencies Org.BouncyCastle.Asn1.DerStringBase
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.DerGraphicString
class CORDL_TYPE DerGraphicString : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
  // Declarations
  /// @brief Field mString, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mString, put = __cordl_internal_set_mString)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mString;

  /// @brief Method Asn1Equals, addr 0x3594930, size 0xd0, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Asn1GetHashCode, addr 0x35948d0, size 0x60, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Encode, addr 0x35948b4, size 0x1c, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method GetInstance, addr 0x3594728, size 0x120, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerGraphicString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x3594500, size 0x228, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerGraphicString* GetInstance(::System::Object* obj);

  /// @brief Method GetOctets, addr 0x3594854, size 0x60, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetOctets();

  /// @brief Method GetString, addr 0x3594848, size 0xc, virtual true, abstract: false, final false
  inline ::StringW GetString();

  static inline ::Org::BouncyCastle::Asn1::DerGraphicString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mString() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mString();

  constexpr void __cordl_internal_set_mString(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3588dd4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerGraphicString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerGraphicString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerGraphicString(DerGraphicString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerGraphicString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerGraphicString(DerGraphicString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 509 };

  /// @brief Field mString, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::DerGraphicString, ___mString) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerGraphicString, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerGraphicString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerGraphicString*, "Org.BouncyCastle.Asn1", "DerGraphicString");
