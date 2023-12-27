#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMacDsaKCalculator)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaKCalculator;
}
namespace Org::BouncyCastle::Crypto::Macs {
class HMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class HMacDsaKCalculator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator);
// Type: Org.BouncyCastle.Crypto.Signers::HMacDsaKCalculator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1143))
// CS Name: ::Org.BouncyCastle.Crypto.Signers::HMacDsaKCalculator*
class CORDL_TYPE HMacDsaKCalculator : public ::System::Object {
public:
  // Declarations
  /// @brief Field hMac, offset 0x10, size 0x8
  __declspec(property(get = __get_hMac, put = __set_hMac))::Org::BouncyCastle::Crypto::Macs::HMac* hMac;

  /// @brief Field K, offset 0x18, size 0x8
  __declspec(property(get = __get_K, put = __set_K))::ArrayW<uint8_t, ::Array<uint8_t>*> K;

  /// @brief Field V, offset 0x20, size 0x8
  __declspec(property(get = __get_V, put = __set_V))::ArrayW<uint8_t, ::Array<uint8_t>*> V;

  /// @brief Field n, offset 0x28, size 0x8
  __declspec(property(get = __get_n, put = __set_n))::Org::BouncyCastle::Math::BigInteger* n;

  __declspec(property(get = get_IsDeterministic)) bool IsDeterministic;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator"
  constexpr operator ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Macs::HMac*& __get_hMac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Macs::HMac*> const& __get_hMac() const;

  constexpr void __set_hMac(::Org::BouncyCastle::Crypto::Macs::HMac* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_K();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_K() const;

  constexpr void __set_K(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_V();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_V() const;

  constexpr void __set_V(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_n();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_n() const;

  constexpr void __set_n(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor addr 0xf4e4ac size 0xe8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method get_IsDeterministic addr 0xf4e594 size 0x8 virtual true final false
  inline bool get_IsDeterministic();

  /// @brief Method Init addr 0xf4e59c size 0x50 virtual true final false
  inline void Init(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method Init addr 0xf4e5ec size 0x424 virtual true final true
  inline void Init(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* d, ::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method NextK addr 0xf4ead8 size 0x27c virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* NextK();

  /// @brief Method BitsToInt addr 0xf4ea10 size 0xc8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* BitsToInt(::ArrayW<uint8_t, ::Array<uint8_t>*> t);

  // Ctor Parameters [CppParam { name: "", ty: "HMacDsaKCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMacDsaKCalculator(HMacDsaKCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMacDsaKCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMacDsaKCalculator(HMacDsaKCalculator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMacDsaKCalculator();

public:
  /// @brief Field hMac, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Macs::HMac* ___hMac;

  /// @brief Field K, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___K;

  /// @brief Field V, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___V;

  /// @brief Field n, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___n;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*, "Org.BouncyCastle.Crypto.Signers", "HMacDsaKCalculator");
