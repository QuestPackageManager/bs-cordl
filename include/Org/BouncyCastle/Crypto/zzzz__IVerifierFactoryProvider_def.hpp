#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVerifierFactoryProvider)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IVerifierFactoryProvider;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider);
// Type: Org.BouncyCastle.Crypto::IVerifierFactoryProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(995))
// CS Name: ::Org.BouncyCastle.Crypto::IVerifierFactoryProvider*
class CORDL_TYPE IVerifierFactoryProvider {
public:
  // Declarations
  /// @brief Method CreateVerifierFactory, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::IVerifierFactory* CreateVerifierFactory(::System::Object* algorithmDetails);

  // Ctor Parameters [CppParam { name: "", ty: "IVerifierFactoryProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVerifierFactoryProvider(IVerifierFactoryProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVerifierFactoryProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVerifierFactoryProvider(IVerifierFactoryProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*, "Org.BouncyCastle.Crypto", "IVerifierFactoryProvider");
