#pragma once
// IWYU pragma private; include "UnityEngine/Events/PersistentCall.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__PersistentListenerMode_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEventCallState_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PersistentCall)
namespace System::Reflection {
class MethodInfo;
}
namespace UnityEngine::Events {
class ArgumentCache;
}
namespace UnityEngine::Events {
class BaseInvokableCall;
}
namespace UnityEngine::Events {
struct PersistentListenerMode;
}
namespace UnityEngine::Events {
class UnityEventBase;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Events {
class PersistentCall;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::PersistentCall);
// Dependencies System.Object, UnityEngine.Events.PersistentListenerMode, UnityEngine.Events.UnityEventCallState, UnityEngine.ISerializationCallbackReceiver
namespace UnityEngine::Events {
// Is value type: false
// CS Name: UnityEngine.Events.PersistentCall
class CORDL_TYPE PersistentCall : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_arguments)) ::UnityEngine::Events::ArgumentCache* arguments;

  /// @brief Field m_Arguments, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Arguments, put = __cordl_internal_set_m_Arguments)) ::UnityEngine::Events::ArgumentCache* m_Arguments;

  /// @brief Field m_CallState, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CallState, put = __cordl_internal_set_m_CallState)) ::UnityEngine::Events::UnityEventCallState m_CallState;

  /// @brief Field m_MethodName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MethodName, put = __cordl_internal_set_m_MethodName)) ::StringW m_MethodName;

  /// @brief Field m_Mode, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Mode, put = __cordl_internal_set_m_Mode)) ::UnityEngine::Events::PersistentListenerMode m_Mode;

  /// @brief Field m_Target, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Target, put = __cordl_internal_set_m_Target)) ::UnityW<::UnityEngine::Object> m_Target;

  /// @brief Field m_TargetAssemblyTypeName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetAssemblyTypeName, put = __cordl_internal_set_m_TargetAssemblyTypeName)) ::StringW m_TargetAssemblyTypeName;

  __declspec(property(get = get_methodName)) ::StringW methodName;

  __declspec(property(get = get_mode)) ::UnityEngine::Events::PersistentListenerMode mode;

  __declspec(property(get = get_target)) ::UnityW<::UnityEngine::Object> target;

  __declspec(property(get = get_targetAssemblyTypeName)) ::StringW targetAssemblyTypeName;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method GetObjectCall, addr 0x48be7e8, size 0x42c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Events::BaseInvokableCall* GetObjectCall(::UnityEngine::Object* target, ::System::Reflection::MethodInfo* method, ::UnityEngine::Events::ArgumentCache* arguments);

  /// @brief Method GetRuntimeCall, addr 0x48be334, size 0x2e8, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::BaseInvokableCall* GetRuntimeCall(::UnityEngine::Events::UnityEventBase* theEvent);

  /// @brief Method IsValid, addr 0x48be2f8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsValid();

  static inline ::UnityEngine::Events::PersistentCall* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x48bec30, size 0x1c, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x48bec14, size 0x1c, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  constexpr ::UnityEngine::Events::ArgumentCache* const& __cordl_internal_get_m_Arguments() const;

  constexpr ::UnityEngine::Events::ArgumentCache*& __cordl_internal_get_m_Arguments();

  constexpr ::UnityEngine::Events::UnityEventCallState const& __cordl_internal_get_m_CallState() const;

  constexpr ::UnityEngine::Events::UnityEventCallState& __cordl_internal_get_m_CallState();

  constexpr ::StringW const& __cordl_internal_get_m_MethodName() const;

  constexpr ::StringW& __cordl_internal_get_m_MethodName();

  constexpr ::UnityEngine::Events::PersistentListenerMode const& __cordl_internal_get_m_Mode() const;

  constexpr ::UnityEngine::Events::PersistentListenerMode& __cordl_internal_get_m_Mode();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_Target() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_Target();

  constexpr ::StringW const& __cordl_internal_get_m_TargetAssemblyTypeName() const;

  constexpr ::StringW& __cordl_internal_get_m_TargetAssemblyTypeName();

  constexpr void __cordl_internal_set_m_Arguments(::UnityEngine::Events::ArgumentCache* value);

  constexpr void __cordl_internal_set_m_CallState(::UnityEngine::Events::UnityEventCallState value);

  constexpr void __cordl_internal_set_m_MethodName(::StringW value);

  constexpr void __cordl_internal_set_m_Mode(::UnityEngine::Events::PersistentListenerMode value);

  constexpr void __cordl_internal_set_m_Target(::UnityW<::UnityEngine::Object> value);

  constexpr void __cordl_internal_set_m_TargetAssemblyTypeName(::StringW value);

  /// @brief Method .ctor, addr 0x48bec4c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_arguments, addr 0x48be2f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::ArgumentCache* get_arguments();

  /// @brief Method get_methodName, addr 0x48be2e0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_methodName();

  /// @brief Method get_mode, addr 0x48be2e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::PersistentListenerMode get_mode();

  /// @brief Method get_target, addr 0x48be230, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_target();

  /// @brief Method get_targetAssemblyTypeName, addr 0x48be238, size 0xa8, virtual false, abstract: false, final false
  inline ::StringW get_targetAssemblyTypeName();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PersistentCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PersistentCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PersistentCall(PersistentCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PersistentCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PersistentCall(PersistentCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10986 };

  /// @brief Field m_Target, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___m_Target;

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
static_assert(offsetof(::UnityEngine::Events::PersistentCall, ___m_Target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::PersistentCall, ___m_TargetAssemblyTypeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::PersistentCall, ___m_MethodName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::PersistentCall, ___m_Mode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::PersistentCall, ___m_Arguments) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::PersistentCall, ___m_CallState) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::PersistentCall, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::PersistentCall);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::PersistentCall*, "UnityEngine.Events", "PersistentCall");
