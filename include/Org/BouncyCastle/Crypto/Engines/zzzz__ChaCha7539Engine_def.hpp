#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/ChaCha7539Engine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Salsa20Engine_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChaCha7539Engine)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class ChaCha7539Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine);
// Dependencies Org.BouncyCastle.Crypto.Engines.Salsa20Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine
class CORDL_TYPE ChaCha7539Engine : public ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  __declspec(property(get = get_NonceSize)) int32_t NonceSize;

  /// @brief Method AdvanceCounter, addr 0x32ae00c, size 0x80, virtual true, abstract: false, final false
  inline void AdvanceCounter();

  /// @brief Method GenerateKeyStream, addr 0x32ae198, size 0x3c, virtual true, abstract: false, final false
  inline void GenerateKeyStream(::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  static inline ::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* New_ctor();

  /// @brief Method ResetCounter, addr 0x32ae08c, size 0x2c, virtual true, abstract: false, final false
  inline void ResetCounter();

  /// @brief Method SetKey, addr 0x32ae0b8, size 0xe0, virtual true, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes, ::ArrayW<uint8_t, ::Array<uint8_t>*> ivBytes);

  /// @brief Method .ctor, addr 0x32adf68, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AlgorithmName, addr 0x32adfc0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_NonceSize, addr 0x32ae004, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_NonceSize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChaCha7539Engine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChaCha7539Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChaCha7539Engine(ChaCha7539Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChaCha7539Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChaCha7539Engine(ChaCha7539Engine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 837 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*, "Org.BouncyCastle.Crypto.Engines", "ChaCha7539Engine");
