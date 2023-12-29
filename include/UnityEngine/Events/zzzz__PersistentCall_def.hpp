#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__PersistentListenerMode_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEventCallState_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PersistentCall)
namespace UnityEngine::Events {
class ArgumentCache;
}
namespace UnityEngine::Events {
class UnityEventBase;
}
namespace UnityEngine::Events {
struct PersistentListenerMode;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::Events {
class BaseInvokableCall;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace UnityEngine::Events {
class PersistentCall;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::PersistentCall);
// Type: UnityEngine.Events::PersistentCall
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10369)), TypeDefinitionIndex(TypeDefinitionIndex(10379))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10380))
// CS Name: ::UnityEngine.Events::PersistentCall*
class CORDL_TYPE PersistentCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Target, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Target, put = __set_m_Target))::UnityEngine::Object* m_Target;

  /// @brief Field m_TargetAssemblyTypeName, offset 0x18, size 0x8
  __declspec(property(get = __get_m_TargetAssemblyTypeName, put = __set_m_TargetAssemblyTypeName))::StringW m_TargetAssemblyTypeName;

  /// @brief Field m_MethodName, offset 0x20, size 0x8
  __declspec(property(get = __get_m_MethodName, put = __set_m_MethodName))::StringW m_MethodName;

  /// @brief Field m_Mode, offset 0x28, size 0x4
  __declspec(property(get = __get_m_Mode, put = __set_m_Mode))::UnityEngine::Events::PersistentListenerMode m_Mode;

  /// @brief Field m_Arguments, offset 0x30, size 0x8
  __declspec(property(get = __get_m_Arguments, put = __set_m_Arguments))::UnityEngine::Events::ArgumentCache* m_Arguments;

  /// @brief Field m_CallState, offset 0x38, size 0x4
  __declspec(property(get = __get_m_CallState, put = __set_m_CallState))::UnityEngine::Events::UnityEventCallState m_CallState;

  __declspec(property(get = get_target))::UnityEngine::Object* target;

  __declspec(property(get = get_targetAssemblyTypeName))::StringW targetAssemblyTypeName;

  __declspec(property(get = get_methodName))::StringW methodName;

  __declspec(property(get = get_mode))::UnityEngine::Events::PersistentListenerMode mode;

  __declspec(property(get = get_arguments))::UnityEngine::Events::ArgumentCache* arguments;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  constexpr ::UnityEngine::Object*& __get_m_Target();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> const& __get_m_Target() const;

  constexpr void __set_m_Target(::UnityEngine::Object* value);

  constexpr ::StringW& __get_m_TargetAssemblyTypeName();

  constexpr ::StringW const& __get_m_TargetAssemblyTypeName() const;

  constexpr void __set_m_TargetAssemblyTypeName(::StringW value);

  constexpr ::StringW& __get_m_MethodName();

  constexpr ::StringW const& __get_m_MethodName() const;

  constexpr void __set_m_MethodName(::StringW value);

  constexpr ::UnityEngine::Events::PersistentListenerMode& __get_m_Mode();

  constexpr ::UnityEngine::Events::PersistentListenerMode const& __get_m_Mode() const;

  constexpr void __set_m_Mode(::UnityEngine::Events::PersistentListenerMode value);

  constexpr ::UnityEngine::Events::ArgumentCache*& __get_m_Arguments();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::ArgumentCache*> const& __get_m_Arguments() const;

  constexpr void __set_m_Arguments(::UnityEngine::Events::ArgumentCache* value);

  constexpr ::UnityEngine::Events::UnityEventCallState& __get_m_CallState();

  constexpr ::UnityEngine::Events::UnityEventCallState const& __get_m_CallState() const;

  constexpr void __set_m_CallState(::UnityEngine::Events::UnityEventCallState value);

  /// @brief Method get_target addr 0x2b90588 size 0x8 virtual false final false
  inline ::UnityEngine::Object* get_target();

  /// @brief Method get_targetAssemblyTypeName addr 0x2b90590 size 0xac virtual false final false
  inline ::StringW get_targetAssemblyTypeName();

  /// @brief Method get_methodName addr 0x2b9063c size 0x8 virtual false final false
  inline ::StringW get_methodName();

  /// @brief Method get_mode addr 0x2b90644 size 0x8 virtual false final false
  inline ::UnityEngine::Events::PersistentListenerMode get_mode();

  /// @brief Method get_arguments addr 0x2b9064c size 0x8 virtual false final false
  inline ::UnityEngine::Events::ArgumentCache* get_arguments();

  /// @brief Method IsValid addr 0x2b90654 size 0x3c virtual false final false
  inline bool IsValid();

  /// @brief Method GetRuntimeCall addr 0x2b90690 size 0x2e8 virtual false final false
  inline ::UnityEngine::Events::BaseInvokableCall* GetRuntimeCall(::UnityEngine::Events::UnityEventBase* theEvent);

  /// @brief Method GetObjectCall addr 0x2b90b40 size 0x430 virtual false final false
  static inline ::UnityEngine::Events::BaseInvokableCall* GetObjectCall(::UnityEngine::Object* target, ::System::Reflection::MethodInfo* method, ::UnityEngine::Events::ArgumentCache* arguments);

  /// @brief Method OnBeforeSerialize addr 0x2b90f70 size 0x1c virtual true final true
  inline void OnBeforeSerialize();

  /// @brief Method OnAfterDeserialize addr 0x2b90f8c size 0x1c virtual true final true
  inline void OnAfterDeserialize();

  static inline ::UnityEngine::Events::PersistentCall* New_ctor();

  /// @brief Method .ctor addr 0x2b90fa8 size 0x74 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PersistentCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PersistentCall(PersistentCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PersistentCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PersistentCall(PersistentCall const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PersistentCall();

public:
  /// @brief Field m_Target, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Object* ___m_Target;

  /// @brief Field m_TargetAssemblyTypeName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_TargetAssemblyTypeName;

  /// @brief Field m_MethodName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_MethodName;

  /// @brief Field m_Mode, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Events::PersistentListenerMode ___m_Mode;

  /// @brief Field m_Arguments, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Events::ArgumentCache* ___m_Arguments;

  /// @brief Field m_CallState, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::Events::UnityEventCallState ___m_CallState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::PersistentCall, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Events::PersistentCall, ___m_Target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::PersistentCall, ___m_TargetAssemblyTypeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::PersistentCall, ___m_MethodName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::PersistentCall, ___m_Mode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::PersistentCall, ___m_Arguments) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::PersistentCall, ___m_CallState) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::PersistentCall);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::PersistentCall*, "UnityEngine.Events", "PersistentCall");
