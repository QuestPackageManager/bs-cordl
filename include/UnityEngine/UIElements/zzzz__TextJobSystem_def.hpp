#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextJobSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TextJobSystem)
namespace UnityEngine::UIElements {
class ATGTextJobSystem;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class UITKTextJobSystem;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextJobSystem;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::TextJobSystem*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::TextJobSystem*, "UnityEngine.UIElements", "TextJobSystem");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextJobSystem
class CORDL_TYPE TextJobSystem : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ATGTextJobSystem, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ATGTextJobSystem, put = __cordl_internal_set_m_ATGTextJobSystem)) ::UnityEngine::UIElements::ATGTextJobSystem* m_ATGTextJobSystem;

  /// @brief Field m_UITKTextJobSystem, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UITKTextJobSystem, put = __cordl_internal_set_m_UITKTextJobSystem)) ::UnityEngine::UIElements::UITKTextJobSystem* m_UITKTextJobSystem;

  /// @brief Method GenerateText, addr 0x713048c, size 0xec, virtual false, abstract: false, final false
  inline void GenerateText(Il2CppObject* mgc, ::UnityEngine::UIElements::TextElement* textElement);

  static inline ::UnityEngine::UIElements::TextJobSystem* New_ctor();

  /// @brief Method PrepareShapingBeforeLayout, addr 0x7130870, size 0x84, virtual false, abstract: false, final false
  inline void PrepareShapingBeforeLayout(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  constexpr ::UnityEngine::UIElements::ATGTextJobSystem* const& __cordl_internal_get_m_ATGTextJobSystem() const;

  constexpr ::UnityEngine::UIElements::ATGTextJobSystem*& __cordl_internal_get_m_ATGTextJobSystem();

  constexpr ::UnityEngine::UIElements::UITKTextJobSystem* const& __cordl_internal_get_m_UITKTextJobSystem() const;

  constexpr ::UnityEngine::UIElements::UITKTextJobSystem*& __cordl_internal_get_m_UITKTextJobSystem();

  constexpr void __cordl_internal_set_m_ATGTextJobSystem(::UnityEngine::UIElements::ATGTextJobSystem* value);

  constexpr void __cordl_internal_set_m_UITKTextJobSystem(::UnityEngine::UIElements::UITKTextJobSystem* value);

  /// @brief Method .ctor, addr 0x71308f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextJobSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextJobSystem", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextJobSystem(TextJobSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextJobSystem", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextJobSystem(TextJobSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5185 };

  /// @brief Field m_UITKTextJobSystem, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UITKTextJobSystem* ___m_UITKTextJobSystem;

  /// @brief Field m_ATGTextJobSystem, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::ATGTextJobSystem* ___m_ATGTextJobSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextJobSystem, ___m_UITKTextJobSystem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextJobSystem, ___m_ATGTextJobSystem) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::TextJobSystem) == 0x20, "Size mismatch!");

} // namespace UnityEngine::UIElements
