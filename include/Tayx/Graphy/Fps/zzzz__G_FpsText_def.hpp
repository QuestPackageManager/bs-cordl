#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(G_FpsText)
namespace Tayx::Graphy {
class GraphyManager;
}
namespace UnityEngine::UI {
class Text;
}
namespace Tayx::Graphy::Fps {
class G_FpsMonitor;
}
// Forward declare root types
namespace Tayx::Graphy::Fps {
class G_FpsText;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Fps::G_FpsText);
// Type: Tayx.Graphy.Fps::G_FpsText
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 100, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy::Fps {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15263))
// CS Name: ::Tayx.Graphy.Fps::G_FpsText*
class CORDL_TYPE G_FpsText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_fpsText, offset 0x18, size 0x8
  __declspec(property(get = __get_m_fpsText, put = __set_m_fpsText))::UnityEngine::UI::Text* m_fpsText;

  /// @brief Field m_msText, offset 0x20, size 0x8
  __declspec(property(get = __get_m_msText, put = __set_m_msText))::UnityEngine::UI::Text* m_msText;

  /// @brief Field m_avgFpsText, offset 0x28, size 0x8
  __declspec(property(get = __get_m_avgFpsText, put = __set_m_avgFpsText))::UnityEngine::UI::Text* m_avgFpsText;

  /// @brief Field m_onePercentFpsText, offset 0x30, size 0x8
  __declspec(property(get = __get_m_onePercentFpsText, put = __set_m_onePercentFpsText))::UnityEngine::UI::Text* m_onePercentFpsText;

  /// @brief Field m_zero1PercentFpsText, offset 0x38, size 0x8
  __declspec(property(get = __get_m_zero1PercentFpsText, put = __set_m_zero1PercentFpsText))::UnityEngine::UI::Text* m_zero1PercentFpsText;

  /// @brief Field m_graphyManager, offset 0x40, size 0x8
  __declspec(property(get = __get_m_graphyManager, put = __set_m_graphyManager))::Tayx::Graphy::GraphyManager* m_graphyManager;

  /// @brief Field m_fpsMonitor, offset 0x48, size 0x8
  __declspec(property(get = __get_m_fpsMonitor, put = __set_m_fpsMonitor))::Tayx::Graphy::Fps::G_FpsMonitor* m_fpsMonitor;

  /// @brief Field m_updateRate, offset 0x50, size 0x4
  __declspec(property(get = __get_m_updateRate, put = __set_m_updateRate)) int32_t m_updateRate;

  /// @brief Field m_frameCount, offset 0x54, size 0x4
  __declspec(property(get = __get_m_frameCount, put = __set_m_frameCount)) int32_t m_frameCount;

  /// @brief Field m_deltaTime, offset 0x58, size 0x4
  __declspec(property(get = __get_m_deltaTime, put = __set_m_deltaTime)) float_t m_deltaTime;

  /// @brief Field m_fps, offset 0x5c, size 0x4
  __declspec(property(get = __get_m_fps, put = __set_m_fps)) float_t m_fps;

  /// @brief Field m_ms, offset 0x60, size 0x4
  __declspec(property(get = __get_m_ms, put = __set_m_ms)) float_t m_ms;

  constexpr ::UnityEngine::UI::Text*& __get_m_fpsText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_fpsText() const;

  constexpr void __set_m_fpsText(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_m_msText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_msText() const;

  constexpr void __set_m_msText(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_m_avgFpsText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_avgFpsText() const;

  constexpr void __set_m_avgFpsText(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_m_onePercentFpsText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_onePercentFpsText() const;

  constexpr void __set_m_onePercentFpsText(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_m_zero1PercentFpsText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_zero1PercentFpsText() const;

  constexpr void __set_m_zero1PercentFpsText(::UnityEngine::UI::Text* value);

  constexpr ::Tayx::Graphy::GraphyManager*& __get_m_graphyManager();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::GraphyManager*> const& __get_m_graphyManager() const;

  constexpr void __set_m_graphyManager(::Tayx::Graphy::GraphyManager* value);

  constexpr ::Tayx::Graphy::Fps::G_FpsMonitor*& __get_m_fpsMonitor();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Fps::G_FpsMonitor*> const& __get_m_fpsMonitor() const;

  constexpr void __set_m_fpsMonitor(::Tayx::Graphy::Fps::G_FpsMonitor* value);

  constexpr int32_t& __get_m_updateRate();

  constexpr int32_t const& __get_m_updateRate() const;

  constexpr void __set_m_updateRate(int32_t value);

  constexpr int32_t& __get_m_frameCount();

  constexpr int32_t const& __get_m_frameCount() const;

  constexpr void __set_m_frameCount(int32_t value);

  constexpr float_t& __get_m_deltaTime();

  constexpr float_t const& __get_m_deltaTime() const;

  constexpr void __set_m_deltaTime(float_t value);

  constexpr float_t& __get_m_fps();

  constexpr float_t const& __get_m_fps() const;

  constexpr void __set_m_fps(float_t value);

  constexpr float_t& __get_m_ms();

  constexpr float_t const& __get_m_ms() const;

  constexpr void __set_m_ms(float_t value);

  /// @brief Method Awake addr 0x288c128 size 0x4 virtual false final false
  inline void Awake();

  /// @brief Method Update addr 0x288c230 size 0x30c virtual false final false
  inline void Update();

  /// @brief Method UpdateParameters addr 0x288bb0c size 0x20 virtual false final false
  inline void UpdateParameters();

  /// @brief Method SetFpsRelatedTextColor addr 0x288c53c size 0x7c virtual false final false
  inline void SetFpsRelatedTextColor(::UnityEngine::UI::Text* text, float_t fps);

  /// @brief Method Init addr 0x288c12c size 0x104 virtual false final false
  inline void Init();

  static inline ::Tayx::Graphy::Fps::G_FpsText* New_ctor();

  /// @brief Method .ctor addr 0x288c5b8 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "G_FpsText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_FpsText(G_FpsText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_FpsText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_FpsText(G_FpsText const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_FpsText();

public:
  /// @brief Field m_fpsText, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_fpsText;

  /// @brief Field m_msText, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_msText;

  /// @brief Field m_avgFpsText, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_avgFpsText;

  /// @brief Field m_onePercentFpsText, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_onePercentFpsText;

  /// @brief Field m_zero1PercentFpsText, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_zero1PercentFpsText;

  /// @brief Field m_graphyManager, offset: 0x40, size: 0x8, def value: None
  ::Tayx::Graphy::GraphyManager* ___m_graphyManager;

  /// @brief Field m_fpsMonitor, offset: 0x48, size: 0x8, def value: None
  ::Tayx::Graphy::Fps::G_FpsMonitor* ___m_fpsMonitor;

  /// @brief Field m_updateRate, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_updateRate;

  /// @brief Field m_frameCount, offset: 0x54, size: 0x4, def value: None
  int32_t ___m_frameCount;

  /// @brief Field m_deltaTime, offset: 0x58, size: 0x4, def value: None
  float_t ___m_deltaTime;

  /// @brief Field m_fps, offset: 0x5c, size: 0x4, def value: None
  float_t ___m_fps;

  /// @brief Field m_ms, offset: 0x60, size: 0x4, def value: None
  float_t ___m_ms;

  /// @brief Field m_msStringFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString m_msStringFormat{ u"0.0" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Fps::G_FpsText, 0x68>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_fpsText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_msText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_avgFpsText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_onePercentFpsText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_zero1PercentFpsText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_graphyManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_fpsMonitor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_updateRate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_frameCount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_deltaTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_fps) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsText, ___m_ms) == 0x60, "Offset mismatch!");

} // namespace Tayx::Graphy::Fps
NEED_NO_BOX(::Tayx::Graphy::Fps::G_FpsText);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Fps::G_FpsText*, "Tayx.Graphy.Fps", "G_FpsText");
