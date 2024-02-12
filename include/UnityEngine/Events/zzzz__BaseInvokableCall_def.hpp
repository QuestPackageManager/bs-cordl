#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: UnityEngine.Events::BaseInvokableCall
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9219))
// CS Name: ::UnityEngine.Events::BaseInvokableCall*
class CORDL_TYPE BaseInvokableCall : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::Events::BaseInvokableCall* New_ctor();

  /// @brief Method .ctor, addr 0x2d030fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Events::BaseInvokableCall* New_ctor(::System::Object* target, ::System::Reflection::MethodInfo* function);

  /// @brief Method .ctor, addr 0x2d03104, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* target, ::System::Reflection::MethodInfo* function);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Invoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method ThrowOnInvalidArg, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ThrowOnInvalidArg(::System::Object* arg);

  /// @brief Method AllowInvoke, addr 0x2d031ec, size 0xa8, virtual false, abstract: false, final false
  static inline bool AllowInvoke(::System::Delegate* delegate);

  /// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Find(::System::Object* targetObj, ::System::Reflection::MethodInfo* method);

  // Ctor Parameters [CppParam { name: "", ty: "BaseInvokableCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseInvokableCall(BaseInvokableCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseInvokableCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseInvokableCall(BaseInvokableCall const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseInvokableCall();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::BaseInvokableCall, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::BaseInvokableCall);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::BaseInvokableCall*, "UnityEngine.Events", "BaseInvokableCall");
