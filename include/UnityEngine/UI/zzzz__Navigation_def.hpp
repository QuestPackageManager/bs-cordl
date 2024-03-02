#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Navigation_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Navigation)
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine::UI {
struct __Navigation__Mode;
}
// Forward declare root types
namespace UnityEngine::UI {
struct __Navigation__Mode;
}
namespace UnityEngine::UI {
struct Navigation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::__Navigation__Mode);
MARK_VAL_T(::UnityEngine::UI::Navigation);
// Type: ::Mode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::Navigation::Mode
struct CORDL_TYPE __Navigation__Mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Navigation__Mode_Unwrapped
  enum struct ____Navigation__Mode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Horizontal = static_cast<int32_t>(0x1),
    __E_Vertical = static_cast<int32_t>(0x2),
    __E_Automatic = static_cast<int32_t>(0x3),
    __E_Explicit = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Navigation__Mode_Unwrapped() const noexcept {
    return static_cast<____Navigation__Mode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Navigation__Mode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Navigation__Mode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Automatic value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__Navigation__Mode const Automatic;

  /// @brief Field Explicit value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UI::__Navigation__Mode const Explicit;

  /// @brief Field Horizontal value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Navigation__Mode const Horizontal;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Navigation__Mode const None;

  /// @brief Field Vertical value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__Navigation__Mode const Vertical;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Navigation__Mode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Navigation__Mode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::Navigation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::UnityEngine.UI::Navigation
struct CORDL_TYPE Navigation {
public:
  // Declarations
  using Mode = ::UnityEngine::UI::__Navigation__Mode;

  __declspec(property(get = get_mode, put = set_mode))::UnityEngine::UI::__Navigation__Mode mode;

  __declspec(property(get = get_selectOnDown, put = set_selectOnDown))::UnityW<::UnityEngine::UI::Selectable> selectOnDown;

  __declspec(property(get = get_selectOnLeft, put = set_selectOnLeft))::UnityW<::UnityEngine::UI::Selectable> selectOnLeft;

  __declspec(property(get = get_selectOnRight, put = set_selectOnRight))::UnityW<::UnityEngine::UI::Selectable> selectOnRight;

  __declspec(property(get = get_selectOnUp, put = set_selectOnUp))::UnityW<::UnityEngine::UI::Selectable> selectOnUp;

  __declspec(property(get = get_wrapAround, put = set_wrapAround)) bool wrapAround;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UI::Navigation>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UI::Navigation>*();

  /// @brief Method Equals, addr 0x2e89bc0, size 0x118, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UI::Navigation other);

  /// @brief Method get_defaultNavigation, addr 0x2e89ba0, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::UI::Navigation get_defaultNavigation();

  /// @brief Method get_mode, addr 0x2e89b3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__Navigation__Mode get_mode();

  /// @brief Method get_selectOnDown, addr 0x2e89b70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> get_selectOnDown();

  /// @brief Method get_selectOnLeft, addr 0x2e89b80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> get_selectOnLeft();

  /// @brief Method get_selectOnRight, addr 0x2e89b90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> get_selectOnRight();

  /// @brief Method get_selectOnUp, addr 0x2e89b60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> get_selectOnUp();

  /// @brief Method get_wrapAround, addr 0x2e89b4c, size 0x8, virtual false, abstract: false, final false
  inline bool get_wrapAround();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UI::Navigation>"
  constexpr ::System::IEquatable_1<::UnityEngine::UI::Navigation>* i___System__IEquatable_1___UnityEngine__UI__Navigation_();

  /// @brief Method set_mode, addr 0x2e89b44, size 0x8, virtual false, abstract: false, final false
  inline void set_mode(::UnityEngine::UI::__Navigation__Mode value);

  /// @brief Method set_selectOnDown, addr 0x2e89b78, size 0x8, virtual false, abstract: false, final false
  inline void set_selectOnDown(::UnityEngine::UI::Selectable* value);

  /// @brief Method set_selectOnLeft, addr 0x2e89b88, size 0x8, virtual false, abstract: false, final false
  inline void set_selectOnLeft(::UnityEngine::UI::Selectable* value);

  /// @brief Method set_selectOnRight, addr 0x2e89b98, size 0x8, virtual false, abstract: false, final false
  inline void set_selectOnRight(::UnityEngine::UI::Selectable* value);

  /// @brief Method set_selectOnUp, addr 0x2e89b68, size 0x8, virtual false, abstract: false, final false
  inline void set_selectOnUp(::UnityEngine::UI::Selectable* value);

  /// @brief Method set_wrapAround, addr 0x2e89b54, size 0xc, virtual false, abstract: false, final false
  inline void set_wrapAround(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Navigation();

  // Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::UI::__Navigation__Mode", modifiers: "", def_value: None }, CppParam { name: "m_WrapAround", ty: "bool", modifiers: "", def_value:
  // None }, CppParam { name: "m_SelectOnUp", ty: "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value: None }, CppParam { name: "m_SelectOnDown", ty:
  // "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value: None }, CppParam { name: "m_SelectOnLeft", ty: "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value: None },
  // CppParam { name: "m_SelectOnRight", ty: "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value: None }]
  constexpr Navigation(::UnityEngine::UI::__Navigation__Mode m_Mode, bool m_WrapAround, ::UnityW<::UnityEngine::UI::Selectable> m_SelectOnUp, ::UnityW<::UnityEngine::UI::Selectable> m_SelectOnDown,
                       ::UnityW<::UnityEngine::UI::Selectable> m_SelectOnLeft, ::UnityW<::UnityEngine::UI::Selectable> m_SelectOnRight) noexcept;

  /// @brief Field m_Mode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UI::__Navigation__Mode m_Mode;

  /// @brief Field m_WrapAround, offset: 0x4, size: 0x1, def value: None
  bool m_WrapAround;

  /// @brief Field m_SelectOnUp, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Selectable> m_SelectOnUp;

  /// @brief Field m_SelectOnDown, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Selectable> m_SelectOnDown;

  /// @brief Field m_SelectOnLeft, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Selectable> m_SelectOnLeft;

  /// @brief Field m_SelectOnRight, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Selectable> m_SelectOnRight;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Navigation, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::Navigation, m_Mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Navigation, m_WrapAround) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Navigation, m_SelectOnUp) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Navigation, m_SelectOnDown) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Navigation, m_SelectOnLeft) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Navigation, m_SelectOnRight) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Navigation__Mode, "UnityEngine.UI", "Navigation/Mode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Navigation, "UnityEngine.UI", "Navigation");
