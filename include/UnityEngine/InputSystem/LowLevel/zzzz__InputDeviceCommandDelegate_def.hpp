#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\LowLevel\InputDeviceCommandDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputDeviceCommandDelegate)
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
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceCommandDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*, "UnityEngine.InputSystem.LowLevel", "InputDeviceCommandDelegate");
// Dependencies System.MulticastDelegate
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputDeviceCommandDelegate
class CORDL_TYPE InputDeviceCommandDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x65ad90c, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* command, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x65ad934, size 0x28, virtual true, abstract: false, final false
  inline ::System::Nullable_1<int64_t> EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x65ad8f8, size 0x14, virtual true, abstract: false, final false
  inline ::System::Nullable_1<int64_t> Invoke(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* command);

  static inline ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x65ad7b0, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDeviceCommandDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputDeviceCommandDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputDeviceCommandDelegate(InputDeviceCommandDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputDeviceCommandDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputDeviceCommandDelegate(InputDeviceCommandDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8964 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
