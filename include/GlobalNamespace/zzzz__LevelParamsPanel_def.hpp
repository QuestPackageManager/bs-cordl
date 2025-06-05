#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelParamsPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelParamsPanel)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelParamsPanel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelParamsPanel);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelParamsPanel
class CORDL_TYPE LevelParamsPanel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _bombsCountText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bombsCountText, put = __cordl_internal_set__bombsCountText)) ::UnityW<::TMPro::TextMeshProUGUI> _bombsCountText;

  /// @brief Field _notesCountText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__notesCountText, put = __cordl_internal_set__notesCountText)) ::UnityW<::TMPro::TextMeshProUGUI> _notesCountText;

  /// @brief Field _notesPerSecondText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__notesPerSecondText, put = __cordl_internal_set__notesPerSecondText)) ::UnityW<::TMPro::TextMeshProUGUI> _notesPerSecondText;

  /// @brief Field _obstaclesCountText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__obstaclesCountText, put = __cordl_internal_set__obstaclesCountText)) ::UnityW<::TMPro::TextMeshProUGUI> _obstaclesCountText;

  __declspec(property(put = set_bombsCount)) int32_t bombsCount;

  __declspec(property(put = set_notesCount)) int32_t notesCount;

  __declspec(property(put = set_notesPerSecond)) float_t notesPerSecond;

  __declspec(property(put = set_obstaclesCount)) int32_t obstaclesCount;

  static inline ::GlobalNamespace::LevelParamsPanel* New_ctor();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__bombsCountText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__bombsCountText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__notesCountText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__notesCountText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__notesPerSecondText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__notesPerSecondText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__obstaclesCountText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__obstaclesCountText();

  constexpr void __cordl_internal_set__bombsCountText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__notesCountText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__notesPerSecondText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__obstaclesCountText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3b0583c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_bombsCount, addr 0x3b057f4, size 0x48, virtual false, abstract: false, final false
  inline void set_bombsCount(int32_t value);

  /// @brief Method set_notesCount, addr 0x3b05764, size 0x48, virtual false, abstract: false, final false
  inline void set_notesCount(int32_t value);

  /// @brief Method set_notesPerSecond, addr 0x3b056e4, size 0x80, virtual false, abstract: false, final false
  inline void set_notesPerSecond(float_t value);

  /// @brief Method set_obstaclesCount, addr 0x3b057ac, size 0x48, virtual false, abstract: false, final false
  inline void set_obstaclesCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelParamsPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelParamsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelParamsPanel(LevelParamsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelParamsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelParamsPanel(LevelParamsPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4991 };

  /// @brief Field _notesPerSecondText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____notesPerSecondText;

  /// @brief Field _notesCountText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____notesCountText;

  /// @brief Field _obstaclesCountText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____obstaclesCountText;

  /// @brief Field _bombsCountText, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____bombsCountText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelParamsPanel, ____notesPerSecondText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelParamsPanel, ____notesCountText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelParamsPanel, ____obstaclesCountText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelParamsPanel, ____bombsCountText) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelParamsPanel, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelParamsPanel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelParamsPanel*, "", "LevelParamsPanel");
