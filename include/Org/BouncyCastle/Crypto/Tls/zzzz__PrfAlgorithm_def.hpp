#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/PrfAlgorithm.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrfAlgorithm)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class PrfAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::PrfAlgorithm);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.PrfAlgorithm
class CORDL_TYPE PrfAlgorithm : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::PrfAlgorithm* New_ctor();

  /// @brief Method .ctor, addr 0x2417efc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrfAlgorithm();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrfAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrfAlgorithm(PrfAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrfAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrfAlgorithm(PrfAlgorithm const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1259 };

  /// @brief Field tls_prf_legacy offset 0xffffffff size 0x4
  static constexpr int32_t tls_prf_legacy{ static_cast<int32_t>(0x0) };

  /// @brief Field tls_prf_sha256 offset 0xffffffff size 0x4
  static constexpr int32_t tls_prf_sha256{ static_cast<int32_t>(0x1) };

  /// @brief Field tls_prf_sha384 offset 0xffffffff size 0x4
  static constexpr int32_t tls_prf_sha384{ static_cast<int32_t>(0x2) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::PrfAlgorithm, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::PrfAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::PrfAlgorithm*, "Org.BouncyCastle.Crypto.Tls", "PrfAlgorithm");
