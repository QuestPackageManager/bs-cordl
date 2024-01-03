#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeArray_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
template <typename T> struct __NativeArray_1__Enumerator;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct __NativeArray_1__Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::NativeArray_1);
MARK_GEN_VAL_T(::Unity::Collections::__NativeArray_1__Enumerator);
// Type: Unity.Collections::NativeArray`1
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10003))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9999))
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1 {
public:
  // Declarations
  using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<T>;

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Item, put = set_Item)) T Item[];

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>*();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>"
  constexpr ::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>* i___System__IEquatable_1___Unity__Collections__NativeArray_1_T__();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t length, ::Unity::Collections::Allocator allocator, ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> array, ::Unity::Collections::Allocator allocator);

  /// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Allocate(int32_t length, ::Unity::Collections::Allocator allocator, ByRef<::Unity::Collections::NativeArray_1<T>> array);

  /// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, T value);

  /// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyFrom(::Unity::Collections::NativeArray_1<T> array);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> ToArray();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::__NativeArray_1__Enumerator<T> GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::NativeArray_1<T> other);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Copy(::Unity::Collections::NativeArray_1<T> src, ::Unity::Collections::NativeArray_1<T> dst);

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Copy(::ArrayW<T, ::Array<T>*> src, ::Unity::Collections::NativeArray_1<T> dst);

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Copy(::Unity::Collections::NativeArray_1<T> src, ::ArrayW<T, ::Array<T>*> dst);

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Copy(::Unity::Collections::NativeArray_1<T> src, ::Unity::Collections::NativeArray_1<T> dst, int32_t length);

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Copy(::Unity::Collections::NativeArray_1<T> src, ::ArrayW<T, ::Array<T>*> dst, int32_t length);

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Copy(::Unity::Collections::NativeArray_1<T> src, int32_t srcIndex, ::Unity::Collections::NativeArray_1<T> dst, int32_t dstIndex, int32_t length);

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Copy(::ArrayW<T, ::Array<T>*> src, int32_t srcIndex, ::Unity::Collections::NativeArray_1<T> dst, int32_t dstIndex, int32_t length);

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Copy(::Unity::Collections::NativeArray_1<T> src, int32_t srcIndex, ::ArrayW<T, ::Array<T>*> dst, int32_t dstIndex, int32_t length);

  /// @brief Method InternalReinterpret, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t length);

  /// @brief Method Reinterpret, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t expectedTypeSize);

  // Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
  constexpr NativeArray_1(::cordl_internals::Ptr<void> m_Buffer, int32_t m_Length, ::Unity::Collections::Allocator m_AllocatorLabel) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeArray_1();

  /// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> m_Buffer;

  /// @brief Field m_Length, offset: 0x8, size: 0x4, def value: None
  int32_t m_Length;

  /// @brief Field m_AllocatorLabel, offset: 0xc, size: 0x4, def value: None
  ::Unity::Collections::Allocator m_AllocatorLabel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Type: ::Enumerator
// SizeInfo { instance_size: 24, native_size: 36, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 3160 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9998))
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) T Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<T>> array);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<T> m_Array, int32_t m_Index) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NativeArray_1__Enumerator();

  /// @brief Field m_Array, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<T> m_Array;

  /// @brief Field m_Index, offset: 0x10, size: 0x4, def value: None
  int32_t m_Index;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeArray_1, "Unity.Collections", "NativeArray`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::__NativeArray_1__Enumerator, "Unity.Collections", "NativeArray`1/Enumerator");
