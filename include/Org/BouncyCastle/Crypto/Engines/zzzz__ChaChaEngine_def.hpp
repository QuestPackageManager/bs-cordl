#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\ChaChaEngine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Salsa20Engine_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChaChaEngine)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class ChaChaEngine;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*, "Org.BouncyCastle.Crypto.Engines", "ChaChaEngine");
// Dependencies Org.BouncyCastle.Crypto.Engines.Salsa20Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.ChaChaEngine
class CORDL_TYPE ChaChaEngine : public ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Method AdvanceCounter, addr 0x33aa1bc, size 0x4c, virtual true, abstract: false, final false
  inline void AdvanceCounter();

  /// @brief Method ChachaCore, addr 0x33a9d44, size 0x344, virtual false, abstract: false, final false
  static inline void ChachaCore(int32_t rounds, ::ArrayW<uint32_t> input, ::ArrayW<uint32_t> x);

  /// @brief Method GenerateKeyStream, addr 0x33aa338, size 0x3c, virtual true, abstract: false, final false
  inline void GenerateKeyStream(::ArrayW<uint8_t> output);

  static inline ::Org::BouncyCastle::Crypto::Engines::ChaChaEngine* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Engines::ChaChaEngine* New_ctor(int32_t rounds);

  /// @brief Method ResetCounter, addr 0x33aa208, size 0x2c, virtual true, abstract: false, final false
  inline void ResetCounter();

  /// @brief Method SetKey, addr 0x33aa234, size 0x104, virtual true, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes);

  /// @brief Method .ctor, addr 0x33aa088, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x33aa0e0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t rounds);

  /// @brief Method get_AlgorithmName, addr 0x33aa148, size 0x74, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChaChaEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChaChaEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChaChaEngine(ChaChaEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChaChaEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChaChaEngine(ChaChaEngine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 838 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Crypto::Engines::ChaChaEngine) == 0x40, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
