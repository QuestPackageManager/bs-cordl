#pragma once
// IWYU pragma private; include "UnityEngine/Events/UnityEventBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityEventBase)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Events {
class BaseInvokableCall;
}
namespace UnityEngine::Events {
class InvokableCallList;
}
namespace UnityEngine::Events {
class PersistentCallGroup;
}
namespace UnityEngine::Events {
class PersistentCall;
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
// Dependencies System.Object, UnityEngine.ISerializationCallbackReceiver
namespace UnityEngine::Events {
// Is value type: false
// CS Name: UnityEngine.Events.UnityEventBase
class CORDL_TYPE UnityEventBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Calls, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Calls, put = __cordl_internal_set_m_Calls)) ::UnityEngine::Events::InvokableCallList* m_Calls;

  /// @brief Field m_CallsDirty, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CallsDirty, put = __cordl_internal_set_m_CallsDirty)) bool m_CallsDirty;

  /// @brief Field m_PersistentCalls, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PersistentCalls, put = __cordl_internal_set_m_PersistentCalls)) ::UnityEngine::Events::PersistentCallGroup* m_PersistentCalls;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method AddCall, addr 0x48c32e8, size 0x18, virtual false, abstract: false, final false
  inline void AddCall(::UnityEngine::Events::BaseInvokableCall* call);

  /// @brief Method DirtyPersistentCalls, addr 0x48c2dbc, size 0x28, virtual false, abstract: false, final false
  inline void DirtyPersistentCalls();

  /// @brief Method FindMethod, addr 0x48c1d8c, size 0x1cc, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* FindMethod(::UnityEngine::Events::PersistentCall* call);

  /// @brief Method FindMethod, addr 0x48c2de8, size 0x2cc, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* FindMethod(::StringW name, ::System::Type* listenerType, ::UnityEngine::Events::PersistentListenerMode mode, ::System::Type* argumentType);

  /// @brief Method FindMethod_Impl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW name, ::System::Type* targetObjType);

  /// @brief Method GetDelegate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object* target, ::System::Reflection::MethodInfo* theFunction);

  /// @brief Method GetPersistentEventCount, addr 0x48c329c, size 0x18, virtual false, abstract: false, final false
  inline int32_t GetPersistentEventCount();

  /// @brief Method GetValidMethodInfo, addr 0x48c30b4, size 0x1e8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetValidMethodInfo(::System::Type* objectType, ::StringW functionName, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argumentTypes);

  static inline ::UnityEngine::Events::UnityEventBase* New_ctor();

  /// @brief Method PrepareInvoke, addr 0x48c3330, size 0x20, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* PrepareInvoke();

  /// @brief Method RebuildPersistentCallsIfNeeded, addr 0x48c32b4, size 0x34, virtual false, abstract: false, final false
  inline void RebuildPersistentCallsIfNeeded();

  /// @brief Method RemoveAllListeners, addr 0x48c3318, size 0x18, virtual false, abstract: false, final false
  inline void RemoveAllListeners();

  /// @brief Method RemoveListener, addr 0x48c3300, size 0x18, virtual false, abstract: false, final false
  inline void RemoveListener(::System::Object* targetObj, ::System::Reflection::MethodInfo* method);

  /// @brief Method ToString, addr 0x48c3350, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x48c2de4, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x48c2db8, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  constexpr ::UnityEngine::Events::InvokableCallList* const& __cordl_internal_get_m_Calls() const;

  constexpr ::UnityEngine::Events::InvokableCallList*& __cordl_internal_get_m_Calls();

  constexpr bool const& __cordl_internal_get_m_CallsDirty() const;

  constexpr bool& __cordl_internal_get_m_CallsDirty();

  constexpr ::UnityEngine::Events::PersistentCallGroup* const& __cordl_internal_get_m_PersistentCalls() const;

  constexpr ::UnityEngine::Events::PersistentCallGroup*& __cordl_internal_get_m_PersistentCalls();

  constexpr void __cordl_internal_set_m_Calls(::UnityEngine::Events::InvokableCallList* value);

  constexpr void __cordl_internal_set_m_CallsDirty(bool value);

  constexpr void __cordl_internal_set_m_PersistentCalls(::UnityEngine::Events::PersistentCallGroup* value);

  /// @brief Method .ctor, addr 0x48c2d20, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityEventBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityEventBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityEventBase(UnityEventBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityEventBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityEventBase(UnityEventBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10988 };

  /// @brief Field m_Calls, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Events::InvokableCallList* ___m_Calls;

  /// @brief Field m_PersistentCalls, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Events::PersistentCallGroup* ___m_PersistentCalls;

  /// @brief Field m_CallsDirty, offset: 0x20, size: 0x1, def value: None
  bool ___m_CallsDirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Events::UnityEventBase, ___m_Calls) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::UnityEventBase, ___m_PersistentCalls) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::UnityEventBase, ___m_CallsDirty) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::UnityEventBase, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::UnityEventBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::UnityEventBase*, "UnityEngine.Events", "UnityEventBase");
