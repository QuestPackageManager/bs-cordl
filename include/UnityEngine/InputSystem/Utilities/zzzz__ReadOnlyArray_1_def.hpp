#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyArray_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
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
class Object;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct __ReadOnlyArray_1__Enumerator;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct __ReadOnlyArray_1__Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1);
MARK_GEN_VAL_T(::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator);
// Type: ::Enumerator
// SizeInfo { instance_size: 24, native_size: 36, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue>
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5959))
// CS Name: ::ReadOnlyArray`1::Enumerator<TValue>
struct CORDL_TYPE __ReadOnlyArray_1__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) TValue Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TValue>*();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TValue>* i___System__Collections__Generic__IEnumerator_1_TValue_();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<TValue, ::Array<TValue>*> array, int32_t index, int32_t length);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<TValue,::Array<TValue>*>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ReadOnlyArray_1__Enumerator(::ArrayW<TValue, ::Array<TValue>*> m_Array, int32_t m_IndexStart, int32_t m_IndexEnd, int32_t m_Index) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReadOnlyArray_1__Enumerator();

  /// @brief Field m_Array, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<TValue, ::Array<TValue>*> m_Array;

  /// @brief Field m_IndexStart, offset: 0x8, size: 0x4, def value: None
  int32_t m_IndexStart;

  /// @brief Field m_IndexEnd, offset: 0xc, size: 0x4, def value: None
  int32_t m_IndexEnd;

  /// @brief Field m_Index, offset: 0x10, size: 0x4, def value: None
  int32_t m_Index;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue>
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5960))
// CS Name: ::UnityEngine.InputSystem.Utilities::ReadOnlyArray`1<TValue>
struct CORDL_TYPE ReadOnlyArray_1 {
public:
  // Declarations
  using Enumerator = ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) TValue Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<TValue>"
  constexpr operator ::System::Collections::Generic::IReadOnlyList_1<TValue>*();

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<TValue>"
  constexpr ::System::Collections::Generic::IReadOnlyList_1<TValue>* i___System__Collections__Generic__IReadOnlyList_1_TValue_();

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TValue>*();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* i___System__Collections__Generic__IEnumerable_1_TValue_();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*();

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<TValue>* i___System__Collections__Generic__IReadOnlyCollection_1_TValue_();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<TValue, ::Array<TValue>*> array);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<TValue, ::Array<TValue>*> array, int32_t index, int32_t length);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<TValue, ::Array<TValue>*> ToArray();

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t IndexOf(::System::Predicate_1<TValue>* predicate);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue> GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TValue>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> op_Implicit___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_TValue_(::ArrayW<TValue, ::Array<TValue>*> array);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Item(int32_t index);

  // Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<TValue,::Array<TValue>*>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ReadOnlyArray_1(::ArrayW<TValue, ::Array<TValue>*> m_Array, int32_t m_StartIndex, int32_t m_Length) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyArray_1();

  /// @brief Field m_Array, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<TValue, ::Array<TValue>*> m_Array;

  /// @brief Field m_StartIndex, offset: 0x8, size: 0x4, def value: None
  int32_t m_StartIndex;

  /// @brief Field m_Length, offset: 0xc, size: 0x4, def value: None
  int32_t m_Length;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1, "UnityEngine.InputSystem.Utilities", "ReadOnlyArray`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator, "UnityEngine.InputSystem.Utilities", "ReadOnlyArray`1/Enumerator");
