#pragma once
// IWYU pragma private; include "UnityEngine/UI/AnimationTriggers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AnimationTriggers)
// Forward declare root types
namespace UnityEngine::UI {
class AnimationTriggers;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::AnimationTriggers);
// Type: UnityEngine.UI::AnimationTriggers
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::AnimationTriggers*
class CORDL_TYPE AnimationTriggers : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_disabledTrigger, put = set_disabledTrigger))::StringW disabledTrigger;

  __declspec(property(get = get_highlightedTrigger, put = set_highlightedTrigger))::StringW highlightedTrigger;

  /// @brief Field m_DisabledTrigger, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DisabledTrigger, put = __cordl_internal_set_m_DisabledTrigger))::StringW m_DisabledTrigger;

  /// @brief Field m_HighlightedTrigger, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HighlightedTrigger, put = __cordl_internal_set_m_HighlightedTrigger))::StringW m_HighlightedTrigger;

  /// @brief Field m_NormalTrigger, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NormalTrigger, put = __cordl_internal_set_m_NormalTrigger))::StringW m_NormalTrigger;

  /// @brief Field m_PressedTrigger, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PressedTrigger, put = __cordl_internal_set_m_PressedTrigger))::StringW m_PressedTrigger;

  /// @brief Field m_SelectedTrigger, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectedTrigger, put = __cordl_internal_set_m_SelectedTrigger))::StringW m_SelectedTrigger;

  __declspec(property(get = get_normalTrigger, put = set_normalTrigger))::StringW normalTrigger;

  __declspec(property(get = get_pressedTrigger, put = set_pressedTrigger))::StringW pressedTrigger;

  __declspec(property(get = get_selectedTrigger, put = set_selectedTrigger))::StringW selectedTrigger;

  static inline ::UnityEngine::UI::AnimationTriggers* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_m_DisabledTrigger() const;

  constexpr ::StringW& __cordl_internal_get_m_DisabledTrigger();

  constexpr ::StringW const& __cordl_internal_get_m_HighlightedTrigger() const;

  constexpr ::StringW& __cordl_internal_get_m_HighlightedTrigger();

  constexpr ::StringW const& __cordl_internal_get_m_NormalTrigger() const;

  constexpr ::StringW& __cordl_internal_get_m_NormalTrigger();

  constexpr ::StringW const& __cordl_internal_get_m_PressedTrigger() const;

  constexpr ::StringW& __cordl_internal_get_m_PressedTrigger();

  constexpr ::StringW const& __cordl_internal_get_m_SelectedTrigger() const;

  constexpr ::StringW& __cordl_internal_get_m_SelectedTrigger();

  constexpr void __cordl_internal_set_m_DisabledTrigger(::StringW value);

  constexpr void __cordl_internal_set_m_HighlightedTrigger(::StringW value);

  constexpr void __cordl_internal_set_m_NormalTrigger(::StringW value);

  constexpr void __cordl_internal_set_m_PressedTrigger(::StringW value);

  constexpr void __cordl_internal_set_m_SelectedTrigger(::StringW value);

  /// @brief Method .ctor, addr 0x34a5d24, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disabledTrigger, addr 0x34a5d14, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_disabledTrigger();

  /// @brief Method get_highlightedTrigger, addr 0x34a5ce4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_highlightedTrigger();

  /// @brief Method get_normalTrigger, addr 0x34a5cd4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_normalTrigger();

  /// @brief Method get_pressedTrigger, addr 0x34a5cf4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_pressedTrigger();

  /// @brief Method get_selectedTrigger, addr 0x34a5d04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_selectedTrigger();

  /// @brief Method set_disabledTrigger, addr 0x34a5d1c, size 0x8, virtual false, abstract: false, final false
  inline void set_disabledTrigger(::StringW value);

  /// @brief Method set_highlightedTrigger, addr 0x34a5cec, size 0x8, virtual false, abstract: false, final false
  inline void set_highlightedTrigger(::StringW value);

  /// @brief Method set_normalTrigger, addr 0x34a5cdc, size 0x8, virtual false, abstract: false, final false
  inline void set_normalTrigger(::StringW value);

  /// @brief Method set_pressedTrigger, addr 0x34a5cfc, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedTrigger(::StringW value);

  /// @brief Method set_selectedTrigger, addr 0x34a5d0c, size 0x8, virtual false, abstract: false, final false
  inline void set_selectedTrigger(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationTriggers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationTriggers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationTriggers(AnimationTriggers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationTriggers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationTriggers(AnimationTriggers const&) = delete;

  /// @brief Field m_NormalTrigger, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_NormalTrigger;

  /// @brief Field m_HighlightedTrigger, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_HighlightedTrigger;

  /// @brief Field m_PressedTrigger, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_PressedTrigger;

  /// @brief Field m_SelectedTrigger, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_SelectedTrigger;

  /// @brief Field m_DisabledTrigger, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_DisabledTrigger;

  /// @brief Field kDefaultDisabledAnimName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDefaultDisabledAnimName{ u"Disabled" };

  /// @brief Field kDefaultHighlightedAnimName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDefaultHighlightedAnimName{ u"Highlighted" };

  /// @brief Field kDefaultNormalAnimName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDefaultNormalAnimName{ u"Normal" };

  /// @brief Field kDefaultPressedAnimName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDefaultPressedAnimName{ u"Pressed" };

  /// @brief Field kDefaultSelectedAnimName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDefaultSelectedAnimName{ u"Selected" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::AnimationTriggers, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::AnimationTriggers, ___m_NormalTrigger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AnimationTriggers, ___m_HighlightedTrigger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AnimationTriggers, ___m_PressedTrigger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AnimationTriggers, ___m_SelectedTrigger) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AnimationTriggers, ___m_DisabledTrigger) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::AnimationTriggers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::AnimationTriggers*, "UnityEngine.UI", "AnimationTriggers");
