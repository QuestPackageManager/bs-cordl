#pragma once
// IWYU pragma private; include "GlobalNamespace/SignalOnPointerClick.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SignalOnPointerClick)
namespace GlobalNamespace {
class Signal;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class SignalOnPointerClick;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SignalOnPointerClick);
// Type: ::SignalOnPointerClick
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SignalOnPointerClick*
class CORDL_TYPE SignalOnPointerClick : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _inputFieldClickedSignal, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__inputFieldClickedSignal, put = __cordl_internal_set__inputFieldClickedSignal)) ::UnityW<::GlobalNamespace::Signal> _inputFieldClickedSignal;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  static inline ::GlobalNamespace::SignalOnPointerClick* New_ctor();

  /// @brief Method OnPointerClick, addr 0x3970158, size 0x20, virtual true, abstract: false, final true
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__inputFieldClickedSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__inputFieldClickedSignal();

  constexpr void __cordl_internal_set__inputFieldClickedSignal(::UnityW<::GlobalNamespace::Signal> value);

  /// @brief Method .ctor, addr 0x3970178, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalOnPointerClick();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalOnPointerClick", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalOnPointerClick(SignalOnPointerClick&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalOnPointerClick", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalOnPointerClick(SignalOnPointerClick const&) = delete;

  /// @brief Field _inputFieldClickedSignal, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____inputFieldClickedSignal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16405 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SignalOnPointerClick, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SignalOnPointerClick, ____inputFieldClickedSignal) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SignalOnPointerClick);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SignalOnPointerClick*, "", "SignalOnPointerClick");
