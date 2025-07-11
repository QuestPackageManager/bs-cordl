#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/BulkCipherAlgorithm.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BulkCipherAlgorithm)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class BulkCipherAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::BulkCipherAlgorithm);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.BulkCipherAlgorithm
class CORDL_TYPE BulkCipherAlgorithm : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::BulkCipherAlgorithm* New_ctor();

  /// @brief Method .ctor, addr 0x23e3978, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BulkCipherAlgorithm();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BulkCipherAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BulkCipherAlgorithm(BulkCipherAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BulkCipherAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BulkCipherAlgorithm(BulkCipherAlgorithm const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1182 };

  /// @brief Field aes offset 0xffffffff size 0x4
  static constexpr int32_t aes{ static_cast<int32_t>(0x6) };

  /// @brief Field cls_3des offset 0xffffffff size 0x4
  static constexpr int32_t cls_3des{ static_cast<int32_t>(0x4) };

  /// @brief Field cls_null offset 0xffffffff size 0x4
  static constexpr int32_t cls_null{ static_cast<int32_t>(0x0) };

  /// @brief Field des offset 0xffffffff size 0x4
  static constexpr int32_t des{ static_cast<int32_t>(0x3) };

  /// @brief Field des40 offset 0xffffffff size 0x4
  static constexpr int32_t des40{ static_cast<int32_t>(0x5) };

  /// @brief Field idea offset 0xffffffff size 0x4
  static constexpr int32_t idea{ static_cast<int32_t>(0x7) };

  /// @brief Field rc2 offset 0xffffffff size 0x4
  static constexpr int32_t rc2{ static_cast<int32_t>(0x2) };

  /// @brief Field rc4 offset 0xffffffff size 0x4
  static constexpr int32_t rc4{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::BulkCipherAlgorithm, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::BulkCipherAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::BulkCipherAlgorithm*, "Org.BouncyCastle.Crypto.Tls", "BulkCipherAlgorithm");
