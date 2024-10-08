#pragma once
// IWYU pragma private; include "System/ValueTuple_8.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTuple_8)
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
class IStructuralComparable;
}
namespace System::Collections {
class IStructuralEquatable;
}
namespace System::Runtime::CompilerServices {
class ITuple;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IValueTupleInternal;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest> struct ValueTuple_8;
}
// Write type traits
MARK_GEN_VAL_T(::System::ValueTuple_8);
// Type: System::ValueTuple`8
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
// Is value type: true
// CS Name: ::System::ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>
struct CORDL_TYPE ValueTuple_8 {
public:
  // Declarations
  __declspec(property(get = System_Runtime_CompilerServices_ITuple_get_Length)) int32_t System_Runtime_CompilerServices_ITuple_Length;

  /// @brief Convert operator to "::System::Collections::IStructuralComparable"
  constexpr operator ::System::Collections::IStructuralComparable*();

  /// @brief Convert operator to "::System::Collections::IStructuralEquatable"
  constexpr operator ::System::Collections::IStructuralEquatable*();

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>"
  constexpr operator ::System::IComparable_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>*();

  /// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>"
  constexpr operator ::System::IEquatable_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>*();

  /// @brief Convert operator to "::System::IValueTupleInternal"
  constexpr operator ::System::IValueTupleInternal*();

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
  constexpr operator ::System::Runtime::CompilerServices::ITuple*();

  /// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest> other);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest> other);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetHashCodeCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetHashCodeCore(::System::Collections::IEqualityComparer* comparer);

  /// @brief Method System.Collections.IStructuralComparable.CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer);

  /// @brief Method System.Collections.IStructuralEquatable.Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IStructuralEquatable_Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer);

  /// @brief Method System.Collections.IStructuralEquatable.GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer);

  /// @brief Method System.IComparable.CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_IComparable_CompareTo(::System::Object* other);

  /// @brief Method System.IValueTupleInternal.GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer* comparer);

  /// @brief Method System.IValueTupleInternal.ToStringEnd, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW System_IValueTupleInternal_ToStringEnd();

  /// @brief Method System.Runtime.CompilerServices.ITuple.get_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Runtime_CompilerServices_ITuple_get_Length();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T1 item1, T2 item2, T3 item3, T4 item4, T5 item5, T6 item6, T7 item7, TRest rest);

  /// @brief Convert to "::System::Collections::IStructuralComparable"
  constexpr ::System::Collections::IStructuralComparable* i___System__Collections__IStructuralComparable();

  /// @brief Convert to "::System::Collections::IStructuralEquatable"
  constexpr ::System::Collections::IStructuralEquatable* i___System__Collections__IStructuralEquatable();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>"
  constexpr ::System::IComparable_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>* i___System__IComparable_1___System__ValueTuple_8_T1_T2_T3_T4_T5_T6_T7_TRest__();

  /// @brief Convert to "::System::IEquatable_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>"
  constexpr ::System::IEquatable_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>* i___System__IEquatable_1___System__ValueTuple_8_T1_T2_T3_T4_T5_T6_T7_TRest__();

  /// @brief Convert to "::System::IValueTupleInternal"
  constexpr ::System::IValueTupleInternal* i___System__IValueTupleInternal();

  /// @brief Convert to "::System::Runtime::CompilerServices::ITuple"
  constexpr ::System::Runtime::CompilerServices::ITuple* i___System__Runtime__CompilerServices__ITuple();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTuple_8();

  // Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "T3",
  // modifiers: "", def_value: None }, CppParam { name: "Item4", ty: "T4", modifiers: "", def_value: None }, CppParam { name: "Item5", ty: "T5", modifiers: "", def_value: None }, CppParam { name:
  // "Item6", ty: "T6", modifiers: "", def_value: None }, CppParam { name: "Item7", ty: "T7", modifiers: "", def_value: None }, CppParam { name: "Rest", ty: "TRest", modifiers: "", def_value: None }]
  constexpr ValueTuple_8(T1 Item1, T2 Item2, T3 Item3, T4 Item4, T5 Item5, T6 Item6, T7 Item7, TRest Rest) noexcept;

  /// @brief Field Item1, offset: 0x0, size: 0x8, def value: None
  T1 Item1;

  /// @brief Field Item2, offset: 0x8, size: 0x8, def value: None
  T2 Item2;

  /// @brief Field Item3, offset: 0x10, size: 0x8, def value: None
  T3 Item3;

  /// @brief Field Item4, offset: 0x18, size: 0x8, def value: None
  T4 Item4;

  /// @brief Field Item5, offset: 0x20, size: 0x8, def value: None
  T5 Item5;

  /// @brief Field Item6, offset: 0x28, size: 0x8, def value: None
  T6 Item6;

  /// @brief Field Item7, offset: 0x30, size: 0x8, def value: None
  T7 Item7;

  /// @brief Field Rest, offset: 0x38, size: 0x8, def value: None
  TRest Rest;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2510 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::ValueTuple_8, "System", "ValueTuple`8");
