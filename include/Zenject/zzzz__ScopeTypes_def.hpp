#pragma once
// IWYU pragma private; include "Zenject/ScopeTypes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScopeTypes)
// Forward declare root types
namespace Zenject {
struct ScopeTypes;
}
// Write type traits
MARK_VAL_T(::Zenject::ScopeTypes);
// Type: Zenject::ScopeTypes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: true
// CS Name: ::Zenject::ScopeTypes
struct CORDL_TYPE ScopeTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScopeTypes_Unwrapped
  enum struct __ScopeTypes_Unwrapped : int32_t {
    __E_Unset = static_cast<int32_t>(0x0),
    __E_Transient = static_cast<int32_t>(0x1),
    __E_Singleton = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScopeTypes_Unwrapped() const noexcept {
    return static_cast<__ScopeTypes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScopeTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScopeTypes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Singleton value: static_cast<int32_t>(0x2)
  static ::Zenject::ScopeTypes const Singleton;

  /// @brief Field Transient value: static_cast<int32_t>(0x1)
  static ::Zenject::ScopeTypes const Transient;

  /// @brief Field Unset value: static_cast<int32_t>(0x0)
  static ::Zenject::ScopeTypes const Unset;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12241 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ScopeTypes, 0x4>, "Size mismatch!");

static_assert(offsetof(::Zenject::ScopeTypes, value__) == 0x0, "Offset mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ScopeTypes, "Zenject", "ScopeTypes");
