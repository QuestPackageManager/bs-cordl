#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/DelayedActionManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct __DelayedActionManager__DelegateInfo;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class DelayedActionManager;
}
namespace UnityEngine::ResourceManagement::Util {
struct __DelayedActionManager__DelegateInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::DelayedActionManager);
MARK_VAL_T(::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo);
// Type: ::DelegateInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// CS Name: ::DelayedActionManager::DelegateInfo
struct CORDL_TYPE __DelayedActionManager__DelegateInfo {
public:
  // Declarations
  __declspec(property(get = get_InvocationTime, put = set_InvocationTime)) float_t InvocationTime;

  /// @brief Field s_Id, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_Id, put = setStaticF_s_Id)) int32_t s_Id;

  /// @brief Method Invoke, addr 0x333f370, size 0x17c, virtual false, abstract: false, final false
  inline void Invoke();

  /// @brief Method ToString, addr 0x333f76c, size 0x430, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x333ed6c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Delegate* d, float_t invocationTime, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> p);

  static inline int32_t getStaticF_s_Id();

  /// @brief Method get_InvocationTime, addr 0x333f75c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_InvocationTime();

  static inline void setStaticF_s_Id(int32_t value);

  /// @brief Method set_InvocationTime, addr 0x333f764, size 0x8, virtual false, abstract: false, final false
  inline void set_InvocationTime(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DelayedActionManager__DelegateInfo();

  // Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Delegate", ty: "::System::Delegate*", modifiers: "", def_value: None }, CppParam {
  // name: "m_Target", ty: "::ArrayW<::System::Object*,::Array<::System::Object*>*>", modifiers: "", def_value: None }, CppParam { name: "_InvocationTime_k__BackingField", ty: "float_t", modifiers:
  // "", def_value: None }]
  constexpr __DelayedActionManager__DelegateInfo(int32_t m_Id, ::System::Delegate* m_Delegate, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> m_Target,
                                                 float_t _InvocationTime_k__BackingField) noexcept;

  /// @brief Field m_Id, offset: 0x0, size: 0x4, def value: None
  int32_t m_Id;

  /// @brief Field m_Delegate, offset: 0x8, size: 0x8, def value: None
  ::System::Delegate* m_Delegate;

  /// @brief Field m_Target, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> m_Target;

  /// @brief Field <InvocationTime>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t _InvocationTime_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo, m_Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo, m_Delegate) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo, m_Target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo, _InvocationTime_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Type: UnityEngine.ResourceManagement.Util::DelayedActionManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 53, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.Util::DelayedActionManager*
class CORDL_TYPE DelayedActionManager : public ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<::UnityW<::UnityEngine::ResourceManagement::Util::DelayedActionManager>> {
public:
  // Declarations
  using DelegateInfo = ::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo;

  /// @brief Field m_Actions, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_Actions,
      put = __cordl_internal_set_m_Actions))::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*,
                                                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*>*> m_Actions;

  /// @brief Field m_CollectionIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CollectionIndex, put = __cordl_internal_set_m_CollectionIndex)) int32_t m_CollectionIndex;

  /// @brief Field m_DelayedActions, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_DelayedActions,
      put = __cordl_internal_set_m_DelayedActions))::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* m_DelayedActions;

  /// @brief Field m_DestroyOnCompletion, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DestroyOnCompletion, put = __cordl_internal_set_m_DestroyOnCompletion)) bool m_DestroyOnCompletion;

  /// @brief Field m_NodeCache, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NodeCache, put = __cordl_internal_set_m_NodeCache))::System::Collections::Generic::Stack_1<
      ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*>* m_NodeCache;

  /// @brief Method AddAction, addr 0x333ea74, size 0x74, virtual false, abstract: false, final false
  static inline void AddAction(::System::Delegate* action, float_t delay, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters);

  /// @brief Method AddActionInternal, addr 0x333eae8, size 0x284, virtual false, abstract: false, final false
  inline void AddActionInternal(::System::Delegate* action, float_t delay, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters);

  /// @brief Method Clear, addr 0x333e9f4, size 0x74, virtual false, abstract: false, final false
  static inline void Clear();

  /// @brief Method DestroyWhenComplete, addr 0x333ea68, size 0xc, virtual false, abstract: false, final false
  inline void DestroyWhenComplete();

  /// @brief Method GetNode, addr 0x333e8f8, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*
  GetNode(ByRef<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo> del);

  /// @brief Method InternalLateUpdate, addr 0x333f030, size 0x324, virtual false, abstract: false, final false
  inline void InternalLateUpdate(float_t t);

  /// @brief Method LateUpdate, addr 0x333f354, size 0x1c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::UnityEngine::ResourceManagement::Util::DelayedActionManager* New_ctor();

  /// @brief Method OnApplicationQuit, addr 0x333f4ec, size 0xb4, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method Wait, addr 0x333ef00, size 0x130, virtual false, abstract: false, final false
  static inline bool Wait(float_t timeout, float_t timeAdvanceAmount);

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*>*> const&
  __cordl_internal_get_m_Actions() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*>*>&
  __cordl_internal_get_m_Actions();

  constexpr int32_t const& __cordl_internal_get_m_CollectionIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CollectionIndex();

  constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*& __cordl_internal_get_m_DelayedActions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*> const&
  __cordl_internal_get_m_DelayedActions() const;

  constexpr bool const& __cordl_internal_get_m_DestroyOnCompletion() const;

  constexpr bool& __cordl_internal_get_m_DestroyOnCompletion();

  constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*>*&
  __cordl_internal_get_m_NodeCache();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*>*> const&
  __cordl_internal_get_m_NodeCache() const;

  constexpr void __cordl_internal_set_m_Actions(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*,
                                                         ::Array<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*>*>
                                                    value);

  constexpr void __cordl_internal_set_m_CollectionIndex(int32_t value);

  constexpr void __cordl_internal_set_m_DelayedActions(::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* value);

  constexpr void __cordl_internal_set_m_DestroyOnCompletion(bool value);

  constexpr void __cordl_internal_set_m_NodeCache(
      ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*>* value);

  /// @brief Method .ctor, addr 0x333f5a0, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsActive, addr 0x333edec, size 0x114, virtual false, abstract: false, final false
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

  /// @brief Field m_Actions, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*,
           ::Array<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*>*>
      ___m_Actions;

  /// @brief Field m_DelayedActions, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* ___m_DelayedActions;

  /// @brief Field m_NodeCache, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*>* ___m_NodeCache;

  /// @brief Field m_CollectionIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_CollectionIndex;

  /// @brief Field m_DestroyOnCompletion, offset: 0x34, size: 0x1, def value: None
  bool ___m_DestroyOnCompletion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::DelayedActionManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager, ___m_Actions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager, ___m_DelayedActions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager, ___m_NodeCache) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager, ___m_CollectionIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager, ___m_DestroyOnCompletion) == 0x34, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::DelayedActionManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::DelayedActionManager*, "UnityEngine.ResourceManagement.Util", "DelayedActionManager");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo, "UnityEngine.ResourceManagement.Util", "DelayedActionManager/DelegateInfo");
