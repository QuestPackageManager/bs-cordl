#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogType)
// Forward declare root types
namespace UnityEngine {
struct LogType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LogType);
// Type: UnityEngine::LogType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8768))
// CS Name: ::UnityEngine::LogType
struct CORDL_TYPE LogType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LogType_Unwrapped
  enum struct __LogType_Unwrapped : int32_t {
    __E_Error = static_cast<int32_t>(0x0),
    __E_Assert = static_cast<int32_t>(0x1),
    __E_Warning = static_cast<int32_t>(0x2),
    __E_Log = static_cast<int32_t>(0x3),
    __E_Exception = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LogType_Unwrapped() const noexcept {
    return static_cast<__LogType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LogType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LogType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Error value: static_cast<int32_t>(0x0)
  static ::UnityEngine::LogType const Error;

  /// @brief Field Assert value: static_cast<int32_t>(0x1)
  static ::UnityEngine::LogType const _cordl_Assert;

  /// @brief Field Warning value: static_cast<int32_t>(0x2)
  static ::UnityEngine::LogType const Warning;

  /// @brief Field Log value: static_cast<int32_t>(0x3)
  static ::UnityEngine::LogType const Log;

  /// @brief Field Exception value: static_cast<int32_t>(0x4)
  static ::UnityEngine::LogType const Exception;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LogType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::LogType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LogType, "UnityEngine", "LogType");
