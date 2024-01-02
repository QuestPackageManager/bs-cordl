#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MatchCasing)
// Forward declare root types
namespace System::IO {
struct MatchCasing;
}
// Write type traits
MARK_VAL_T(::System::IO::MatchCasing);
// Type: System.IO::MatchCasing
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3597))
// CS Name: ::System.IO::MatchCasing
struct CORDL_TYPE MatchCasing {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MatchCasing_Unwrapped
  enum struct __MatchCasing_Unwrapped : int32_t {
    __E_PlatformDefault = static_cast<int32_t>(0x0),
    __E_CaseSensitive = static_cast<int32_t>(0x1),
    __E_CaseInsensitive = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MatchCasing_Unwrapped() const noexcept {
    return static_cast<__MatchCasing_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MatchCasing(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchCasing();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field PlatformDefault value: static_cast<int32_t>(0x0)
  static ::System::IO::MatchCasing const PlatformDefault;

  /// @brief Field CaseSensitive value: static_cast<int32_t>(0x1)
  static ::System::IO::MatchCasing const CaseSensitive;

  /// @brief Field CaseInsensitive value: static_cast<int32_t>(0x2)
  static ::System::IO::MatchCasing const CaseInsensitive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::MatchCasing, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::IO::MatchCasing, value__) == 0x0, "Offset mismatch!");

} // namespace System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MatchCasing, "System.IO", "MatchCasing");
