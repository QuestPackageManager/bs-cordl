#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__SerpentEngineBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerpentEngine)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SerpentEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::SerpentEngine);
// Type: Org.BouncyCastle.Crypto.Engines::SerpentEngine
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(869))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(870))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::SerpentEngine*
class CORDL_TYPE SerpentEngine : public ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase {
public:
  // Declarations
  /// @brief Method MakeWorkingKey, addr 0xf0e300, size 0x1590, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> MakeWorkingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method EncryptBlock, addr 0xf0f890, size 0x1544, virtual true, abstract: false, final false
  inline void EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method DecryptBlock, addr 0xf10dd4, size 0x1734, virtual true, abstract: false, final false
  inline void DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  static inline ::Org::BouncyCastle::Crypto::Engines::SerpentEngine* New_ctor();

  /// @brief Method .ctor, addr 0xf12508, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SerpentEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerpentEngine(SerpentEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerpentEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerpentEngine(SerpentEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerpentEngine();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::SerpentEngine, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SerpentEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SerpentEngine*, "Org.BouncyCastle.Crypto.Engines", "SerpentEngine");
