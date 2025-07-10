#pragma once
// IWYU pragma private; include "UnityEngine/Events/BaseInvokableCall.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BaseInvokableCall)
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Delegate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Events {
class BaseInvokableCall;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::BaseInvokableCall);
// Dependencies System.Object
namespace UnityEngine::Events {
// Is value type: false
// CS Name: UnityEngine.Events.BaseInvokableCall
class CORDL_TYPE BaseInvokableCall : public ::System::Object {
public:
  // Declarations
  /// @brief Method AllowInvoke, addr 0x48bde7c, size 0xa4, virtual false, abstract: false, final false
  static inline bool AllowInvoke(::System::Delegate* delegate);

  /// @brief Method Find, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Find(::System::Object* targetObj, ::System::Reflection::MethodInfo* method);

  /// @brief Method Invoke, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::UnityEngine::Events::BaseInvokableCall* New_ctor();

  static inline ::UnityEngine::Events::BaseInvokableCall* New_ctor(::System::Object* target, ::System::Reflection::MethodInfo* function);

  /// @brief Method ThrowOnInvalidArg, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ThrowOnInvalidArg(::System::Object* arg);

  /// @brief Method .ctor, addr 0x48bdd80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x48bdd88, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* target, ::System::Reflection::MethodInfo* function);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseInvokableCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseInvokableCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseInvokableCall(BaseInvokableCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseInvokableCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseInvokableCall(BaseInvokableCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10978 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::BaseInvokableCall, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::BaseInvokableCall);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::BaseInvokableCall*, "UnityEngine.Events", "BaseInvokableCall");
