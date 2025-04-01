#pragma once
// IWYU pragma private; include "Tayx/Graphy/Fps/G_FpsText.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(G_FpsText)
namespace Tayx::Graphy::Fps {
class G_FpsMonitor;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Tayx::Graphy::Fps {
class G_FpsText;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Fps::G_FpsText);
// Dependencies UnityEngine.MonoBehaviour
namespace Tayx::Graphy::Fps {
// Is value type: false
// CS Name: Tayx.Graphy.Fps.G_FpsText
class CORDL_TYPE G_FpsText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_avgFpsText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_avgFpsText, put = __cordl_internal_set_m_avgFpsText)) ::UnityW<::UnityEngine::UI::Text> m_avgFpsText;

  /// @brief Field m_deltaTime, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_deltaTime, put = __cordl_internal_set_m_deltaTime)) float_t m_deltaTime;

  /// @brief Field m_fps, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_fps, put = __cordl_internal_set_m_fps)) float_t m_fps;

  /// @brief Field m_fpsMonitor, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fpsMonitor, put = __cordl_internal_set_m_fpsMonitor)) ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> m_fpsMonitor;

  /// @brief Field m_fpsText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fpsText, put = __cordl_internal_set_m_fpsText)) ::UnityW<::UnityEngine::UI::Text> m_fpsText;

  /// @brief Field m_frameCount, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_frameCount, put = __cordl_internal_set_m_frameCount)) int32_t m_frameCount;

  /// @brief Field m_graphyManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_graphyManager, put = __cordl_internal_set_m_graphyManager)) ::UnityW<::Tayx::Graphy::GraphyManager> m_graphyManager;

  /// @brief Field m_ms, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ms, put = __cordl_internal_set_m_ms)) float_t m_ms;

  /// @brief Field m_msText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_msText, put = __cordl_internal_set_m_msText)) ::UnityW<::UnityEngine::UI::Text> m_msText;

  /// @brief Field m_onePercentFpsText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_onePercentFpsText, put = __cordl_internal_set_m_onePercentFpsText)) ::UnityW<::UnityEngine::UI::Text> m_onePercentFpsText;

  /// @brief Field m_updateRate, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_updateRate, put = __cordl_internal_set_m_updateRate)) int32_t m_updateRate;

  /// @brief Field m_zero1PercentFpsText, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_zero1PercentFpsText, put = __cordl_internal_set_m_zero1PercentFpsText)) ::UnityW<::UnityEngine::UI::Text> m_zero1PercentFpsText;

  /// @brief Method Awake, addr 0x44cf554, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Init, addr 0x44ceebc, size 0x144, virtual false, abstract: false, final false
  inline void Init();

  static inline ::Tayx::Graphy::Fps::G_FpsText* New_ctor();

  /// @brief Method SetFpsRelatedTextColor, addr 0x44cf864, size 0x80, virtual false, abstract: false, final false
  inline void SetFpsRelatedTextColor(::UnityEngine::UI::Text* text, float_t fps);

  /// @brief Method Update, addr 0x44cf558, size 0x30c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateParameters, addr 0x44cee9c, size 0x20, virtual false, abstract: false, final false
  inline void UpdateParameters();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_avgFpsText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_avgFpsText();

  constexpr float_t const& __cordl_internal_get_m_deltaTime() const;

  constexpr float_t& __cordl_internal_get_m_deltaTime();

  constexpr float_t const& __cordl_internal_get_m_fps() const;

  constexpr float_t& __cordl_internal_get_m_fps();

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> const& __cordl_internal_get_m_fpsMonitor() const;

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor>& __cordl_internal_get_m_fpsMonitor();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_fpsText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_fpsText();

  constexpr int32_t const& __cordl_internal_get_m_frameCount() const;

  constexpr int32_t& __cordl_internal_get_m_frameCount();

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager> const& __cordl_internal_get_m_graphyManager() const;

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager>& __cordl_internal_get_m_graphyManager();

  constexpr float_t const& __cordl_internal_get_m_ms() const;

  constexpr float_t& __cordl_internal_get_m_ms();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_msText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_msText();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_onePercentFpsText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_onePercentFpsText();

  constexpr int32_t const& __cordl_internal_get_m_updateRate() const;

  constexpr int32_t& __cordl_internal_get_m_updateRate();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_zero1PercentFpsText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_zero1PercentFpsText();

  constexpr void __cordl_internal_set_m_avgFpsText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_m_deltaTime(float_t value);

  constexpr void __cordl_internal_set_m_fps(float_t value);

  constexpr void __cordl_internal_set_m_fpsMonitor(::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> value);

  constexpr void __cordl_internal_set_m_fpsText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_m_frameCount(int32_t value);

  constexpr void __cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager> value);

  constexpr void __cordl_internal_set_m_ms(float_t value);

  constexpr void __cordl_internal_set_m_msText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_m_onePercentFpsText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_m_updateRate(int32_t value);

  constexpr void __cordl_internal_set_m_zero1PercentFpsText(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x44cf8e4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_FpsText();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_FpsText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_FpsText(G_FpsText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_FpsText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_FpsText(G_FpsText const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17238 };

  /// @brief Field m_msStringFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString m_msStringFormat{ u"0.0" };

  /// @brief Field m_fpsText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___m_fpsText;

  /// @brief Field m_msText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___m_msText;

  /// @brief Field m_avgFpsText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___m_avgFpsText;

  /// @brief Field m_onePercentFpsText, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___m_onePercentFpsText;

  /// @brief Field m_zero1PercentFpsText, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___m_zero1PercentFpsText;

  /// @brief Field m_graphyManager, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::GraphyManager> ___m_graphyManager;

  /// @brief Field m_fpsMonitor, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> ___m_fpsMonitor;

  /// @brief Field m_updateRate, offset: 0x58, size: 0x4, def value: None
  int32_t ___m_updateRate;

  /// @brief Field m_frameCount, offset: 0x5c, size: 0x4, def value: None
  int32_t ___m_frameCount;

  /// @brief Field m_deltaTime, offset: 0x60, size: 0x4, def value: None
  float_t ___m_deltaTime;

  /// @brief Field m_fps, offset: 0x64, size: 0x4, def value: None
  float_t ___m_fps;

  /// @brief Field m_ms, offset: 0x68, size: 0x4, def value: None
  float_t ___m_ms;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_fpsText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_msText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_avgFpsText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_onePercentFpsText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_zero1PercentFpsText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_graphyManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_fpsMonitor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_updateRate) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_frameCount) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_deltaTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_fps) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_ms) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Fps::G_FpsText, 0x70>, "Size mismatch!");

} // namespace Tayx::Graphy::Fps
NEED_NO_BOX(::Tayx::Graphy::Fps::G_FpsText);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Fps::G_FpsText*, "Tayx.Graphy.Fps", "G_FpsText");
