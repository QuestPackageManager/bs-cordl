#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelChangedEventBase_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PanelChangedEventBase_1)
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class PanelChangedEventBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::PanelChangedEventBase_1);
// Dependencies UnityEngine.UIElements.EventBase`1<T>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.PanelChangedEventBase`1<T>
class CORDL_TYPE PanelChangedEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
  // Declarations
  /// @brief Field <destinationPanel>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__destinationPanel_k__BackingField,
                      put = __cordl_internal_set__destinationPanel_k__BackingField)) ::UnityEngine::UIElements::IPanel* _destinationPanel_k__BackingField;

  /// @brief Field <originPanel>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__originPanel_k__BackingField,
                      put = __cordl_internal_set__originPanel_k__BackingField)) ::UnityEngine::UIElements::IPanel* _originPanel_k__BackingField;

  __declspec(property(get = get_destinationPanel, put = set_destinationPanel)) ::UnityEngine::UIElements::IPanel* destinationPanel;

  __declspec(property(get = get_originPanel, put = set_originPanel)) ::UnityEngine::UIElements::IPanel* originPanel;

  /// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetPooled(::UnityEngine::UIElements::IPanel* originPanel, ::UnityEngine::UIElements::IPanel* destinationPanel);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PanelChangedEventBase_1<T>* New_ctor();

  constexpr ::UnityEngine::UIElements::IPanel* const& __cordl_internal_get__destinationPanel_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::IPanel*& __cordl_internal_get__destinationPanel_k__BackingField();

  constexpr ::UnityEngine::UIElements::IPanel* const& __cordl_internal_get__originPanel_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::IPanel*& __cordl_internal_get__originPanel_k__BackingField();

  constexpr void __cordl_internal_set__destinationPanel_k__BackingField(::UnityEngine::UIElements::IPanel* value);

  constexpr void __cordl_internal_set__originPanel_k__BackingField(::UnityEngine::UIElements::IPanel* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_destinationPanel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IPanel* get_destinationPanel();

  /// @brief Method get_originPanel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IPanel* get_originPanel();

  /// @brief Method set_destinationPanel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_destinationPanel(::UnityEngine::UIElements::IPanel* value);

  /// @brief Method set_originPanel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_originPanel(::UnityEngine::UIElements::IPanel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelChangedEventBase_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelChangedEventBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelChangedEventBase_1(PanelChangedEventBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelChangedEventBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelChangedEventBase_1(PanelChangedEventBase_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5895 };

  /// @brief Field <originPanel>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::IPanel* ____originPanel_k__BackingField;

  /// @brief Field <destinationPanel>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::IPanel* ____destinationPanel_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::PanelChangedEventBase_1, "UnityEngine.UIElements", "PanelChangedEventBase`1");
