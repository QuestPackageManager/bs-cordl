#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshHit)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshHit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::NavMeshHit);
// Type: UnityEngine.AI::NavMeshHit
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::AI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16116))
// CS Name: ::UnityEngine.AI::NavMeshHit
struct CORDL_TYPE NavMeshHit {
public:
  // Declarations
  __declspec(property(get = get_position))::UnityEngine::Vector3 position;

  /// @brief Method get_position addr 0x2c7d8e0 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_position();

  // Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Mask", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Hit", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NavMeshHit(::UnityEngine::Vector3 m_Position, ::UnityEngine::Vector3 m_Normal, float_t m_Distance, int32_t m_Mask, int32_t m_Hit) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NavMeshHit();

  /// @brief Field m_Position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Position;

  /// @brief Field m_Normal, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Normal;

  /// @brief Field m_Distance, offset: 0x18, size: 0x4, def value: None
  float_t m_Distance;

  /// @brief Field m_Mask, offset: 0x1c, size: 0x4, def value: None
  int32_t m_Mask;

  /// @brief Field m_Hit, offset: 0x20, size: 0x4, def value: None
  int32_t m_Hit;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AI::NavMeshHit, 0x24>, "Size mismatch!");

} // namespace UnityEngine::AI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AI::NavMeshHit, "UnityEngine.AI", "NavMeshHit");
