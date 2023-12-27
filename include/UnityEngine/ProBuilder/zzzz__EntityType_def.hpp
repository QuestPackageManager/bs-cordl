#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntityType)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct EntityType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::EntityType);
// Type: UnityEngine.ProBuilder::EntityType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12156))
// CS Name: ::UnityEngine.ProBuilder::EntityType
struct CORDL_TYPE EntityType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EntityType_Unwrapped
  enum struct __EntityType_Unwrapped : int32_t {
    __E_Detail = static_cast<int32_t>(0x0),
    __E_Occluder = static_cast<int32_t>(0x1),
    __E_Trigger = static_cast<int32_t>(0x2),
    __E_Collider = static_cast<int32_t>(0x3),
    __E_Mover = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EntityType_Unwrapped() const noexcept {
    return static_cast<__EntityType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EntityType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EntityType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Detail value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::EntityType const Detail;

  /// @brief Field Occluder value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::EntityType const Occluder;

  /// @brief Field Trigger value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::EntityType const Trigger;

  /// @brief Field Collider value: static_cast<int32_t>(0x3)
  static ::UnityEngine::ProBuilder::EntityType const Collider;

  /// @brief Field Mover value: static_cast<int32_t>(0x4)
  static ::UnityEngine::ProBuilder::EntityType const Mover;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::EntityType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::EntityType, "UnityEngine.ProBuilder", "EntityType");
