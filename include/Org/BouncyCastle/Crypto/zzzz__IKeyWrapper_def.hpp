#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IKeyWrapper);
// Type: Org.BouncyCastle.Crypto::IKeyWrapper
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(983))
// CS Name: ::Org.BouncyCastle.Crypto::IKeyWrapper*
class CORDL_TYPE IKeyWrapper {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmDetails))::System::Object* AlgorithmDetails;

  /// @brief Method get_AlgorithmDetails, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_AlgorithmDetails();

  /// @brief Method Wrap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::IBlockResult* Wrap(::ArrayW<uint8_t, ::Array<uint8_t>*> keyData);

  // Ctor Parameters [CppParam { name: "", ty: "IKeyWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKeyWrapper(IKeyWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKeyWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKeyWrapper(IKeyWrapper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IKeyWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IKeyWrapper*, "Org.BouncyCastle.Crypto", "IKeyWrapper");
