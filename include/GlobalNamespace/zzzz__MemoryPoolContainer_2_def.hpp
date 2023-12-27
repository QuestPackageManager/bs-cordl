#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MemoryPoolContainer_2)
namespace Zenject {
template <typename TValue> class IMemoryPool_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T0, typename T1> class MemoryPoolContainer_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::MemoryPoolContainer_2);
// Type: ::MemoryPoolContainer`2
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T0, typename T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14374))
// CS Name: ::MemoryPoolContainer`2<T0,T1>*
class CORDL_TYPE MemoryPoolContainer_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _activeItems, offset 0x10, size 0x8
  __declspec(property(get = __get__activeItems, put = __set__activeItems))::GlobalNamespace::LazyCopyHashSet_1<T1>* _activeItems;

  /// @brief Field _memoryPool, offset 0x18, size 0x8
  __declspec(property(get = __get__memoryPool, put = __set__memoryPool))::Zenject::IMemoryPool_1<T0>* _memoryPool;

  __declspec(property(get = get_activeItems))::System::Collections::Generic::List_1<T1>* activeItems;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<T1>*& __get__activeItems();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<T1>*> const& __get__activeItems() const;

  constexpr void __set__activeItems(::GlobalNamespace::LazyCopyHashSet_1<T1>* value);

  constexpr ::Zenject::IMemoryPool_1<T0>*& __get__memoryPool();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IMemoryPool_1<T0>*> const& __get__memoryPool() const;

  constexpr void __set__memoryPool(::Zenject::IMemoryPool_1<T0>* value);

  /// @brief Method get_activeItems addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::List_1<T1>* get_activeItems();

  static inline ::GlobalNamespace::MemoryPoolContainer_2<T0, T1>* New_ctor(::Zenject::IMemoryPool_1<T0>* memoryPool);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::IMemoryPool_1<T0>* memoryPool);

  /// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T0 Spawn();

  /// @brief Method Despawn addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Despawn(T0 item);

  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolContainer_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryPoolContainer_2(MemoryPoolContainer_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolContainer_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryPoolContainer_2(MemoryPoolContainer_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryPoolContainer_2();

public:
  /// @brief Field _activeItems, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<T1>* ____activeItems;

  /// @brief Field _memoryPool, offset: 0x18, size: 0x8, def value: None
  ::Zenject::IMemoryPool_1<T0>* ____memoryPool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MemoryPoolContainer_2, "", "MemoryPoolContainer`2");
