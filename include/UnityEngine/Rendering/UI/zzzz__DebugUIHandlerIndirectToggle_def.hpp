#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerIndirectToggle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUIHandlerIndirectToggle)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerIndirectToggle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle);
// Dependencies UnityEngine.Rendering.UI.DebugUIHandlerWidget
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerIndirectToggle
class CORDL_TYPE DebugUIHandlerIndirectToggle : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field checkmarkImage, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_checkmarkImage, put = __cordl_internal_set_checkmarkImage)) ::UnityW<::UnityEngine::UI::Image> checkmarkImage;

  /// @brief Field getter, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_getter, put = __cordl_internal_set_getter)) ::System::Func_2<int32_t, bool>* getter;

  /// @brief Field index, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field nameLabel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_nameLabel, put = __cordl_internal_set_nameLabel)) ::UnityW<::UnityEngine::UI::Text> nameLabel;

  /// @brief Field setter, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_setter, put = __cordl_internal_set_setter)) ::System::Action_2<int32_t, bool>* setter;

  /// @brief Field valueToggle, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_valueToggle, put = __cordl_internal_set_valueToggle)) ::UnityW<::UnityEngine::UI::Toggle> valueToggle;

  /// @brief Method Init, addr 0x664748c, size 0xf0, virtual false, abstract: false, final false
  inline void Init();

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle* New_ctor();

  /// @brief Method OnAction, addr 0x664d004, size 0x5c, virtual true, abstract: false, final false
  inline void OnAction();

  /// @brief Method OnDeselection, addr 0x664cfb4, size 0x50, virtual true, abstract: false, final false
  inline void OnDeselection();

  /// @brief Method OnSelection, addr 0x664cf5c, size 0x58, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method OnToggleValueChanged, addr 0x664cf30, size 0x2c, virtual false, abstract: false, final false
  inline void OnToggleValueChanged(bool value);

  /// @brief Method UpdateValueLabel, addr 0x66478dc, size 0xac, virtual false, abstract: false, final false
  inline void UpdateValueLabel();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_checkmarkImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_checkmarkImage();

  constexpr ::System::Func_2<int32_t, bool>* const& __cordl_internal_get_getter() const;

  constexpr ::System::Func_2<int32_t, bool>*& __cordl_internal_get_getter();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameLabel();

  constexpr ::System::Action_2<int32_t, bool>* const& __cordl_internal_get_setter() const;

  constexpr ::System::Action_2<int32_t, bool>*& __cordl_internal_get_setter();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get_valueToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get_valueToggle();

  constexpr void __cordl_internal_set_checkmarkImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_getter(::System::Func_2<int32_t, bool>* value);

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_setter(::System::Action_2<int32_t, bool>* value);

  constexpr void __cordl_internal_set_valueToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  /// @brief Method .ctor, addr 0x664d060, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerIndirectToggle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerIndirectToggle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerIndirectToggle(DebugUIHandlerIndirectToggle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerIndirectToggle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerIndirectToggle(DebugUIHandlerIndirectToggle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12500 };

  /// @brief Field nameLabel, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameLabel;

  /// @brief Field valueToggle, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ___valueToggle;

  /// @brief Field checkmarkImage, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___checkmarkImage;

  /// @brief Field getter, offset: 0x78, size: 0x8, def value: None
  ::System::Func_2<int32_t, bool>* ___getter;

  /// @brief Field setter, offset: 0x80, size: 0x8, def value: None
  ::System::Action_2<int32_t, bool>* ___setter;

  /// @brief Field index, offset: 0x88, size: 0x4, def value: None
  int32_t ___index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle, ___nameLabel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle, ___valueToggle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle, ___checkmarkImage) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle, ___getter) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle, ___setter) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle, ___index) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle, 0x90>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle*, "UnityEngine.Rendering.UI", "DebugUIHandlerIndirectToggle");
