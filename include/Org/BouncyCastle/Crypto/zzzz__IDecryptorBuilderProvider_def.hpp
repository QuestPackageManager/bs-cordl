#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IDecryptorBuilderProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDecryptorBuilderProvider)
namespace Org::BouncyCastle::Crypto {
class ICipherBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IDecryptorBuilderProvider;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider);
// Dependencies
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.IDecryptorBuilderProvider
class CORDL_TYPE IDecryptorBuilderProvider {
public:
  // Declarations
  /// @brief Method CreateDecryptorBuilder, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherBuilder* CreateDecryptorBuilder(::System::Object* algorithmDetails);

  // Ctor Parameters [CppParam { name: "", ty: "IDecryptorBuilderProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDecryptorBuilderProvider(IDecryptorBuilderProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1349 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider*, "Org.BouncyCastle.Crypto", "IDecryptorBuilderProvider");
