#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/ChaChaEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Salsa20Engine_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChaChaEngine)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class ChaChaEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::ChaChaEngine);
// Type: Org.BouncyCastle.Crypto.Engines::ChaChaEngine
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::ChaChaEngine*
class CORDL_TYPE ChaChaEngine : public ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Method AdvanceCounter, addr 0x2315bd4, size 0x4c, virtual true, abstract: false, final false
  inline void AdvanceCounter();

  /// @brief Method ChachaCore, addr 0x2315460, size 0x638, virtual false, abstract: false, final false
  static inline void ChachaCore(int32_t rounds, ::ArrayW<uint32_t, ::Array<uint32_t>*> input, ::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method GenerateKeyStream, addr 0x2315d50, size 0x3c, virtual true, abstract: false, final false
  inline void GenerateKeyStream(::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  static inline ::Org::BouncyCastle::Crypto::Engines::ChaChaEngine* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Engines::ChaChaEngine* New_ctor(int32_t rounds);

  /// @brief Method ResetCounter, addr 0x2315c20, size 0x2c, virtual true, abstract: false, final false
  inline void ResetCounter();

  /// @brief Method SetKey, addr 0x2315c4c, size 0x104, virtual true, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes, ::ArrayW<uint8_t, ::Array<uint8_t>*> ivBytes);

  /// @brief Method .ctor, addr 0x2315a98, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2315aec, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(int32_t rounds);

  /// @brief Method get_AlgorithmName, addr 0x2315b50, size 0x84, virtual true, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::ChaChaEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*, "Org.BouncyCastle.Crypto.Engines", "ChaChaEngine");
