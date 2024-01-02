#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(Gost28147Parameters)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::CryptoPro {
class Gost28147Parameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters);
// Type: Org.BouncyCastle.Asn1.CryptoPro::Gost28147Parameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(128))
// CS Name: ::Org.BouncyCastle.Asn1.CryptoPro::Gost28147Parameters*
class CORDL_TYPE Gost28147Parameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field iv, offset 0x10, size 0x8
  __declspec(property(get = __get_iv, put = __set_iv))::Org::BouncyCastle::Asn1::Asn1OctetString* iv;

  /// @brief Field paramSet, offset 0x18, size 0x8
  __declspec(property(get = __get_paramSet, put = __set_paramSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* paramSet;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_iv();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_iv() const;

  constexpr void __set_iv(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_paramSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_paramSet() const;

  constexpr void __set_paramSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method GetInstance, addr 0xe8c960, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0xe8c978, size 0x178, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe8caf0, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0xe8cc20, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "Gost28147Parameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost28147Parameters(Gost28147Parameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost28147Parameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost28147Parameters(Gost28147Parameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost28147Parameters();

public:
  /// @brief Field iv, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___iv;

  /// @brief Field paramSet, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___paramSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters, ___iv) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters, ___paramSet) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::CryptoPro
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters*, "Org.BouncyCastle.Asn1.CryptoPro", "Gost28147Parameters");
