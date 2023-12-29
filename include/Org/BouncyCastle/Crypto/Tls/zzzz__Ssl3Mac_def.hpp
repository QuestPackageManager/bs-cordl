#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ssl3Mac)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class Ssl3Mac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::Ssl3Mac);
// Type: Org.BouncyCastle.Crypto.Tls::Ssl3Mac
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1283))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::Ssl3Mac*
class CORDL_TYPE Ssl3Mac : public ::System::Object {
public:
  // Declarations
  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field padLength, offset 0x18, size 0x4
  __declspec(property(get = __get_padLength, put = __set_padLength)) int32_t padLength;

  /// @brief Field secret, offset 0x20, size 0x8
  __declspec(property(get = __get_secret, put = __set_secret))::ArrayW<uint8_t, ::Array<uint8_t>*> secret;

  /// @brief Field IPAD, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IPAD, put = setStaticF_IPAD))::ArrayW<uint8_t, ::Array<uint8_t>*> IPAD;

  /// @brief Field OPAD, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OPAD, put = setStaticF_OPAD))::ArrayW<uint8_t, ::Array<uint8_t>*> OPAD;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_digest() const;

  constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr int32_t& __get_padLength();

  constexpr int32_t const& __get_padLength() const;

  constexpr void __set_padLength(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_secret();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_secret() const;

  constexpr void __set_secret(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_IPAD(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_IPAD();

  static inline void setStaticF_OPAD(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_OPAD();

  static inline ::Org::BouncyCastle::Crypto::Tls::Ssl3Mac* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor addr 0xf21b2c size 0xcc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method get_AlgorithmName addr 0xf21bf8 size 0xc0 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init addr 0xf21cb8 size 0xd8 virtual true final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetMacSize addr 0xf21d90 size 0xa4 virtual true final false
  inline int32_t GetMacSize();

  /// @brief Method Update addr 0xf21e34 size 0xac virtual true final false
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate addr 0xf21ee0 size 0xc4 virtual true final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal addr 0xf21fa4 size 0x37c virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xf22320 size 0x1d4 virtual true final false
  inline void Reset();

  /// @brief Method GenPad addr 0xf224f4 size 0x98 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenPad(uint8_t b, int32_t count);

  // Ctor Parameters [CppParam { name: "", ty: "Ssl3Mac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ssl3Mac(Ssl3Mac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ssl3Mac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ssl3Mac(Ssl3Mac const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ssl3Mac();

public:
  /// @brief Field digest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field padLength, offset: 0x18, size: 0x4, def value: None
  int32_t ___padLength;

  /// @brief Field secret, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___secret;

  /// @brief Field IPAD_BYTE offset 0xffffffff size 0x1
  static constexpr uint8_t IPAD_BYTE{ static_cast<uint8_t>(0x36u) };

  /// @brief Field OPAD_BYTE offset 0xffffffff size 0x1
  static constexpr uint8_t OPAD_BYTE{ static_cast<uint8_t>(0x5cu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::Ssl3Mac, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::Ssl3Mac, ___digest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::Ssl3Mac, ___padLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::Ssl3Mac, ___secret) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::Ssl3Mac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::Ssl3Mac*, "Org.BouncyCastle.Crypto.Tls", "Ssl3Mac");
