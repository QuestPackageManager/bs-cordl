#pragma once
// IWYU pragma private; include "GlobalNamespace/OVREnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVREnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVREnumerable_1)
namespace GlobalNamespace {
template <typename T> struct __OVREnumerable_1__Enumerator__CollectionType;
}
namespace GlobalNamespace {
template <typename T> struct __OVREnumerable_1__Enumerator;
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
template <typename T> struct __HashSet_1__Enumerator;
}
namespace System::Collections::Generic {
template <typename T> struct __Queue_1__Enumerator;
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
// Forward declare root types
namespace GlobalNamespace {
template <typename T> struct __OVREnumerable_1__Enumerator__CollectionType;
}
namespace GlobalNamespace {
template <typename T> struct OVREnumerable_1;
}
namespace GlobalNamespace {
template <typename T> struct __OVREnumerable_1__Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType);
MARK_GEN_VAL_T(::GlobalNamespace::OVREnumerable_1);
MARK_GEN_VAL_T(::GlobalNamespace::__OVREnumerable_1__Enumerator);
// Type: ::CollectionType
// SizeInfo { instance_size: 4, native_size: 20, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::OVREnumerable`1::Enumerator::CollectionType<T>
struct CORDL_TYPE __OVREnumerable_1__Enumerator__CollectionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVREnumerable_1__Enumerator__CollectionType_Unwrapped
  enum struct ____OVREnumerable_1__Enumerator__CollectionType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_List = static_cast<int32_t>(0x1),
    __E_Set = static_cast<int32_t>(0x2),
    __E_Queue = static_cast<int32_t>(0x3),
    __E_Enumerable = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVREnumerable_1__Enumerator__CollectionType_Unwrapped() const noexcept {
    return static_cast<____OVREnumerable_1__Enumerator__CollectionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVREnumerable_1__Enumerator__CollectionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVREnumerable_1__Enumerator__CollectionType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Enumerable value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> const Enumerable;

  /// @brief Field List value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> const List;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> const None;

  /// @brief Field Queue value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> const Queue;

  /// @brief Field Set value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> const Set;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8390 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::Enumerator
// SizeInfo { instance_size: 80, native_size: 96, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::OVREnumerable`1::Enumerator<T>
struct CORDL_TYPE __OVREnumerable_1__Enumerator {
public:
  // Declarations
  using CollectionType = ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>;

  __declspec(property(get = get_Current)) T Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method MoveNextList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool MoveNextList();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method ValidateAndThrow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ValidateAndThrow();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>* enumerable);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVREnumerable_1__Enumerator();

  // Ctor Parameters [CppParam { name: "_listIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_type", ty:
  // "::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>", modifiers: "", def_value: None }, CppParam { name: "_listCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "_enumerator", ty: "::System::Collections::Generic::IEnumerator_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_list", ty:
  // "::System::Collections::Generic::IReadOnlyList_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_setEnumerator", ty: "::System::Collections::Generic::__HashSet_1__Enumerator<T>",
  // modifiers: "", def_value: None }, CppParam { name: "_queueEnumerator", ty: "::System::Collections::Generic::__Queue_1__Enumerator<T>", modifiers: "", def_value: None }]
  constexpr __OVREnumerable_1__Enumerator(int32_t _listIndex, ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> _type, int32_t _listCount,
                                          ::System::Collections::Generic::IEnumerator_1<T>* _enumerator, ::System::Collections::Generic::IReadOnlyList_1<T>* _list,
                                          ::System::Collections::Generic::__HashSet_1__Enumerator<T> _setEnumerator,
                                          ::System::Collections::Generic::__Queue_1__Enumerator<T> _queueEnumerator) noexcept;

  /// @brief Field _listIndex, offset: 0x0, size: 0x4, def value: None
  int32_t _listIndex;

  /// @brief Field _type, offset: 0x4, size: 0x4, def value: None
  ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> _type;

  /// @brief Field _listCount, offset: 0x8, size: 0x4, def value: None
  int32_t _listCount;

  /// @brief Field _enumerator, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<T>* _enumerator;

  /// @brief Field _list, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<T>* _list;

  /// @brief Field _setEnumerator, offset: 0x20, size: 0x18, def value: None
  ::System::Collections::Generic::__HashSet_1__Enumerator<T> _setEnumerator;

  /// @brief Field _queueEnumerator, offset: 0x38, size: 0x18, def value: None
  ::System::Collections::Generic::__Queue_1__Enumerator<T> _queueEnumerator;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8391 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::OVREnumerable`1
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::OVREnumerable`1<T>
struct CORDL_TYPE OVREnumerable_1 {
public:
  // Declarations
  using Enumerator = ::GlobalNamespace::__OVREnumerable_1__Enumerator<T>;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVREnumerable_1__Enumerator<T> GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>* enumerable);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVREnumerable_1();

  // Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IEnumerable_1<T>*", modifiers: "", def_value: None }]
  constexpr OVREnumerable_1(::System::Collections::Generic::IEnumerable_1<T>* _enumerable) noexcept;

  /// @brief Field _enumerable, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* _enumerable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8392 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType, "", "OVREnumerable`1/Enumerator/CollectionType");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVREnumerable_1, "", "OVREnumerable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVREnumerable_1__Enumerator, "", "OVREnumerable`1/Enumerator");
