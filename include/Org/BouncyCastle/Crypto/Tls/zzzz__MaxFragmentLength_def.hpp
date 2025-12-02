#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/MaxFragmentLength.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaxFragmentLength)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class MaxFragmentLength;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::MaxFragmentLength);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.MaxFragmentLength
class CORDL_TYPE MaxFragmentLength : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsValid, addr 0x3345aec, size 0x14, virtual false, abstract: false, final false
  static inline bool IsValid(uint8_t maxFragmentLength);

  static inline ::Org::BouncyCastle::Crypto::Tls::MaxFragmentLength* New_ctor();

  /// @brief Method .ctor, addr 0x3345b00, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaxFragmentLength();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaxFragmentLength", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaxFragmentLength(MaxFragmentLength&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaxFragmentLength", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaxFragmentLength(MaxFragmentLength const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1254 };

  /// @brief Field pow2_10 offset 0xffffffff size 0x1
  static constexpr uint8_t pow2_10{ static_cast<uint8_t>(0x2u) };

  /// @brief Field pow2_11 offset 0xffffffff size 0x1
  static constexpr uint8_t pow2_11{ static_cast<uint8_t>(0x3u) };

  /// @brief Field pow2_12 offset 0xffffffff size 0x1
  static constexpr uint8_t pow2_12{ static_cast<uint8_t>(0x4u) };

  /// @brief Field pow2_9 offset 0xffffffff size 0x1
  static constexpr uint8_t pow2_9{ static_cast<uint8_t>(0x1u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::MaxFragmentLength, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::MaxFragmentLength);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::MaxFragmentLength*, "Org.BouncyCastle.Crypto.Tls", "MaxFragmentLength");
