#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRObjectPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
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
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
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
// Forward declare root types
namespace GlobalNamespace {
class OVRObjectPool;
}
namespace GlobalNamespace {
template <typename T> class OVRObjectPool_Storage_1;
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
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRObjectPool);
MARK_GEN_REF_PTR_T(::GlobalNamespace::OVRObjectPool_Storage_1);
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_DictionaryScope_2);
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_HashSetScope_1);
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_ItemScope_1);
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_ListScope_1);
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_QueueScope_1);
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_StackScope_1);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: OVRObjectPool/Storage`1<T>
class CORDL_TYPE OVRObjectPool_Storage_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field HashSet, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HashSet, put = setStaticF_HashSet)) ::System::Collections::Generic::HashSet_1<T>* HashSet;

  static inline ::System::Collections::Generic::HashSet_1<T>* getStaticF_HashSet();

  static inline void setStaticF_HashSet(::System::Collections::Generic::HashSet_1<T>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8456 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.IDisposable
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

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRObjectPool_ListScope_1();

  // Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::List_1<T>*", modifiers: "", def_value: None }]
  constexpr OVRObjectPool_ListScope_1(::System::Collections::Generic::List_1<T>* _list) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8457 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _list, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* _list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.IDisposable
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8458 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _dictionary, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.IDisposable
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8459 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _set, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<T>* _set;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.IDisposable
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8460 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _stack, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<T>* _stack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.IDisposable
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8461 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _queue, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<T>* _queue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.IDisposable
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8462 };

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

  template <typename T> using ItemScope_1 = ::GlobalNamespace::OVRObjectPool_ItemScope_1<T>;

  template <typename T> using ListScope_1 = ::GlobalNamespace::OVRObjectPool_ListScope_1<T>;

  template <typename T> using QueueScope_1 = ::GlobalNamespace::OVRObjectPool_QueueScope_1<T>;

  template <typename T> using StackScope_1 = ::GlobalNamespace::OVRObjectPool_StackScope_1<T>;

  template <typename T> using Storage_1 = ::GlobalNamespace::OVRObjectPool_Storage_1<T>;

  /// @brief Method Dictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* Dictionary();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Get();

  /// @brief Method HashSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::HashSet_1<T>* HashSet();

  /// @brief Method List, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::List_1<T>* List();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8463 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRObjectPool, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRObjectPool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRObjectPool*, "", "OVRObjectPool");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::OVRObjectPool_Storage_1, "", "OVRObjectPool/Storage`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRObjectPool_DictionaryScope_2, "", "OVRObjectPool/DictionaryScope`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRObjectPool_HashSetScope_1, "", "OVRObjectPool/HashSetScope`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRObjectPool_ItemScope_1, "", "OVRObjectPool/ItemScope`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRObjectPool_ListScope_1, "", "OVRObjectPool/ListScope`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRObjectPool_QueueScope_1, "", "OVRObjectPool/QueueScope`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRObjectPool_StackScope_1, "", "OVRObjectPool/StackScope`1");
