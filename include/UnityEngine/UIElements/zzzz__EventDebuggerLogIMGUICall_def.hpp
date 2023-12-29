#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(EventDebuggerLogIMGUICall)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct EventDebuggerLogIMGUICall;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::EventDebuggerLogIMGUICall);
// Type: UnityEngine.UIElements::EventDebuggerLogIMGUICall
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7438))
// CS Name: ::UnityEngine.UIElements::EventDebuggerLogIMGUICall
#pragma pack(push, 0)
struct CORDL_TYPE EventDebuggerLogIMGUICall {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor addr 0x2d1b150 size 0x4 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method Dispose addr 0x2d1b154 size 0x4 virtual true final true
  inline void Dispose();

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventDebuggerLogIMGUICall();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventDebuggerLogIMGUICall, 0x1>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDebuggerLogIMGUICall, "UnityEngine.UIElements", "EventDebuggerLogIMGUICall");
