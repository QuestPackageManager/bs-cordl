#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Misc/Cast5CbcParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Cast5CbcParameters)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Misc {
class Cast5CbcParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Misc {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Misc.Cast5CbcParameters
class CORDL_TYPE Cast5CbcParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_KeyLength)) int32_t KeyLength;

  /// @brief Field iv, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_iv, put = __cordl_internal_set_iv)) ::Org::BouncyCastle::Asn1::Asn1OctetString* iv;

  /// @brief Field keyLength, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keyLength, put = __cordl_internal_set_keyLength)) ::Org::BouncyCastle::Asn1::DerInteger* keyLength;

  /// @brief Method GetIV, addr 0x23ffbc4, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetIV();

  /// @brief Method GetInstance, addr 0x23ff814, size 0x13c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters* GetInstance(::System::Object* o);

  static inline ::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> iv, int32_t keyLength);

  static inline ::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x23ffc58, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_iv() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_iv();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_keyLength() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_keyLength();

  constexpr void __cordl_internal_set_iv(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_keyLength(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x23ffb14, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> iv, int32_t keyLength);

  /// @brief Method .ctor, addr 0x23ff950, size 0x1c4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_KeyLength, addr 0x23ffc3c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_KeyLength();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cast5CbcParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Cast5CbcParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cast5CbcParameters(Cast5CbcParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cast5CbcParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cast5CbcParameters(Cast5CbcParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 195 };

  /// @brief Field keyLength, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___keyLength;

  /// @brief Field iv, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___iv;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters, ___keyLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters, ___iv) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Misc
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters*, "Org.BouncyCastle.Asn1.Misc", "Cast5CbcParameters");
