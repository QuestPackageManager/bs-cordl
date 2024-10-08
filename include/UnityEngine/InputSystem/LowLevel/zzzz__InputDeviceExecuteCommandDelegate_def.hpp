#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputDeviceExecuteCommandDelegate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputDeviceExecuteCommandDelegate)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate);
// Type: UnityEngine.InputSystem.LowLevel::InputDeviceExecuteCommandDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputDeviceExecuteCommandDelegate*
class CORDL_TYPE InputDeviceExecuteCommandDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4590904, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> command, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4590990, size 0x2c, virtual true, abstract: false, final false
  inline int64_t EndInvoke(ByRef<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> command, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x45908f0, size 0x14, virtual true, abstract: false, final false
  inline int64_t Invoke(ByRef<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> command);

  static inline ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4590854, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDeviceExecuteCommandDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputDeviceExecuteCommandDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputDeviceExecuteCommandDelegate(InputDeviceExecuteCommandDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputDeviceExecuteCommandDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputDeviceExecuteCommandDelegate(InputDeviceExecuteCommandDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6845 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*, "UnityEngine.InputSystem.LowLevel", "InputDeviceExecuteCommandDelegate");
