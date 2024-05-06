#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DsaParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaValidationParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::DsaParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::DsaParameters
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::DsaParameters*
class CORDL_TYPE DsaParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_G))::Org::BouncyCastle::Math::BigInteger* G;

  __declspec(property(get = get_P))::Org::BouncyCastle::Math::BigInteger* P;

  __declspec(property(get = get_Q))::Org::BouncyCastle::Math::BigInteger* Q;

  __declspec(property(get = get_ValidationParameters))::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* ValidationParameters;

  /// @brief Field g, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g))::Org::BouncyCastle::Math::BigInteger* g;

  /// @brief Field p, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p))::Org::BouncyCastle::Math::BigInteger* p;

  /// @brief Field q, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_q, put = __cordl_internal_set_q))::Org::BouncyCastle::Math::BigInteger* q;

  /// @brief Field validation, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_validation, put = __cordl_internal_set_validation))::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* validation;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  /// @brief Method Equals, addr 0x1190458, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x11904f4, size 0x80, virtual false, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::DsaParameters* other);

  /// @brief Method GetHashCode, addr 0x1190574, size 0x70, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                                 ::Org::BouncyCastle::Math::BigInteger* g);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                                 ::Org::BouncyCastle::Math::BigInteger* g,
                                                                                 ::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* parameters);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_g();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_g() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_p() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_q();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_q() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters*& __cordl_internal_get_validation();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters*> const& __cordl_internal_get_validation() const;

  constexpr void __cordl_internal_set_g(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_p(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_q(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_validation(::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* value);

  /// @brief Method .ctor, addr 0x1190350, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* g);

  /// @brief Method .ctor, addr 0x1190358, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* g,
                    ::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* parameters);

  /// @brief Method get_G, addr 0x1190448, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_G();

  /// @brief Method get_P, addr 0x1190438, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_P();

  /// @brief Method get_Q, addr 0x1190440, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Q();

  /// @brief Method get_ValidationParameters, addr 0x1190450, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* get_ValidationParameters();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DsaParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DsaParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DsaParameters(DsaParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DsaParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DsaParameters(DsaParameters const&) = delete;

  /// @brief Field p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___p;

  /// @brief Field q, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___q;

  /// @brief Field g, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___g;

  /// @brief Field validation, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* ___validation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::DsaParameters, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DsaParameters, ___p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DsaParameters, ___q) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DsaParameters, ___g) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DsaParameters, ___validation) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DsaParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DsaParameters*, "Org.BouncyCastle.Crypto.Parameters", "DsaParameters");
