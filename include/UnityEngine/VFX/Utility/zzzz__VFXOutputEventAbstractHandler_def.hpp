#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXOutputEventAbstractHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VFXOutputEventAbstractHandler)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VFXEventAttribute;
}
namespace UnityEngine::VFX {
struct VFXOutputEventArgs;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXOutputEventAbstractHandler;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*, "UnityEngine.VFX.Utility", "VFXOutputEventAbstractHandler");
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXOutputEventAbstractHandler
class CORDL_TYPE VFXOutputEventAbstractHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <m_VisualEffect>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__m_VisualEffect_k__BackingField, put = __cordl_internal_set__m_VisualEffect_k__BackingField)) ::UnityW<::UnityEngine::VFX::VisualEffect>
      _m_VisualEffect_k__BackingField;

  __declspec(property(get = get_canExecuteInEditor)) bool canExecuteInEditor;

  /// @brief Field executeInEditor, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_executeInEditor, put = __cordl_internal_set_executeInEditor)) bool executeInEditor;

  __declspec(property(get = get_m_VisualEffect, put = set_m_VisualEffect)) ::UnityW<::UnityEngine::VFX::VisualEffect> m_VisualEffect;

  /// @brief Field outputEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_outputEvent, put = __cordl_internal_set_outputEvent)) ::UnityEngine::VFX::Utility::ExposedProperty* outputEvent;

  static inline ::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler* New_ctor();

  /// @brief Method OnDisable, addr 0x69e1f9c, size 0x158, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x69e1e18, size 0x184, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnOutputEventRecieved, addr 0x69e20f4, size 0xd4, virtual false, abstract: false, final false
  inline void OnOutputEventRecieved(::UnityEngine::VFX::VFXOutputEventArgs args);

  /// @brief Method OnVFXOutputEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnVFXOutputEvent(::UnityEngine::VFX::VFXEventAttribute* eventAttribute);

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffect> const& __cordl_internal_get__m_VisualEffect_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffect>& __cordl_internal_get__m_VisualEffect_k__BackingField();

  constexpr bool const& __cordl_internal_get_executeInEditor() const;

  constexpr bool& __cordl_internal_get_executeInEditor();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_outputEvent() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_outputEvent();

  constexpr void __cordl_internal_set__m_VisualEffect_k__BackingField(::UnityW<::UnityEngine::VFX::VisualEffect> value);

  constexpr void __cordl_internal_set_executeInEditor(bool value);

  constexpr void __cordl_internal_set_outputEvent(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69e21c8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_canExecuteInEditor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_canExecuteInEditor();

  /// @brief Method get_m_VisualEffect, addr 0x69e1e10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::VFX::VisualEffect> get_m_VisualEffect();

  /// @brief Method set_m_VisualEffect, addr 0x69e1e08, size 0x8, virtual false, abstract: false, final false
  inline void set_m_VisualEffect(::UnityEngine::VFX::VisualEffect* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXOutputEventAbstractHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXOutputEventAbstractHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXOutputEventAbstractHandler(VFXOutputEventAbstractHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXOutputEventAbstractHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXOutputEventAbstractHandler(VFXOutputEventAbstractHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19983 };

  /// @brief Field executeInEditor, offset: 0x20, size: 0x1, def value: None
  bool ___executeInEditor;

  /// @brief Field outputEvent, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___outputEvent;

  /// @brief Field <m_VisualEffect>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::VFX::VisualEffect> ____m_VisualEffect_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler, ___executeInEditor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler, ___outputEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler, ____m_VisualEffect_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler) == 0x38, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
