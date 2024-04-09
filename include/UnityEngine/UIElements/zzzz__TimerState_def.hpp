#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimerState)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TimerState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TimerState);
// Type: UnityEngine.UIElements::TimerState
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::TimerState
struct CORDL_TYPE TimerState {
public:
  // Declarations
  __declspec(property(get = get_deltaTime)) int64_t deltaTime;

  __declspec(property(get = get_now, put = set_now)) int64_t now;

  __declspec(property(get = get_start, put = set_start)) int64_t start;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TimerState>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::TimerState>*();

  /// @brief Method Equals, addr 0x3354724, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x33547ac, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::TimerState other);

  /// @brief Method GetHashCode, addr 0x33547d0, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_deltaTime, addr 0x3354718, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_deltaTime();

  /// @brief Method get_now, addr 0x3354708, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_now();

  /// @brief Method get_start, addr 0x33546f8, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_start();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::TimerState>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::TimerState>* i___System__IEquatable_1___UnityEngine__UIElements__TimerState_();

  /// @brief Method set_now, addr 0x3354710, size 0x8, virtual false, abstract: false, final false
  inline void set_now(int64_t value);

  /// @brief Method set_start, addr 0x3354700, size 0x8, virtual false, abstract: false, final false
  inline void set_start(int64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimerState();

  // Ctor Parameters [CppParam { name: "_start_k__BackingField", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_now_k__BackingField", ty: "int64_t", modifiers: "", def_value: None
  // }]
  constexpr TimerState(int64_t _start_k__BackingField, int64_t _now_k__BackingField) noexcept;

  /// @brief Field <start>k__BackingField, offset: 0x0, size: 0x8, def value: None
  int64_t _start_k__BackingField;

  /// @brief Field <now>k__BackingField, offset: 0x8, size: 0x8, def value: None
  int64_t _now_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TimerState, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TimerState, _start_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TimerState, _now_k__BackingField) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TimerState, "UnityEngine.UIElements", "TimerState");
