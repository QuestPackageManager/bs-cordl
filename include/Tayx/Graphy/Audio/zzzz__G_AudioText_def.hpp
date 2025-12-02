#pragma once
// IWYU pragma private; include "Tayx/Graphy/Audio/G_AudioText.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(G_AudioText)
namespace Tayx::Graphy::Audio {
class G_AudioMonitor;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Tayx::Graphy::Audio {
class G_AudioText;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Audio::G_AudioText);
// Dependencies UnityEngine.MonoBehaviour
namespace Tayx::Graphy::Audio {
// Is value type: false
// CS Name: Tayx.Graphy.Audio.G_AudioText
class CORDL_TYPE G_AudioText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_DBText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DBText, put = __cordl_internal_set_m_DBText)) ::UnityW<::UnityEngine::UI::Text> m_DBText;

  /// @brief Field m_audioMonitor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_audioMonitor, put = __cordl_internal_set_m_audioMonitor)) ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> m_audioMonitor;

  /// @brief Field m_deltaTimeOffset, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_deltaTimeOffset, put = __cordl_internal_set_m_deltaTimeOffset)) float_t m_deltaTimeOffset;

  /// @brief Field m_graphyManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_graphyManager, put = __cordl_internal_set_m_graphyManager)) ::UnityW<::Tayx::Graphy::GraphyManager> m_graphyManager;

  /// @brief Field m_updateRate, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_updateRate, put = __cordl_internal_set_m_updateRate)) int32_t m_updateRate;

  /// @brief Method Awake, addr 0x622489c, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Init, addr 0x62242e8, size 0x11c, virtual false, abstract: false, final false
  inline void Init();

  static inline ::Tayx::Graphy::Audio::G_AudioText* New_ctor();

  /// @brief Method Update, addr 0x62248a0, size 0x118, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateParameters, addr 0x62242cc, size 0x1c, virtual false, abstract: false, final false
  inline void UpdateParameters();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_DBText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_DBText();

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> const& __cordl_internal_get_m_audioMonitor() const;

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor>& __cordl_internal_get_m_audioMonitor();

  constexpr float_t const& __cordl_internal_get_m_deltaTimeOffset() const;

  constexpr float_t& __cordl_internal_get_m_deltaTimeOffset();

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager> const& __cordl_internal_get_m_graphyManager() const;

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager>& __cordl_internal_get_m_graphyManager();

  constexpr int32_t const& __cordl_internal_get_m_updateRate() const;

  constexpr int32_t& __cordl_internal_get_m_updateRate();

  constexpr void __cordl_internal_set_m_DBText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_m_audioMonitor(::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> value);

  constexpr void __cordl_internal_set_m_deltaTimeOffset(float_t value);

  constexpr void __cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager> value);

  constexpr void __cordl_internal_set_m_updateRate(int32_t value);

  /// @brief Method .ctor, addr 0x62249b8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_AudioText();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_AudioText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_AudioText(G_AudioText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_AudioText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_AudioText(G_AudioText const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21207 };

  /// @brief Field m_DBText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___m_DBText;

  /// @brief Field m_graphyManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::GraphyManager> ___m_graphyManager;

  /// @brief Field m_audioMonitor, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> ___m_audioMonitor;

  /// @brief Field m_updateRate, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_updateRate;

  /// @brief Field m_deltaTimeOffset, offset: 0x3c, size: 0x4, def value: None
  float_t ___m_deltaTimeOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioText, ___m_DBText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioText, ___m_graphyManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioText, ___m_audioMonitor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioText, ___m_updateRate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioText, ___m_deltaTimeOffset) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Audio::G_AudioText, 0x40>, "Size mismatch!");

} // namespace Tayx::Graphy::Audio
NEED_NO_BOX(::Tayx::Graphy::Audio::G_AudioText);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Audio::G_AudioText*, "Tayx.Graphy.Audio", "G_AudioText");
