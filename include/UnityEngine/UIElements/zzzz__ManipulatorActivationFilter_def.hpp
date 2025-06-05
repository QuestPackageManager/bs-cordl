#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ManipulatorActivationFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseButton_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ManipulatorActivationFilter)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class IMouseEvent;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
struct MouseButton;
}
namespace UnityEngine {
struct EventModifiers;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ManipulatorActivationFilter;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ManipulatorActivationFilter);
// Dependencies System.IEquatable`1<T>, UnityEngine.EventModifiers, UnityEngine.UIElements.MouseButton
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.ManipulatorActivationFilter
struct CORDL_TYPE ManipulatorActivationFilter {
public:
  // Declarations
  __declspec(property(get = get_button, put = set_button)) ::UnityEngine::UIElements::MouseButton button;

  __declspec(property(get = get_clickCount)) int32_t clickCount;

  __declspec(property(get = get_modifiers, put = set_modifiers)) ::UnityEngine::EventModifiers modifiers;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::ManipulatorActivationFilter>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*();

  /// @brief Method Equals, addr 0x4a41720, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a417b8, size 0x34, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::ManipulatorActivationFilter other);

  /// @brief Method GetHashCode, addr 0x4a417ec, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method HasModifiers, addr 0x4a419c0, size 0x1f4, virtual false, abstract: false, final false
  inline bool HasModifiers(::UnityEngine::UIElements::IMouseEvent* e);

  /// @brief Method HasModifiers, addr 0x4a41d58, size 0x1f4, virtual false, abstract: false, final false
  inline bool HasModifiers(::UnityEngine::UIElements::IPointerEvent* e);

  /// @brief Method MatchModifiers, addr 0x4a41bb4, size 0x54, virtual false, abstract: false, final false
  inline bool MatchModifiers(bool alt, bool ctrl, bool shift, bool command);

  /// @brief Method Matches, addr 0x4a41870, size 0x150, virtual false, abstract: false, final false
  inline bool Matches(::UnityEngine::UIElements::IMouseEvent* e);

  /// @brief Method Matches, addr 0x4a41c08, size 0x150, virtual false, abstract: false, final false
  inline bool Matches(::UnityEngine::UIElements::IPointerEvent* e);

  /// @brief Method get_button, addr 0x4a416f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MouseButton get_button();

  /// @brief Method get_clickCount, addr 0x4a41718, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_clickCount();

  /// @brief Method get_modifiers, addr 0x4a41708, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::EventModifiers get_modifiers();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::ManipulatorActivationFilter>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* i___System__IEquatable_1___UnityEngine__UIElements__ManipulatorActivationFilter_();

  /// @brief Method set_button, addr 0x4a41700, size 0x8, virtual false, abstract: false, final false
  inline void set_button(::UnityEngine::UIElements::MouseButton value);

  /// @brief Method set_modifiers, addr 0x4a41710, size 0x8, virtual false, abstract: false, final false
  inline void set_modifiers(::UnityEngine::EventModifiers value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ManipulatorActivationFilter();

  // Ctor Parameters [CppParam { name: "_button_k__BackingField", ty: "::UnityEngine::UIElements::MouseButton", modifiers: "", def_value: None }, CppParam { name: "_modifiers_k__BackingField", ty:
  // "::UnityEngine::EventModifiers", modifiers: "", def_value: None }, CppParam { name: "_clickCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ManipulatorActivationFilter(::UnityEngine::UIElements::MouseButton _button_k__BackingField, ::UnityEngine::EventModifiers _modifiers_k__BackingField,
                                        int32_t _clickCount_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5988 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field <button>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::MouseButton _button_k__BackingField;

  /// @brief Field <modifiers>k__BackingField, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::EventModifiers _modifiers_k__BackingField;

  /// @brief Field <clickCount>k__BackingField, offset: 0x8, size: 0x4, def value: None
  int32_t _clickCount_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ManipulatorActivationFilter, _button_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ManipulatorActivationFilter, _modifiers_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ManipulatorActivationFilter, _clickCount_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ManipulatorActivationFilter, 0xc>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ManipulatorActivationFilter, "UnityEngine.UIElements", "ManipulatorActivationFilter");
