#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(WrapperProvider)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class WrapperProvider;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::WrapperProvider);
// Type: Org.BouncyCastle.Crypto.Operators::WrapperProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(986))
// CS Name: ::Org.BouncyCastle.Crypto.Operators::WrapperProvider*
class CORDL_TYPE WrapperProvider {
public:
  // Declarations
  /// @brief Method CreateWrapper, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* CreateWrapper(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  // Ctor Parameters [CppParam { name: "", ty: "WrapperProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WrapperProvider(WrapperProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WrapperProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WrapperProvider(WrapperProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::WrapperProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::WrapperProvider*, "Org.BouncyCastle.Crypto.Operators", "WrapperProvider");
