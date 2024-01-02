#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(G_RamText)
namespace Tayx::Graphy::Ram {
class G_RamMonitor;
}
namespace UnityEngine::UI {
class Text;
}
namespace Tayx::Graphy {
class GraphyManager;
}
// Forward declare root types
namespace Tayx::Graphy::Ram {
class G_RamText;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Ram::G_RamText);
// Type: Tayx.Graphy.Ram::G_RamText
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy::Ram {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15079))
// CS Name: ::Tayx.Graphy.Ram::G_RamText*
class CORDL_TYPE G_RamText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_allocatedSystemMemorySizeText, offset 0x18, size 0x8
  __declspec(property(get = __get_m_allocatedSystemMemorySizeText, put = __set_m_allocatedSystemMemorySizeText))::UnityEngine::UI::Text* m_allocatedSystemMemorySizeText;

  /// @brief Field m_reservedSystemMemorySizeText, offset 0x20, size 0x8
  __declspec(property(get = __get_m_reservedSystemMemorySizeText, put = __set_m_reservedSystemMemorySizeText))::UnityEngine::UI::Text* m_reservedSystemMemorySizeText;

  /// @brief Field m_monoSystemMemorySizeText, offset 0x28, size 0x8
  __declspec(property(get = __get_m_monoSystemMemorySizeText, put = __set_m_monoSystemMemorySizeText))::UnityEngine::UI::Text* m_monoSystemMemorySizeText;

  /// @brief Field m_graphyManager, offset 0x30, size 0x8
  __declspec(property(get = __get_m_graphyManager, put = __set_m_graphyManager))::Tayx::Graphy::GraphyManager* m_graphyManager;

  /// @brief Field m_ramMonitor, offset 0x38, size 0x8
  __declspec(property(get = __get_m_ramMonitor, put = __set_m_ramMonitor))::Tayx::Graphy::Ram::G_RamMonitor* m_ramMonitor;

  /// @brief Field m_updateRate, offset 0x40, size 0x4
  __declspec(property(get = __get_m_updateRate, put = __set_m_updateRate)) float_t m_updateRate;

  /// @brief Field m_deltaTime, offset 0x44, size 0x4
  __declspec(property(get = __get_m_deltaTime, put = __set_m_deltaTime)) float_t m_deltaTime;

  constexpr ::UnityEngine::UI::Text*& __get_m_allocatedSystemMemorySizeText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_allocatedSystemMemorySizeText() const;

  constexpr void __set_m_allocatedSystemMemorySizeText(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_m_reservedSystemMemorySizeText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_reservedSystemMemorySizeText() const;

  constexpr void __set_m_reservedSystemMemorySizeText(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_m_monoSystemMemorySizeText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_monoSystemMemorySizeText() const;

  constexpr void __set_m_monoSystemMemorySizeText(::UnityEngine::UI::Text* value);

  constexpr ::Tayx::Graphy::GraphyManager*& __get_m_graphyManager();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::GraphyManager*> const& __get_m_graphyManager() const;

  constexpr void __set_m_graphyManager(::Tayx::Graphy::GraphyManager* value);

  constexpr ::Tayx::Graphy::Ram::G_RamMonitor*& __get_m_ramMonitor();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Ram::G_RamMonitor*> const& __get_m_ramMonitor() const;

  constexpr void __set_m_ramMonitor(::Tayx::Graphy::Ram::G_RamMonitor* value);

  constexpr float_t& __get_m_updateRate();

  constexpr float_t const& __get_m_updateRate() const;

  constexpr void __set_m_updateRate(float_t value);

  constexpr float_t& __get_m_deltaTime();

  constexpr float_t const& __get_m_deltaTime() const;

  constexpr void __set_m_deltaTime(float_t value);

  /// @brief Method Awake, addr 0x2a082d0, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Update, addr 0x2a082d4, size 0x160, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateParameters, addr 0x2a07fd0, size 0xa0, virtual false, abstract: false, final false
  inline void UpdateParameters();

  /// @brief Method Init, addr 0x2a08070, size 0x10c, virtual false, abstract: false, final false
  inline void Init();

  static inline ::Tayx::Graphy::Ram::G_RamText* New_ctor();

  /// @brief Method .ctor, addr 0x2a08434, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "G_RamText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_RamText(G_RamText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_RamText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_RamText(G_RamText const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_RamText();

public:
  /// @brief Field m_allocatedSystemMemorySizeText, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_allocatedSystemMemorySizeText;

  /// @brief Field m_reservedSystemMemorySizeText, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_reservedSystemMemorySizeText;

  /// @brief Field m_monoSystemMemorySizeText, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_monoSystemMemorySizeText;

  /// @brief Field m_graphyManager, offset: 0x30, size: 0x8, def value: None
  ::Tayx::Graphy::GraphyManager* ___m_graphyManager;

  /// @brief Field m_ramMonitor, offset: 0x38, size: 0x8, def value: None
  ::Tayx::Graphy::Ram::G_RamMonitor* ___m_ramMonitor;

  /// @brief Field m_updateRate, offset: 0x40, size: 0x4, def value: None
  float_t ___m_updateRate;

  /// @brief Field m_deltaTime, offset: 0x44, size: 0x4, def value: None
  float_t ___m_deltaTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Ram::G_RamText, 0x48>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamText, ___m_allocatedSystemMemorySizeText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamText, ___m_reservedSystemMemorySizeText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamText, ___m_monoSystemMemorySizeText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamText, ___m_graphyManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamText, ___m_ramMonitor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamText, ___m_updateRate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamText, ___m_deltaTime) == 0x44, "Offset mismatch!");

} // namespace Tayx::Graphy::Ram
NEED_NO_BOX(::Tayx::Graphy::Ram::G_RamText);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Ram::G_RamText*, "Tayx.Graphy.Ram", "G_RamText");
