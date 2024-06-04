#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicLevelParamsPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BasicLevelParamsPanel)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicLevelParamsPanel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BasicLevelParamsPanel);
// Type: ::BasicLevelParamsPanel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BasicLevelParamsPanel*
class CORDL_TYPE BasicLevelParamsPanel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _bpmText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bpmText, put = __cordl_internal_set__bpmText))::UnityW<::TMPro::TextMeshProUGUI> _bpmText;

  /// @brief Field _durationText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__durationText, put = __cordl_internal_set__durationText))::UnityW<::TMPro::TextMeshProUGUI> _durationText;

  __declspec(property(put = set_bpm)) float_t bpm;

  __declspec(property(put = set_duration)) float_t duration;

  static inline ::GlobalNamespace::BasicLevelParamsPanel* New_ctor();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__bpmText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__bpmText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__durationText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__durationText();

  constexpr void __cordl_internal_set__bpmText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__durationText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x267f198, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_bpm, addr 0x267f150, size 0x48, virtual false, abstract: false, final false
  inline void set_bpm(float_t value);

  /// @brief Method set_duration, addr 0x267f11c, size 0x34, virtual false, abstract: false, final false
  inline void set_duration(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicLevelParamsPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicLevelParamsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicLevelParamsPanel(BasicLevelParamsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicLevelParamsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicLevelParamsPanel(BasicLevelParamsPanel const&) = delete;

  /// @brief Field _durationText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____durationText;

  /// @brief Field _bpmText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____bpmText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicLevelParamsPanel, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicLevelParamsPanel, ____durationText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicLevelParamsPanel, ____bpmText) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasicLevelParamsPanel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicLevelParamsPanel*, "", "BasicLevelParamsPanel");
