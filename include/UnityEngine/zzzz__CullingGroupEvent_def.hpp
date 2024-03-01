#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingGroupEvent)
// Forward declare root types
namespace UnityEngine {
struct CullingGroupEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CullingGroupEvent);
// Type: UnityEngine::CullingGroupEvent
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 22, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::CullingGroupEvent
struct CORDL_TYPE CullingGroupEvent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CullingGroupEvent();

  // Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_PrevState", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_ThisState", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr CullingGroupEvent(int32_t m_Index, uint8_t m_PrevState, uint8_t m_ThisState) noexcept;

  /// @brief Field m_Index, offset: 0x0, size: 0x4, def value: None
  int32_t m_Index;

  /// @brief Field m_PrevState, offset: 0x4, size: 0x1, def value: None
  uint8_t m_PrevState;

  /// @brief Field m_ThisState, offset: 0x5, size: 0x1, def value: None
  uint8_t m_ThisState;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CullingGroupEvent, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::CullingGroupEvent, m_Index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CullingGroupEvent, m_PrevState) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CullingGroupEvent, m_ThisState) == 0x5, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CullingGroupEvent, "UnityEngine", "CullingGroupEvent");
