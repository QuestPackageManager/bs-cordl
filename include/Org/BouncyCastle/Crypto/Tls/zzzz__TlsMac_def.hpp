#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsMac)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsMac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsMac);
// Type: Org.BouncyCastle.Crypto.Tls::TlsMac
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1311))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsMac*
class CORDL_TYPE TlsMac : public ::System::Object {
public:
  // Declarations
  /// @brief Field context, offset 0x10, size 0x8
  __declspec(property(get = __get_context, put = __set_context))::Org::BouncyCastle::Crypto::Tls::TlsContext* context;

  /// @brief Field secret, offset 0x18, size 0x8
  __declspec(property(get = __get_secret, put = __set_secret))::ArrayW<uint8_t, ::Array<uint8_t>*> secret;

  /// @brief Field mac, offset 0x20, size 0x8
  __declspec(property(get = __get_mac, put = __set_mac))::Org::BouncyCastle::Crypto::IMac* mac;

  /// @brief Field digestBlockSize, offset 0x28, size 0x4
  __declspec(property(get = __get_digestBlockSize, put = __set_digestBlockSize)) int32_t digestBlockSize;

  /// @brief Field digestOverhead, offset 0x2c, size 0x4
  __declspec(property(get = __get_digestOverhead, put = __set_digestOverhead)) int32_t digestOverhead;

  /// @brief Field macLength, offset 0x30, size 0x4
  __declspec(property(get = __get_macLength, put = __set_macLength)) int32_t macLength;

  __declspec(property(get = get_MacSecret))::ArrayW<uint8_t, ::Array<uint8_t>*> MacSecret;

  __declspec(property(get = get_Size)) int32_t Size;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __get_context();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> const& __get_context() const;

  constexpr void __set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_secret();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_secret() const;

  constexpr void __set_secret(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __get_mac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& __get_mac() const;

  constexpr void __set_mac(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr int32_t& __get_digestBlockSize();

  constexpr int32_t const& __get_digestBlockSize() const;

  constexpr void __set_digestBlockSize(int32_t value);

  constexpr int32_t& __get_digestOverhead();

  constexpr int32_t const& __get_digestOverhead() const;

  constexpr void __set_digestOverhead(int32_t value);

  constexpr int32_t& __get_macLength();

  constexpr int32_t const& __get_macLength() const;

  constexpr void __set_macLength(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsMac* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t keyOff, int32_t keyLen);

  /// @brief Method .ctor, addr 0xfae054, size 0x404, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t keyOff, int32_t keyLen);

  /// @brief Method get_MacSecret, addr 0xfae504, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_MacSecret();

  /// @brief Method get_Size, addr 0xfae50c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Size();

  /// @brief Method CalculateMac, addr 0xfae514, size 0x2f4, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateMac(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> message, int32_t offset, int32_t length);

  /// @brief Method CalculateMacConstantTime, addr 0xfae9dc, size 0x284, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateMacConstantTime(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> message, int32_t offset, int32_t length, int32_t fullLength,
                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> dummyData);

  /// @brief Method GetDigestBlockCount, addr 0xfaec60, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetDigestBlockCount(int32_t inputLength);

  /// @brief Method Truncate, addr 0xfaec70, size 0x88, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Truncate(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  // Ctor Parameters [CppParam { name: "", ty: "TlsMac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsMac(TlsMac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsMac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsMac(TlsMac const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsMac();

public:
  /// @brief Field context, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsContext* ___context;

  /// @brief Field secret, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___secret;

  /// @brief Field mac, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___mac;

  /// @brief Field digestBlockSize, offset: 0x28, size: 0x4, def value: None
  int32_t ___digestBlockSize;

  /// @brief Field digestOverhead, offset: 0x2c, size: 0x4, def value: None
  int32_t ___digestOverhead;

  /// @brief Field macLength, offset: 0x30, size: 0x4, def value: None
  int32_t ___macLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsMac, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsMac, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsMac, ___secret) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsMac, ___mac) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsMac, ___digestBlockSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsMac, ___digestOverhead) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsMac, ___macLength) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsMac*, "Org.BouncyCastle.Crypto.Tls", "TlsMac");
