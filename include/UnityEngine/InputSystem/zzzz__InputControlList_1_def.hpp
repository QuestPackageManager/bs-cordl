#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlList_1)
namespace UnityEngine::InputSystem {
template <typename TControl> struct __InputControlList_1__Enumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace Unity::Collections {
struct Allocator;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
template <typename TControl> struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
template <typename TControl> struct __InputControlList_1__Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::InputSystem::InputControlList_1);
MARK_GEN_VAL_T(::UnityEngine::InputSystem::__InputControlList_1__Enumerator);
// Type: ::Enumerator
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// cpp template
template <typename TControl>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6225))
// CS Name: ::InputControlList`1::Enumerator<TControl>
struct CORDL_TYPE __InputControlList_1__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) TControl Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TControl>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TControl>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputControlList_1<TControl> list);

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TControl get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "m_Indices", ty: "::cordl_internals::Ptr<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "m_Current", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputControlList_1__Enumerator(::cordl_internals::Ptr<uint64_t> m_Indices, int32_t m_Count, int32_t m_Current) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlList_1__Enumerator();

  /// @brief Field m_Indices, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint64_t> m_Indices;

  /// @brief Field m_Count, offset: 0x8, size: 0x4, def value: None
  int32_t m_Count;

  /// @brief Field m_Current, offset: 0xc, size: 0x4, def value: None
  int32_t m_Current;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControlList`1
// SizeInfo { instance_size: 32, native_size: 44, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// cpp template
template <typename TControl>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999)), TypeDefinitionIndex(TypeDefinitionIndex(10003)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 407
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6226)) CS Name: ::UnityEngine.InputSystem::InputControlList`1<TControl>
struct CORDL_TYPE InputControlList_1 {
public:
  // Declarations
  using Enumerator = ::UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item)) TControl Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<TControl>"
  constexpr operator ::System::Collections::Generic::IList_1<TControl>*();

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TControl>"
  constexpr operator ::System::Collections::Generic::ICollection_1<TControl>*();

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TControl>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TControl>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<TControl>"
  constexpr operator ::System::Collections::Generic::IReadOnlyList_1<TControl>*();

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TControl>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<TControl>*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method set_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TControl get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, TControl value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param initialCapacity: int32_t (default: static_cast<int32_t>(0x0))
  inline void _ctor(::Unity::Collections::Allocator allocator, int32_t initialCapacity = static_cast<int32_t>(0x0));

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param allocator: ::Unity::Collections::Allocator (default: static_cast<int32_t>(0x4))
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<TControl>* values, ::Unity::Collections::Allocator allocator = static_cast<int32_t>(0x4));

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<TControl, ::Array<TControl>*> values);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Resize(int32_t size);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(TControl item);

  /// @brief Method AddSlice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param count: int32_t (default: static_cast<int32_t>(0xffffffff))
  /// @param destinationIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
  /// @param sourceIndex: int32_t (default: static_cast<int32_t>(0x0))
  template <typename TList>
  inline void AddSlice(TList list, int32_t count = static_cast<int32_t>(0xffffffff), int32_t destinationIndex = static_cast<int32_t>(0xffffffff), int32_t sourceIndex = static_cast<int32_t>(0x0));

  /// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param count: int32_t (default: static_cast<int32_t>(0xffffffff))
  /// @param destinationIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
  inline void AddRange(::System::Collections::Generic::IEnumerable_1<TControl>* list, int32_t count = static_cast<int32_t>(0xffffffff), int32_t destinationIndex = static_cast<int32_t>(0xffffffff));

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(TControl item);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<TControl, ::Array<TControl>*> array, int32_t arrayIndex);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t IndexOf(TControl item);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param count: int32_t (default: static_cast<int32_t>(0xffffffff))
  inline int32_t IndexOf(TControl item, int32_t startIndex, int32_t count = static_cast<int32_t>(0xffffffff));

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Insert(int32_t index, TControl item);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(TControl item);

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param count: int32_t (default: static_cast<int32_t>(0xffffffff))
  inline bool Contains(TControl item, int32_t startIndex, int32_t count = static_cast<int32_t>(0xffffffff));

  /// @brief Method SwapElements, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SwapElements(int32_t index1, int32_t index2);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TCompare> inline void Sort(int32_t startIndex, int32_t count, TCompare comparer);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param dispose: bool (default: false)
  inline ::ArrayW<TControl, ::Array<TControl>*> ToArray(bool dispose = false);

  /// @brief Method AppendTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AppendTo(ByRef<::ArrayW<TControl, ::Array<TControl>*>> array, ByRef<int32_t> count);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TControl>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline uint64_t ToIndex(TControl control);

  /// @brief Method FromIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TControl FromIndex(uint64_t index);

  // Ctor Parameters [CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Indices", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "",
  // def_value: None }, CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
  constexpr InputControlList_1(int32_t m_Count, ::Unity::Collections::NativeArray_1<uint64_t> m_Indices, ::Unity::Collections::Allocator m_Allocator) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlList_1();

  /// @brief Field m_Count, offset: 0x0, size: 0x4, def value: None
  int32_t m_Count;

  /// @brief Field m_Indices, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint64_t> m_Indices;

  /// @brief Field m_Allocator, offset: 0x18, size: 0x4, def value: None
  ::Unity::Collections::Allocator m_Allocator;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field kInvalidIndex offset 0xffffffff size 0x8
  static constexpr uint64_t kInvalidIndex{ static_cast<uint64_t>(0xffffffffffffffffu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::InputControlList_1, "UnityEngine.InputSystem", "InputControlList`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::__InputControlList_1__Enumerator, "UnityEngine.InputSystem", "InputControlList`1/Enumerator");
