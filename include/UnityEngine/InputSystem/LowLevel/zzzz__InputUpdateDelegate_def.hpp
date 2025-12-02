#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputUpdateDelegate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(InputUpdateDelegate)
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
struct InputEventBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputUpdateDelegate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate);
// Dependencies System.MulticastDelegate
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputUpdateDelegate
class CORDL_TYPE InputUpdateDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6397ccc, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6397d8c, size 0x18, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6397cb8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer);

  static inline ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6397c4c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUpdateDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputUpdateDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputUpdateDelegate(InputUpdateDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputUpdateDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputUpdateDelegate(InputUpdateDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9016 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*, "UnityEngine.InputSystem.LowLevel", "InputUpdateDelegate");
