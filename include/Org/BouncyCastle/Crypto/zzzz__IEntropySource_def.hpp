#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IEntropySource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IEntropySource)
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IEntropySource);
// Dependencies
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.IEntropySource
class CORDL_TYPE IEntropySource {
public:
  // Declarations
  __declspec(property(get = get_EntropySize)) int32_t EntropySize;

  __declspec(property(get = get_IsPredictionResistant)) bool IsPredictionResistant;

  /// @brief Method GetEntropy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEntropy();

  /// @brief Method get_EntropySize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_EntropySize();

  /// @brief Method get_IsPredictionResistant, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsPredictionResistant();

  // Ctor Parameters [CppParam { name: "", ty: "IEntropySource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEntropySource(IEntropySource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1102 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IEntropySource);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IEntropySource*, "Org.BouncyCastle.Crypto", "IEntropySource");
