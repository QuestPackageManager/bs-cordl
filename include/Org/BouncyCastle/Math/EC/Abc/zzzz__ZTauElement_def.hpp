#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Abc/ZTauElement.hpp"
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
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Abc {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Abc.ZTauElement
class CORDL_TYPE ZTauElement : public ::System::Object {
public:
  // Declarations
  /// @brief Field u, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_u, put = __cordl_internal_set_u)) ::Org::BouncyCastle::Math::BigInteger* u;

  /// @brief Field v, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_v, put = __cordl_internal_set_v)) ::Org::BouncyCastle::Math::BigInteger* v;

  static inline ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* New_ctor(::Org::BouncyCastle::Math::BigInteger* u, ::Org::BouncyCastle::Math::BigInteger* v);

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_u() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_u();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_v() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_v();

  constexpr void __cordl_internal_set_u(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_v(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x244aed8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* u, ::Org::BouncyCastle::Math::BigInteger* v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZTauElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZTauElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZTauElement(ZTauElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZTauElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZTauElement(ZTauElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1358 };

  /// @brief Field u, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___u;

  /// @brief Field v, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___v;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::Abc::ZTauElement, ___u) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Abc::ZTauElement, ___v) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Abc::ZTauElement, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Abc
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Abc::ZTauElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, "Org.BouncyCastle.Math.EC.Abc", "ZTauElement");
