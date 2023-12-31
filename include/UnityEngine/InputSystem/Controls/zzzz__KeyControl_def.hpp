#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyControl)
namespace UnityEngine::InputSystem {
struct Key;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class KeyControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::KeyControl);
// Type: UnityEngine.InputSystem.Controls::KeyControl
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 292, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6629)), TypeDefinitionIndex(TypeDefinitionIndex(6242))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6638))
// CS Name: ::UnityEngine.InputSystem.Controls::KeyControl*
class CORDL_TYPE KeyControl : public ::UnityEngine::InputSystem::Controls::ButtonControl {
public:
  // Declarations
  /// @brief Field <keyCode>k__BackingField, offset 0x11c, size 0x4
  __declspec(property(get = __get__keyCode_k__BackingField, put = __set__keyCode_k__BackingField))::UnityEngine::InputSystem::Key _keyCode_k__BackingField;

  /// @brief Field m_ScanCode, offset 0x120, size 0x4
  __declspec(property(get = __get_m_ScanCode, put = __set_m_ScanCode)) int32_t m_ScanCode;

  __declspec(property(get = get_keyCode, put = set_keyCode))::UnityEngine::InputSystem::Key keyCode;

  __declspec(property(get = get_scanCode)) int32_t scanCode;

  constexpr ::UnityEngine::InputSystem::Key& __get__keyCode_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Key const& __get__keyCode_k__BackingField() const;

  constexpr void __set__keyCode_k__BackingField(::UnityEngine::InputSystem::Key value);

  constexpr int32_t& __get_m_ScanCode();

  constexpr int32_t const& __get_m_ScanCode() const;

  constexpr void __set_m_ScanCode(int32_t value);

  /// @brief Method get_keyCode, addr 0x2b0b0b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Key get_keyCode();

  /// @brief Method set_keyCode, addr 0x2b0b0bc, size 0x8, virtual false, abstract: false, final false
  inline void set_keyCode(::UnityEngine::InputSystem::Key value);

  /// @brief Method get_scanCode, addr 0x2b0b0c4, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_scanCode();

  /// @brief Method RefreshConfiguration, addr 0x2b0b0e0, size 0x170, virtual true, abstract: false, final false
  inline void RefreshConfiguration();

  static inline ::UnityEngine::InputSystem::Controls::KeyControl* New_ctor();

  /// @brief Method .ctor, addr 0x2b0b250, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "KeyControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyControl(KeyControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyControl(KeyControl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyControl();

public:
  /// @brief Field <keyCode>k__BackingField, offset: 0x11c, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Key ____keyCode_k__BackingField;

  /// @brief Field m_ScanCode, offset: 0x120, size: 0x4, def value: None
  int32_t ___m_ScanCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::KeyControl, 0x128>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::KeyControl, ____keyCode_k__BackingField) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::KeyControl, ___m_ScanCode) == 0x120, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::KeyControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::KeyControl*, "UnityEngine.InputSystem.Controls", "KeyControl");
