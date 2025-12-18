#pragma once
// IWYU pragma private; include "System/Collections/Concurrent/BlockingCollection_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BlockingCollection_1)
namespace System::Collections::Concurrent {
template <typename T> class IProducerConsumerCollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Concurrent {
template <typename T> class BlockingCollection_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::BlockingCollection_1);
// Dependencies System.Object
namespace System::Collections::Concurrent {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Collections.Concurrent.BlockingCollection`1<T>
class CORDL_TYPE BlockingCollection_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsAddingCompleted)) bool IsAddingCompleted;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _boundedCapacity, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__boundedCapacity, put = __cordl_internal_set__boundedCapacity)) int32_t _boundedCapacity;

  /// @brief Field _collection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__collection, put = __cordl_internal_set__collection)) ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* _collection;

  /// @brief Field _consumersCancellationTokenSource, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__consumersCancellationTokenSource,
                      put = __cordl_internal_set__consumersCancellationTokenSource)) ::System::Threading::CancellationTokenSource* _consumersCancellationTokenSource;

  /// @brief Field _currentAdders, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__currentAdders, put = __cordl_internal_set__currentAdders)) int32_t _currentAdders;

  /// @brief Field _freeNodes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__freeNodes, put = __cordl_internal_set__freeNodes)) ::System::Threading::SemaphoreSlim* _freeNodes;

  /// @brief Field _isDisposed, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isDisposed, put = __cordl_internal_set__isDisposed)) bool _isDisposed;

  /// @brief Field _occupiedNodes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__occupiedNodes, put = __cordl_internal_set__occupiedNodes)) ::System::Threading::SemaphoreSlim* _occupiedNodes;

  /// @brief Field _producersCancellationTokenSource, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__producersCancellationTokenSource,
                      put = __cordl_internal_set__producersCancellationTokenSource)) ::System::Threading::CancellationTokenSource* _producersCancellationTokenSource;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(T item);

  /// @brief Method CancelWaitingConsumers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CancelWaitingConsumers();

  /// @brief Method CancelWaitingProducers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CancelWaitingProducers();

  /// @brief Method CheckDisposed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckDisposed();

  /// @brief Method CompleteAdding, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CompleteAdding();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Initialize(::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* collection, int32_t boundedCapacity, int32_t collectionCount);

  static inline ::System::Collections::Concurrent::BlockingCollection_1<T>* New_ctor();

  static inline ::System::Collections::Concurrent::BlockingCollection_1<T>* New_ctor(::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* collection);

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Take, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Take();

  /// @brief Method TryAddWithNoTimeValidation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryAddWithNoTimeValidation(T item, int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method TryTake, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryTake(::ByRef<T> item, int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method TryTakeWithNoTimeValidation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryTakeWithNoTimeValidation(::ByRef<T> item, int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken,
                                          ::System::Threading::CancellationTokenSource* combinedTokenSource);

  /// @brief Method ValidateMillisecondsTimeout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ValidateMillisecondsTimeout(int32_t millisecondsTimeout);

  constexpr int32_t const& __cordl_internal_get__boundedCapacity() const;

  constexpr int32_t& __cordl_internal_get__boundedCapacity();

  constexpr ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* const& __cordl_internal_get__collection() const;

  constexpr ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*& __cordl_internal_get__collection();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__consumersCancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__consumersCancellationTokenSource();

  constexpr int32_t const& __cordl_internal_get__currentAdders() const;

  constexpr int32_t& __cordl_internal_get__currentAdders();

  constexpr ::System::Threading::SemaphoreSlim* const& __cordl_internal_get__freeNodes() const;

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__freeNodes();

  constexpr bool const& __cordl_internal_get__isDisposed() const;

  constexpr bool& __cordl_internal_get__isDisposed();

  constexpr ::System::Threading::SemaphoreSlim* const& __cordl_internal_get__occupiedNodes() const;

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__occupiedNodes();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__producersCancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__producersCancellationTokenSource();

  constexpr void __cordl_internal_set__boundedCapacity(int32_t value);

  constexpr void __cordl_internal_set__collection(::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* value);

  constexpr void __cordl_internal_set__consumersCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__currentAdders(int32_t value);

  constexpr void __cordl_internal_set__freeNodes(::System::Threading::SemaphoreSlim* value);

  constexpr void __cordl_internal_set__isDisposed(bool value);

  constexpr void __cordl_internal_set__occupiedNodes(::System::Threading::SemaphoreSlim* value);

  constexpr void __cordl_internal_set__producersCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* collection);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsAddingCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsAddingCompleted();

  /// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlockingCollection_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BlockingCollection_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlockingCollection_1(BlockingCollection_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlockingCollection_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlockingCollection_1(BlockingCollection_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11360 };

  /// @brief Field _collection, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* ____collection;

  /// @brief Field _boundedCapacity, offset: 0x18, size: 0x4, def value: None
  int32_t ____boundedCapacity;

  /// @brief Field _freeNodes, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____freeNodes;

  /// @brief Field _occupiedNodes, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____occupiedNodes;

  /// @brief Field _isDisposed, offset: 0x30, size: 0x1, def value: None
  bool ____isDisposed;

  /// @brief Field _consumersCancellationTokenSource, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____consumersCancellationTokenSource;

  /// @brief Field _producersCancellationTokenSource, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____producersCancellationTokenSource;

  /// @brief Field _currentAdders, offset: 0x48, size: 0x4, def value: None
  int32_t ____currentAdders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::BlockingCollection_1, "System.Collections.Concurrent", "BlockingCollection`1");
