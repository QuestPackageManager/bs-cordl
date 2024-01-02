#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseButton_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ManipulatorActivationFilter)
namespace UnityEngine::UIElements {
struct MouseButton;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class IMouseEvent;
}
namespace System {
template <typename T> class IEquatable_1;
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
// Type: UnityEngine.UIElements::ManipulatorActivationFilter
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6773)), TypeDefinitionIndex(TypeDefinitionIndex(14602))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6783))
// CS Name: ::UnityEngine.UIElements::ManipulatorActivationFilter
struct CORDL_TYPE ManipulatorActivationFilter {
public:
  // Declarations
  __declspec(property(get = get_button, put = set_button))::UnityEngine::UIElements::MouseButton button;

  __declspec(property(get = get_modifiers))::UnityEngine::EventModifiers modifiers;

  __declspec(property(get = get_clickCount)) int32_t clickCount;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::ManipulatorActivationFilter>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*();

  /// @brief Method get_button, addr 0x2db9820, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MouseButton get_button();

  /// @brief Method set_button, addr 0x2db9828, size 0x8, virtual false, abstract: false, final false
  inline void set_button(::UnityEngine::UIElements::MouseButton value);

  /// @brief Method get_modifiers, addr 0x2db9830, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::EventModifiers get_modifiers();

  /// @brief Method get_clickCount, addr 0x2db9838, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_clickCount();

  /// @brief Method Equals, addr 0x2db9840, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2db98d8, size 0x34, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::ManipulatorActivationFilter other);

  /// @brief Method GetHashCode, addr 0x2db990c, size 0x80, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Matches, addr 0x2db998c, size 0x158, virtual false, abstract: false, final false
  inline bool Matches(::UnityEngine::UIElements::IMouseEvent* e);

  /// @brief Method HasModifiers, addr 0x2db9ae4, size 0x1f4, virtual false, abstract: false, final false
  inline bool HasModifiers(::UnityEngine::UIElements::IMouseEvent* e);

  /// @brief Method Matches, addr 0x2db9d2c, size 0x158, virtual false, abstract: false, final false
  inline bool Matches(::UnityEngine::UIElements::IPointerEvent* e);

  /// @brief Method HasModifiers, addr 0x2db9e84, size 0x1f4, virtual false, abstract: false, final false
  inline bool HasModifiers(::UnityEngine::UIElements::IPointerEvent* e);

  /// @brief Method MatchModifiers, addr 0x2db9cd8, size 0x54, virtual false, abstract: false, final false
  inline bool MatchModifiers(bool alt, bool ctrl, bool shift, bool command);

  // Ctor Parameters [CppParam { name: "_button_k__BackingField", ty: "::UnityEngine::UIElements::MouseButton", modifiers: "", def_value: None }, CppParam { name: "_modifiers_k__BackingField", ty:
  // "::UnityEngine::EventModifiers", modifiers: "", def_value: None }, CppParam { name: "_clickCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ManipulatorActivationFilter(::UnityEngine::UIElements::MouseButton _button_k__BackingField, ::UnityEngine::EventModifiers _modifiers_k__BackingField,
                                        int32_t _clickCount_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ManipulatorActivationFilter();

  /// @brief Field <button>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::MouseButton _button_k__BackingField;

  /// @brief Field <modifiers>k__BackingField, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::EventModifiers _modifiers_k__BackingField;

  /// @brief Field <clickCount>k__BackingField, offset: 0x8, size: 0x4, def value: None
  int32_t _clickCount_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ManipulatorActivationFilter, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ManipulatorActivationFilter, _button_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ManipulatorActivationFilter, _modifiers_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ManipulatorActivationFilter, _clickCount_k__BackingField) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ManipulatorActivationFilter, "UnityEngine.UIElements", "ManipulatorActivationFilter");
