#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TimerState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimerState)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TimerState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TimerState);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TimerState
struct CORDL_TYPE TimerState {
public:
  // Declarations
  __declspec(property(get = get_deltaTime)) int64_t deltaTime;

  __declspec(property(get = get_now, put = set_now)) int64_t now;

  __declspec(property(get = get_start, put = set_start)) int64_t start;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TimerState>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::TimerState>*();

  /// @brief Method Equals, addr 0x4a74a90, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a74b18, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::TimerState other);

  /// @brief Method GetHashCode, addr 0x4a74b3c, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_deltaTime, addr 0x4a74a84, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_deltaTime();

  /// @brief Method get_now, addr 0x4a74a74, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_now();

  /// @brief Method get_start, addr 0x4a74a64, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_start();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::TimerState>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::TimerState>* i___System__IEquatable_1___UnityEngine__UIElements__TimerState_();

  /// @brief Method set_now, addr 0x4a74a7c, size 0x8, virtual false, abstract: false, final false
  inline void set_now(int64_t value);

  /// @brief Method set_start, addr 0x4a74a6c, size 0x8, virtual false, abstract: false, final false
  inline void set_start(int64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimerState();

  // Ctor Parameters [CppParam { name: "_start_k__BackingField", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_now_k__BackingField", ty: "int64_t", modifiers: "", def_value: None
  // }]
  constexpr TimerState(int64_t _start_k__BackingField, int64_t _now_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6046 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field <start>k__BackingField, offset: 0x0, size: 0x8, def value: None
  int64_t _start_k__BackingField;

  /// @brief Field <now>k__BackingField, offset: 0x8, size: 0x8, def value: None
  int64_t _now_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TimerState, _start_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TimerState, _now_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TimerState, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TimerState, "UnityEngine.UIElements", "TimerState");
