#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DelegateHelpers)
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TDelegate> struct CallbackArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class DelegateHelpers;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::DelegateHelpers);
// Type: UnityEngine.InputSystem.Utilities::DelegateHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6750))
// CS Name: ::UnityEngine.InputSystem.Utilities::DelegateHelpers*
class CORDL_TYPE DelegateHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method InvokeCallbacksSafe addr 0x298e9bc size 0x2bc virtual false final false
  static inline void InvokeCallbacksSafe(ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>> callbacks, ::StringW callbackName, ::System::Object* context);

  /// @brief Method InvokeCallbacksSafe addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TValue>
  static inline void InvokeCallbacksSafe(ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<TValue>*>> callbacks, TValue argument, ::StringW callbackName,
                                         ::System::Object* context);

  /// @brief Method InvokeCallbacksSafe addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TValue1, typename TValue2>
  static inline void InvokeCallbacksSafe(ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<TValue1, TValue2>*>> callbacks, TValue1 argument1, TValue2 argument2,
                                         ::StringW callbackName, ::System::Object* context);

  /// @brief Method InvokeCallbacksSafe_AnyCallbackReturnsTrue addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TValue1, typename TValue2>
  static inline bool InvokeCallbacksSafe_AnyCallbackReturnsTrue(ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<TValue1, TValue2, bool>*>> callbacks, TValue1 argument1,
                                                                TValue2 argument2, ::StringW callbackName, ::System::Object* context);

  // Ctor Parameters [CppParam { name: "", ty: "DelegateHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelegateHelpers(DelegateHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelegateHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelegateHelpers(DelegateHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelegateHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::DelegateHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::DelegateHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::DelegateHelpers*, "UnityEngine.InputSystem.Utilities", "DelegateHelpers");
