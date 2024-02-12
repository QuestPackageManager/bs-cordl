#pragma once
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
// Type: Tayx.Graphy.Audio::G_AudioText
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy::Audio {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14962))
// CS Name: ::Tayx.Graphy.Audio::G_AudioText*
class CORDL_TYPE G_AudioText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_DBText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DBText, put = __cordl_internal_set_m_DBText))::UnityW<::UnityEngine::UI::Text> m_DBText;

  /// @brief Field m_graphyManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_graphyManager, put = __cordl_internal_set_m_graphyManager))::UnityW<::Tayx::Graphy::GraphyManager> m_graphyManager;

  /// @brief Field m_audioMonitor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_audioMonitor, put = __cordl_internal_set_m_audioMonitor))::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> m_audioMonitor;

  /// @brief Field m_updateRate, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_updateRate, put = __cordl_internal_set_m_updateRate)) int32_t m_updateRate;

  /// @brief Field m_deltaTimeOffset, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_deltaTimeOffset, put = __cordl_internal_set_m_deltaTimeOffset)) float_t m_deltaTimeOffset;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_DBText();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_DBText() const;

  constexpr void __cordl_internal_set_m_DBText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager>& __cordl_internal_get_m_graphyManager();

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager> const& __cordl_internal_get_m_graphyManager() const;

  constexpr void __cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager> value);

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor>& __cordl_internal_get_m_audioMonitor();

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> const& __cordl_internal_get_m_audioMonitor() const;

  constexpr void __cordl_internal_set_m_audioMonitor(::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> value);

  constexpr int32_t& __cordl_internal_get_m_updateRate();

  constexpr int32_t const& __cordl_internal_get_m_updateRate() const;

  constexpr void __cordl_internal_set_m_updateRate(int32_t value);

  constexpr float_t& __cordl_internal_get_m_deltaTimeOffset();

  constexpr float_t const& __cordl_internal_get_m_deltaTimeOffset() const;

  constexpr void __cordl_internal_set_m_deltaTimeOffset(float_t value);

  /// @brief Method Awake, addr 0x2a0f160, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Update, addr 0x2a0f164, size 0x100, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateParameters, addr 0x2a0ebb8, size 0x20, virtual false, abstract: false, final false
  inline void UpdateParameters();

  /// @brief Method Init, addr 0x2a0ebd8, size 0x110, virtual false, abstract: false, final false
  inline void Init();

  static inline ::Tayx::Graphy::Audio::G_AudioText* New_ctor();

  /// @brief Method .ctor, addr 0x2a0f264, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "G_AudioText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_AudioText(G_AudioText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_AudioText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_AudioText(G_AudioText const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_AudioText();

public:
  /// @brief Field m_DBText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___m_DBText;

  /// @brief Field m_graphyManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::GraphyManager> ___m_graphyManager;

  /// @brief Field m_audioMonitor, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> ___m_audioMonitor;

  /// @brief Field m_updateRate, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_updateRate;

  /// @brief Field m_deltaTimeOffset, offset: 0x34, size: 0x4, def value: None
  float_t ___m_deltaTimeOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Audio::G_AudioText, 0x38>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioText, ___m_DBText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioText, ___m_graphyManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioText, ___m_audioMonitor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioText, ___m_updateRate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioText, ___m_deltaTimeOffset) == 0x34, "Offset mismatch!");

} // namespace Tayx::Graphy::Audio
NEED_NO_BOX(::Tayx::Graphy::Audio::G_AudioText);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Audio::G_AudioText*, "Tayx.Graphy.Audio", "G_AudioText");
