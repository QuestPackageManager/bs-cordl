#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/KeyBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyBuilder)
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class KeyBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::KeyBuilder);
// Dependencies System.Object
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: Mono.Security.Cryptography.KeyBuilder
class CORDL_TYPE KeyBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field rng, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_rng, put = setStaticF_rng)) ::System::Security::Cryptography::RandomNumberGenerator* rng;

  /// @brief Method Key, addr 0x5889628, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Key(int32_t size);

  static inline ::System::Security::Cryptography::RandomNumberGenerator* getStaticF_rng();

  /// @brief Method get_Rng, addr 0x588a5d4, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RandomNumberGenerator* get_Rng();

  static inline void setStaticF_rng(::System::Security::Cryptography::RandomNumberGenerator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyBuilder(KeyBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyBuilder(KeyBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19259 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::KeyBuilder, 0x10>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::KeyBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::KeyBuilder*, "Mono.Security.Cryptography", "KeyBuilder");
