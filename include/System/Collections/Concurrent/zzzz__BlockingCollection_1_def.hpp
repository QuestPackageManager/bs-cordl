#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BlockingCollection_1)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Collections::Concurrent {
template <typename T> class IProducerConsumerCollection_1;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Array;
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
namespace System::Threading {
struct CancellationToken;
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
// Type: System.Collections.Concurrent::BlockingCollection`1
// SizeInfo { instance_size: 80, native_size: 76, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Concurrent {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8361))
// CS Name: ::System.Collections.Concurrent::BlockingCollection`1<T>*
class CORDL_TYPE BlockingCollection_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _collection, offset 0x10, size 0x8
  __declspec(property(get = __get__collection, put = __set__collection))::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* _collection;

  /// @brief Field _boundedCapacity, offset 0x18, size 0x4
  __declspec(property(get = __get__boundedCapacity, put = __set__boundedCapacity)) int32_t _boundedCapacity;

  /// @brief Field _freeNodes, offset 0x20, size 0x8
  __declspec(property(get = __get__freeNodes, put = __set__freeNodes))::System::Threading::SemaphoreSlim* _freeNodes;

  /// @brief Field _occupiedNodes, offset 0x28, size 0x8
  __declspec(property(get = __get__occupiedNodes, put = __set__occupiedNodes))::System::Threading::SemaphoreSlim* _occupiedNodes;

  /// @brief Field _isDisposed, offset 0x30, size 0x1
  __declspec(property(get = __get__isDisposed, put = __set__isDisposed)) bool _isDisposed;

  /// @brief Field _consumersCancellationTokenSource, offset 0x38, size 0x8
  __declspec(property(get = __get__consumersCancellationTokenSource, put = __set__consumersCancellationTokenSource))::System::Threading::CancellationTokenSource* _consumersCancellationTokenSource;

  /// @brief Field _producersCancellationTokenSource, offset 0x40, size 0x8
  __declspec(property(get = __get__producersCancellationTokenSource, put = __set__producersCancellationTokenSource))::System::Threading::CancellationTokenSource* _producersCancellationTokenSource;

  /// @brief Field _currentAdders, offset 0x48, size 0x4
  __declspec(property(get = __get__currentAdders, put = __set__currentAdders)) int32_t _currentAdders;

  __declspec(property(get = get_IsAddingCompleted)) bool IsAddingCompleted;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

  constexpr ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*& __get__collection();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*> const& __get__collection() const;

  constexpr void __set__collection(::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* value);

  constexpr int32_t& __get__boundedCapacity();

  constexpr int32_t const& __get__boundedCapacity() const;

  constexpr void __set__boundedCapacity(int32_t value);

  constexpr ::System::Threading::SemaphoreSlim*& __get__freeNodes();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& __get__freeNodes() const;

  constexpr void __set__freeNodes(::System::Threading::SemaphoreSlim* value);

  constexpr ::System::Threading::SemaphoreSlim*& __get__occupiedNodes();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& __get__occupiedNodes() const;

  constexpr void __set__occupiedNodes(::System::Threading::SemaphoreSlim* value);

  constexpr bool& __get__isDisposed();

  constexpr bool const& __get__isDisposed() const;

  constexpr void __set__isDisposed(bool value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__consumersCancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__consumersCancellationTokenSource() const;

  constexpr void __set__consumersCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__producersCancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__producersCancellationTokenSource() const;

  constexpr void __set__producersCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr int32_t& __get__currentAdders();

  constexpr int32_t const& __get__currentAdders() const;

  constexpr void __set__currentAdders(int32_t value);

  /// @brief Method get_IsAddingCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool get_IsAddingCompleted();

  /// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool get_IsCompleted();

  /// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  static inline ::System::Collections::Concurrent::BlockingCollection_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  static inline ::System::Collections::Concurrent::BlockingCollection_1<T>* New_ctor(::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* collection);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* collection);

  /// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Initialize(::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* collection, int32_t boundedCapacity, int32_t collectionCount);

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Add(T item);

  /// @brief Method TryAddWithNoTimeValidation addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool TryAddWithNoTimeValidation(T item, int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Take addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T Take();

  /// @brief Method TryTake addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool TryTake(ByRef<T> item, int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method TryTakeWithNoTimeValidation addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool TryTakeWithNoTimeValidation(ByRef<T> item, int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken,
                                          ::System::Threading::CancellationTokenSource* combinedTokenSource);

  /// @brief Method CompleteAdding addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void CompleteAdding();

  /// @brief Method CancelWaitingConsumers addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void CancelWaitingConsumers();

  /// @brief Method CancelWaitingProducers addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void CancelWaitingProducers();

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ValidateMillisecondsTimeout addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void ValidateMillisecondsTimeout(int32_t millisecondsTimeout);

  /// @brief Method CheckDisposed addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void CheckDisposed();

  // Ctor Parameters [CppParam { name: "", ty: "BlockingCollection_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlockingCollection_1(BlockingCollection_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlockingCollection_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlockingCollection_1(BlockingCollection_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlockingCollection_1();

public:
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
