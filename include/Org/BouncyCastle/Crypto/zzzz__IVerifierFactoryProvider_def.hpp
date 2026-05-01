#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IVerifierFactoryProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVerifierFactoryProvider)
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IVerifierFactoryProvider;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider);
// Dependencies
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.IVerifierFactoryProvider
class CORDL_TYPE IVerifierFactoryProvider {
public:
  // Declarations
  /// @brief Method CreateVerifierFactory, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IVerifierFactory* CreateVerifierFactory(::System::Object* algorithmDetails);

  // Ctor Parameters [CppParam { name: "", ty: "IVerifierFactoryProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVerifierFactoryProvider(IVerifierFactoryProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 995 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*, "Org.BouncyCastle.Crypto", "IVerifierFactoryProvider");
