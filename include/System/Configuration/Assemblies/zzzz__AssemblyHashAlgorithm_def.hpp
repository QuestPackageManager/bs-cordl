#pragma once
// IWYU pragma private; include "System/Configuration/Assemblies/AssemblyHashAlgorithm.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssemblyHashAlgorithm)
// Forward declare root types
namespace System::Configuration::Assemblies {
struct AssemblyHashAlgorithm;
}
// Write type traits
MARK_VAL_T(::System::Configuration::Assemblies::AssemblyHashAlgorithm);
// Dependencies
namespace System::Configuration::Assemblies {
// Is value type: true
// CS Name: System.Configuration.Assemblies.AssemblyHashAlgorithm
struct CORDL_TYPE AssemblyHashAlgorithm {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AssemblyHashAlgorithm_Unwrapped
  enum struct __AssemblyHashAlgorithm_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_MD5 = static_cast<int32_t>(0x8003),
    __E_SHA1 = static_cast<int32_t>(0x8004),
    __E_SHA256 = static_cast<int32_t>(0x800c),
    __E_SHA384 = static_cast<int32_t>(0x800d),
    __E_SHA512 = static_cast<int32_t>(0x800e),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AssemblyHashAlgorithm_Unwrapped() const noexcept {
    return static_cast<__AssemblyHashAlgorithm_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyHashAlgorithm();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AssemblyHashAlgorithm(int32_t value__) noexcept;

  /// @brief Field MD5 value: I32(32771)
  static ::System::Configuration::Assemblies::AssemblyHashAlgorithm const MD5;

  /// @brief Field None value: I32(0)
  static ::System::Configuration::Assemblies::AssemblyHashAlgorithm const None;

  /// @brief Field SHA1 value: I32(32772)
  static ::System::Configuration::Assemblies::AssemblyHashAlgorithm const SHA1;

  /// @brief Field SHA256 value: I32(32780)
  static ::System::Configuration::Assemblies::AssemblyHashAlgorithm const SHA256;

  /// @brief Field SHA384 value: I32(32781)
  static ::System::Configuration::Assemblies::AssemblyHashAlgorithm const SHA384;

  /// @brief Field SHA512 value: I32(32782)
  static ::System::Configuration::Assemblies::AssemblyHashAlgorithm const SHA512;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3757 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Configuration::Assemblies::AssemblyHashAlgorithm, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Configuration::Assemblies::AssemblyHashAlgorithm, 0x4>, "Size mismatch!");

} // namespace System::Configuration::Assemblies
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::Assemblies::AssemblyHashAlgorithm, "System.Configuration.Assemblies", "AssemblyHashAlgorithm");
