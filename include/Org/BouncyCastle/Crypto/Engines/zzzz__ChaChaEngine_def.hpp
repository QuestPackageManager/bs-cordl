#pragma once
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
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(836))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(838))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::ChaChaEngine*
class CORDL_TYPE ChaChaEngine : public ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  static inline ::Org::BouncyCastle::Crypto::Engines::ChaChaEngine* New_ctor();

  /// @brief Method .ctor, addr 0xef5098, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Engines::ChaChaEngine* New_ctor(int32_t rounds);

  /// @brief Method .ctor, addr 0xef50ec, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(int32_t rounds);

  /// @brief Method get_AlgorithmName, addr 0xef5150, size 0x84, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method AdvanceCounter, addr 0xef51d4, size 0x4c, virtual true, abstract: false, final false
  inline void AdvanceCounter();

  /// @brief Method ResetCounter, addr 0xef5220, size 0x2c, virtual true, abstract: false, final false
  inline void ResetCounter();

  /// @brief Method SetKey, addr 0xef524c, size 0x10c, virtual true, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes, ::ArrayW<uint8_t, ::Array<uint8_t>*> ivBytes);

  /// @brief Method GenerateKeyStream, addr 0xef5358, size 0x3c, virtual true, abstract: false, final false
  inline void GenerateKeyStream(::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method ChachaCore, addr 0xef4a50, size 0x648, virtual false, abstract: false, final false
  static inline void ChachaCore(int32_t rounds, ::ArrayW<uint32_t, ::Array<uint32_t>*> input, ::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  // Ctor Parameters [CppParam { name: "", ty: "ChaChaEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChaChaEngine(ChaChaEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChaChaEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChaChaEngine(ChaChaEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChaChaEngine();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::ChaChaEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*, "Org.BouncyCastle.Crypto.Engines", "ChaChaEngine");
