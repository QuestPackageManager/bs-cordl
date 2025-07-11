#pragma once
// IWYU pragma private; include "Zenject/DisposeBlock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DisposeBlock)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Zenject {
struct DisposeBlock_SpawnedObjectPoolPair;
}
namespace Zenject {
template <typename TValue> class IDespawnableMemoryPool_1;
}
namespace Zenject {
template <typename TValue> class IMemoryPool_1;
}
namespace Zenject {
template <typename TParam1, typename TValue> class IMemoryPool_2;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TValue> class IMemoryPool_3;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> class IMemoryPool_4;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue> class IMemoryPool_5;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue> class IMemoryPool_6;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue> class IMemoryPool_7;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue> class IMemoryPool_8;
}
namespace Zenject {
class IMemoryPool;
}
namespace Zenject {
template <typename TValue> class StaticMemoryPool_1;
}
// Forward declare root types
namespace Zenject {
class DisposeBlock;
}
namespace Zenject {
struct DisposeBlock_SpawnedObjectPoolPair;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::DisposeBlock);
MARK_VAL_T(::Zenject::DisposeBlock_SpawnedObjectPoolPair);
// Dependencies
namespace Zenject {
// Is value type: true
// CS Name: Zenject.DisposeBlock/SpawnedObjectPoolPair
struct CORDL_TYPE DisposeBlock_SpawnedObjectPoolPair {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisposeBlock_SpawnedObjectPoolPair();

  // Ctor Parameters [CppParam { name: "Pool", ty: "::Zenject::IMemoryPool*", modifiers: "", def_value: None }, CppParam { name: "Object", ty: "::System::Object*", modifiers: "", def_value: None }]
  constexpr DisposeBlock_SpawnedObjectPoolPair(::Zenject::IMemoryPool* Pool, ::System::Object* Object) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12691 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Pool, offset: 0x0, size: 0x8, def value: None
  ::Zenject::IMemoryPool* Pool;

  /// @brief Field Object, offset: 0x8, size: 0x8, def value: None
  ::System::Object* Object;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Zenject::DisposeBlock_SpawnedObjectPoolPair, Pool) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Zenject::DisposeBlock_SpawnedObjectPoolPair, Object) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::DisposeBlock_SpawnedObjectPoolPair, 0x10>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.IDisposable, System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.DisposeBlock
class CORDL_TYPE DisposeBlock : public ::System::Object {
public:
  // Declarations
  using SpawnedObjectPoolPair = ::Zenject::DisposeBlock_SpawnedObjectPoolPair;

  /// @brief Field _disposables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__disposables, put = __cordl_internal_set__disposables)) ::System::Collections::Generic::List_1<::System::IDisposable*>* _disposables;

  /// @brief Field _objectPoolPairs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__objectPoolPairs,
                      put = __cordl_internal_set__objectPoolPairs)) ::System::Collections::Generic::List_1<::Zenject::DisposeBlock_SpawnedObjectPoolPair>* _objectPoolPairs;

  /// @brief Field _pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__pool, put = setStaticF__pool)) ::Zenject::StaticMemoryPool_1<::Zenject::DisposeBlock*>* _pool;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x4b538cc, size 0xe4, virtual false, abstract: false, final false
  inline void Add(::System::IDisposable* disposable);

  /// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void AddRange(::System::Collections::Generic::IList_1<T>* disposables);

  /// @brief Method Dispose, addr 0x4b53a8c, size 0x80, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method LazyInitializeDisposableList, addr 0x4b537d8, size 0xf4, virtual false, abstract: false, final false
  inline void LazyInitializeDisposableList();

  static inline ::Zenject::DisposeBlock* New_ctor();

  /// @brief Method OnDespawned, addr 0x4b53478, size 0x360, virtual false, abstract: false, final false
  static inline void OnDespawned(::Zenject::DisposeBlock* that);

  /// @brief Method OnSpawned, addr 0x4b5344c, size 0x2c, virtual false, abstract: false, final false
  static inline void OnSpawned(::Zenject::DisposeBlock* that);

  /// @brief Method Remove, addr 0x4b539b0, size 0x64, virtual false, abstract: false, final false
  inline void Remove(::System::IDisposable* disposable);

  /// @brief Method Spawn, addr 0x4b53a14, size 0x78, virtual false, abstract: false, final false
  static inline ::Zenject::DisposeBlock* Spawn();

  /// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Spawn(::Zenject::IMemoryPool_1<T>* pool);

  /// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TParam1> inline TValue Spawn(::Zenject::IMemoryPool_2<TParam1, TValue>* pool, TParam1 p1);

  /// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TParam1, typename TParam2> inline TValue Spawn(::Zenject::IMemoryPool_3<TParam1, TParam2, TValue>* pool, TParam1 p1, TParam2 p2);

  /// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TParam1, typename TParam2, typename TParam3>
  inline TValue Spawn(::Zenject::IMemoryPool_4<TParam1, TParam2, TParam3, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3);

  /// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  inline TValue Spawn(::Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4);

  /// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
  inline TValue Spawn(::Zenject::IMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5);

  /// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
  inline TValue Spawn(::Zenject::IMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6);

  /// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7>
  inline TValue Spawn(::Zenject::IMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6,
                      TParam7 p7);

  /// @brief Method SpawnList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::List_1<T>* SpawnList();

  /// @brief Method SpawnList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::List_1<T>* SpawnList(::System::Collections::Generic::IEnumerable_1<T>* elements);

  /// @brief Method StoreSpawnedObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void StoreSpawnedObject(T obj, ::Zenject::IDespawnableMemoryPool_1<T>* pool);

  constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>* const& __cordl_internal_get__disposables() const;

  constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& __cordl_internal_get__disposables();

  constexpr ::System::Collections::Generic::List_1<::Zenject::DisposeBlock_SpawnedObjectPoolPair>* const& __cordl_internal_get__objectPoolPairs() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::DisposeBlock_SpawnedObjectPoolPair>*& __cordl_internal_get__objectPoolPairs();

  constexpr void __cordl_internal_set__disposables(::System::Collections::Generic::List_1<::System::IDisposable*>* value);

  constexpr void __cordl_internal_set__objectPoolPairs(::System::Collections::Generic::List_1<::Zenject::DisposeBlock_SpawnedObjectPoolPair>* value);

  /// @brief Method .ctor, addr 0x4b53b0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::StaticMemoryPool_1<::Zenject::DisposeBlock*>* getStaticF__pool();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF__pool(::Zenject::StaticMemoryPool_1<::Zenject::DisposeBlock*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisposeBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisposeBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisposeBlock(DisposeBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisposeBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisposeBlock(DisposeBlock const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12692 };

  /// @brief Field _disposables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::IDisposable*>* ____disposables;

  /// @brief Field _objectPoolPairs, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::DisposeBlock_SpawnedObjectPoolPair>* ____objectPoolPairs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::DisposeBlock, ____disposables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::DisposeBlock, ____objectPoolPairs) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::DisposeBlock, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::DisposeBlock);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DisposeBlock*, "Zenject", "DisposeBlock");
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DisposeBlock_SpawnedObjectPoolPair, "Zenject", "DisposeBlock/SpawnedObjectPoolPair");
