#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/Gost3410Parameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost3410Parameters)
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
// Dependencies Org.BouncyCastle.Crypto.ICipherParameters, System.Object
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters
class CORDL_TYPE Gost3410Parameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_A)) ::Org::BouncyCastle::Math::BigInteger* A;

  __declspec(property(get = get_P)) ::Org::BouncyCastle::Math::BigInteger* P;

  __declspec(property(get = get_Q)) ::Org::BouncyCastle::Math::BigInteger* Q;

  __declspec(property(get = get_ValidationParameters)) ::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* ValidationParameters;

  /// @brief Field a, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_a, put = __cordl_internal_set_a)) ::Org::BouncyCastle::Math::BigInteger* a;

  /// @brief Field p, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p)) ::Org::BouncyCastle::Math::BigInteger* p;

  /// @brief Field q, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_q, put = __cordl_internal_set_q)) ::Org::BouncyCastle::Math::BigInteger* q;

  /// @brief Field validation, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_validation, put = __cordl_internal_set_validation)) ::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* validation;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  /// @brief Method Equals, addr 0x23bef68, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x23bf004, size 0x80, virtual false, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* other);

  /// @brief Method GetHashCode, addr 0x23bf084, size 0x70, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                                      ::Org::BouncyCastle::Math::BigInteger* a);

  static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                                      ::Org::BouncyCastle::Math::BigInteger* a,
                                                                                      ::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* validation);

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_a() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_a();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_p() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_p();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_q() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_q();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* const& __cordl_internal_get_validation() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters*& __cordl_internal_get_validation();

  constexpr void __cordl_internal_set_a(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_p(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_q(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_validation(::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* value);

  /// @brief Method .ctor, addr 0x23bec8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* a);

  /// @brief Method .ctor, addr 0x23bee74, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* a,
                    ::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* validation);

  /// @brief Method get_A, addr 0x23bef58, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_A();

  /// @brief Method get_P, addr 0x23bef48, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_P();

  /// @brief Method get_Q, addr 0x23bef50, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Q();

  /// @brief Method get_ValidationParameters, addr 0x23bef60, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* get_ValidationParameters();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3410Parameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Gost3410Parameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3410Parameters(Gost3410Parameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410Parameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3410Parameters(Gost3410Parameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1053 };

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
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters, ___p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters, ___q) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters, ___a) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters, ___validation) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*, "Org.BouncyCastle.Crypto.Parameters", "Gost3410Parameters");
