#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IXof.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IXof)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IXof;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IXof);
// Type: Org.BouncyCastle.Crypto::IXof
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::IXof*
class CORDL_TYPE IXof {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Method DoFinal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, int32_t outLen);

  /// @brief Method DoOutput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t DoOutput(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, int32_t outLen);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IXof", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXof(IXof&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXof", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXof(IXof const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 773 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IXof);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IXof*, "Org.BouncyCastle.Crypto", "IXof");
