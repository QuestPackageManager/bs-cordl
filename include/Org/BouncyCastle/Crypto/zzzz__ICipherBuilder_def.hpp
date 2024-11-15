#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/ICipherBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ICipherBuilder)
namespace Org::BouncyCastle::Crypto {
class ICipher;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class ICipherBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::ICipherBuilder);
// Type: Org.BouncyCastle.Crypto::ICipherBuilder
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::ICipherBuilder*
class CORDL_TYPE ICipherBuilder {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmDetails)) ::System::Object* AlgorithmDetails;

  /// @brief Method BuildCipher, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::ICipher* BuildCipher(::System::IO::Stream* stream);

  /// @brief Method GetMaxOutputSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetMaxOutputSize(int32_t inputLen);

  /// @brief Method get_AlgorithmDetails, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_AlgorithmDetails();

  // Ctor Parameters [CppParam { name: "", ty: "ICipherBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICipherBuilder(ICipherBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICipherBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICipherBuilder(ICipherBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 978 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::ICipherBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::ICipherBuilder*, "Org.BouncyCastle.Crypto", "ICipherBuilder");
