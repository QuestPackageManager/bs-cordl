#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISignatureFactory)
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::ISignatureFactory);
// Type: Org.BouncyCastle.Crypto::ISignatureFactory
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(991))
// CS Name: ::Org.BouncyCastle.Crypto::ISignatureFactory*
class CORDL_TYPE ISignatureFactory {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmDetails))::System::Object* AlgorithmDetails;

  /// @brief Method get_AlgorithmDetails, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_AlgorithmDetails();

  /// @brief Method CreateCalculator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::IStreamCalculator* CreateCalculator();

  // Ctor Parameters [CppParam { name: "", ty: "ISignatureFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISignatureFactory(ISignatureFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISignatureFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISignatureFactory(ISignatureFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::ISignatureFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::ISignatureFactory*, "Org.BouncyCastle.Crypto", "ISignatureFactory");
