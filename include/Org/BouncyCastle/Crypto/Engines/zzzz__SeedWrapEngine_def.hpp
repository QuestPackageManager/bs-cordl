#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/SeedWrapEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Rfc3394WrapEngine_def.hpp"
CORDL_MODULE_EXPORT(SeedWrapEngine)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SeedWrapEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::SeedWrapEngine);
// Dependencies Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.SeedWrapEngine
class CORDL_TYPE SeedWrapEngine : public ::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Engines::SeedWrapEngine* New_ctor();

  /// @brief Method .ctor, addr 0x236d628, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SeedWrapEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SeedWrapEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SeedWrapEngine(SeedWrapEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SeedWrapEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SeedWrapEngine(SeedWrapEngine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 868 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::SeedWrapEngine, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SeedWrapEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SeedWrapEngine*, "Org.BouncyCastle.Crypto.Engines", "SeedWrapEngine");
