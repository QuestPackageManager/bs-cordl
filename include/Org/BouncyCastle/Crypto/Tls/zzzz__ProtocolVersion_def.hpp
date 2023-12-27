#pragma once
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
// Type: Org.BouncyCastle.Crypto.Tls::ProtocolVersion
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1260))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::ProtocolVersion*
class CORDL_TYPE ProtocolVersion : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x4
  __declspec(property(get = __get_version, put = __set_version)) int32_t version;

  /// @brief Field name, offset 0x18, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field SSLv3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SSLv3, put = setStaticF_SSLv3))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* SSLv3;

  /// @brief Field TLSv10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TLSv10, put = setStaticF_TLSv10))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* TLSv10;

  /// @brief Field TLSv11, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TLSv11, put = setStaticF_TLSv11))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* TLSv11;

  /// @brief Field TLSv12, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TLSv12, put = setStaticF_TLSv12))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* TLSv12;

  /// @brief Field DTLSv10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DTLSv10, put = setStaticF_DTLSv10))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* DTLSv10;

  /// @brief Field DTLSv12, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DTLSv12, put = setStaticF_DTLSv12))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* DTLSv12;

  __declspec(property(get = get_FullVersion)) int32_t FullVersion;

  __declspec(property(get = get_MajorVersion)) int32_t MajorVersion;

  __declspec(property(get = get_MinorVersion)) int32_t MinorVersion;

  __declspec(property(get = get_IsDtls)) bool IsDtls;

  __declspec(property(get = get_IsSsl)) bool IsSsl;

  __declspec(property(get = get_IsTls)) bool IsTls;

  constexpr int32_t& __get_version();

  constexpr int32_t const& __get_version() const;

  constexpr void __set_version(int32_t value);

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  static inline void setStaticF_SSLv3(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* getStaticF_SSLv3();

  static inline void setStaticF_TLSv10(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* getStaticF_TLSv10();

  static inline void setStaticF_TLSv11(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* getStaticF_TLSv11();

  static inline void setStaticF_TLSv12(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* getStaticF_TLSv12();

  static inline void setStaticF_DTLSv10(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* getStaticF_DTLSv10();

  static inline void setStaticF_DTLSv12(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* getStaticF_DTLSv12();

  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* New_ctor(int32_t v, ::StringW name);

  /// @brief Method .ctor addr 0xf9273c size 0x34 virtual false final false
  inline void _ctor(int32_t v, ::StringW name);

  /// @brief Method get_FullVersion addr 0xf92770 size 0x8 virtual false final false
  inline int32_t get_FullVersion();

  /// @brief Method get_MajorVersion addr 0xf92778 size 0xc virtual false final false
  inline int32_t get_MajorVersion();

  /// @brief Method get_MinorVersion addr 0xf92784 size 0x8 virtual false final false
  inline int32_t get_MinorVersion();

  /// @brief Method get_IsDtls addr 0xf9278c size 0x14 virtual false final false
  inline bool get_IsDtls();

  /// @brief Method get_IsSsl addr 0xf927a0 size 0x64 virtual false final false
  inline bool get_IsSsl();

  /// @brief Method get_IsTls addr 0xf92804 size 0x14 virtual false final false
  inline bool get_IsTls();

  /// @brief Method GetEquivalentTLSVersion addr 0xf92818 size 0x98 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* GetEquivalentTLSVersion();

  /// @brief Method IsEqualOrEarlierVersionOf addr 0xf928b0 size 0x58 virtual false final false
  inline bool IsEqualOrEarlierVersionOf(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version);

  /// @brief Method IsLaterVersionOf addr 0xf92908 size 0x54 virtual false final false
  inline bool IsLaterVersionOf(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version);

  /// @brief Method Equals addr 0xf9295c size 0x80 virtual true final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals addr 0xf929dc size 0x20 virtual false final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* other);

  /// @brief Method GetHashCode addr 0xf929fc size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Get addr 0xf92a04 size 0x1f8 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* Get(int32_t major, int32_t minor);

  /// @brief Method ToString addr 0xf92d64 size 0x8 virtual true final false
  inline ::StringW ToString();

  /// @brief Method GetUnknownVersion addr 0xf92bfc size 0x168 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* GetUnknownVersion(int32_t major, int32_t minor, ::StringW prefix);

  // Ctor Parameters [CppParam { name: "", ty: "ProtocolVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProtocolVersion(ProtocolVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProtocolVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProtocolVersion(ProtocolVersion const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProtocolVersion();

public:
  /// @brief Field version, offset: 0x10, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, "Org.BouncyCastle.Crypto.Tls", "ProtocolVersion");
