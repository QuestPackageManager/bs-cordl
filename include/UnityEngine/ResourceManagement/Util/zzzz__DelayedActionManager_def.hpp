#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/DelayedActionManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DelayedActionManager)
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
class Delegate;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::Util {
struct DelayedActionManager_DelegateInfo;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class DelayedActionManager;
}
namespace UnityEngine::ResourceManagement::Util {
struct DelayedActionManager_DelegateInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::DelayedActionManager);
MARK_VAL_T(::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo);
// Dependencies
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.DelayedActionManager/DelegateInfo
struct CORDL_TYPE DelayedActionManager_DelegateInfo {
public:
  // Declarations
  __declspec(property(get = get_InvocationTime, put = set_InvocationTime)) float_t InvocationTime;

  /// @brief Field s_Id, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_Id, put = setStaticF_s_Id)) int32_t s_Id;

  /// @brief Method Invoke, addr 0x479679c, size 0x17c, virtual false, abstract: false, final false
  inline void Invoke();

  /// @brief Method ToString, addr 0x4796b98, size 0x338, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x479617c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Delegate* d, float_t invocationTime, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> p);

  static inline int32_t getStaticF_s_Id();

  /// @brief Method get_InvocationTime, addr 0x4796b88, size 0x8, virtual false, abstract: false, final false
  inline float_t get_InvocationTime();

  static inline void setStaticF_s_Id(int32_t value);

  /// @brief Method set_InvocationTime, addr 0x4796b90, size 0x8, virtual false, abstract: false, final false
  inline void set_InvocationTime(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DelayedActionManager_DelegateInfo();

  // Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Delegate", ty: "::System::Delegate*", modifiers: "", def_value: None }, CppParam {
  // name: "m_Target", ty: "::ArrayW<::System::Object*,::Array<::System::Object*>*>", modifiers: "", def_value: None }, CppParam { name: "_InvocationTime_k__BackingField", ty: "float_t", modifiers:
  // "", def_value: None }]
  constexpr DelayedActionManager_DelegateInfo(int32_t m_Id, ::System::Delegate* m_Delegate, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> m_Target,
                                              float_t _InvocationTime_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15630 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_Id, offset: 0x0, size: 0x4, def value: None
  int32_t m_Id;

  /// @brief Field m_Delegate, offset: 0x8, size: 0x8, def value: None
  ::System::Delegate* m_Delegate;

  /// @brief Field m_Target, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> m_Target;

  /// @brief Field <InvocationTime>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t _InvocationTime_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo, m_Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo, m_Delegate) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo, m_Target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo, _InvocationTime_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Dependencies UnityEngine.ResourceManagement.Util.ComponentSingleton`1<T>
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.DelayedActionManager
class CORDL_TYPE DelayedActionManager : public ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<::UnityW<::UnityEngine::ResourceManagement::Util::DelayedActionManager>> {
public:
  // Declarations
  using DelegateInfo = ::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo;

  /// @brief Field m_Actions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Actions,
                      put = __cordl_internal_set_m_Actions)) ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*,
                                                                      ::Array<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*>*>
      m_Actions;

  /// @brief Field m_CollectionIndex, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CollectionIndex, put = __cordl_internal_set_m_CollectionIndex)) int32_t m_CollectionIndex;

  /// @brief Field m_DelayedActions, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_DelayedActions,
      put = __cordl_internal_set_m_DelayedActions)) ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>* m_DelayedActions;

  /// @brief Field m_DestroyOnCompletion, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DestroyOnCompletion, put = __cordl_internal_set_m_DestroyOnCompletion)) bool m_DestroyOnCompletion;

  /// @brief Field m_NodeCache, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NodeCache, put = __cordl_internal_set_m_NodeCache)) ::System::Collections::Generic::Stack_1<
      ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*>* m_NodeCache;

  /// @brief Method AddAction, addr 0x4795e98, size 0x74, virtual false, abstract: false, final false
  static inline void AddAction(::System::Delegate* action, float_t delay, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters);

  /// @brief Method AddActionInternal, addr 0x4795f0c, size 0x270, virtual false, abstract: false, final false
  inline void AddActionInternal(::System::Delegate* action, float_t delay, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters);

  /// @brief Method Clear, addr 0x4795e18, size 0x74, virtual false, abstract: false, final false
  static inline void Clear();

  /// @brief Method DestroyWhenComplete, addr 0x4795e8c, size 0xc, virtual false, abstract: false, final false
  inline void DestroyWhenComplete();

  /// @brief Method GetNode, addr 0x4795d24, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*
  GetNode(::ByRef<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo> del);

  /// @brief Method InternalLateUpdate, addr 0x4796478, size 0x308, virtual false, abstract: false, final false
  inline void InternalLateUpdate(float_t t);

  /// @brief Method LateUpdate, addr 0x4796780, size 0x1c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::UnityEngine::ResourceManagement::Util::DelayedActionManager* New_ctor();

  /// @brief Method OnApplicationQuit, addr 0x4796918, size 0xb4, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method Wait, addr 0x4796318, size 0x160, virtual false, abstract: false, final false
  static inline bool Wait(float_t timeout, float_t timeAdvanceAmount);

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*>*> const&
  __cordl_internal_get_m_Actions() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*>*>&
  __cordl_internal_get_m_Actions();

  constexpr int32_t const& __cordl_internal_get_m_CollectionIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CollectionIndex();

  constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>* const& __cordl_internal_get_m_DelayedActions() const;

  constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*& __cordl_internal_get_m_DelayedActions();

  constexpr bool const& __cordl_internal_get_m_DestroyOnCompletion() const;

  constexpr bool& __cordl_internal_get_m_DestroyOnCompletion();

  constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*>* const&
  __cordl_internal_get_m_NodeCache() const;

  constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*>*&
  __cordl_internal_get_m_NodeCache();

  constexpr void __cordl_internal_set_m_Actions(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*,
                                                         ::Array<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*>*>
                                                    value);

  constexpr void __cordl_internal_set_m_CollectionIndex(int32_t value);

  constexpr void __cordl_internal_set_m_DelayedActions(::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>* value);

  constexpr void __cordl_internal_set_m_DestroyOnCompletion(bool value);

  constexpr void __cordl_internal_set_m_NodeCache(
      ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*>* value);

  /// @brief Method .ctor, addr 0x47969cc, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsActive, addr 0x47961fc, size 0x11c, virtual false, abstract: false, final false
  static inline bool get_IsActive();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelayedActionManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelayedActionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelayedActionManager(DelayedActionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelayedActionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelayedActionManager(DelayedActionManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15631 };

  /// @brief Field m_Actions, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*,
           ::Array<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*>*>
      ___m_Actions;

  /// @brief Field m_DelayedActions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>* ___m_DelayedActions;

  /// @brief Field m_NodeCache, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo>*>* ___m_NodeCache;

  /// @brief Field m_CollectionIndex, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_CollectionIndex;

  /// @brief Field m_DestroyOnCompletion, offset: 0x3c, size: 0x1, def value: None
  bool ___m_DestroyOnCompletion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager, ___m_Actions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager, ___m_DelayedActions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager, ___m_NodeCache) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager, ___m_CollectionIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager, ___m_DestroyOnCompletion) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::DelayedActionManager, 0x40>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::DelayedActionManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::DelayedActionManager*, "UnityEngine.ResourceManagement.Util", "DelayedActionManager");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::DelayedActionManager_DelegateInfo, "UnityEngine.ResourceManagement.Util", "DelayedActionManager/DelegateInfo");
