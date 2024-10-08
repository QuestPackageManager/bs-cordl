#pragma once
// IWYU pragma private; include "GlobalNamespace/SignalOnToggleChange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SignalOnToggleChange)
namespace GlobalNamespace {
class Signal;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class SignalOnToggleChange;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SignalOnToggleChange);
// Type: ::SignalOnToggleChange
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SignalOnToggleChange*
class CORDL_TYPE SignalOnToggleChange : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _toggle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__toggle, put = __cordl_internal_set__toggle)) ::UnityW<::UnityEngine::UI::Toggle> _toggle;

  /// @brief Field _toggleValueChangeSignal, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleValueChangeSignal, put = __cordl_internal_set__toggleValueChangeSignal)) ::UnityW<::GlobalNamespace::Signal> _toggleValueChangeSignal;

  static inline ::GlobalNamespace::SignalOnToggleChange* New_ctor();

  /// @brief Method OnDestroy, addr 0x395c9a0, size 0xe8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RaiseSignal, addr 0x395ca88, size 0x20, virtual false, abstract: false, final false
  inline void RaiseSignal(bool newValue);

  /// @brief Method Start, addr 0x395c8fc, size 0xa4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__toggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__toggle();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__toggleValueChangeSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__toggleValueChangeSignal();

  constexpr void __cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__toggleValueChangeSignal(::UnityW<::GlobalNamespace::Signal> value);

  /// @brief Method .ctor, addr 0x395caa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalOnToggleChange();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalOnToggleChange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalOnToggleChange(SignalOnToggleChange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalOnToggleChange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalOnToggleChange(SignalOnToggleChange const&) = delete;

  /// @brief Field _toggleValueChangeSignal, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____toggleValueChangeSignal;

  /// @brief Field _toggle, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____toggle;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16398 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SignalOnToggleChange, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SignalOnToggleChange, ____toggleValueChangeSignal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SignalOnToggleChange, ____toggle) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SignalOnToggleChange);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SignalOnToggleChange*, "", "SignalOnToggleChange");
