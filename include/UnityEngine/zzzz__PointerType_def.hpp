#pragma once
// IWYU pragma private; include "UnityEngine/PointerType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerType)
// Forward declare root types
namespace UnityEngine {
struct PointerType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PointerType);
// Type: UnityEngine::PointerType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::PointerType
struct CORDL_TYPE PointerType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PointerType_Unwrapped
  enum struct __PointerType_Unwrapped : int32_t {
    __E_Mouse = static_cast<int32_t>(0x0),
    __E_Touch = static_cast<int32_t>(0x1),
    __E_Pen = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PointerType_Unwrapped() const noexcept {
    return static_cast<__PointerType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PointerType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Mouse value: static_cast<int32_t>(0x0)
  static ::UnityEngine::PointerType const Mouse;

  /// @brief Field Pen value: static_cast<int32_t>(0x2)
  static ::UnityEngine::PointerType const Pen;

  /// @brief Field Touch value: static_cast<int32_t>(0x1)
  static ::UnityEngine::PointerType const Touch;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16591 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PointerType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::PointerType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PointerType, "UnityEngine", "PointerType");
