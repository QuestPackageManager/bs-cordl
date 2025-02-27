#pragma once
// IWYU pragma private; include "GlobalNamespace/MemoryPoolContainer_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MemoryPoolContainer_2)
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
template <typename T0, typename T1> class MemoryPoolContainer_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::MemoryPoolContainer_2);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T0, typename T1>
// Is value type: false
// CS Name: MemoryPoolContainer`2<T0,T1>
class CORDL_TYPE MemoryPoolContainer_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _activeItems, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__activeItems, put = __cordl_internal_set__activeItems)) ::GlobalNamespace::LazyCopyHashSet_1<T1>* _activeItems;

  /// @brief Field _memoryPool, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__memoryPool, put = __cordl_internal_set__memoryPool)) ::Zenject::IMemoryPool_1<T0>* _memoryPool;

  __declspec(property(get = get_activeItems)) ::System::Collections::Generic::List_1<T1>* activeItems;

  /// @brief Method Despawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Despawn(T0 item);

  /// @brief Method DespawnAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void DespawnAll();

  /// @brief Method DestroyAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void DestroyAll();

  static inline ::GlobalNamespace::MemoryPoolContainer_2<T0, T1>* New_ctor(::Zenject::IMemoryPool_1<T0>* memoryPool);

  /// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T0 Spawn();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<T1>* const& __cordl_internal_get__activeItems() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<T1>*& __cordl_internal_get__activeItems();

  constexpr ::Zenject::IMemoryPool_1<T0>* const& __cordl_internal_get__memoryPool() const;

  constexpr ::Zenject::IMemoryPool_1<T0>*& __cordl_internal_get__memoryPool();

  constexpr void __cordl_internal_set__activeItems(::GlobalNamespace::LazyCopyHashSet_1<T1>* value);

  constexpr void __cordl_internal_set__memoryPool(::Zenject::IMemoryPool_1<T0>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IMemoryPool_1<T0>* memoryPool);

  /// @brief Method get_activeItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<T1>* get_activeItems();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryPoolContainer_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolContainer_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryPoolContainer_2(MemoryPoolContainer_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolContainer_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryPoolContainer_2(MemoryPoolContainer_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16431 };

  /// @brief Field _activeItems, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<T1>* ____activeItems;

  /// @brief Field _memoryPool, offset: 0x18, size: 0x8, def value: None
  ::Zenject::IMemoryPool_1<T0>* ____memoryPool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MemoryPoolContainer_2, "", "MemoryPoolContainer`2");
