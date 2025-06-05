#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/PbeParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PbeParameter)
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
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class PbeParameter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::PbeParameter);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Pkcs.PbeParameter
class CORDL_TYPE PbeParameter : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_IterationCount)) ::Org::BouncyCastle::Math::BigInteger* IterationCount;

  /// @brief Field iterationCount, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_iterationCount, put = __cordl_internal_set_iterationCount)) ::Org::BouncyCastle::Asn1::DerInteger* iterationCount;

  /// @brief Field salt, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_salt, put = __cordl_internal_set_salt)) ::Org::BouncyCastle::Asn1::Asn1OctetString* salt;

  /// @brief Method GetInstance, addr 0x240ef84, size 0x194, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::PbeParameter* GetInstance(::System::Object* obj);

  /// @brief Method GetSalt, addr 0x240f2ac, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSalt();

  static inline ::Org::BouncyCastle::Asn1::Pkcs::PbeParameter* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::PbeParameter* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x240f2e8, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_iterationCount() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_iterationCount();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_salt() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_salt();

  constexpr void __cordl_internal_set_iterationCount(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_salt(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method .ctor, addr 0x240f1fc, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  /// @brief Method .ctor, addr 0x240f118, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_IterationCount, addr 0x240f2cc, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_IterationCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PbeParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PbeParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PbeParameter(PbeParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PbeParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PbeParameter(PbeParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 240 };

  /// @brief Field salt, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___salt;

  /// @brief Field iterationCount, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___iterationCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::PbeParameter, ___salt) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::PbeParameter, ___iterationCount) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::PbeParameter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*, "Org.BouncyCastle.Asn1.Pkcs", "PbeParameter");
