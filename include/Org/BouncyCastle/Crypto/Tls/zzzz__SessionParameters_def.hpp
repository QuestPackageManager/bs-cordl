#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/SessionParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SessionParameters)
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __SessionParameters__Builder;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __SessionParameters__Builder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::SessionParameters);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder);
// Type: ::Builder
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::SessionParameters::Builder*
class CORDL_TYPE __SessionParameters__Builder : public ::System::Object {
public:
  // Declarations
  /// @brief Field mCipherSuite, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_mCipherSuite, put = __cordl_internal_set_mCipherSuite)) int32_t mCipherSuite;

  /// @brief Field mCompressionAlgorithm, offset 0x14, size 0x2
  __declspec(property(get = __cordl_internal_get_mCompressionAlgorithm, put = __cordl_internal_set_mCompressionAlgorithm)) int16_t mCompressionAlgorithm;

  /// @brief Field mEncodedServerExtensions, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mEncodedServerExtensions, put = __cordl_internal_set_mEncodedServerExtensions)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mEncodedServerExtensions;

  /// @brief Field mExtendedMasterSecret, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_mExtendedMasterSecret, put = __cordl_internal_set_mExtendedMasterSecret)) bool mExtendedMasterSecret;

  /// @brief Field mMasterSecret, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mMasterSecret, put = __cordl_internal_set_mMasterSecret)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mMasterSecret;

  /// @brief Field mPeerCertificate, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mPeerCertificate, put = __cordl_internal_set_mPeerCertificate)) ::Org::BouncyCastle::Crypto::Tls::Certificate* mPeerCertificate;

  /// @brief Field mPskIdentity, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mPskIdentity, put = __cordl_internal_set_mPskIdentity)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mPskIdentity;

  /// @brief Field mSrpIdentity, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mSrpIdentity, put = __cordl_internal_set_mSrpIdentity)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mSrpIdentity;

  /// @brief Method Build, addr 0x23db210, size 0x124, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters* Build();

  static inline ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder* New_ctor();

  /// @brief Method SetCipherSuite, addr 0x23db3b4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder* SetCipherSuite(int32_t cipherSuite);

  /// @brief Method SetCompressionAlgorithm, addr 0x23db3bc, size 0xc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder* SetCompressionAlgorithm(uint8_t compressionAlgorithm);

  /// @brief Method SetExtendedMasterSecret, addr 0x23db3c8, size 0xc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder* SetExtendedMasterSecret(bool extendedMasterSecret);

  /// @brief Method SetMasterSecret, addr 0x23db3d4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder* SetMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> masterSecret);

  /// @brief Method SetPeerCertificate, addr 0x23db3dc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder* SetPeerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* peerCertificate);

  /// @brief Method SetPskIdentity, addr 0x23db3e4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder* SetPskIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> pskIdentity);

  /// @brief Method SetServerExtensions, addr 0x23db3f4, size 0x94, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder* SetServerExtensions(::System::Collections::IDictionary* serverExtensions);

  /// @brief Method SetSrpIdentity, addr 0x23db3ec, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder* SetSrpIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> srpIdentity);

  /// @brief Method Validate, addr 0x23db334, size 0x80, virtual false, abstract: false, final false
  inline void Validate(bool condition, ::StringW parameter);

  constexpr int32_t const& __cordl_internal_get_mCipherSuite() const;

  constexpr int32_t& __cordl_internal_get_mCipherSuite();

  constexpr int16_t const& __cordl_internal_get_mCompressionAlgorithm() const;

  constexpr int16_t& __cordl_internal_get_mCompressionAlgorithm();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mEncodedServerExtensions() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mEncodedServerExtensions();

  constexpr bool const& __cordl_internal_get_mExtendedMasterSecret() const;

  constexpr bool& __cordl_internal_get_mExtendedMasterSecret();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mMasterSecret() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mMasterSecret();

  constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& __cordl_internal_get_mPeerCertificate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Certificate*> const& __cordl_internal_get_mPeerCertificate() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mPskIdentity() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mPskIdentity();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mSrpIdentity() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mSrpIdentity();

  constexpr void __cordl_internal_set_mCipherSuite(int32_t value);

  constexpr void __cordl_internal_set_mCompressionAlgorithm(int16_t value);

  constexpr void __cordl_internal_set_mEncodedServerExtensions(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mExtendedMasterSecret(bool value);

  constexpr void __cordl_internal_set_mMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mPeerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value);

  constexpr void __cordl_internal_set_mPskIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mSrpIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x23db1e8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SessionParameters__Builder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SessionParameters__Builder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SessionParameters__Builder(__SessionParameters__Builder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SessionParameters__Builder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SessionParameters__Builder(__SessionParameters__Builder const&) = delete;

  /// @brief Field mCipherSuite, offset: 0x10, size: 0x4, def value: None
  int32_t ___mCipherSuite;

  /// @brief Field mCompressionAlgorithm, offset: 0x14, size: 0x2, def value: None
  int16_t ___mCompressionAlgorithm;

  /// @brief Field mMasterSecret, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mMasterSecret;

  /// @brief Field mPeerCertificate, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::Certificate* ___mPeerCertificate;

  /// @brief Field mPskIdentity, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPskIdentity;

  /// @brief Field mSrpIdentity, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mSrpIdentity;

  /// @brief Field mEncodedServerExtensions, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mEncodedServerExtensions;

  /// @brief Field mExtendedMasterSecret, offset: 0x40, size: 0x1, def value: None
  bool ___mExtendedMasterSecret;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1272 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder, ___mCipherSuite) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder, ___mCompressionAlgorithm) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder, ___mMasterSecret) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder, ___mPeerCertificate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder, ___mPskIdentity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder, ___mSrpIdentity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder, ___mEncodedServerExtensions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder, ___mExtendedMasterSecret) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::SessionParameters
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::SessionParameters*
class CORDL_TYPE SessionParameters : public ::System::Object {
public:
  // Declarations
  using Builder = ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder;

  __declspec(property(get = get_CipherSuite)) int32_t CipherSuite;

  __declspec(property(get = get_CompressionAlgorithm)) uint8_t CompressionAlgorithm;

  __declspec(property(get = get_IsExtendedMasterSecret)) bool IsExtendedMasterSecret;

  __declspec(property(get = get_MasterSecret)) ::ArrayW<uint8_t, ::Array<uint8_t>*> MasterSecret;

  __declspec(property(get = get_PeerCertificate)) ::Org::BouncyCastle::Crypto::Tls::Certificate* PeerCertificate;

  __declspec(property(get = get_PskIdentity)) ::ArrayW<uint8_t, ::Array<uint8_t>*> PskIdentity;

  __declspec(property(get = get_SrpIdentity)) ::ArrayW<uint8_t, ::Array<uint8_t>*> SrpIdentity;

  /// @brief Field mCipherSuite, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_mCipherSuite, put = __cordl_internal_set_mCipherSuite)) int32_t mCipherSuite;

  /// @brief Field mCompressionAlgorithm, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_mCompressionAlgorithm, put = __cordl_internal_set_mCompressionAlgorithm)) uint8_t mCompressionAlgorithm;

  /// @brief Field mEncodedServerExtensions, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mEncodedServerExtensions, put = __cordl_internal_set_mEncodedServerExtensions)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mEncodedServerExtensions;

  /// @brief Field mExtendedMasterSecret, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_mExtendedMasterSecret, put = __cordl_internal_set_mExtendedMasterSecret)) bool mExtendedMasterSecret;

  /// @brief Field mMasterSecret, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mMasterSecret, put = __cordl_internal_set_mMasterSecret)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mMasterSecret;

  /// @brief Field mPeerCertificate, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mPeerCertificate, put = __cordl_internal_set_mPeerCertificate)) ::Org::BouncyCastle::Crypto::Tls::Certificate* mPeerCertificate;

  /// @brief Field mPskIdentity, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mPskIdentity, put = __cordl_internal_set_mPskIdentity)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mPskIdentity;

  /// @brief Field mSrpIdentity, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mSrpIdentity, put = __cordl_internal_set_mSrpIdentity)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mSrpIdentity;

  /// @brief Method Clear, addr 0x23dad10, size 0x70, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Copy, addr 0x23dad80, size 0xac, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters* Copy();

  static inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters* New_ctor(int32_t cipherSuite, uint8_t compressionAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> masterSecret,
                                                                              ::Org::BouncyCastle::Crypto::Tls::Certificate* peerCertificate, ::ArrayW<uint8_t, ::Array<uint8_t>*> pskIdentity,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> srpIdentity, ::ArrayW<uint8_t, ::Array<uint8_t>*> encodedServerExtensions,
                                                                              bool extendedMasterSecret);

  /// @brief Method ReadServerExtensions, addr 0x23dae64, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* ReadServerExtensions();

  constexpr int32_t const& __cordl_internal_get_mCipherSuite() const;

  constexpr int32_t& __cordl_internal_get_mCipherSuite();

  constexpr uint8_t const& __cordl_internal_get_mCompressionAlgorithm() const;

  constexpr uint8_t& __cordl_internal_get_mCompressionAlgorithm();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mEncodedServerExtensions() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mEncodedServerExtensions();

  constexpr bool const& __cordl_internal_get_mExtendedMasterSecret() const;

  constexpr bool& __cordl_internal_get_mExtendedMasterSecret();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mMasterSecret() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mMasterSecret();

  constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& __cordl_internal_get_mPeerCertificate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Certificate*> const& __cordl_internal_get_mPeerCertificate() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mPskIdentity() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mPskIdentity();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mSrpIdentity() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mSrpIdentity();

  constexpr void __cordl_internal_set_mCipherSuite(int32_t value);

  constexpr void __cordl_internal_set_mCompressionAlgorithm(uint8_t value);

  constexpr void __cordl_internal_set_mEncodedServerExtensions(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mExtendedMasterSecret(bool value);

  constexpr void __cordl_internal_set_mMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mPeerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value);

  constexpr void __cordl_internal_set_mPskIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mSrpIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x23dac34, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(int32_t cipherSuite, uint8_t compressionAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> masterSecret, ::Org::BouncyCastle::Crypto::Tls::Certificate* peerCertificate,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> pskIdentity, ::ArrayW<uint8_t, ::Array<uint8_t>*> srpIdentity, ::ArrayW<uint8_t, ::Array<uint8_t>*> encodedServerExtensions,
                    bool extendedMasterSecret);

  /// @brief Method get_CipherSuite, addr 0x23dae2c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CipherSuite();

  /// @brief Method get_CompressionAlgorithm, addr 0x23dae34, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_CompressionAlgorithm();

  /// @brief Method get_IsExtendedMasterSecret, addr 0x23dae3c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsExtendedMasterSecret();

  /// @brief Method get_MasterSecret, addr 0x23dae44, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_MasterSecret();

  /// @brief Method get_PeerCertificate, addr 0x23dae4c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::Certificate* get_PeerCertificate();

  /// @brief Method get_PskIdentity, addr 0x23dae54, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_PskIdentity();

  /// @brief Method get_SrpIdentity, addr 0x23dae5c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SrpIdentity();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SessionParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SessionParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SessionParameters(SessionParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SessionParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SessionParameters(SessionParameters const&) = delete;

  /// @brief Field mCipherSuite, offset: 0x10, size: 0x4, def value: None
  int32_t ___mCipherSuite;

  /// @brief Field mCompressionAlgorithm, offset: 0x14, size: 0x1, def value: None
  uint8_t ___mCompressionAlgorithm;

  /// @brief Field mMasterSecret, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mMasterSecret;

  /// @brief Field mPeerCertificate, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::Certificate* ___mPeerCertificate;

  /// @brief Field mPskIdentity, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPskIdentity;

  /// @brief Field mSrpIdentity, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mSrpIdentity;

  /// @brief Field mEncodedServerExtensions, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mEncodedServerExtensions;

  /// @brief Field mExtendedMasterSecret, offset: 0x40, size: 0x1, def value: None
  bool ___mExtendedMasterSecret;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1273 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::SessionParameters, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SessionParameters, ___mCipherSuite) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SessionParameters, ___mCompressionAlgorithm) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SessionParameters, ___mMasterSecret) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SessionParameters, ___mPeerCertificate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SessionParameters, ___mPskIdentity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SessionParameters, ___mSrpIdentity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SessionParameters, ___mEncodedServerExtensions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SessionParameters, ___mExtendedMasterSecret) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SessionParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SessionParameters*, "Org.BouncyCastle.Crypto.Tls", "SessionParameters");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder*, "Org.BouncyCastle.Crypto.Tls", "SessionParameters/Builder");
