#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ZTauElement)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Abc {
class ZTauElement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Abc::ZTauElement);
// Type: Org.BouncyCastle.Math.EC.Abc::ZTauElement
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Abc {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1358))
// CS Name: ::Org.BouncyCastle.Math.EC.Abc::ZTauElement*
class CORDL_TYPE ZTauElement : public ::System::Object {
public:
  // Declarations
  /// @brief Field u, offset 0x10, size 0x8
  __declspec(property(get = __get_u, put = __set_u))::Org::BouncyCastle::Math::BigInteger* u;

  /// @brief Field v, offset 0x18, size 0x8
  __declspec(property(get = __get_v, put = __set_v))::Org::BouncyCastle::Math::BigInteger* v;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_u();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_u() const;

  constexpr void __set_u(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_v();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_v() const;

  constexpr void __set_v(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* New_ctor(::Org::BouncyCastle::Math::BigInteger* u, ::Org::BouncyCastle::Math::BigInteger* v);

  /// @brief Method .ctor addr 0xfc7994 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* u, ::Org::BouncyCastle::Math::BigInteger* v);

  // Ctor Parameters [CppParam { name: "", ty: "ZTauElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZTauElement(ZTauElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZTauElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZTauElement(ZTauElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZTauElement();

public:
  /// @brief Field u, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___u;

  /// @brief Field v, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___v;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Abc::ZTauElement, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Abc
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Abc::ZTauElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, "Org.BouncyCastle.Math.EC.Abc", "ZTauElement");
