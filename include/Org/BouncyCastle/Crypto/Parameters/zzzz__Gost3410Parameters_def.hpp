#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost3410Parameters)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410ValidationParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410Parameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters);
// Type: Org.BouncyCastle.Crypto.Parameters::Gost3410Parameters
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1053))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::Gost3410Parameters*
class CORDL_TYPE Gost3410Parameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field p, offset 0x10, size 0x8
  __declspec(property(get = __get_p, put = __set_p))::Org::BouncyCastle::Math::BigInteger* p;

  /// @brief Field q, offset 0x18, size 0x8
  __declspec(property(get = __get_q, put = __set_q))::Org::BouncyCastle::Math::BigInteger* q;

  /// @brief Field a, offset 0x20, size 0x8
  __declspec(property(get = __get_a, put = __set_a))::Org::BouncyCastle::Math::BigInteger* a;

  /// @brief Field validation, offset 0x28, size 0x8
  __declspec(property(get = __get_validation, put = __set_validation))::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* validation;

  __declspec(property(get = get_P))::Org::BouncyCastle::Math::BigInteger* P;

  __declspec(property(get = get_Q))::Org::BouncyCastle::Math::BigInteger* Q;

  __declspec(property(get = get_A))::Org::BouncyCastle::Math::BigInteger* A;

  __declspec(property(get = get_ValidationParameters))::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* ValidationParameters;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_p() const;

  constexpr void __set_p(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_q();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_q() const;

  constexpr void __set_q(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_a();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_a() const;

  constexpr void __set_a(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters*& __get_validation();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters*> const& __get_validation() const;

  constexpr void __set_validation(::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                                      ::Org::BouncyCastle::Math::BigInteger* a);

  /// @brief Method .ctor, addr 0xf35f98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* a);

  static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                                      ::Org::BouncyCastle::Math::BigInteger* a,
                                                                                      ::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* validation);

  /// @brief Method .ctor, addr 0xf36190, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* a,
                    ::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* validation);

  /// @brief Method get_P, addr 0xf36270, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_P();

  /// @brief Method get_Q, addr 0xf36278, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Q();

  /// @brief Method get_A, addr 0xf36280, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_A();

  /// @brief Method get_ValidationParameters, addr 0xf36288, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* get_ValidationParameters();

  /// @brief Method Equals, addr 0xf36290, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0xf3632c, size 0x80, virtual false, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* other);

  /// @brief Method GetHashCode, addr 0xf363ac, size 0x70, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410Parameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3410Parameters(Gost3410Parameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410Parameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3410Parameters(Gost3410Parameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3410Parameters();

public:
  /// @brief Field p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___p;

  /// @brief Field q, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___q;

  /// @brief Field a, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___a;

  /// @brief Field validation, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* ___validation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters, ___p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters, ___q) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters, ___a) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters, ___validation) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*, "Org.BouncyCastle.Crypto.Parameters", "Gost3410Parameters");
