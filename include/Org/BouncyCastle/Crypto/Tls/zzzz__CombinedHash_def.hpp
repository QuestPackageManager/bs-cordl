#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/CombinedHash.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CombinedHash)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CombinedHash;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::CombinedHash);
// Type: Org.BouncyCastle.Crypto.Tls::CombinedHash
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::CombinedHash*
class CORDL_TYPE CombinedHash : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field mContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mContext, put = __cordl_internal_set_mContext)) ::Org::BouncyCastle::Crypto::Tls::TlsContext* mContext;

  /// @brief Field mMd5, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mMd5, put = __cordl_internal_set_mMd5)) ::Org::BouncyCastle::Crypto::IDigest* mMd5;

  /// @brief Field mSha1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mSha1, put = __cordl_internal_set_mSha1)) ::Org::BouncyCastle::Crypto::IDigest* mSha1;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*() noexcept;

  /// @brief Method BlockUpdate, addr 0x23b33a4, size 0x13c, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal, addr 0x23b34e0, size 0x1e8, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ForkPrfHash, addr 0x23b2e5c, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IDigest* ForkPrfHash();

  /// @brief Method GetByteLength, addr 0x23b302c, size 0x148, virtual true, abstract: false, final false
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize, addr 0x23b3174, size 0x114, virtual true, abstract: false, final false
  inline int32_t GetDigestSize();

  /// @brief Method GetFinalHash, addr 0x23b2eb4, size 0x4c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetFinalHash(uint8_t hashAlgorithm);

  /// @brief Method Init, addr 0x23b2da8, size 0x8, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  static inline ::Org::BouncyCastle::Crypto::Tls::CombinedHash* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::CombinedHash* New_ctor(::Org::BouncyCastle::Crypto::Tls::CombinedHash* t);

  /// @brief Method NotifyPrfDetermined, addr 0x23b2db0, size 0x4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* NotifyPrfDetermined();

  /// @brief Method Reset, addr 0x23b36c8, size 0x108, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method SealHashAlgorithms, addr 0x23b2e00, size 0x4, virtual true, abstract: false, final false
  inline void SealHashAlgorithms();

  /// @brief Method Ssl3Complete, addr 0x23b37d0, size 0x33c, virtual true, abstract: false, final false
  inline void Ssl3Complete(::Org::BouncyCastle::Crypto::IDigest* d, ::ArrayW<uint8_t, ::Array<uint8_t>*> ipad, ::ArrayW<uint8_t, ::Array<uint8_t>*> opad, int32_t padLength);

  /// @brief Method StopTracking, addr 0x23b2e04, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* StopTracking();

  /// @brief Method TrackHashAlgorithm, addr 0x23b2db4, size 0x4c, virtual true, abstract: false, final false
  inline void TrackHashAlgorithm(uint8_t hashAlgorithm);

  /// @brief Method Update, addr 0x23b3288, size 0x11c, virtual true, abstract: false, final false
  inline void Update(uint8_t input);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __cordl_internal_get_mContext();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> const& __cordl_internal_get_mContext() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_mMd5();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __cordl_internal_get_mMd5() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_mSha1();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __cordl_internal_get_mSha1() const;

  constexpr void __cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  constexpr void __cordl_internal_set_mMd5(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_mSha1(::Org::BouncyCastle::Crypto::IDigest* value);

  /// @brief Method .ctor, addr 0x23b2c90, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23b2d0c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::CombinedHash* t);

  /// @brief Method get_AlgorithmName, addr 0x23b2f00, size 0x12c, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* i___Org__BouncyCastle__Crypto__Tls__TlsHandshakeHash() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CombinedHash();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CombinedHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CombinedHash(CombinedHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CombinedHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CombinedHash(CombinedHash const&) = delete;

  /// @brief Field mContext, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsContext* ___mContext;

  /// @brief Field mMd5, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___mMd5;

  /// @brief Field mSha1, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___mSha1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1202 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::CombinedHash, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::CombinedHash, ___mContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::CombinedHash, ___mMd5) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::CombinedHash, ___mSha1) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CombinedHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CombinedHash*, "Org.BouncyCastle.Crypto.Tls", "CombinedHash");
