#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RuntimePanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
CORDL_MODULE_EXPORT(RuntimePanel)
namespace UnityEngine::UIElements {
template <typename TEventType, typename TCallbackArgs> class EventCallback_2;
}
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace UnityEngine::UIElements {
class FocusEvent;
}
namespace UnityEngine::UIElements {
class PanelSettings;
}
namespace UnityEngine::UIElements {
class __RuntimePanel____c;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RuntimePanel;
}
namespace UnityEngine::UIElements {
class __RuntimePanel____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RuntimePanel);
MARK_REF_PTR_T(::UnityEngine::UIElements::__RuntimePanel____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::RuntimePanel::<>c*
class CORDL_TYPE __RuntimePanel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__RuntimePanel____c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0,
                             put = setStaticF___9__5_0)) ::UnityEngine::UIElements::EventCallback_2<::UnityEngine::UIElements::FocusEvent*, ::UnityEngine::UIElements::RuntimePanel*>* __9__5_0;

  static inline ::UnityEngine::UIElements::__RuntimePanel____c* New_ctor();

  /// @brief Method <.ctor>b__5_0, addr 0x49bfab4, size 0x14, virtual false, abstract: false, final false
  inline void __ctor_b__5_0(::UnityEngine::UIElements::FocusEvent* e, ::UnityEngine::UIElements::RuntimePanel* p);

  /// @brief Method .ctor, addr 0x49bfaac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__RuntimePanel____c* getStaticF___9();

  static inline ::UnityEngine::UIElements::EventCallback_2<::UnityEngine::UIElements::FocusEvent*, ::UnityEngine::UIElements::RuntimePanel*>* getStaticF___9__5_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::__RuntimePanel____c* value);

  static inline void setStaticF___9__5_0(::UnityEngine::UIElements::EventCallback_2<::UnityEngine::UIElements::FocusEvent*, ::UnityEngine::UIElements::RuntimePanel*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimePanel____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePanel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RuntimePanel____c(__RuntimePanel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePanel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RuntimePanel____c(__RuntimePanel____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5931 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__RuntimePanel____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::RuntimePanel
// SizeInfo { instance_size: 496, native_size: -1, calculated_instance_size: 496, calculated_native_size: 496, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::RuntimePanel*
class CORDL_TYPE RuntimePanel : public ::UnityEngine::UIElements::BaseRuntimePanel {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__RuntimePanel____c;

  /// @brief Field m_PanelSettings, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PanelSettings, put = __cordl_internal_set_m_PanelSettings)) ::UnityW<::UnityEngine::UIElements::PanelSettings> m_PanelSettings;

  __declspec(property(get = get_panelSettings)) ::UnityW<::UnityEngine::UIElements::PanelSettings> panelSettings;

  /// @brief Field s_EventDispatcher, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EventDispatcher, put = setStaticF_s_EventDispatcher)) ::UnityEngine::UIElements::EventDispatcher* s_EventDispatcher;

  /// @brief Method Create, addr 0x49bf3b4, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::RuntimePanel* Create(::UnityEngine::ScriptableObject* ownerObject);

  static inline ::UnityEngine::UIElements::RuntimePanel* New_ctor(::UnityEngine::ScriptableObject* ownerObject);

  /// @brief Method OnElementFocus, addr 0x49bf98c, size 0x78, virtual false, abstract: false, final false
  inline void OnElementFocus(::UnityEngine::UIElements::FocusEvent* evt);

  /// @brief Method Update, addr 0x49bf804, size 0x80, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings> const& __cordl_internal_get_m_PanelSettings() const;

  constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings>& __cordl_internal_get_m_PanelSettings();

  constexpr void __cordl_internal_set_m_PanelSettings(::UnityW<::UnityEngine::UIElements::PanelSettings> value);

  /// @brief Method .ctor, addr 0x49bf40c, size 0x2e0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ScriptableObject* ownerObject);

  static inline ::UnityEngine::UIElements::EventDispatcher* getStaticF_s_EventDispatcher();

  /// @brief Method get_panelSettings, addr 0x49bf3ac, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::UIElements::PanelSettings> get_panelSettings();

  static inline void setStaticF_s_EventDispatcher(::UnityEngine::UIElements::EventDispatcher* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimePanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimePanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimePanel(RuntimePanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimePanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimePanel(RuntimePanel const&) = delete;

  /// @brief Field m_PanelSettings, offset: 0x1e8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::PanelSettings> ___m_PanelSettings;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5932 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RuntimePanel, 0x1f0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RuntimePanel, ___m_PanelSettings) == 0x1e8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RuntimePanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RuntimePanel*, "UnityEngine.UIElements", "RuntimePanel");
NEED_NO_BOX(::UnityEngine::UIElements::__RuntimePanel____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__RuntimePanel____c*, "UnityEngine.UIElements", "RuntimePanel/<>c");
