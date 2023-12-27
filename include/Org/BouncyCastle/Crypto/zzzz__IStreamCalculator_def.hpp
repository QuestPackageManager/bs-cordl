#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStreamCalculator)
namespace System {
class Object;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IStreamCalculator);
// Type: Org.BouncyCastle.Crypto::IStreamCalculator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(705))
// CS Name: ::Org.BouncyCastle.Crypto::IStreamCalculator*
class CORDL_TYPE IStreamCalculator {
public:
  // Declarations
  __declspec(property(get = get_Stream))::System::IO::Stream* Stream;

  /// @brief Method get_Stream addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::IO::Stream* get_Stream();

  /// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* GetResult();

  // Ctor Parameters [CppParam { name: "", ty: "IStreamCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IStreamCalculator(IStreamCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IStreamCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStreamCalculator(IStreamCalculator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IStreamCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IStreamCalculator*, "Org.BouncyCastle.Crypto", "IStreamCalculator");
