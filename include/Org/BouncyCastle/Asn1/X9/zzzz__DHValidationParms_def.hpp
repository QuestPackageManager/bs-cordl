#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X9/DHValidationParms.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(DHValidationParms)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class DHValidationParms;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::DHValidationParms);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X9.DHValidationParms
class CORDL_TYPE DHValidationParms : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_PgenCounter)) ::Org::BouncyCastle::Asn1::DerInteger* PgenCounter;

  __declspec(property(get = get_Seed)) ::Org::BouncyCastle::Asn1::DerBitString* Seed;

  /// @brief Field pgenCounter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_pgenCounter, put = __cordl_internal_set_pgenCounter)) ::Org::BouncyCastle::Asn1::DerInteger* pgenCounter;

  /// @brief Field seed, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_seed, put = __cordl_internal_set_seed)) ::Org::BouncyCastle::Asn1::DerBitString* seed;

  /// @brief Method GetInstance, addr 0x261d55c, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::DHValidationParms* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x261cfd8, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::DHValidationParms* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X9::DHValidationParms* New_ctor(::Org::BouncyCastle::Asn1::DerBitString* seed, ::Org::BouncyCastle::Asn1::DerInteger* pgenCounter);

  static inline ::Org::BouncyCastle::Asn1::X9::DHValidationParms* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x261d78c, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_pgenCounter() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_pgenCounter();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_seed() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_seed();

  constexpr void __cordl_internal_set_pgenCounter(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_seed(::Org::BouncyCastle::Asn1::DerBitString* value);

  /// @brief Method .ctor, addr 0x261d6e0, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerBitString* seed, ::Org::BouncyCastle::Asn1::DerInteger* pgenCounter);

  /// @brief Method .ctor, addr 0x261d574, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_PgenCounter, addr 0x261d784, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_PgenCounter();

  /// @brief Method get_Seed, addr 0x261d77c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_Seed();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHValidationParms();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DHValidationParms", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHValidationParms(DHValidationParms&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHValidationParms", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHValidationParms(DHValidationParms const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 413 };

  /// @brief Field seed, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___seed;

  /// @brief Field pgenCounter, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___pgenCounter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::DHValidationParms, ___seed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::DHValidationParms, ___pgenCounter) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::DHValidationParms, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::DHValidationParms);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::DHValidationParms*, "Org.BouncyCastle.Asn1.X9", "DHValidationParms");
