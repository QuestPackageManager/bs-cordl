#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/InlinedArray_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InlinedArray_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct __InlinedArray_1__Enumerator;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct InlinedArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct __InlinedArray_1__Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::InputSystem::Utilities::InlinedArray_1);
MARK_GEN_VAL_T(::UnityEngine::InputSystem::Utilities::__InlinedArray_1__Enumerator);
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue>
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.Utilities::InlinedArray`1<TValue>
struct CORDL_TYPE InlinedArray_1 {
public:
  // Declarations
  using Enumerator = ::UnityEngine::InputSystem::Utilities::__InlinedArray_1__Enumerator<TValue>;

  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Item, put = set_Item)) TValue Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TValue>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Append(TValue value);

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Append(::System::Collections::Generic::IEnumerable_1<TValue>* values);

  /// @brief Method AppendWithCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t AppendWithCapacity(TValue value, int32_t capacityIncrement);

  /// @brief Method AssignWithCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> values);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ClearWithCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ClearWithCapacity();

  /// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> Clone();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Contains(TValue value, ::System::Collections::Generic::IEqualityComparer_1<TValue>* comparer);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TValue>* GetEnumerator();

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t IndexOf(TValue value);

  /// @brief Method Merge, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> other);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Remove(TValue value);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveAtByMovingTailWithCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAtByMovingTailWithCapacity(int32_t index);

  /// @brief Method RemoveAtWithCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAtWithCapacity(int32_t index);

  /// @brief Method RemoveByMovingTailWithCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool RemoveByMovingTailWithCapacity(TValue value);

  /// @brief Method SetLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetLength(int32_t size);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TOther> inline ::ArrayW<TOther, ::Array<TOther>*> ToArray(::System::Func_2<TValue, TOther>* mapFunction);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<TValue, ::Array<TValue>*> ToArray();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TValue firstValue, ::ArrayW<TValue, ::Array<TValue>*> additionalValues);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TValue value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<TValue>* values);

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* i___System__Collections__Generic__IEnumerable_1_TValue_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, TValue value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InlinedArray_1();

  // Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "TValue", modifiers: "", def_value: None }, CppParam { name:
  // "additionalValues", ty: "::ArrayW<TValue,::Array<TValue>*>", modifiers: "", def_value: None }]
  constexpr InlinedArray_1(int32_t length, TValue firstValue, ::ArrayW<TValue, ::Array<TValue>*> additionalValues) noexcept;

  /// @brief Field length, offset: 0x0, size: 0x4, def value: None
  int32_t length;

  /// @brief Field firstValue, offset: 0x8, size: 0x8, def value: None
  TValue firstValue;

  /// @brief Field additionalValues, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<TValue, ::Array<TValue>*> additionalValues;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
// SizeInfo { instance_size: 32, native_size: 44, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue>
// Is value type: true
// CS Name: ::InlinedArray`1::Enumerator<TValue>
struct CORDL_TYPE __InlinedArray_1__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) TValue Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TValue>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TValue>* i___System__Collections__Generic__IEnumerator_1_TValue_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InlinedArray_1__Enumerator();

  // Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr __InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array, int32_t index) noexcept;

  /// @brief Field array, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array;

  /// @brief Field index, offset: 0x18, size: 0x4, def value: None
  int32_t index;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::InlinedArray_1, "UnityEngine.InputSystem.Utilities", "InlinedArray`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::__InlinedArray_1__Enumerator, "UnityEngine.InputSystem.Utilities", "InlinedArray`1/Enumerator");
