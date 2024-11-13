#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/DsaSigner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DsaSigner)
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaKCalculator;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDsaExt;
}
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class DsaSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::DsaSigner);
// Type: Org.BouncyCastle.Crypto.Signers::DsaSigner
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Signers::DsaSigner*
class CORDL_TYPE DsaSigner : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  __declspec(property(get = get_Order)) ::Org::BouncyCastle::Math::BigInteger* Order;

  /// @brief Field kCalculator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_kCalculator, put = __cordl_internal_set_kCalculator)) ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters* key;

  /// @brief Field random, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random)) ::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDsa"
  constexpr operator ::Org::BouncyCastle::Crypto::IDsa*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDsaExt"
  constexpr operator ::Org::BouncyCastle::Crypto::IDsaExt*() noexcept;

  /// @brief Method CalculateE, addr 0x2399efc, size 0xdc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateE(::Org::BouncyCastle::Math::BigInteger* n, ::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method GenerateSignature, addr 0x2399928, size 0x3b8, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> GenerateSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method Init, addr 0x2399680, size 0x284, virtual true, abstract: false, final false
  inline void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method InitSecureRandom, addr 0x2399fd8, size 0x6c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Security::SecureRandom* InitSecureRandom(bool needed, ::Org::BouncyCastle::Security::SecureRandom* provided);

  static inline ::Org::BouncyCastle::Crypto::Signers::DsaSigner* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Signers::DsaSigner* New_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator);

  /// @brief Method VerifySignature, addr 0x2399ce0, size 0x21c, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> message, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::BigInteger* s);

  constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*& __cordl_internal_get_kCalculator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*> const& __cordl_internal_get_kCalculator() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*> const& __cordl_internal_get_key() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __cordl_internal_get_random() const;

  constexpr void __cordl_internal_set_kCalculator(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* value);

  constexpr void __cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters* value);

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0x23995ac, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2399614, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator);

  /// @brief Method get_AlgorithmName, addr 0x2399640, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_Order, addr 0x2399904, size 0x24, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Order();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDsa"
  constexpr ::Org::BouncyCastle::Crypto::IDsa* i___Org__BouncyCastle__Crypto__IDsa() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDsaExt"
  constexpr ::Org::BouncyCastle::Crypto::IDsaExt* i___Org__BouncyCastle__Crypto__IDsaExt() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DsaSigner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DsaSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DsaSigner(DsaSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DsaSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DsaSigner(DsaSigner const&) = delete;

  /// @brief Field kCalculator, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* ___kCalculator;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters* ___key;

  /// @brief Field random, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1127 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::DsaSigner, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::DsaSigner, ___kCalculator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::DsaSigner, ___key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::DsaSigner, ___random) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::DsaSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::DsaSigner*, "Org.BouncyCastle.Crypto.Signers", "DsaSigner");
