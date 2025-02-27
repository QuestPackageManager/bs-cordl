#pragma once
// IWYU pragma private; include "GlobalNamespace/MemoryPoolContainer_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MemoryPoolContainer_1)
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
template <typename TValue> class IMemoryPool_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class MemoryPoolContainer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::MemoryPoolContainer_1);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: MemoryPoolContainer`1<T>
class CORDL_TYPE MemoryPoolContainer_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _activeItems, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__activeItems, put = __cordl_internal_set__activeItems)) ::GlobalNamespace::LazyCopyHashSet_1<T>* _activeItems;

  /// @brief Field _memoryPool, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__memoryPool, put = __cordl_internal_set__memoryPool)) ::Zenject::IMemoryPool_1<T>* _memoryPool;

  __declspec(property(get = get_activeItems)) ::System::Collections::Generic::List_1<T>* activeItems;

  /// @brief Method Despawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Despawn(T item);

  /// @brief Method DespawnAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void DespawnAll();

  /// @brief Method DestroyAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void DestroyAll();

  static inline ::GlobalNamespace::MemoryPoolContainer_1<T>* New_ctor(::Zenject::IMemoryPool_1<T>* memoryPool);

  /// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Spawn();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<T>* const& __cordl_internal_get__activeItems() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<T>*& __cordl_internal_get__activeItems();

  constexpr ::Zenject::IMemoryPool_1<T>* const& __cordl_internal_get__memoryPool() const;

  constexpr ::Zenject::IMemoryPool_1<T>*& __cordl_internal_get__memoryPool();

  constexpr void __cordl_internal_set__activeItems(::GlobalNamespace::LazyCopyHashSet_1<T>* value);

  constexpr void __cordl_internal_set__memoryPool(::Zenject::IMemoryPool_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IMemoryPool_1<T>* memoryPool);

  /// @brief Method get_activeItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<T>* get_activeItems();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryPoolContainer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolContainer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryPoolContainer_1(MemoryPoolContainer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolContainer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryPoolContainer_1(MemoryPoolContainer_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16430 };

  /// @brief Field _activeItems, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<T>* ____activeItems;

  /// @brief Field _memoryPool, offset: 0x18, size: 0x8, def value: None
  ::Zenject::IMemoryPool_1<T>* ____memoryPool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MemoryPoolContainer_1, "", "MemoryPoolContainer`1");
