#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRObjectPool)
namespace GlobalNamespace {
template <typename T> class __OVRObjectPool__Storage_1;
}
namespace GlobalNamespace {
template <typename T> struct __OVRObjectPool__ListScope_1;
}
namespace GlobalNamespace {
template <typename T> struct __OVRObjectPool__QueueScope_1;
}
namespace GlobalNamespace {
template <typename T> struct __OVRObjectPool__ItemScope_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace GlobalNamespace {
template <typename T> struct __OVRObjectPool__StackScope_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> struct __OVRObjectPool__DictionaryScope_2;
}
namespace GlobalNamespace {
template <typename T> struct __OVRObjectPool__HashSetScope_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRObjectPool;
}
namespace GlobalNamespace {
template <typename T> class __OVRObjectPool__Storage_1;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> struct __OVRObjectPool__DictionaryScope_2;
}
namespace GlobalNamespace {
template <typename T> struct __OVRObjectPool__HashSetScope_1;
}
namespace GlobalNamespace {
template <typename T> struct __OVRObjectPool__ItemScope_1;
}
namespace GlobalNamespace {
template <typename T> struct __OVRObjectPool__ListScope_1;
}
namespace GlobalNamespace {
template <typename T> struct __OVRObjectPool__QueueScope_1;
}
namespace GlobalNamespace {
template <typename T> struct __OVRObjectPool__StackScope_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRObjectPool);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__OVRObjectPool__Storage_1);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRObjectPool__DictionaryScope_2);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRObjectPool__HashSetScope_1);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRObjectPool__ItemScope_1);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRObjectPool__ListScope_1);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRObjectPool__QueueScope_1);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRObjectPool__StackScope_1);
// Type: ::Storage`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8145))
// CS Name: ::OVRObjectPool::Storage`1<T>*
class CORDL_TYPE __OVRObjectPool__Storage_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field HashSet, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HashSet, put = setStaticF_HashSet))::System::Collections::Generic::HashSet_1<T>* HashSet;

  static inline void setStaticF_HashSet(::System::Collections::Generic::HashSet_1<T>* value);

  static inline ::System::Collections::Generic::HashSet_1<T>* getStaticF_HashSet();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRObjectPool__Storage_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRObjectPool__Storage_1(__OVRObjectPool__Storage_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRObjectPool__Storage_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRObjectPool__Storage_1(__OVRObjectPool__Storage_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRObjectPool__Storage_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::ListScope`1
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8146))
// CS Name: ::OVRObjectPool::ListScope`1<T>
struct CORDL_TYPE __OVRObjectPool__ListScope_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(ByRef<::System::Collections::Generic::List_1<T>*> list);

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::List_1<T>*", modifiers: "", def_value: None }]
  constexpr __OVRObjectPool__ListScope_1(::System::Collections::Generic::List_1<T>* _list) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRObjectPool__ListScope_1();

  /// @brief Field _list, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* _list;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::DictionaryScope`2
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8147))
// CS Name: ::OVRObjectPool::DictionaryScope`2<TKey,TValue>
struct CORDL_TYPE __OVRObjectPool__DictionaryScope_2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(ByRef<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> dictionary);

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::Dictionary_2<TKey,TValue>*", modifiers: "", def_value: None }]
  constexpr __OVRObjectPool__DictionaryScope_2(::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRObjectPool__DictionaryScope_2();

  /// @brief Field _dictionary, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::HashSetScope`1
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8148))
// CS Name: ::OVRObjectPool::HashSetScope`1<T>
struct CORDL_TYPE __OVRObjectPool__HashSetScope_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(ByRef<::System::Collections::Generic::HashSet_1<T>*> set);

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<T>*", modifiers: "", def_value: None }]
  constexpr __OVRObjectPool__HashSetScope_1(::System::Collections::Generic::HashSet_1<T>* _set) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRObjectPool__HashSetScope_1();

  /// @brief Field _set, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<T>* _set;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::StackScope`1
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8149))
// CS Name: ::OVRObjectPool::StackScope`1<T>
struct CORDL_TYPE __OVRObjectPool__StackScope_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(ByRef<::System::Collections::Generic::Stack_1<T>*> stack);

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<T>*", modifiers: "", def_value: None }]
  constexpr __OVRObjectPool__StackScope_1(::System::Collections::Generic::Stack_1<T>* _stack) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRObjectPool__StackScope_1();

  /// @brief Field _stack, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<T>* _stack;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::QueueScope`1
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8150))
// CS Name: ::OVRObjectPool::QueueScope`1<T>
struct CORDL_TYPE __OVRObjectPool__QueueScope_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(ByRef<::System::Collections::Generic::Queue_1<T>*> queue);

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "_queue", ty: "::System::Collections::Generic::Queue_1<T>*", modifiers: "", def_value: None }]
  constexpr __OVRObjectPool__QueueScope_1(::System::Collections::Generic::Queue_1<T>* _queue) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRObjectPool__QueueScope_1();

  /// @brief Field _queue, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<T>* _queue;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::ItemScope`1
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8151))
// CS Name: ::OVRObjectPool::ItemScope`1<T>
struct CORDL_TYPE __OVRObjectPool__ItemScope_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(ByRef<T> item);

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "_item", ty: "T", modifiers: "", def_value: None }]
  constexpr __OVRObjectPool__ItemScope_1(T _item) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRObjectPool__ItemScope_1();

  /// @brief Field _item, offset: 0x0, size: 0x8, def value: None
  T _item;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::OVRObjectPool
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8152))
// CS Name: ::OVRObjectPool*
class CORDL_TYPE OVRObjectPool : public ::System::Object {
public:
  // Declarations
  template <typename T> using ItemScope_1 = ::GlobalNamespace::__OVRObjectPool__ItemScope_1<T>;

  template <typename T> using QueueScope_1 = ::GlobalNamespace::__OVRObjectPool__QueueScope_1<T>;

  template <typename T> using StackScope_1 = ::GlobalNamespace::__OVRObjectPool__StackScope_1<T>;

  template <typename T> using HashSetScope_1 = ::GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>;

  template <typename TKey, typename TValue> using DictionaryScope_2 = ::GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey, TValue>;

  template <typename T> using ListScope_1 = ::GlobalNamespace::__OVRObjectPool__ListScope_1<T>;

  template <typename T> using Storage_1 = ::GlobalNamespace::__OVRObjectPool__Storage_1<T>;

  /// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T Get();

  /// @brief Method List addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Collections::Generic::List_1<T>* List();

  /// @brief Method Dictionary addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TKey, typename TValue> static inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* Dictionary();

  /// @brief Method HashSet addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Collections::Generic::HashSet_1<T>* HashSet();

  /// @brief Method Stack addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Collections::Generic::Stack_1<T>* Stack();

  /// @brief Method Queue addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Collections::Generic::Queue_1<T>* Queue();

  /// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void Return(T obj);

  /// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void Return(::System::Collections::Generic::HashSet_1<T>* set);

  /// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void Return(::System::Collections::Generic::Stack_1<T>* stack);

  /// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void Return(::System::Collections::Generic::Queue_1<T>* queue);

  // Ctor Parameters [CppParam { name: "", ty: "OVRObjectPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRObjectPool(OVRObjectPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRObjectPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRObjectPool(OVRObjectPool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRObjectPool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRObjectPool, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRObjectPool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRObjectPool*, "", "OVRObjectPool");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__OVRObjectPool__Storage_1, "", "OVRObjectPool/Storage`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRObjectPool__DictionaryScope_2, "", "OVRObjectPool/DictionaryScope`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRObjectPool__HashSetScope_1, "", "OVRObjectPool/HashSetScope`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRObjectPool__ItemScope_1, "", "OVRObjectPool/ItemScope`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRObjectPool__ListScope_1, "", "OVRObjectPool/ListScope`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRObjectPool__QueueScope_1, "", "OVRObjectPool/QueueScope`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRObjectPool__StackScope_1, "", "OVRObjectPool/StackScope`1");
