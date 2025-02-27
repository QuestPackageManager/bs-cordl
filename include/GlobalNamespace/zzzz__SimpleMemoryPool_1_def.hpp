#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleMemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleMemoryPool_1)
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class SimpleMemoryPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::SimpleMemoryPool_1);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: SimpleMemoryPool`1<T>
class CORDL_TYPE SimpleMemoryPool_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _activeElements, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__activeElements, put = __cordl_internal_set__activeElements)) ::GlobalNamespace::LazyCopyHashSet_1<T>* _activeElements;

  /// @brief Field _createNewItemFunc, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__createNewItemFunc, put = __cordl_internal_set__createNewItemFunc)) ::System::Func_1<T>* _createNewItemFunc;

  /// @brief Field _inactiveElements, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__inactiveElements, put = __cordl_internal_set__inactiveElements)) ::System::Collections::Generic::List_1<T>* _inactiveElements;

  __declspec(property(get = get_items)) ::System::Collections::Generic::List_1<T>* items;

  /// @brief Method Despawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Despawn(T item);

  static inline ::GlobalNamespace::SimpleMemoryPool_1<T>* New_ctor(int32_t startCapacity, ::System::Func_1<T>* createNewItemFunc);

  /// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Spawn();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<T>* const& __cordl_internal_get__activeElements() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<T>*& __cordl_internal_get__activeElements();

  constexpr ::System::Func_1<T>* const& __cordl_internal_get__createNewItemFunc() const;

  constexpr ::System::Func_1<T>*& __cordl_internal_get__createNewItemFunc();

  constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get__inactiveElements() const;

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get__inactiveElements();

  constexpr void __cordl_internal_set__activeElements(::GlobalNamespace::LazyCopyHashSet_1<T>* value);

  constexpr void __cordl_internal_set__createNewItemFunc(::System::Func_1<T>* value);

  constexpr void __cordl_internal_set__inactiveElements(::System::Collections::Generic::List_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t startCapacity, ::System::Func_1<T>* createNewItemFunc);

  /// @brief Method get_items, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<T>* get_items();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleMemoryPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleMemoryPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleMemoryPool_1(SimpleMemoryPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleMemoryPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleMemoryPool_1(SimpleMemoryPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16401 };

  /// @brief Field _activeElements, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<T>* ____activeElements;

  /// @brief Field _inactiveElements, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ____inactiveElements;

  /// @brief Field _createNewItemFunc, offset: 0x20, size: 0x8, def value: None
  ::System::Func_1<T>* ____createNewItemFunc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SimpleMemoryPool_1, "", "SimpleMemoryPool`1");
