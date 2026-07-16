#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/SerpentEngine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__SerpentEngineBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerpentEngine)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SerpentEngine;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Engines::SerpentEngine*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Engines::SerpentEngine*, "Org.BouncyCastle.Crypto.Engines", "SerpentEngine");
// Dependencies Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.SerpentEngine
class CORDL_TYPE SerpentEngine : public ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase {
public:
  // Declarations
  /// @brief Method DecryptBlock, addr 0x33c2668, size 0x171c, virtual true, abstract: false, final false
  inline void DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff);

  /// @brief Method EncryptBlock, addr 0x33c11fc, size 0x146c, virtual true, abstract: false, final false
  inline void EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff);

  /// @brief Method MakeWorkingKey, addr 0x33bfd68, size 0x1494, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t> MakeWorkingKey(::ArrayW<uint8_t> key);

  static inline ::Org::BouncyCastle::Crypto::Engines::SerpentEngine* New_ctor();

  /// @brief Method .ctor, addr 0x33c3d84, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerpentEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerpentEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerpentEngine(SerpentEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerpentEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerpentEngine(SerpentEngine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 870 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Crypto::Engines::SerpentEngine) == 0x30, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
