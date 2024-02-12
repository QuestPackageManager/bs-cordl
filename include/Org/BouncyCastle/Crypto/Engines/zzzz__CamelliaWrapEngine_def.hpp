#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Rfc3394WrapEngine_def.hpp"
CORDL_MODULE_EXPORT(CamelliaWrapEngine)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class CamelliaWrapEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine);
// Type: Org.BouncyCastle.Crypto.Engines::CamelliaWrapEngine
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(827))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(832))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::CamelliaWrapEngine*
class CORDL_TYPE CamelliaWrapEngine : public ::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine* New_ctor();

  /// @brief Method .ctor, addr 0xeedb1c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CamelliaWrapEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CamelliaWrapEngine(CamelliaWrapEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CamelliaWrapEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CamelliaWrapEngine(CamelliaWrapEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CamelliaWrapEngine();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine*, "Org.BouncyCastle.Crypto.Engines", "CamelliaWrapEngine");
