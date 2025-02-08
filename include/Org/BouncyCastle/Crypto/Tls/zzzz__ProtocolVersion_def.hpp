#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/ProtocolVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProtocolVersion)
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.ProtocolVersion
class CORDL_TYPE ProtocolVersion : public ::System::Object {
public:
  // Declarations
  /// @brief Field DTLSv10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DTLSv10, put = setStaticF_DTLSv10)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* DTLSv10;

  /// @brief Field DTLSv12, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DTLSv12, put = setStaticF_DTLSv12)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* DTLSv12;

  __declspec(property(get = get_FullVersion)) int32_t FullVersion;

  __declspec(property(get = get_IsDtls)) bool IsDtls;

  __declspec(property(get = get_IsSsl)) bool IsSsl;

  __declspec(property(get = get_IsTls)) bool IsTls;

  __declspec(property(get = get_MajorVersion)) int32_t MajorVersion;

  __declspec(property(get = get_MinorVersion)) int32_t MinorVersion;

  /// @brief Field SSLv3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SSLv3, put = setStaticF_SSLv3)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* SSLv3;

  /// @brief Field TLSv10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TLSv10, put = setStaticF_TLSv10)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* TLSv10;

  /// @brief Field TLSv11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TLSv11, put = setStaticF_TLSv11)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* TLSv11;

  /// @brief Field TLSv12, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TLSv12, put = setStaticF_TLSv12)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* TLSv12;

  /// @brief Field name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Method Equals, addr 0x24187dc, size 0x20, virtual false, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* other);

  /// @brief Method Equals, addr 0x241875c, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Get, addr 0x2418804, size 0x224, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* Get(int32_t major, int32_t minor);

  /// @brief Method GetEquivalentTLSVersion, addr 0x2418618, size 0x98, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* GetEquivalentTLSVersion();

  /// @brief Method GetHashCode, addr 0x24187fc, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetUnknownVersion, addr 0x2418a28, size 0x164, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* GetUnknownVersion(int32_t major, int32_t minor, ::StringW prefix);

  /// @brief Method IsEqualOrEarlierVersionOf, addr 0x24186b0, size 0x58, virtual false, abstract: false, final false
  inline bool IsEqualOrEarlierVersionOf(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version);

  /// @brief Method IsLaterVersionOf, addr 0x2418708, size 0x54, virtual false, abstract: false, final false
  inline bool IsLaterVersionOf(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version);

  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* New_ctor(int32_t v, ::StringW name);

  /// @brief Method ToString, addr 0x2418b8c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x241853c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t v, ::StringW name);

  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* getStaticF_DTLSv10();

  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* getStaticF_DTLSv12();

  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* getStaticF_SSLv3();

  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* getStaticF_TLSv10();

  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* getStaticF_TLSv11();

  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* getStaticF_TLSv12();

  /// @brief Method get_FullVersion, addr 0x2418570, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_FullVersion();

  /// @brief Method get_IsDtls, addr 0x241858c, size 0x14, virtual false, abstract: false, final false
  inline bool get_IsDtls();

  /// @brief Method get_IsSsl, addr 0x24185a0, size 0x64, virtual false, abstract: false, final false
  inline bool get_IsSsl();

  /// @brief Method get_IsTls, addr 0x2418604, size 0x14, virtual false, abstract: false, final false
  inline bool get_IsTls();

  /// @brief Method get_MajorVersion, addr 0x2418578, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_MajorVersion();

  /// @brief Method get_MinorVersion, addr 0x2418584, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MinorVersion();

  static inline void setStaticF_DTLSv10(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  static inline void setStaticF_DTLSv12(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  static inline void setStaticF_SSLv3(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  static inline void setStaticF_TLSv10(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  static inline void setStaticF_TLSv11(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  static inline void setStaticF_TLSv12(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProtocolVersion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProtocolVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProtocolVersion(ProtocolVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProtocolVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProtocolVersion(ProtocolVersion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1260 };

  /// @brief Field version, offset: 0x10, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion, ___name) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, "Org.BouncyCastle.Crypto.Tls", "ProtocolVersion");
