#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenControl_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OnScreenStick)
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::InputSystem::OnScreen {
class OnScreenStick;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::OnScreen::OnScreenStick);
// Type: UnityEngine.InputSystem.OnScreen::OnScreenStick
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.OnScreen::OnScreenStick*
class CORDL_TYPE OnScreenStick : public ::UnityEngine::InputSystem::OnScreen::OnScreenControl {
public:
  // Declarations
  __declspec(property(get = get_controlPathInternal, put = set_controlPathInternal))::StringW controlPathInternal;

  /// @brief Field m_ControlPath, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ControlPath, put = __cordl_internal_set_m_ControlPath))::StringW m_ControlPath;

  /// @brief Field m_MovementRange, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MovementRange, put = __cordl_internal_set_m_MovementRange)) float_t m_MovementRange;

  /// @brief Field m_PointerDownPos, offset 0x4c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointerDownPos, put = __cordl_internal_set_m_PointerDownPos))::UnityEngine::Vector2 m_PointerDownPos;

  /// @brief Field m_StartPos, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_m_StartPos, put = __cordl_internal_set_m_StartPos))::UnityEngine::Vector3 m_StartPos;

  __declspec(property(get = get_movementRange, put = set_movementRange)) float_t movementRange;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  static inline ::UnityEngine::InputSystem::OnScreen::OnScreenStick* New_ctor();

  /// @brief Method OnDrag, addr 0x2c1ff94, size 0x224, virtual true, abstract: false, final true
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerDown, addr 0x2c1fe70, size 0x124, virtual true, abstract: false, final true
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerUp, addr 0x2c201b8, size 0xc4, virtual true, abstract: false, final true
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method Start, addr 0x2c2027c, size 0x78, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::StringW const& __cordl_internal_get_m_ControlPath() const;

  constexpr ::StringW& __cordl_internal_get_m_ControlPath();

  constexpr float_t const& __cordl_internal_get_m_MovementRange() const;

  constexpr float_t& __cordl_internal_get_m_MovementRange();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_PointerDownPos() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_PointerDownPos();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_StartPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_StartPos();

  constexpr void __cordl_internal_set_m_ControlPath(::StringW value);

  constexpr void __cordl_internal_set_m_MovementRange(float_t value);

  constexpr void __cordl_internal_set_m_PointerDownPos(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_StartPos(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x2c20314, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_controlPathInternal, addr 0x2c20304, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_controlPathInternal();

  /// @brief Method get_movementRange, addr 0x2c202f4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_movementRange();

  /// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
  constexpr ::UnityEngine::EventSystems::IDragHandler* i___UnityEngine__EventSystems__IDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

  /// @brief Method set_controlPathInternal, addr 0x2c2030c, size 0x8, virtual true, abstract: false, final false
  inline void set_controlPathInternal(::StringW value);

  /// @brief Method set_movementRange, addr 0x2c202fc, size 0x8, virtual false, abstract: false, final false
  inline void set_movementRange(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnScreenStick();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnScreenStick", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnScreenStick(OnScreenStick&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnScreenStick", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnScreenStick(OnScreenStick const&) = delete;

  /// @brief Field m_MovementRange, offset: 0x30, size: 0x4, def value: None
  float_t ___m_MovementRange;

  /// @brief Field m_ControlPath, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_ControlPath;

  /// @brief Field m_StartPos, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_StartPos;

  /// @brief Field m_PointerDownPos, offset: 0x4c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_PointerDownPos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::OnScreen::OnScreenStick, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenStick, ___m_MovementRange) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenStick, ___m_ControlPath) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenStick, ___m_StartPos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenStick, ___m_PointerDownPos) == 0x4c, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::OnScreen
NEED_NO_BOX(::UnityEngine::InputSystem::OnScreen::OnScreenStick);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::OnScreen::OnScreenStick*, "UnityEngine.InputSystem.OnScreen", "OnScreenStick");
