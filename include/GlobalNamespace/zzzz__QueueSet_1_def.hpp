#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QueueSet_1)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class QueueSet_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::QueueSet_1);
// Type: ::QueueSet`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15822))
// CS Name: ::QueueSet`1<T>*
class CORDL_TYPE QueueSet_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _linkedList, offset 0x10, size 0x8
  __declspec(property(get = __get__linkedList, put = __set__linkedList))::System::Collections::Generic::LinkedList_1<T>* _linkedList;

  /// @brief Field _set, offset 0x18, size 0x8
  __declspec(property(get = __get__set, put = __set__set))::System::Collections::Generic::HashSet_1<T>* _set;

  __declspec(property(get = get_Count)) int32_t Count;

  constexpr ::System::Collections::Generic::LinkedList_1<T>*& __get__linkedList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<T>*> const& __get__linkedList() const;

  constexpr void __set__linkedList(::System::Collections::Generic::LinkedList_1<T>* value);

  constexpr ::System::Collections::Generic::HashSet_1<T>*& __get__set();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> const& __get__set() const;

  constexpr void __set__set(::System::Collections::Generic::HashSet_1<T>* value);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Enqueue(T item);

  /// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Dequeue();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::GlobalNamespace::QueueSet_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "QueueSet_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QueueSet_1(QueueSet_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QueueSet_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QueueSet_1(QueueSet_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QueueSet_1();

public:
  /// @brief Field _linkedList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<T>* ____linkedList;

  /// @brief Field _set, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<T>* ____set;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::QueueSet_1, "", "QueueSet`1");
