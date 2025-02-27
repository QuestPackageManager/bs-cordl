#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/OnScreen/OnScreenButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenControl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OnScreenButton)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::InputSystem::OnScreen {
class OnScreenButton;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::OnScreen::OnScreenButton);
// Dependencies UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerDownHandler, UnityEngine.EventSystems.IPointerUpHandler, UnityEngine.InputSystem.OnScreen.OnScreenControl
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: false
// CS Name: UnityEngine.InputSystem.OnScreen.OnScreenButton
class CORDL_TYPE OnScreenButton : public ::UnityEngine::InputSystem::OnScreen::OnScreenControl {
public:
  // Declarations
  __declspec(property(get = get_controlPathInternal, put = set_controlPathInternal)) ::StringW controlPathInternal;

  /// @brief Field m_ControlPath, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ControlPath, put = __cordl_internal_set_m_ControlPath)) ::StringW m_ControlPath;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  static inline ::UnityEngine::InputSystem::OnScreen::OnScreenButton* New_ctor();

  /// @brief Method OnPointerDown, addr 0x4604ddc, size 0x4c, virtual true, abstract: false, final true
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerUp, addr 0x4604d90, size 0x4c, virtual true, abstract: false, final true
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  constexpr ::StringW const& __cordl_internal_get_m_ControlPath() const;

  constexpr ::StringW& __cordl_internal_get_m_ControlPath();

  constexpr void __cordl_internal_set_m_ControlPath(::StringW value);

  /// @brief Method .ctor, addr 0x4604e38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_controlPathInternal, addr 0x4604e28, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_controlPathInternal();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

  /// @brief Method set_controlPathInternal, addr 0x4604e30, size 0x8, virtual true, abstract: false, final false
  inline void set_controlPathInternal(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnScreenButton();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnScreenButton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnScreenButton(OnScreenButton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnScreenButton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnScreenButton(OnScreenButton const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6795 };

  /// @brief Field m_ControlPath, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_ControlPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenButton, ___m_ControlPath) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::OnScreen::OnScreenButton, 0x40>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::OnScreen
NEED_NO_BOX(::UnityEngine::InputSystem::OnScreen::OnScreenButton);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::OnScreen::OnScreenButton*, "UnityEngine.InputSystem.OnScreen", "OnScreenButton");
