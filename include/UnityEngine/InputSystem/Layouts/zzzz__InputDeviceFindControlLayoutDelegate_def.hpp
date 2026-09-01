#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Layouts\InputDeviceFindControlLayoutDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InputDeviceFindControlLayoutDelegate)
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
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
class InputDeviceFindControlLayoutDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*, "UnityEngine.InputSystem.Layouts", "InputDeviceFindControlLayoutDelegate");
// Dependencies System.MulticastDelegate
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceFindControlLayoutDelegate
class CORDL_TYPE InputDeviceFindControlLayoutDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x65bf93c, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout,
                                             ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeDeviceCommand, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x65bf9e0, size 0x18, virtual true, abstract: false, final false
  inline ::StringW EndInvoke(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x65bf928, size 0x14, virtual true, abstract: false, final false
  inline ::StringW Invoke(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout,
                          ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeDeviceCommand);

  static inline ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x65bf8a8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDeviceFindControlLayoutDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputDeviceFindControlLayoutDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputDeviceFindControlLayoutDelegate(InputDeviceFindControlLayoutDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputDeviceFindControlLayoutDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputDeviceFindControlLayoutDelegate(InputDeviceFindControlLayoutDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9089 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
