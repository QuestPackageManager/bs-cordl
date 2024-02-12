#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OVRObjectPool)
namespace GlobalNamespace {
template <typename T> class __OVRObjectPool__Storage_1;
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
template <typename T> class __OVRObjectPool__Storage_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRObjectPool);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__OVRObjectPool__Storage_1);
// Type: ::Storage`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8102))
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
// Type: ::OVRObjectPool
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8103))
// CS Name: ::OVRObjectPool*
class CORDL_TYPE OVRObjectPool : public ::System::Object {
public:
  // Declarations
  template <typename T> using Storage_1 = ::GlobalNamespace::__OVRObjectPool__Storage_1<T>;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Get();

  /// @brief Method List, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::List_1<T>* List();

  /// @brief Method Dictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* Dictionary();

  /// @brief Method HashSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::HashSet_1<T>* HashSet();

  /// @brief Method Stack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::Stack_1<T>* Stack();

  /// @brief Method Queue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::Queue_1<T>* Queue();

  /// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Return(T obj);

  /// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Return(::System::Collections::Generic::HashSet_1<T>* set);

  /// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Return(::System::Collections::Generic::Stack_1<T>* stack);

  /// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
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
