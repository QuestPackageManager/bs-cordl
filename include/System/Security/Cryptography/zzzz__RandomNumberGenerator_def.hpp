#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RandomNumberGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RandomNumberGenerator)
// Forward declare root types
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RandomNumberGenerator);
// Dependencies System.IDisposable, System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RandomNumberGenerator
class CORDL_TYPE RandomNumberGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Create, addr 0x3ca2634, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RandomNumberGenerator* Create();

  /// @brief Method Dispose, addr 0x3ca2688, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x3ca26f4, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetBytes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::System::Security::Cryptography::RandomNumberGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x3ca262c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RandomNumberGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RandomNumberGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomNumberGenerator(RandomNumberGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomNumberGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomNumberGenerator(RandomNumberGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2945 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RandomNumberGenerator, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RandomNumberGenerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RandomNumberGenerator*, "System.Security.Cryptography", "RandomNumberGenerator");
