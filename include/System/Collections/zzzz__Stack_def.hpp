#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Stack)
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
class __Stack__StackDebugView;
}
namespace System::Collections {
class __Stack__StackEnumerator;
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
class Stack;
}
namespace System::Collections {
class __Stack__StackDebugView;
}
namespace System::Collections {
class __Stack__StackEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Stack);
MARK_REF_PTR_T(::System::Collections::__Stack__StackDebugView);
MARK_REF_PTR_T(::System::Collections::__Stack__StackEnumerator);
// Type: ::StackEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3784))
// CS Name: ::Stack::StackEnumerator*
class CORDL_TYPE __Stack__StackEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _stack, offset 0x10, size 0x8
  __declspec(property(get = __get__stack, put = __set__stack))::System::Collections::Stack* _stack;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __get__index, put = __set__index)) int32_t _index;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) int32_t _version;

  /// @brief Field _currentElement, offset 0x20, size 0x8
  __declspec(property(get = __get__currentElement, put = __set__currentElement))::System::Object* _currentElement;

  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  constexpr ::System::Collections::Stack*& __get__stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Stack*> const& __get__stack() const;

  constexpr void __set__stack(::System::Collections::Stack* value);

  constexpr int32_t& __get__index();

  constexpr int32_t const& __get__index() const;

  constexpr void __set__index(int32_t value);

  constexpr int32_t& __get__version();

  constexpr int32_t const& __get__version() const;

  constexpr void __set__version(int32_t value);

  constexpr ::System::Object*& __get__currentElement();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__currentElement() const;

  constexpr void __set__currentElement(::System::Object* value);

  static inline ::System::Collections::__Stack__StackEnumerator* New_ctor(::System::Collections::Stack* stack);

  /// @brief Method .ctor, addr 0x25834bc, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Stack* stack);

  /// @brief Method Clone, addr 0x2583720, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method MoveNext, addr 0x2583728, size 0xe4, virtual true, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method get_Current, addr 0x258380c, size 0x94, virtual true, abstract: false, final false
  inline ::System::Object* get_Current();

  /// @brief Method Reset, addr 0x25838a0, size 0x80, virtual true, abstract: false, final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "__Stack__StackEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Stack__StackEnumerator(__Stack__StackEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Stack__StackEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Stack__StackEnumerator(__Stack__StackEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Stack__StackEnumerator();

public:
  /// @brief Field _stack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Stack* ____stack;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _currentElement, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____currentElement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__Stack__StackEnumerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__Stack__StackEnumerator, ____stack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__Stack__StackEnumerator, ____index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__Stack__StackEnumerator, ____version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__Stack__StackEnumerator, ____currentElement) == 0x20, "Offset mismatch!");

} // namespace System::Collections
// Type: ::StackDebugView
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3785))
// CS Name: ::Stack::StackDebugView*
class CORDL_TYPE __Stack__StackDebugView : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__Stack__StackDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Stack__StackDebugView(__Stack__StackDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Stack__StackDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Stack__StackDebugView(__Stack__StackDebugView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Stack__StackDebugView();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__Stack__StackDebugView, 0x10>, "Size mismatch!");

} // namespace System::Collections
// Type: System.Collections::Stack
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3786))
// CS Name: ::System.Collections::Stack*
class CORDL_TYPE Stack : public ::System::Object {
public:
  // Declarations
  using StackDebugView = ::System::Collections::__Stack__StackDebugView;

  using StackEnumerator = ::System::Collections::__Stack__StackEnumerator;

  /// @brief Field _array, offset 0x10, size 0x8
  __declspec(property(get = __get__array, put = __set__array))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _array;

  /// @brief Field _size, offset 0x18, size 0x4
  __declspec(property(get = __get__size, put = __set__size)) int32_t _size;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) int32_t _version;

  /// @brief Field _syncRoot, offset 0x20, size 0x8
  __declspec(property(get = __get__syncRoot, put = __set__syncRoot))::System::Object* _syncRoot;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get__array();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get__array() const;

  constexpr void __set__array(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr int32_t& __get__size();

  constexpr int32_t const& __get__size() const;

  constexpr void __set__size(int32_t value);

  constexpr int32_t& __get__version();

  constexpr int32_t const& __get__version() const;

  constexpr void __set__version(int32_t value);

  constexpr ::System::Object*& __get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__syncRoot() const;

  constexpr void __set__syncRoot(::System::Object* value);

  static inline ::System::Collections::Stack* New_ctor();

  /// @brief Method .ctor, addr 0x2582f34, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Stack* New_ctor(int32_t initialCapacity);

  /// @brief Method .ctor, addr 0x2582f90, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialCapacity);

  /// @brief Method get_Count, addr 0x258305c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x2583064, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x258306c, size 0x78, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method Clear, addr 0x25830e4, size 0x30, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x2583114, size 0x90, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method CopyTo, addr 0x25831a4, size 0x2b8, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x258345c, size 0x60, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method Peek, addr 0x25834fc, size 0x88, virtual true, abstract: false, final false
  inline ::System::Object* Peek();

  /// @brief Method Pop, addr 0x2583584, size 0x98, virtual true, abstract: false, final false
  inline ::System::Object* Pop();

  /// @brief Method Push, addr 0x258361c, size 0x104, virtual true, abstract: false, final false
  inline void Push(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "Stack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Stack(Stack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Stack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Stack(Stack const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Stack();

public:
  /// @brief Field _array, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____array;

  /// @brief Field _size, offset: 0x18, size: 0x4, def value: None
  int32_t ____size;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _syncRoot, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  /// @brief Field _defaultCapacity offset 0xffffffff size 0x4
  static constexpr int32_t _defaultCapacity{ static_cast<int32_t>(0xa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Stack, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Stack, ____array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Stack, ____size) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Stack, ____version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Stack, ____syncRoot) == 0x20, "Offset mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::Stack);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Stack*, "System.Collections", "Stack");
NEED_NO_BOX(::System::Collections::__Stack__StackDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__Stack__StackDebugView*, "System.Collections", "Stack/StackDebugView");
NEED_NO_BOX(::System::Collections::__Stack__StackEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__Stack__StackEnumerator*, "System.Collections", "Stack/StackEnumerator");
