#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InjectSources)
// Forward declare root types
namespace Zenject {
struct InjectSources;
}
// Write type traits
MARK_VAL_T(::Zenject::InjectSources);
// Type: Zenject::InjectSources
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: true
// CS Name: ::Zenject::InjectSources
struct CORDL_TYPE InjectSources {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InjectSources_Unwrapped
  enum struct __InjectSources_Unwrapped : int32_t {
    __E_Any = static_cast<int32_t>(0x0),
    __E_Local = static_cast<int32_t>(0x1),
    __E_Parent = static_cast<int32_t>(0x2),
    __E_AnyParent = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InjectSources_Unwrapped() const noexcept {
    return static_cast<__InjectSources_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__InjectSources_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectSources();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InjectSources(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Any value: static_cast<int32_t>(0x0)
  static ::Zenject::InjectSources const Any;

  /// @brief Field AnyParent value: static_cast<int32_t>(0x3)
  static ::Zenject::InjectSources const AnyParent;

  /// @brief Field Local value: static_cast<int32_t>(0x1)
  static ::Zenject::InjectSources const Local;

  /// @brief Field Parent value: static_cast<int32_t>(0x2)
  static ::Zenject::InjectSources const Parent;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InjectSources, 0x4>, "Size mismatch!");

static_assert(offsetof(::Zenject::InjectSources, value__) == 0x0, "Offset mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectSources, "Zenject", "InjectSources");
