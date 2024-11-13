#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/ArrayHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayHelpers)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class __ArrayHelpers____c__DisplayClass33_0_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class __ArrayHelpers____c__DisplayClass34_0_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class __ArrayHelpers____c__DisplayClass34_1_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class ArrayHelpers;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class __ArrayHelpers____c__DisplayClass33_0_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class __ArrayHelpers____c__DisplayClass34_0_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class __ArrayHelpers____c__DisplayClass34_1_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::ArrayHelpers);
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__ArrayHelpers____c__DisplayClass33_0_1);
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__ArrayHelpers____c__DisplayClass34_0_1);
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__ArrayHelpers____c__DisplayClass34_1_1);
// Type: ::<>c__DisplayClass33_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: ::ArrayHelpers::<>c__DisplayClass33_0`1<TValue>*
class CORDL_TYPE __ArrayHelpers____c__DisplayClass33_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field secondValue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_secondValue, put = __cordl_internal_set_secondValue)) TValue secondValue;

  static inline ::UnityEngine::InputSystem::Utilities::__ArrayHelpers____c__DisplayClass33_0_1<TValue>* New_ctor();

  /// @brief Method <Merge>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _Merge_b__0(TValue x);

  constexpr TValue const& __cordl_internal_get_secondValue() const;

  constexpr TValue& __cordl_internal_get_secondValue();

  constexpr void __cordl_internal_set_secondValue(TValue value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArrayHelpers____c__DisplayClass33_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ArrayHelpers____c__DisplayClass33_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ArrayHelpers____c__DisplayClass33_0_1(__ArrayHelpers____c__DisplayClass33_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayHelpers____c__DisplayClass33_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ArrayHelpers____c__DisplayClass33_0_1(__ArrayHelpers____c__DisplayClass33_0_1 const&) = delete;

  /// @brief Field secondValue, offset: 0x10, size: 0x8, def value: None
  TValue ___secondValue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7036 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
// Type: ::<>c__DisplayClass34_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: ::ArrayHelpers::<>c__DisplayClass34_0`1<TValue>*
class CORDL_TYPE __ArrayHelpers____c__DisplayClass34_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field comparer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TValue>* comparer;

  static inline ::UnityEngine::InputSystem::Utilities::__ArrayHelpers____c__DisplayClass34_0_1<TValue>* New_ctor();

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TValue>*& __cordl_internal_get_comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TValue>*> const& __cordl_internal_get_comparer() const;

  constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArrayHelpers____c__DisplayClass34_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ArrayHelpers____c__DisplayClass34_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ArrayHelpers____c__DisplayClass34_0_1(__ArrayHelpers____c__DisplayClass34_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayHelpers____c__DisplayClass34_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ArrayHelpers____c__DisplayClass34_0_1(__ArrayHelpers____c__DisplayClass34_0_1 const&) = delete;

  /// @brief Field comparer, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TValue>* ___comparer;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7037 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
// Type: ::<>c__DisplayClass34_1`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: ::ArrayHelpers::<>c__DisplayClass34_1`1<TValue>*
class CORDL_TYPE __ArrayHelpers____c__DisplayClass34_1_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1,
                      put = __cordl_internal_set_CS$__8__locals1)) ::UnityEngine::InputSystem::Utilities::__ArrayHelpers____c__DisplayClass34_0_1<TValue>* CS$__8__locals1;

  /// @brief Field secondValue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_secondValue, put = __cordl_internal_set_secondValue)) TValue secondValue;

  static inline ::UnityEngine::InputSystem::Utilities::__ArrayHelpers____c__DisplayClass34_1_1<TValue>* New_ctor();

  /// @brief Method <Merge>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _Merge_b__0(TValue x);

  constexpr ::UnityEngine::InputSystem::Utilities::__ArrayHelpers____c__DisplayClass34_0_1<TValue>*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Utilities::__ArrayHelpers____c__DisplayClass34_0_1<TValue>*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr TValue const& __cordl_internal_get_secondValue() const;

  constexpr TValue& __cordl_internal_get_secondValue();

  constexpr void __cordl_internal_set_CS$__8__locals1(::UnityEngine::InputSystem::Utilities::__ArrayHelpers____c__DisplayClass34_0_1<TValue>* value);

  constexpr void __cordl_internal_set_secondValue(TValue value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArrayHelpers____c__DisplayClass34_1_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ArrayHelpers____c__DisplayClass34_1_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ArrayHelpers____c__DisplayClass34_1_1(__ArrayHelpers____c__DisplayClass34_1_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayHelpers____c__DisplayClass34_1_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ArrayHelpers____c__DisplayClass34_1_1(__ArrayHelpers____c__DisplayClass34_1_1 const&) = delete;

  /// @brief Field secondValue, offset: 0x10, size: 0x8, def value: None
  TValue ___secondValue;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Utilities::__ArrayHelpers____c__DisplayClass34_0_1<TValue>* ___CS$__8__locals1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7038 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ArrayHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Utilities::ArrayHelpers*
class CORDL_TYPE ArrayHelpers : public ::System::Object {
public:
  // Declarations
  template <typename TValue> using __c__DisplayClass33_0_1 = ::UnityEngine::InputSystem::Utilities::__ArrayHelpers____c__DisplayClass33_0_1<TValue>;

  template <typename TValue> using __c__DisplayClass34_0_1 = ::UnityEngine::InputSystem::Utilities::__ArrayHelpers____c__DisplayClass34_0_1<TValue>;

  template <typename TValue> using __c__DisplayClass34_1_1 = ::UnityEngine::InputSystem::Utilities::__ArrayHelpers____c__DisplayClass34_1_1<TValue>;

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline int32_t Append(ByRef<::ArrayW<TValue, ::Array<TValue>*>> array, TValue value);

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline int32_t Append(ByRef<::ArrayW<TValue, ::Array<TValue>*>> array, ::System::Collections::Generic::IEnumerable_1<TValue>* values);

  /// @brief Method AppendListWithCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TValues>
  static inline int32_t AppendListWithCapacity(ByRef<::ArrayW<TValue, ::Array<TValue>*>> array, ByRef<int32_t> length, TValues values, int32_t capacityIncrement);

  /// @brief Method AppendToImmutable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline int32_t AppendToImmutable(ByRef<::ArrayW<TValue, ::Array<TValue>*>> array, ::ArrayW<TValue, ::Array<TValue>*> values);

  /// @brief Method AppendWithCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline int32_t AppendWithCapacity(ByRef<::ArrayW<TValue, ::Array<TValue>*>> array, ByRef<int32_t> count, TValue value, int32_t capacityIncrement);

  /// @brief Method AppendWithCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue>
  static inline int32_t AppendWithCapacity(ByRef<::Unity::Collections::NativeArray_1<TValue>> array, ByRef<int32_t> count, TValue value, int32_t capacityIncrement,
                                           ::Unity::Collections::Allocator allocator);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void Clear(::ArrayW<TValue, ::Array<TValue>*> array);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void Clear(::ArrayW<TValue, ::Array<TValue>*> array, ByRef<int32_t> count);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void Clear(::ArrayW<TValue, ::Array<TValue>*> array, int32_t count);

  /// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline ::ArrayW<TValue, ::Array<TValue>*> Clone(::ArrayW<TValue, ::Array<TValue>*> array);

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline bool Contains(::ArrayW<TValue, ::Array<TValue>*> array, TValue value);

  /// @brief Method ContainsReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TFirst, typename TSecond> static inline bool ContainsReference(::ArrayW<TFirst, ::Array<TFirst>*> array, int32_t count, TSecond value);

  /// @brief Method ContainsReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TFirst, typename TSecond> static inline bool ContainsReference(::ArrayW<TFirst, ::Array<TFirst>*> array, int32_t startIndex, int32_t count, TSecond value);

  /// @brief Method ContainsReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline bool ContainsReference(::ArrayW<TValue, ::Array<TValue>*> array, TValue value);

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline ::ArrayW<TValue, ::Array<TValue>*> Copy(::ArrayW<TValue, ::Array<TValue>*> array);

  /// @brief Method DuplicateWithCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void DuplicateWithCapacity(ByRef<::ArrayW<TValue, ::Array<TValue>*>> array, int32_t count, int32_t capacity, int32_t capacityIncrement);

  /// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void EnsureCapacity(ByRef<::ArrayW<TValue, ::Array<TValue>*>> array, int32_t count, int32_t capacity, int32_t capacityIncrement);

  /// @brief Method Erase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline bool Erase(ByRef<::ArrayW<TValue, ::Array<TValue>*>> array, TValue value);

  /// @brief Method EraseAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void EraseAt(ByRef<::ArrayW<TValue, ::Array<TValue>*>> array, int32_t index);

  /// @brief Method EraseAtByMovingTail, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void EraseAtByMovingTail(::ArrayW<TValue, ::Array<TValue>*> array, ByRef<int32_t> count, int32_t index);

  /// @brief Method EraseAtWithCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void EraseAtWithCapacity(::ArrayW<TValue, ::Array<TValue>*> array, ByRef<int32_t> count, int32_t index);

  /// @brief Method EraseAtWithCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void EraseAtWithCapacity(::Unity::Collections::NativeArray_1<TValue> array, ByRef<int32_t> count, int32_t index);

  /// @brief Method EraseSliceWithCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void EraseSliceWithCapacity(ByRef<::ArrayW<TValue, ::Array<TValue>*>> array, ByRef<int32_t> length, int32_t index, int32_t count);

  /// @brief Method GrowBy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline int32_t GrowBy(ByRef<::ArrayW<TValue, ::Array<TValue>*>> array, int32_t count);

  /// @brief Method GrowBy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline int32_t GrowBy(ByRef<::Unity::Collections::NativeArray_1<TValue>> array, int32_t count, ::Unity::Collections::Allocator allocator);

  /// @brief Method GrowWithCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline int32_t GrowWithCapacity(ByRef<::ArrayW<TValue, ::Array<TValue>*>> array, ByRef<int32_t> count, int32_t growBy, int32_t capacityIncrement);

  /// @brief Method GrowWithCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue>
  static inline int32_t GrowWithCapacity(ByRef<::Unity::Collections::NativeArray_1<TValue>> array, ByRef<int32_t> count, int32_t growBy, int32_t capacityIncrement,
                                         ::Unity::Collections::Allocator allocator);

  /// @brief Method HaveDuplicateReferences, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TFirst> static inline bool HaveDuplicateReferences(::ArrayW<TFirst, ::Array<TFirst>*> first, int32_t index, int32_t count);

  /// @brief Method HaveEqualElements, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline bool HaveEqualElements(::ArrayW<TValue, ::Array<TValue>*> first, ::ArrayW<TValue, ::Array<TValue>*> second, int32_t count);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline int32_t IndexOf(::ArrayW<TValue, ::Array<TValue>*> array, ::System::Predicate_1<TValue>* predicate);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline int32_t IndexOf(::ArrayW<TValue, ::Array<TValue>*> array, ::System::Predicate_1<TValue>* predicate, int32_t startIndex, int32_t count);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline int32_t IndexOf(::ArrayW<TValue, ::Array<TValue>*> array, TValue value, int32_t startIndex, int32_t count);

  /// @brief Method IndexOfReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TFirst, typename TSecond> static inline int32_t IndexOfReference(::ArrayW<TFirst, ::Array<TFirst>*> array, TSecond value, int32_t count);

  /// @brief Method IndexOfReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TFirst, typename TSecond> static inline int32_t IndexOfReference(::ArrayW<TFirst, ::Array<TFirst>*> array, TSecond value, int32_t startIndex, int32_t count);

  /// @brief Method IndexOfValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline int32_t IndexOfValue(::ArrayW<TValue, ::Array<TValue>*> array, TValue value, int32_t startIndex, int32_t count);

  /// @brief Method InsertAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void InsertAt(ByRef<::ArrayW<TValue, ::Array<TValue>*>> array, int32_t index, TValue value);

  /// @brief Method InsertAtWithCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void InsertAtWithCapacity(ByRef<::ArrayW<TValue, ::Array<TValue>*>> array, ByRef<int32_t> count, int32_t index, TValue value, int32_t capacityIncrement);

  /// @brief Method Join, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline ::ArrayW<TValue, ::Array<TValue>*> Join(TValue value, ::ArrayW<TValue, ::Array<TValue>*> values);

  /// @brief Method LengthSafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline int32_t LengthSafe(::ArrayW<TValue, ::Array<TValue>*> array);

  /// @brief Method Merge, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline ::ArrayW<TValue, ::Array<TValue>*> Merge(::ArrayW<TValue, ::Array<TValue>*> first, ::ArrayW<TValue, ::Array<TValue>*> second);

  /// @brief Method Merge, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue>
  static inline ::ArrayW<TValue, ::Array<TValue>*> Merge(::ArrayW<TValue, ::Array<TValue>*> first, ::ArrayW<TValue, ::Array<TValue>*> second,
                                                         ::System::Collections::Generic::IEqualityComparer_1<TValue>* comparer);

  /// @brief Method MoveSlice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void MoveSlice(::ArrayW<TValue, ::Array<TValue>*> array, int32_t sourceIndex, int32_t destinationIndex, int32_t count);

  /// @brief Method PutAtIfNotSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void PutAtIfNotSet(ByRef<::ArrayW<TValue, ::Array<TValue>*>> array, int32_t index, ::System::Func_1<TValue>* valueFn);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void Resize(ByRef<::Unity::Collections::NativeArray_1<TValue>> array, int32_t newSize, ::Unity::Collections::Allocator allocator);

  /// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TOld, typename TNew> static inline ::ArrayW<TNew, ::Array<TNew>*> Select(::ArrayW<TOld, ::Array<TOld>*> array, ::System::Func_2<TOld, TNew>* converter);

  /// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void Swap(ByRef<TValue> first, ByRef<TValue> second);

  /// @brief Method SwapElements, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void SwapElements(::ArrayW<TValue, ::Array<TValue>*> array, int32_t index1, int32_t index2);

  /// @brief Method SwapElements, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void SwapElements(::Unity::Collections::NativeArray_1<TValue> array, int32_t index1, int32_t index2);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayHelpers(ArrayHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayHelpers(ArrayHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7039 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::ArrayHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::ArrayHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::ArrayHelpers*, "UnityEngine.InputSystem.Utilities", "ArrayHelpers");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::__ArrayHelpers____c__DisplayClass33_0_1, "UnityEngine.InputSystem.Utilities", "ArrayHelpers/<>c__DisplayClass33_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::__ArrayHelpers____c__DisplayClass34_0_1, "UnityEngine.InputSystem.Utilities", "ArrayHelpers/<>c__DisplayClass34_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::__ArrayHelpers____c__DisplayClass34_1_1, "UnityEngine.InputSystem.Utilities", "ArrayHelpers/<>c__DisplayClass34_1`1");
