#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\IKeyWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IKeyWrapper)
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IKeyWrapper;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::IKeyWrapper*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::IKeyWrapper*, "Org.BouncyCastle.Crypto", "IKeyWrapper");
// Dependencies
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.IKeyWrapper
class CORDL_TYPE IKeyWrapper {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmDetails)) ::System::Object* AlgorithmDetails;

  /// @brief Method Wrap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockResult* Wrap(::ArrayW<uint8_t> keyData);

  /// @brief Method get_AlgorithmDetails, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_AlgorithmDetails();

  // Ctor Parameters [CppParam { name: "", ty: "IKeyWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKeyWrapper(IKeyWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 983 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
