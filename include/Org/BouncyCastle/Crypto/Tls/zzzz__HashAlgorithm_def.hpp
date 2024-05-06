#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashAlgorithm)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class HashAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::HashAlgorithm);
// Type: Org.BouncyCastle.Crypto.Tls::HashAlgorithm
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::HashAlgorithm*
class CORDL_TYPE HashAlgorithm : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetName, addr 0x11f0c84, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW GetName(uint8_t hashAlgorithm);

  /// @brief Method GetText, addr 0x11f0d3c, size 0x17c, virtual false, abstract: false, final false
  static inline ::StringW GetText(uint8_t hashAlgorithm);

  /// @brief Method IsPrivate, addr 0x11f0eb8, size 0x10, virtual false, abstract: false, final false
  static inline bool IsPrivate(uint8_t hashAlgorithm);

  /// @brief Method IsRecognized, addr 0x11f0ec8, size 0x14, virtual false, abstract: false, final false
  static inline bool IsRecognized(uint8_t hashAlgorithm);

  static inline ::Org::BouncyCastle::Crypto::Tls::HashAlgorithm* New_ctor();

  /// @brief Method .ctor, addr 0x11f0edc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashAlgorithm();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashAlgorithm(HashAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashAlgorithm(HashAlgorithm const&) = delete;

  /// @brief Field md5 offset 0xffffffff size 0x1
  static constexpr uint8_t md5{ static_cast<uint8_t>(0x1u) };

  /// @brief Field none offset 0xffffffff size 0x1
  static constexpr uint8_t none{ static_cast<uint8_t>(0x0u) };

  /// @brief Field sha1 offset 0xffffffff size 0x1
  static constexpr uint8_t sha1{ static_cast<uint8_t>(0x2u) };

  /// @brief Field sha224 offset 0xffffffff size 0x1
  static constexpr uint8_t sha224{ static_cast<uint8_t>(0x3u) };

  /// @brief Field sha256 offset 0xffffffff size 0x1
  static constexpr uint8_t sha256{ static_cast<uint8_t>(0x4u) };

  /// @brief Field sha384 offset 0xffffffff size 0x1
  static constexpr uint8_t sha384{ static_cast<uint8_t>(0x5u) };

  /// @brief Field sha512 offset 0xffffffff size 0x1
  static constexpr uint8_t sha512{ static_cast<uint8_t>(0x6u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::HashAlgorithm, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::HashAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::HashAlgorithm*, "Org.BouncyCastle.Crypto.Tls", "HashAlgorithm");
