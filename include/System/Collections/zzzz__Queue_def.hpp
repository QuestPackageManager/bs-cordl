#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Queue)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class __Queue__QueueDebugView;
}
namespace System::Collections {
class __Queue__QueueEnumerator;
}
namespace System {
class Array;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class Queue;
}
namespace System::Collections {
class __Queue__QueueDebugView;
}
namespace System::Collections {
class __Queue__QueueEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Queue);
MARK_REF_PTR_T(::System::Collections::__Queue__QueueDebugView);
MARK_REF_PTR_T(::System::Collections::__Queue__QueueEnumerator);
// Type: ::QueueEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::Queue::QueueEnumerator*
class CORDL_TYPE __Queue__QueueEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Field _currentElement, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__currentElement, put = __cordl_internal_set__currentElement))::System::Object* _currentElement;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field _q, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__q, put = __cordl_internal_set__q))::System::Collections::Queue* _q;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x2672f10, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method MoveNext, addr 0x2672f18, size 0xc8, virtual true, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Collections::__Queue__QueueEnumerator* New_ctor(::System::Collections::Queue* q);

  /// @brief Method Reset, addr 0x2673074, size 0x8c, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::System::Object*& __cordl_internal_get__currentElement();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__currentElement() const;

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr ::System::Collections::Queue*& __cordl_internal_get__q();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Queue*> const& __cordl_internal_get__q() const;

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__currentElement(::System::Object* value);

  constexpr void __cordl_internal_set__index(int32_t value);

  constexpr void __cordl_internal_set__q(::System::Collections::Queue* value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x2672d20, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Queue* q);

  /// @brief Method get_Current, addr 0x2672fe0, size 0x94, virtual true, abstract: false, final false
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Queue__QueueEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Queue__QueueEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Queue__QueueEnumerator(__Queue__QueueEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Queue__QueueEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Queue__QueueEnumerator(__Queue__QueueEnumerator const&) = delete;

  /// @brief Field _q, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Queue* ____q;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _currentElement, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____currentElement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__Queue__QueueEnumerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__Queue__QueueEnumerator, ____q) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__Queue__QueueEnumerator, ____index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__Queue__QueueEnumerator, ____version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__Queue__QueueEnumerator, ____currentElement) == 0x20, "Offset mismatch!");

} // namespace System::Collections
// Type: ::QueueDebugView
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::Queue::QueueDebugView*
class CORDL_TYPE __Queue__QueueDebugView : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Queue__QueueDebugView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Queue__QueueDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Queue__QueueDebugView(__Queue__QueueDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Queue__QueueDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Queue__QueueDebugView(__Queue__QueueDebugView const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__Queue__QueueDebugView, 0x10>, "Size mismatch!");

} // namespace System::Collections
// Type: System.Collections::Queue
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::System.Collections::Queue*
class CORDL_TYPE Queue : public ::System::Object {
public:
  // Declarations
  using QueueDebugView = ::System::Collections::__Queue__QueueDebugView;

  using QueueEnumerator = ::System::Collections::__Queue__QueueEnumerator;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  /// @brief Field _array, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__array, put = __cordl_internal_set__array))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _array;

  /// @brief Field _growFactor, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__growFactor, put = __cordl_internal_set__growFactor)) int32_t _growFactor;

  /// @brief Field _head, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__head, put = __cordl_internal_set__head)) int32_t _head;

  /// @brief Field _size, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__size, put = __cordl_internal_set__size)) int32_t _size;

  /// @brief Field _syncRoot, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot))::System::Object* _syncRoot;

  /// @brief Field _tail, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__tail, put = __cordl_internal_set__tail)) int32_t _tail;

  /// @brief Field _version, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x267277c, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method CopyTo, addr 0x26728e4, size 0x1f4, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method Dequeue, addr 0x2672d70, size 0xcc, virtual true, abstract: false, final false
  inline ::System::Object* Dequeue();

  /// @brief Method Enqueue, addr 0x2672ad8, size 0xfc, virtual true, abstract: false, final false
  inline void Enqueue(::System::Object* obj);

  /// @brief Method GetElement, addr 0x2672ed0, size 0x40, virtual false, abstract: false, final false
  inline ::System::Object* GetElement(int32_t i);

  /// @brief Method GetEnumerator, addr 0x2672cc0, size 0x60, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::System::Collections::Queue* New_ctor();

  static inline ::System::Collections::Queue* New_ctor(int32_t capacity);

  static inline ::System::Collections::Queue* New_ctor(int32_t capacity, float_t growFactor);

  static inline ::System::Collections::Queue* New_ctor(::System::Collections::ICollection* col);

  /// @brief Method Peek, addr 0x2672e3c, size 0x94, virtual true, abstract: false, final false
  inline ::System::Object* Peek();

  /// @brief Method SetCapacity, addr 0x2672bd4, size 0xec, virtual false, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__array() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__array();

  constexpr int32_t const& __cordl_internal_get__growFactor() const;

  constexpr int32_t& __cordl_internal_get__growFactor();

  constexpr int32_t const& __cordl_internal_get__head() const;

  constexpr int32_t& __cordl_internal_get__head();

  constexpr int32_t const& __cordl_internal_get__size() const;

  constexpr int32_t& __cordl_internal_get__size();

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__syncRoot() const;

  constexpr int32_t const& __cordl_internal_get__tail() const;

  constexpr int32_t& __cordl_internal_get__tail();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__array(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__growFactor(int32_t value);

  constexpr void __cordl_internal_set__head(int32_t value);

  constexpr void __cordl_internal_set__size(int32_t value);

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  constexpr void __cordl_internal_set__tail(int32_t value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x2672334, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2672500, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x2672340, size 0x1c0, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, float_t growFactor);

  /// @brief Method .ctor, addr 0x2672508, size 0x26c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ICollection* col);

  /// @brief Method get_Count, addr 0x2672774, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x2672860, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x2672868, size 0x7c, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Queue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Queue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Queue(Queue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Queue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Queue(Queue const&) = delete;

  /// @brief Field _array, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____array;

  /// @brief Field _head, offset: 0x18, size: 0x4, def value: None
  int32_t ____head;

  /// @brief Field _tail, offset: 0x1c, size: 0x4, def value: None
  int32_t ____tail;

  /// @brief Field _size, offset: 0x20, size: 0x4, def value: None
  int32_t ____size;

  /// @brief Field _growFactor, offset: 0x24, size: 0x4, def value: None
  int32_t ____growFactor;

  /// @brief Field _version, offset: 0x28, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _syncRoot, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Queue, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Queue, ____array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Queue, ____head) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Queue, ____tail) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Queue, ____size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Queue, ____growFactor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Queue, ____version) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Queue, ____syncRoot) == 0x30, "Offset mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::Queue);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Queue*, "System.Collections", "Queue");
NEED_NO_BOX(::System::Collections::__Queue__QueueDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__Queue__QueueDebugView*, "System.Collections", "Queue/QueueDebugView");
NEED_NO_BOX(::System::Collections::__Queue__QueueEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__Queue__QueueEnumerator*, "System.Collections", "Queue/QueueEnumerator");
