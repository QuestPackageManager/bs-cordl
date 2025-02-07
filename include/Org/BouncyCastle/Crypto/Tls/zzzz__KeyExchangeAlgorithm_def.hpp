#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/KeyExchangeAlgorithm.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyExchangeAlgorithm)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class KeyExchangeAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::KeyExchangeAlgorithm);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.KeyExchangeAlgorithm
class CORDL_TYPE KeyExchangeAlgorithm : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::KeyExchangeAlgorithm* New_ctor();

  /// @brief Method .ctor, addr 0x2417cb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyExchangeAlgorithm();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyExchangeAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyExchangeAlgorithm(KeyExchangeAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyExchangeAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyExchangeAlgorithm(KeyExchangeAlgorithm const&) = delete;

  /// @brief Field DHE_DSS offset 0xffffffff size 0x4
  static constexpr int32_t DHE_DSS{ static_cast<int32_t>(0x3) };

  /// @brief Field DHE_DSS_EXPORT offset 0xffffffff size 0x4
  static constexpr int32_t DHE_DSS_EXPORT{ static_cast<int32_t>(0x4) };

  /// @brief Field DHE_PSK offset 0xffffffff size 0x4
  static constexpr int32_t DHE_PSK{ static_cast<int32_t>(0xe) };

  /// @brief Field DHE_RSA offset 0xffffffff size 0x4
  static constexpr int32_t DHE_RSA{ static_cast<int32_t>(0x5) };

  /// @brief Field DHE_RSA_EXPORT offset 0xffffffff size 0x4
  static constexpr int32_t DHE_RSA_EXPORT{ static_cast<int32_t>(0x6) };

  /// @brief Field DH_DSS offset 0xffffffff size 0x4
  static constexpr int32_t DH_DSS{ static_cast<int32_t>(0x7) };

  /// @brief Field DH_DSS_EXPORT offset 0xffffffff size 0x4
  static constexpr int32_t DH_DSS_EXPORT{ static_cast<int32_t>(0x8) };

  /// @brief Field DH_RSA offset 0xffffffff size 0x4
  static constexpr int32_t DH_RSA{ static_cast<int32_t>(0x9) };

  /// @brief Field DH_RSA_EXPORT offset 0xffffffff size 0x4
  static constexpr int32_t DH_RSA_EXPORT{ static_cast<int32_t>(0xa) };

  /// @brief Field DH_anon offset 0xffffffff size 0x4
  static constexpr int32_t DH_anon{ static_cast<int32_t>(0xb) };

  /// @brief Field DH_anon_EXPORT offset 0xffffffff size 0x4
  static constexpr int32_t DH_anon_EXPORT{ static_cast<int32_t>(0xc) };

  /// @brief Field ECDHE_ECDSA offset 0xffffffff size 0x4
  static constexpr int32_t ECDHE_ECDSA{ static_cast<int32_t>(0x11) };

  /// @brief Field ECDHE_PSK offset 0xffffffff size 0x4
  static constexpr int32_t ECDHE_PSK{ static_cast<int32_t>(0x18) };

  /// @brief Field ECDHE_RSA offset 0xffffffff size 0x4
  static constexpr int32_t ECDHE_RSA{ static_cast<int32_t>(0x13) };

  /// @brief Field ECDH_ECDSA offset 0xffffffff size 0x4
  static constexpr int32_t ECDH_ECDSA{ static_cast<int32_t>(0x10) };

  /// @brief Field ECDH_RSA offset 0xffffffff size 0x4
  static constexpr int32_t ECDH_RSA{ static_cast<int32_t>(0x12) };

  /// @brief Field ECDH_anon offset 0xffffffff size 0x4
  static constexpr int32_t ECDH_anon{ static_cast<int32_t>(0x14) };

  /// @brief Field PSK offset 0xffffffff size 0x4
  static constexpr int32_t PSK{ static_cast<int32_t>(0xd) };

  /// @brief Field RSA offset 0xffffffff size 0x4
  static constexpr int32_t RSA{ static_cast<int32_t>(0x1) };

  /// @brief Field RSA_EXPORT offset 0xffffffff size 0x4
  static constexpr int32_t RSA_EXPORT{ static_cast<int32_t>(0x2) };

  /// @brief Field RSA_PSK offset 0xffffffff size 0x4
  static constexpr int32_t RSA_PSK{ static_cast<int32_t>(0xf) };

  /// @brief Field SRP offset 0xffffffff size 0x4
  static constexpr int32_t SRP{ static_cast<int32_t>(0x15) };

  /// @brief Field SRP_DSS offset 0xffffffff size 0x4
  static constexpr int32_t SRP_DSS{ static_cast<int32_t>(0x16) };

  /// @brief Field SRP_RSA offset 0xffffffff size 0x4
  static constexpr int32_t SRP_RSA{ static_cast<int32_t>(0x17) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1252 };

  /// @brief Field NULL offset 0xffffffff size 0x4
  static constexpr int32_t _cordl_NULL{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::KeyExchangeAlgorithm, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::KeyExchangeAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::KeyExchangeAlgorithm*, "Org.BouncyCastle.Crypto.Tls", "KeyExchangeAlgorithm");
