#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate);
// Type: UnityEngine.InputSystem.LowLevel::InputDeviceCommandDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6469))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputDeviceCommandDelegate*
class CORDL_TYPE InputDeviceCommandDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2ae76c4, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2ae77f4, size 0x14, virtual true, abstract: false, final false
  inline ::System::Nullable_1<int64_t> Invoke(::UnityEngine::InputSystem::InputDevice* device, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> command);

  /// @brief Method BeginInvoke, addr 0x2ae7808, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::InputSystem::InputDevice* device, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> command,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2ae7830, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Nullable_1<int64_t> EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "InputDeviceCommandDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputDeviceCommandDelegate(InputDeviceCommandDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputDeviceCommandDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputDeviceCommandDelegate(InputDeviceCommandDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDeviceCommandDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*, "UnityEngine.InputSystem.LowLevel", "InputDeviceCommandDelegate");
