#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/FiniteFieldDheGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FiniteFieldDheGroup)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class FiniteFieldDheGroup;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::FiniteFieldDheGroup);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.FiniteFieldDheGroup
class CORDL_TYPE FiniteFieldDheGroup : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsValid, addr 0x2416c60, size 0x10, virtual false, abstract: false, final false
  static inline bool IsValid(uint8_t group);

  static inline ::Org::BouncyCastle::Crypto::Tls::FiniteFieldDheGroup* New_ctor();

  /// @brief Method .ctor, addr 0x2416c70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FiniteFieldDheGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FiniteFieldDheGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FiniteFieldDheGroup(FiniteFieldDheGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FiniteFieldDheGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FiniteFieldDheGroup(FiniteFieldDheGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1244 };

  /// @brief Field ffdhe2432 offset 0xffffffff size 0x1
  static constexpr uint8_t ffdhe2432{ static_cast<uint8_t>(0x0u) };

  /// @brief Field ffdhe3072 offset 0xffffffff size 0x1
  static constexpr uint8_t ffdhe3072{ static_cast<uint8_t>(0x1u) };

  /// @brief Field ffdhe4096 offset 0xffffffff size 0x1
  static constexpr uint8_t ffdhe4096{ static_cast<uint8_t>(0x2u) };

  /// @brief Field ffdhe6144 offset 0xffffffff size 0x1
  static constexpr uint8_t ffdhe6144{ static_cast<uint8_t>(0x3u) };

  /// @brief Field ffdhe8192 offset 0xffffffff size 0x1
  static constexpr uint8_t ffdhe8192{ static_cast<uint8_t>(0x4u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::FiniteFieldDheGroup, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::FiniteFieldDheGroup);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::FiniteFieldDheGroup*, "Org.BouncyCastle.Crypto.Tls", "FiniteFieldDheGroup");
