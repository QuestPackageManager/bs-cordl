#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CombinedHash)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CombinedHash;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::CombinedHash);
// Type: Org.BouncyCastle.Crypto.Tls::CombinedHash
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1202))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::CombinedHash*
class CORDL_TYPE CombinedHash : public ::System::Object {
public:
  // Declarations
  /// @brief Field mContext, offset 0x10, size 0x8
  __declspec(property(get = __get_mContext, put = __set_mContext))::Org::BouncyCastle::Crypto::Tls::TlsContext* mContext;

  /// @brief Field mMd5, offset 0x18, size 0x8
  __declspec(property(get = __get_mMd5, put = __set_mMd5))::Org::BouncyCastle::Crypto::IDigest* mMd5;

  /// @brief Field mSha1, offset 0x20, size 0x8
  __declspec(property(get = __get_mSha1, put = __set_mSha1))::Org::BouncyCastle::Crypto::IDigest* mSha1;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __get_mContext();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> const& __get_mContext() const;

  constexpr void __set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_mMd5();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_mMd5() const;

  constexpr void __set_mMd5(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_mSha1();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_mSha1() const;

  constexpr void __set_mSha1(::Org::BouncyCastle::Crypto::IDigest* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::CombinedHash* New_ctor();

  /// @brief Method .ctor addr 0xf61e6c size 0x7c virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::CombinedHash* New_ctor(::Org::BouncyCastle::Crypto::Tls::CombinedHash* t);

  /// @brief Method .ctor addr 0xf61ee8 size 0x9c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::CombinedHash* t);

  /// @brief Method Init addr 0xf61f84 size 0x8 virtual true final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method NotifyPrfDetermined addr 0xf61f8c size 0x4 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* NotifyPrfDetermined();

  /// @brief Method TrackHashAlgorithm addr 0xf61f90 size 0x50 virtual true final false
  inline void TrackHashAlgorithm(uint8_t hashAlgorithm);

  /// @brief Method SealHashAlgorithms addr 0xf61fe0 size 0x4 virtual true final false
  inline void SealHashAlgorithms();

  /// @brief Method StopTracking addr 0xf61fe4 size 0x60 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* StopTracking();

  /// @brief Method ForkPrfHash addr 0xf62044 size 0x60 virtual true final false
  inline ::Org::BouncyCastle::Crypto::IDigest* ForkPrfHash();

  /// @brief Method GetFinalHash addr 0xf620a4 size 0x50 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetFinalHash(uint8_t hashAlgorithm);

  /// @brief Method get_AlgorithmName addr 0xf620f4 size 0x12c virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetByteLength addr 0xf62220 size 0x148 virtual true final false
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize addr 0xf62368 size 0x114 virtual true final false
  inline int32_t GetDigestSize();

  /// @brief Method Update addr 0xf6247c size 0x11c virtual true final false
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate addr 0xf62598 size 0x13c virtual true final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal addr 0xf626d4 size 0x1ec virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xf628c0 size 0x108 virtual true final false
  inline void Reset();

  /// @brief Method Ssl3Complete addr 0xf629c8 size 0x33c virtual true final false
  inline void Ssl3Complete(::Org::BouncyCastle::Crypto::IDigest* d, ::ArrayW<uint8_t, ::Array<uint8_t>*> ipad, ::ArrayW<uint8_t, ::Array<uint8_t>*> opad, int32_t padLength);

  // Ctor Parameters [CppParam { name: "", ty: "CombinedHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CombinedHash(CombinedHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CombinedHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CombinedHash(CombinedHash const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CombinedHash();

public:
  /// @brief Field mContext, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsContext* ___mContext;

  /// @brief Field mMd5, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___mMd5;

  /// @brief Field mSha1, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___mSha1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::CombinedHash, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CombinedHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CombinedHash*, "Org.BouncyCastle.Crypto.Tls", "CombinedHash");
