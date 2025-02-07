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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BasicLevelParamsPanel
class CORDL_TYPE BasicLevelParamsPanel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _bpmText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__bpmText, put = __cordl_internal_set__bpmText)) ::UnityW<::TMPro::TextMeshProUGUI> _bpmText;

  /// @brief Field _durationText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__durationText, put = __cordl_internal_set__durationText)) ::UnityW<::TMPro::TextMeshProUGUI> _durationText;

  __declspec(property(put = set_bpm)) float_t bpm;

  __declspec(property(put = set_duration)) float_t duration;

  static inline ::GlobalNamespace::BasicLevelParamsPanel* New_ctor();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__bpmText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__bpmText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__durationText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__durationText();

  constexpr void __cordl_internal_set__bpmText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__durationText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3b04270, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_bpm, addr 0x3b04228, size 0x48, virtual false, abstract: false, final false
  inline void set_bpm(float_t value);

  /// @brief Method set_duration, addr 0x3b041f4, size 0x34, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4968 };

  /// @brief Field _durationText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____durationText;

  /// @brief Field _bpmText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____bpmText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BasicLevelParamsPanel, ____durationText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicLevelParamsPanel, ____bpmText) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicLevelParamsPanel, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasicLevelParamsPanel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicLevelParamsPanel*, "", "BasicLevelParamsPanel");
