#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IVerifierFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVerifierFactory)
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IVerifierFactory);
// Type: Org.BouncyCastle.Crypto::IVerifierFactory
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::IVerifierFactory*
class CORDL_TYPE IVerifierFactory {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmDetails))::System::Object* AlgorithmDetails;

  /// @brief Method CreateCalculator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::IStreamCalculator* CreateCalculator();

  /// @brief Method get_AlgorithmDetails, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_AlgorithmDetails();

  // Ctor Parameters [CppParam { name: "", ty: "IVerifierFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVerifierFactory(IVerifierFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVerifierFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVerifierFactory(IVerifierFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IVerifierFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IVerifierFactory*, "Org.BouncyCastle.Crypto", "IVerifierFactory");
