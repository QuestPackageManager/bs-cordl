#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncOperationStatus)
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationStatus;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus);
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14306))
// CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationStatus
struct CORDL_TYPE AsyncOperationStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AsyncOperationStatus_Unwrapped
  enum struct __AsyncOperationStatus_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Succeeded = static_cast<int32_t>(0x1),
    __E_Failed = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AsyncOperationStatus_Unwrapped() const noexcept {
    return static_cast<__AsyncOperationStatus_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AsyncOperationStatus(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOperationStatus();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus const None;

  /// @brief Field Succeeded value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus const Succeeded;

  /// @brief Field Failed value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::AsyncOperations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, "UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationStatus");
