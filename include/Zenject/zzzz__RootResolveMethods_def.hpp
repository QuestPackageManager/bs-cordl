#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RootResolveMethods)
// Forward declare root types
namespace Zenject {
struct RootResolveMethods;
}
// Write type traits
MARK_VAL_T(::Zenject::RootResolveMethods);
// Type: Zenject::RootResolveMethods
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: true
// CS Name: ::Zenject::RootResolveMethods
struct CORDL_TYPE RootResolveMethods {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RootResolveMethods_Unwrapped
  enum struct __RootResolveMethods_Unwrapped : int32_t {
    __E_NonLazyOnly = static_cast<int32_t>(0x0),
    __E_All = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RootResolveMethods_Unwrapped() const noexcept {
    return static_cast<__RootResolveMethods_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RootResolveMethods();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RootResolveMethods(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x1)
  static ::Zenject::RootResolveMethods const All;

  /// @brief Field NonLazyOnly value: static_cast<int32_t>(0x0)
  static ::Zenject::RootResolveMethods const NonLazyOnly;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::RootResolveMethods, 0x4>, "Size mismatch!");

static_assert(offsetof(::Zenject::RootResolveMethods, value__) == 0x0, "Offset mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::RootResolveMethods, "Zenject", "RootResolveMethods");
