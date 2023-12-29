#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JPakePrimeOrderGroup)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakePrimeOrderGroup;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup);
// Type: Org.BouncyCastle.Crypto.Agreement.JPake::JPakePrimeOrderGroup
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(715))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement.JPake::JPakePrimeOrderGroup*
class CORDL_TYPE JPakePrimeOrderGroup : public ::System::Object {
public:
  // Declarations
  /// @brief Field p, offset 0x10, size 0x8
  __declspec(property(get = __get_p, put = __set_p))::Org::BouncyCastle::Math::BigInteger* p;

  /// @brief Field q, offset 0x18, size 0x8
  __declspec(property(get = __get_q, put = __set_q))::Org::BouncyCastle::Math::BigInteger* q;

  /// @brief Field g, offset 0x20, size 0x8
  __declspec(property(get = __get_g, put = __set_g))::Org::BouncyCastle::Math::BigInteger* g;

  __declspec(property(get = get_P))::Org::BouncyCastle::Math::BigInteger* P;

  __declspec(property(get = get_Q))::Org::BouncyCastle::Math::BigInteger* Q;

  __declspec(property(get = get_G))::Org::BouncyCastle::Math::BigInteger* G;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_p() const;

  constexpr void __set_p(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_q();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_q() const;

  constexpr void __set_q(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_g();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_g() const;

  constexpr void __set_g(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                                              ::Org::BouncyCastle::Math::BigInteger* g);

  /// @brief Method .ctor addr 0x11a41f8 size 0x8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* g);

  static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                                              ::Org::BouncyCastle::Math::BigInteger* g, bool skipChecks);

  /// @brief Method .ctor addr 0x11a4200 size 0x330 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* g, bool skipChecks);

  /// @brief Method get_P addr 0x11a4530 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_P();

  /// @brief Method get_Q addr 0x11a4538 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Q();

  /// @brief Method get_G addr 0x11a4540 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_G();

  // Ctor Parameters [CppParam { name: "", ty: "JPakePrimeOrderGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JPakePrimeOrderGroup(JPakePrimeOrderGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JPakePrimeOrderGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JPakePrimeOrderGroup(JPakePrimeOrderGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JPakePrimeOrderGroup();

public:
  /// @brief Field p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___p;

  /// @brief Field q, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___q;

  /// @brief Field g, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___g;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup, ___p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup, ___q) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup, ___g) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::JPake
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*, "Org.BouncyCastle.Crypto.Agreement.JPake", "JPakePrimeOrderGroup");
