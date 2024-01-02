#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityEventBase)
namespace UnityEngine::Events {
class PersistentCall;
}
namespace UnityEngine::Events {
class PersistentCallGroup;
}
namespace System {
class Type;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Events {
class InvokableCallList;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::Events {
class BaseInvokableCall;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
struct PersistentListenerMode;
}
// Forward declare root types
namespace UnityEngine::Events {
class UnityEventBase;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::UnityEventBase);
// Type: UnityEngine.Events::UnityEventBase
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10461))
// CS Name: ::UnityEngine.Events::UnityEventBase*
class CORDL_TYPE UnityEventBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Calls, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Calls, put = __set_m_Calls))::UnityEngine::Events::InvokableCallList* m_Calls;

  /// @brief Field m_PersistentCalls, offset 0x18, size 0x8
  __declspec(property(get = __get_m_PersistentCalls, put = __set_m_PersistentCalls))::UnityEngine::Events::PersistentCallGroup* m_PersistentCalls;

  /// @brief Field m_CallsDirty, offset 0x20, size 0x1
  __declspec(property(get = __get_m_CallsDirty, put = __set_m_CallsDirty)) bool m_CallsDirty;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  constexpr ::UnityEngine::Events::InvokableCallList*& __get_m_Calls();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::InvokableCallList*> const& __get_m_Calls() const;

  constexpr void __set_m_Calls(::UnityEngine::Events::InvokableCallList* value);

  constexpr ::UnityEngine::Events::PersistentCallGroup*& __get_m_PersistentCalls();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::PersistentCallGroup*> const& __get_m_PersistentCalls() const;

  constexpr void __set_m_PersistentCalls(::UnityEngine::Events::PersistentCallGroup* value);

  constexpr bool& __get_m_CallsDirty();

  constexpr bool const& __get_m_CallsDirty() const;

  constexpr void __set_m_CallsDirty(bool value);

  static inline ::UnityEngine::Events::UnityEventBase* New_ctor();

  /// @brief Method .ctor, addr 0x2cf9c68, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x2cf9d04, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x2cf9d30, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method FindMethod_Impl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW name, ::System::Type* targetObjType);

  /// @brief Method GetDelegate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object* target, ::System::Reflection::MethodInfo* theFunction);

  /// @brief Method FindMethod, addr 0x2cf8cb8, size 0x1c8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* FindMethod(::UnityEngine::Events::PersistentCall* call);

  /// @brief Method FindMethod, addr 0x2cf9d34, size 0x260, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* FindMethod(::StringW name, ::System::Type* listenerType, ::UnityEngine::Events::PersistentListenerMode mode, ::System::Type* argumentType);

  /// @brief Method GetPersistentEventCount, addr 0x2cfa138, size 0x18, virtual false, abstract: false, final false
  inline int32_t GetPersistentEventCount();

  /// @brief Method DirtyPersistentCalls, addr 0x2cf9d08, size 0x28, virtual false, abstract: false, final false
  inline void DirtyPersistentCalls();

  /// @brief Method RebuildPersistentCallsIfNeeded, addr 0x2cfa150, size 0x34, virtual false, abstract: false, final false
  inline void RebuildPersistentCallsIfNeeded();

  /// @brief Method AddCall, addr 0x2cfa184, size 0x18, virtual false, abstract: false, final false
  inline void AddCall(::UnityEngine::Events::BaseInvokableCall* call);

  /// @brief Method RemoveListener, addr 0x2cfa19c, size 0x18, virtual false, abstract: false, final false
  inline void RemoveListener(::System::Object* targetObj, ::System::Reflection::MethodInfo* method);

  /// @brief Method RemoveAllListeners, addr 0x2cfa1b4, size 0x18, virtual false, abstract: false, final false
  inline void RemoveAllListeners();

  /// @brief Method PrepareInvoke, addr 0x2cfa1cc, size 0x20, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* PrepareInvoke();

  /// @brief Method ToString, addr 0x2cfa1ec, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method GetValidMethodInfo, addr 0x2cf9f94, size 0x1a4, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetValidMethodInfo(::System::Type* objectType, ::StringW functionName, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argumentTypes);

  // Ctor Parameters [CppParam { name: "", ty: "UnityEventBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityEventBase(UnityEventBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityEventBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityEventBase(UnityEventBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityEventBase();

public:
  /// @brief Field m_Calls, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Events::InvokableCallList* ___m_Calls;

  /// @brief Field m_PersistentCalls, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Events::PersistentCallGroup* ___m_PersistentCalls;

  /// @brief Field m_CallsDirty, offset: 0x20, size: 0x1, def value: None
  bool ___m_CallsDirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::UnityEventBase, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Events::UnityEventBase, ___m_Calls) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::UnityEventBase, ___m_PersistentCalls) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::UnityEventBase, ___m_CallsDirty) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::UnityEventBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::UnityEventBase*, "UnityEngine.Events", "UnityEventBase");
