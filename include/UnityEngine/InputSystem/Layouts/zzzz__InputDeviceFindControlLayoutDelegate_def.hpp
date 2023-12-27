#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputDeviceFindControlLayoutDelegate)
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace System {
class IAsyncResult;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6595))
// CS Name: ::UnityEngine.InputSystem.Layouts::InputDeviceFindControlLayoutDelegate*
class CORDL_TYPE InputDeviceFindControlLayoutDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2afa2b4 size 0xd8 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2afa38c size 0x14 virtual true final false
  inline ::StringW Invoke(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout,
                          ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeDeviceCommand);

  /// @brief Method BeginInvoke addr 0x2afa3a0 size 0xa0 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout,
                                             ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeDeviceCommand, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke addr 0x2afa440 size 0x1c virtual true final false
  inline ::StringW EndInvoke(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "InputDeviceFindControlLayoutDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputDeviceFindControlLayoutDelegate(InputDeviceFindControlLayoutDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputDeviceFindControlLayoutDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputDeviceFindControlLayoutDelegate(InputDeviceFindControlLayoutDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDeviceFindControlLayoutDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*, "UnityEngine.InputSystem.Layouts", "InputDeviceFindControlLayoutDelegate");
