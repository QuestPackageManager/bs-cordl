#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeSlice_1)
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template <typename T> struct __NativeSlice_1__Enumerator;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace Unity::Collections {
template <typename T> struct __NativeSlice_1__Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::NativeSlice_1);
MARK_GEN_VAL_T(::Unity::Collections::__NativeSlice_1__Enumerator);
// Type: Unity.Collections::NativeSlice`1
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9994))
// CS Name: ::Unity.Collections::NativeSlice`1<T>
struct CORDL_TYPE NativeSlice_1 {
public:
  // Declarations
  using Enumerator = ::Unity::Collections::__NativeSlice_1__Enumerator<T>;

  __declspec(property(get = get_Item, put = set_Item)) T Item[];

  __declspec(property(get = get_Stride)) int32_t Stride;

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeSlice_1<T>>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::NativeSlice_1<T>>*();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Unity::Collections::NativeSlice_1<T> slice, int32_t start, int32_t length);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Unity::Collections::NativeArray_1<T> array);

  /// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Unity::Collections::NativeSlice_1<T> op_Implicit___Unity__Collections__NativeSlice_1_T_(::Unity::Collections::NativeArray_1<T> array);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Unity::Collections::NativeArray_1<T> array, int32_t start, int32_t length);

  /// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T get_Item(int32_t index);

  /// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_Item(int32_t index, T value);

  /// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void CopyFrom(::Unity::Collections::NativeSlice_1<T> slice);

  /// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void CopyFrom(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method get_Stride addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t get_Stride();

  /// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t get_Length();

  /// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Unity::Collections::__NativeSlice_1__Enumerator<T> GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool Equals(::Unity::Collections::NativeSlice_1<T> other);

  /// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline bool op_Inequality(::Unity::Collections::NativeSlice_1<T> left, ::Unity::Collections::NativeSlice_1<T> right);

  // Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_Stride", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NativeSlice_1(::cordl_internals::Ptr<uint8_t> m_Buffer, int32_t m_Stride, int32_t m_Length) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeSlice_1();

  /// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> m_Buffer;

  /// @brief Field m_Stride, offset: 0x8, size: 0x4, def value: None
  int32_t m_Stride;

  /// @brief Field m_Length, offset: 0xc, size: 0x4, def value: None
  int32_t m_Length;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9994)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9994), inst: 3161 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9993))
// CS Name: ::NativeSlice`1::Enumerator<T>
struct CORDL_TYPE __NativeSlice_1__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) T Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(ByRef<::Unity::Collections::NativeSlice_1<T>> array);

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool MoveNext();

  /// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Reset();

  /// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline T get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeSlice_1<T>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr __NativeSlice_1__Enumerator(::Unity::Collections::NativeSlice_1<T> m_Array, int32_t m_Index) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NativeSlice_1__Enumerator();

  /// @brief Field m_Array, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<T> m_Array;

  /// @brief Field m_Index, offset: 0x10, size: 0x4, def value: None
  int32_t m_Index;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeSlice_1, "Unity.Collections", "NativeSlice`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::__NativeSlice_1__Enumerator, "Unity.Collections", "NativeSlice`1/Enumerator");
