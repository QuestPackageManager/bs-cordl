#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XInput/XInputSupport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XInputSupport)
// Forward declare root types
namespace UnityEngine::InputSystem::XInput {
class XInputSupport;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::XInput::XInputSupport);
// Type: UnityEngine.InputSystem.XInput::XInputSupport
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XInput {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.XInput::XInputSupport*
class CORDL_TYPE XInputSupport : public ::System::Object {
public:
  // Declarations
  /// @brief Method Initialize, addr 0x4571e68, size 0x70, virtual false, abstract: false, final false
  static inline void Initialize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XInputSupport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XInputSupport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XInputSupport(XInputSupport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XInputSupport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XInputSupport(XInputSupport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6730 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XInput::XInputSupport, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XInput
NEED_NO_BOX(::UnityEngine::InputSystem::XInput::XInputSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XInput::XInputSupport*, "UnityEngine.InputSystem.XInput", "XInputSupport");
