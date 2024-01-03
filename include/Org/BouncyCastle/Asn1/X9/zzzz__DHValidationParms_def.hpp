#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(DHValidationParms)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class DHValidationParms;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::DHValidationParms);
// Type: Org.BouncyCastle.Asn1.X9::DHValidationParms
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(413))
// CS Name: ::Org.BouncyCastle.Asn1.X9::DHValidationParms*
class CORDL_TYPE DHValidationParms : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field seed, offset 0x10, size 0x8
  __declspec(property(get = __get_seed, put = __set_seed))::Org::BouncyCastle::Asn1::DerBitString* seed;

  /// @brief Field pgenCounter, offset 0x18, size 0x8
  __declspec(property(get = __get_pgenCounter, put = __set_pgenCounter))::Org::BouncyCastle::Asn1::DerInteger* pgenCounter;

  __declspec(property(get = get_Seed))::Org::BouncyCastle::Asn1::DerBitString* Seed;

  __declspec(property(get = get_PgenCounter))::Org::BouncyCastle::Asn1::DerInteger* PgenCounter;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_seed();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_seed() const;

  constexpr void __set_seed(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_pgenCounter();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_pgenCounter() const;

  constexpr void __set_pgenCounter(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method GetInstance, addr 0x11a8874, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::DHValidationParms* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x11a82d0, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::DHValidationParms* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X9::DHValidationParms* New_ctor(::Org::BouncyCastle::Asn1::DerBitString* seed, ::Org::BouncyCastle::Asn1::DerInteger* pgenCounter);

  /// @brief Method .ctor, addr 0x11a89fc, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerBitString* seed, ::Org::BouncyCastle::Asn1::DerInteger* pgenCounter);

  static inline ::Org::BouncyCastle::Asn1::X9::DHValidationParms* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x11a888c, size 0x170, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Seed, addr 0x11a8aa0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_Seed();

  /// @brief Method get_PgenCounter, addr 0x11a8aa8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_PgenCounter();

  /// @brief Method ToAsn1Object, addr 0x11a8ab0, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "DHValidationParms", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHValidationParms(DHValidationParms&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHValidationParms", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHValidationParms(DHValidationParms const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHValidationParms();

public:
  /// @brief Field seed, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___seed;

  /// @brief Field pgenCounter, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___pgenCounter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::DHValidationParms, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::DHValidationParms, ___seed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::DHValidationParms, ___pgenCounter) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::DHValidationParms);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::DHValidationParms*, "Org.BouncyCastle.Asn1.X9", "DHValidationParms");
