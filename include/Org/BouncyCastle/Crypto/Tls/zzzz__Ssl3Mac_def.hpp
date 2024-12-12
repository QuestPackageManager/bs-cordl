#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/Ssl3Mac.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ssl3Mac)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class Ssl3Mac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::Ssl3Mac);
// Dependencies Org.BouncyCastle.Crypto.IMac, System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.Ssl3Mac
class CORDL_TYPE Ssl3Mac : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field IPAD, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IPAD, put = setStaticF_IPAD)) ::ArrayW<uint8_t, ::Array<uint8_t>*> IPAD;

  /// @brief Field OPAD, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OPAD, put = setStaticF_OPAD)) ::ArrayW<uint8_t, ::Array<uint8_t>*> OPAD;

  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest)) ::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field padLength, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_padLength, put = __cordl_internal_set_padLength)) int32_t padLength;

  /// @brief Field secret, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_secret, put = __cordl_internal_set_secret)) ::ArrayW<uint8_t, ::Array<uint8_t>*> secret;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  /// @brief Method BlockUpdate, addr 0x241b338, size 0xc4, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal, addr 0x241b3fc, size 0x37c, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method GenPad, addr 0x241b94c, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenPad(uint8_t b, int32_t count);

  /// @brief Method GetMacSize, addr 0x241b1e8, size 0xa4, virtual true, abstract: false, final false
  inline int32_t GetMacSize();

  /// @brief Method Init, addr 0x241b110, size 0xd8, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Tls::Ssl3Mac* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method Reset, addr 0x241b778, size 0x1d4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x241b28c, size 0xac, virtual true, abstract: false, final false
  inline void Update(uint8_t input);

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_digest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_digest();

  constexpr int32_t const& __cordl_internal_get_padLength() const;

  constexpr int32_t& __cordl_internal_get_padLength();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_secret() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_secret();

  constexpr void __cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_padLength(int32_t value);

  constexpr void __cordl_internal_set_secret(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x241af84, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_IPAD();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_OPAD();

  /// @brief Method get_AlgorithmName, addr 0x241b050, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
  constexpr ::Org::BouncyCastle::Crypto::IMac* i___Org__BouncyCastle__Crypto__IMac() noexcept;

  static inline void setStaticF_IPAD(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_OPAD(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ssl3Mac();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Ssl3Mac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ssl3Mac(Ssl3Mac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ssl3Mac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ssl3Mac(Ssl3Mac const&) = delete;

  /// @brief Field IPAD_BYTE offset 0xffffffff size 0x1
  static constexpr uint8_t IPAD_BYTE{ static_cast<uint8_t>(0x36u) };

  /// @brief Field OPAD_BYTE offset 0xffffffff size 0x1
  static constexpr uint8_t OPAD_BYTE{ static_cast<uint8_t>(0x5cu) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1283 };

  /// @brief Field digest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field padLength, offset: 0x18, size: 0x4, def value: None
  int32_t ___padLength;

  /// @brief Field secret, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___secret;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::Ssl3Mac, ___digest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::Ssl3Mac, ___padLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::Ssl3Mac, ___secret) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::Ssl3Mac, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::Ssl3Mac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::Ssl3Mac*, "Org.BouncyCastle.Crypto.Tls", "Ssl3Mac");
