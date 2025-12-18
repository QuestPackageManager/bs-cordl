#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRObjectPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRObjectPool)
namespace GlobalNamespace {
template <typename TKey, typename TValue> struct OVRObjectPool_DictionaryScope_2;
}
namespace GlobalNamespace {
template <typename T> struct OVRObjectPool_HashSetScope_1;
}
namespace GlobalNamespace {
class OVRObjectPool_IPoolObject;
}
namespace GlobalNamespace {
template <typename T> struct OVRObjectPool_ItemScope_1;
}
namespace GlobalNamespace {
template <typename T> struct OVRObjectPool_ListScope_1;
}
namespace GlobalNamespace {
template <typename T> struct OVRObjectPool_QueueScope_1;
}
namespace GlobalNamespace {
template <typename T> struct OVRObjectPool_StackScope_1;
}
namespace GlobalNamespace {
template <typename T> class OVRObjectPool_Storage_1;
}
namespace GlobalNamespace {
template <typename T> struct OVRObjectPool_TaskScope_1;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace GlobalNamespace {
template <typename T> class Storage_1_OVRObjectPool___c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRObjectPool;
}
namespace GlobalNamespace {
class OVRObjectPool_IPoolObject;
}
namespace GlobalNamespace {
template <typename T> class OVRObjectPool_Storage_1;
}
namespace GlobalNamespace {
template <typename T> class Storage_1_OVRObjectPool___c;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> struct OVRObjectPool_DictionaryScope_2;
}
namespace GlobalNamespace {
template <typename T> struct OVRObjectPool_HashSetScope_1;
}
namespace GlobalNamespace {
template <typename T> struct OVRObjectPool_ItemScope_1;
}
namespace GlobalNamespace {
template <typename T> struct OVRObjectPool_ListScope_1;
}
namespace GlobalNamespace {
template <typename T> struct OVRObjectPool_QueueScope_1;
}
namespace GlobalNamespace {
template <typename T> struct OVRObjectPool_StackScope_1;
}
namespace GlobalNamespace {
template <typename T> struct OVRObjectPool_TaskScope_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRObjectPool);
MARK_REF_PTR_T(::GlobalNamespace::OVRObjectPool_IPoolObject);
MARK_GEN_REF_PTR_T(::GlobalNamespace::OVRObjectPool_Storage_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::Storage_1_OVRObjectPool___c);
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_DictionaryScope_2);
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_HashSetScope_1);
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_ItemScope_1);
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_ListScope_1);
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_QueueScope_1);
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_StackScope_1);
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_TaskScope_1);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRObjectPool/IPoolObject
class CORDL_TYPE OVRObjectPool_IPoolObject {
public:
  // Declarations
  /// @brief Method OnGet, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnGet();

  /// @brief Method OnReturn, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnReturn();

  // Ctor Parameters [CppParam { name: "", ty: "OVRObjectPool_IPoolObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRObjectPool_IPoolObject(OVRObjectPool_IPoolObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7934 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: OVRObjectPool/Storage`1/<>c<T>
class CORDL_TYPE Storage_1_OVRObjectPool___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::Storage_1_OVRObjectPool___c<T>* __9;

  static inline ::GlobalNamespace::Storage_1_OVRObjectPool___c<T>* New_ctor();

  /// @brief Method <.cctor>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __cctor_b__5_0();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::Storage_1_OVRObjectPool___c<T>* getStaticF___9();

  static inline void setStaticF___9(::GlobalNamespace::Storage_1_OVRObjectPool___c<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Storage_1_OVRObjectPool___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Storage_1_OVRObjectPool___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Storage_1_OVRObjectPool___c(Storage_1_OVRObjectPool___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Storage_1_OVRObjectPool___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Storage_1_OVRObjectPool___c(Storage_1_OVRObjectPool___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7935 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: OVRObjectPool/Storage`1<T>
class CORDL_TYPE OVRObjectPool_Storage_1 : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::Storage_1_OVRObjectPool___c<T>;

  /// @brief Field Clear, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Clear, put = setStaticF_Clear)) ::System::Action* Clear;

  /// @brief Field s_hashSet, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_hashSet, put = setStaticF_s_hashSet)) ::System::Collections::Generic::HashSet_1<T>* s_hashSet;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool Add(T item);

  /// @brief Method GetOrCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetOrCreate();

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool Remove(T item);

  static inline ::System::Action* getStaticF_Clear();

  static inline ::System::Collections::Generic::HashSet_1<T>* getStaticF_s_hashSet();

  static inline void setStaticF_Clear(::System::Action* value);

  static inline void setStaticF_s_hashSet(::System::Collections::Generic::HashSet_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRObjectPool_Storage_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRObjectPool_Storage_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRObjectPool_Storage_1(OVRObjectPool_Storage_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRObjectPool_Storage_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRObjectPool_Storage_1(OVRObjectPool_Storage_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7936 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OVRObjectPool/ListScope`1<T>
struct CORDL_TYPE OVRObjectPool_ListScope_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::System::Collections::Generic::List_1<T>*> list);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>* source, ::ByRef<::System::Collections::Generic::List_1<T>*> list);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRObjectPool_ListScope_1();

  // Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::List_1<T>*", modifiers: "", def_value: None }]
  constexpr OVRObjectPool_ListScope_1(::System::Collections::Generic::List_1<T>* _list) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7937 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _list, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* _list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies OVRObjectPool::ListScope`1<T>, OVRTask`1<TResult>
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OVRObjectPool/TaskScope`1<T>
struct CORDL_TYPE OVRObjectPool_TaskScope_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::System::Collections::Generic::List_1<::GlobalNamespace::OVRTask_1<T>>*> tasks, ::ByRef<::System::Collections::Generic::List_1<T>*> results);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRObjectPool_TaskScope_1();

  // Ctor Parameters [CppParam { name: "_tasks", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<T>>", modifiers: "", def_value: None }, CppParam { name: "_results", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<T>", modifiers: "", def_value: None }]
  constexpr OVRObjectPool_TaskScope_1(::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<T>> _tasks, ::GlobalNamespace::OVRObjectPool_ListScope_1<T> _results) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7938 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _tasks, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<T>> _tasks;

  /// @brief Field _results, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<T> _results;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// CS Name: OVRObjectPool/DictionaryScope`2<TKey,TValue>
struct CORDL_TYPE OVRObjectPool_DictionaryScope_2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> dictionary);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRObjectPool_DictionaryScope_2();

  // Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::Dictionary_2<TKey,TValue>*", modifiers: "", def_value: None }]
  constexpr OVRObjectPool_DictionaryScope_2(::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7939 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _dictionary, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OVRObjectPool/HashSetScope`1<T>
struct CORDL_TYPE OVRObjectPool_HashSetScope_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::System::Collections::Generic::HashSet_1<T>*> set);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRObjectPool_HashSetScope_1();

  // Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<T>*", modifiers: "", def_value: None }]
  constexpr OVRObjectPool_HashSetScope_1(::System::Collections::Generic::HashSet_1<T>* _set) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7940 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _set, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<T>* _set;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OVRObjectPool/StackScope`1<T>
struct CORDL_TYPE OVRObjectPool_StackScope_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::System::Collections::Generic::Stack_1<T>*> stack);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRObjectPool_StackScope_1();

  // Ctor Parameters [CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<T>*", modifiers: "", def_value: None }]
  constexpr OVRObjectPool_StackScope_1(::System::Collections::Generic::Stack_1<T>* _stack) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7941 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _stack, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<T>* _stack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OVRObjectPool/QueueScope`1<T>
struct CORDL_TYPE OVRObjectPool_QueueScope_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::System::Collections::Generic::Queue_1<T>*> queue);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRObjectPool_QueueScope_1();

  // Ctor Parameters [CppParam { name: "_queue", ty: "::System::Collections::Generic::Queue_1<T>*", modifiers: "", def_value: None }]
  constexpr OVRObjectPool_QueueScope_1(::System::Collections::Generic::Queue_1<T>* _queue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7942 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _queue, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<T>* _queue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OVRObjectPool/ItemScope`1<T>
struct CORDL_TYPE OVRObjectPool_ItemScope_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<T> item);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRObjectPool_ItemScope_1();

  // Ctor Parameters [CppParam { name: "_item", ty: "T", modifiers: "", def_value: None }]
  constexpr OVRObjectPool_ItemScope_1(T _item) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7943 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _item, offset: 0x0, size: 0x8, def value: None
  T _item;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRObjectPool
class CORDL_TYPE OVRObjectPool : public ::System::Object {
public:
  // Declarations
  template <typename TKey, typename TValue> using DictionaryScope_2 = ::GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey, TValue>;

  template <typename T> using HashSetScope_1 = ::GlobalNamespace::OVRObjectPool_HashSetScope_1<T>;

  using IPoolObject = ::GlobalNamespace::OVRObjectPool_IPoolObject;

  template <typename T> using ItemScope_1 = ::GlobalNamespace::OVRObjectPool_ItemScope_1<T>;

  template <typename T> using ListScope_1 = ::GlobalNamespace::OVRObjectPool_ListScope_1<T>;

  template <typename T> using QueueScope_1 = ::GlobalNamespace::OVRObjectPool_QueueScope_1<T>;

  template <typename T> using StackScope_1 = ::GlobalNamespace::OVRObjectPool_StackScope_1<T>;

  template <typename T> using Storage_1 = ::GlobalNamespace::OVRObjectPool_Storage_1<T>;

  template <typename T> using TaskScope_1 = ::GlobalNamespace::OVRObjectPool_TaskScope_1<T>;

  /// @brief Method Dictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* Dictionary();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Get();

  /// @brief Method HashSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::HashSet_1<T>* HashSet();

  /// @brief Method List, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::List_1<T>* List();

  /// @brief Method List, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::List_1<T>* List(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method Queue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::Queue_1<T>* Queue();

  /// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Return(T obj);

  /// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Return(::System::Collections::Generic::Queue_1<T>* queue);

  /// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Return(::System::Collections::Generic::HashSet_1<T>* set);

  /// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Return(::System::Collections::Generic::Stack_1<T>* stack);

  /// @brief Method Stack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::Stack_1<T>* Stack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRObjectPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRObjectPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRObjectPool(OVRObjectPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRObjectPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRObjectPool(OVRObjectPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7944 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRObjectPool, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRObjectPool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRObjectPool*, "", "OVRObjectPool");
NEED_NO_BOX(::GlobalNamespace::OVRObjectPool_IPoolObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRObjectPool_IPoolObject*, "", "OVRObjectPool/IPoolObject");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::OVRObjectPool_Storage_1, "", "OVRObjectPool/Storage`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::Storage_1_OVRObjectPool___c, "", "OVRObjectPool/Storage`1/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRObjectPool_DictionaryScope_2, "", "OVRObjectPool/DictionaryScope`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRObjectPool_HashSetScope_1, "", "OVRObjectPool/HashSetScope`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRObjectPool_ItemScope_1, "", "OVRObjectPool/ItemScope`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRObjectPool_ListScope_1, "", "OVRObjectPool/ListScope`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRObjectPool_QueueScope_1, "", "OVRObjectPool/QueueScope`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRObjectPool_StackScope_1, "", "OVRObjectPool/StackScope`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRObjectPool_TaskScope_1, "", "OVRObjectPool/TaskScope`1");
