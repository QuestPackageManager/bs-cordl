#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputDeviceFindControlLayoutDelegate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputDeviceFindControlLayoutDelegate)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
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
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate);
// Type: UnityEngine.InputSystem.Layouts::InputDeviceFindControlLayoutDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Layouts::InputDeviceFindControlLayoutDelegate*
class CORDL_TYPE InputDeviceFindControlLayoutDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3168a50, size 0xa0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout,
                                             ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeDeviceCommand, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3168af0, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW EndInvoke(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3168a3c, size 0x14, virtual true, abstract: false, final false
  inline ::StringW Invoke(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout,
                          ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeDeviceCommand);

  static inline ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x3168964, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*, "UnityEngine.InputSystem.Layouts", "InputDeviceFindControlLayoutDelegate");
