#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/RandomDsaKCalculator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RandomDsaKCalculator)
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaKCalculator;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class RandomDsaKCalculator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator);
// Type: Org.BouncyCastle.Crypto.Signers::RandomDsaKCalculator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Signers::RandomDsaKCalculator*
class CORDL_TYPE RandomDsaKCalculator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsDeterministic)) bool IsDeterministic;

  /// @brief Field q, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_q, put = __cordl_internal_set_q))::Org::BouncyCastle::Math::BigInteger* q;

  /// @brief Field random, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator"
  constexpr operator ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*() noexcept;

  /// @brief Method Init, addr 0x11b3690, size 0x50, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* d, ::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method Init, addr 0x11b3688, size 0x8, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator* New_ctor();

  /// @brief Method NextK, addr 0x11b36e0, size 0xc4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* NextK();

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_q();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_q() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __cordl_internal_get_random() const;

  constexpr void __cordl_internal_set_q(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0x11b37a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsDeterministic, addr 0x11b3680, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsDeterministic();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator"
  constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* i___Org__BouncyCastle__Crypto__Signers__IDsaKCalculator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RandomDsaKCalculator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RandomDsaKCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomDsaKCalculator(RandomDsaKCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomDsaKCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomDsaKCalculator(RandomDsaKCalculator const&) = delete;

  /// @brief Field q, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___q;

  /// @brief Field random, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator, ___q) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator, ___random) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*, "Org.BouncyCastle.Crypto.Signers", "RandomDsaKCalculator");
