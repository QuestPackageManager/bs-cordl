#pragma once
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1218))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DeferredHash*
class CORDL_TYPE DeferredHash : public ::System::Object {
public:
  // Declarations
  /// @brief Field mContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mContext, put = __cordl_internal_set_mContext))::Org::BouncyCastle::Crypto::Tls::TlsContext* mContext;

  /// @brief Field mBuf, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mBuf, put = __cordl_internal_set_mBuf))::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer* mBuf;

  /// @brief Field mHashes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mHashes, put = __cordl_internal_set_mHashes))::System::Collections::IDictionary* mHashes;

  /// @brief Field mPrfHashAlgorithm, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_mPrfHashAlgorithm, put = __cordl_internal_set_mPrfHashAlgorithm)) int32_t mPrfHashAlgorithm;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* i___Org__BouncyCastle__Crypto__Tls__TlsHandshakeHash() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __cordl_internal_get_mContext();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> const& __cordl_internal_get_mContext() const;

  constexpr void __cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*& __cordl_internal_get_mBuf();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*> const& __cordl_internal_get_mBuf() const;

  constexpr void __cordl_internal_set_mBuf(::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer* value);

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_mHashes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_mHashes() const;

  constexpr void __cordl_internal_set_mHashes(::System::Collections::IDictionary* value);

  constexpr int32_t& __cordl_internal_get_mPrfHashAlgorithm();

  constexpr int32_t const& __cordl_internal_get_mPrfHashAlgorithm() const;

  constexpr void __cordl_internal_set_mPrfHashAlgorithm(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Tls::DeferredHash* New_ctor();

  /// @brief Method .ctor, addr 0xf90804, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::DeferredHash* New_ctor(uint8_t prfHashAlgorithm, ::Org::BouncyCastle::Crypto::IDigest* prfHash);

  /// @brief Method .ctor, addr 0xf908b0, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(uint8_t prfHashAlgorithm, ::Org::BouncyCastle::Crypto::IDigest* prfHash);

  /// @brief Method Init, addr 0xf909e8, size 0x8, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method NotifyPrfDetermined, addr 0xf909f0, size 0x180, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* NotifyPrfDetermined();

  /// @brief Method TrackHashAlgorithm, addr 0xf90be8, size 0x6c, virtual true, abstract: false, final false
  inline void TrackHashAlgorithm(uint8_t hashAlgorithm);

  /// @brief Method SealHashAlgorithms, addr 0xf90c54, size 0x10, virtual true, abstract: false, final false
  inline void SealHashAlgorithms();

  /// @brief Method StopTracking, addr 0xf90c64, size 0x1c4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* StopTracking();

  /// @brief Method ForkPrfHash, addr 0xf90e28, size 0x1b4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IDigest* ForkPrfHash();

  /// @brief Method GetFinalHash, addr 0xf90fdc, size 0x220, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetFinalHash(uint8_t hashAlgorithm);

  /// @brief Method get_AlgorithmName, addr 0xf911fc, size 0x50, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetByteLength, addr 0xf9124c, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize, addr 0xf9129c, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetDigestSize();

  /// @brief Method Update, addr 0xf912ec, size 0x43c, virtual true, abstract: false, final false
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate, addr 0xf91728, size 0x460, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal, addr 0xf91b88, size 0x50, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xf91bd8, size 0x428, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method CheckStopBuffering, addr 0xf92000, size 0x454, virtual true, abstract: false, final false
  inline void CheckStopBuffering();

  /// @brief Method CheckTrackingHash, addr 0xf92454, size 0x1a0, virtual true, abstract: false, final false
  inline void CheckTrackingHash(uint8_t hashAlgorithm);

  // Ctor Parameters [CppParam { name: "", ty: "DeferredHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeferredHash(DeferredHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeferredHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeferredHash(DeferredHash const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeferredHash();

public:
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
