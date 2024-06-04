#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DeferredHash.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeferredHash)
namespace Org::BouncyCastle::Crypto::Tls {
class DigestInputBuffer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DeferredHash;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DeferredHash);
// Type: Org.BouncyCastle.Crypto.Tls::DeferredHash
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DeferredHash*
class CORDL_TYPE DeferredHash : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Field mBuf, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mBuf, put = __cordl_internal_set_mBuf))::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer* mBuf;

  /// @brief Field mContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mContext, put = __cordl_internal_set_mContext))::Org::BouncyCastle::Crypto::Tls::TlsContext* mContext;

  /// @brief Field mHashes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mHashes, put = __cordl_internal_set_mHashes))::System::Collections::IDictionary* mHashes;

  /// @brief Field mPrfHashAlgorithm, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_mPrfHashAlgorithm, put = __cordl_internal_set_mPrfHashAlgorithm)) int32_t mPrfHashAlgorithm;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*() noexcept;

  /// @brief Method BlockUpdate, addr 0x11cb914, size 0x460, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method CheckStopBuffering, addr 0x11cc1ec, size 0x454, virtual true, abstract: false, final false
  inline void CheckStopBuffering();

  /// @brief Method CheckTrackingHash, addr 0x11cc640, size 0x1a0, virtual true, abstract: false, final false
  inline void CheckTrackingHash(uint8_t hashAlgorithm);

  /// @brief Method DoFinal, addr 0x11cbd74, size 0x50, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ForkPrfHash, addr 0x11cb014, size 0x1b4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IDigest* ForkPrfHash();

  /// @brief Method GetByteLength, addr 0x11cb438, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize, addr 0x11cb488, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetDigestSize();

  /// @brief Method GetFinalHash, addr 0x11cb1c8, size 0x220, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetFinalHash(uint8_t hashAlgorithm);

  /// @brief Method Init, addr 0x11cabd4, size 0x8, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  static inline ::Org::BouncyCastle::Crypto::Tls::DeferredHash* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::DeferredHash* New_ctor(uint8_t prfHashAlgorithm, ::Org::BouncyCastle::Crypto::IDigest* prfHash);

  /// @brief Method NotifyPrfDetermined, addr 0x11cabdc, size 0x180, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* NotifyPrfDetermined();

  /// @brief Method Reset, addr 0x11cbdc4, size 0x428, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method SealHashAlgorithms, addr 0x11cae40, size 0x10, virtual true, abstract: false, final false
  inline void SealHashAlgorithms();

  /// @brief Method StopTracking, addr 0x11cae50, size 0x1c4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* StopTracking();

  /// @brief Method TrackHashAlgorithm, addr 0x11cadd4, size 0x6c, virtual true, abstract: false, final false
  inline void TrackHashAlgorithm(uint8_t hashAlgorithm);

  /// @brief Method Update, addr 0x11cb4d8, size 0x43c, virtual true, abstract: false, final false
  inline void Update(uint8_t input);

  constexpr ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*& __cordl_internal_get_mBuf();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*> const& __cordl_internal_get_mBuf() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __cordl_internal_get_mContext();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> const& __cordl_internal_get_mContext() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_mHashes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_mHashes() const;

  constexpr int32_t const& __cordl_internal_get_mPrfHashAlgorithm() const;

  constexpr int32_t& __cordl_internal_get_mPrfHashAlgorithm();

  constexpr void __cordl_internal_set_mBuf(::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer* value);

  constexpr void __cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  constexpr void __cordl_internal_set_mHashes(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_mPrfHashAlgorithm(int32_t value);

  /// @brief Method .ctor, addr 0x11ca9f0, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x11caa9c, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(uint8_t prfHashAlgorithm, ::Org::BouncyCastle::Crypto::IDigest* prfHash);

  /// @brief Method get_AlgorithmName, addr 0x11cb3e8, size 0x50, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* i___Org__BouncyCastle__Crypto__Tls__TlsHandshakeHash() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeferredHash();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeferredHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeferredHash(DeferredHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeferredHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeferredHash(DeferredHash const&) = delete;

  /// @brief Field mContext, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsContext* ___mContext;

  /// @brief Field mBuf, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer* ___mBuf;

  /// @brief Field mHashes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___mHashes;

  /// @brief Field mPrfHashAlgorithm, offset: 0x28, size: 0x4, def value: None
  int32_t ___mPrfHashAlgorithm;

  /// @brief Field BUFFERING_HASH_LIMIT offset 0xffffffff size 0x4
  static constexpr int32_t BUFFERING_HASH_LIMIT{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DeferredHash, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DeferredHash, ___mContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DeferredHash, ___mBuf) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DeferredHash, ___mHashes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DeferredHash, ___mPrfHashAlgorithm) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DeferredHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DeferredHash*, "Org.BouncyCastle.Crypto.Tls", "DeferredHash");
