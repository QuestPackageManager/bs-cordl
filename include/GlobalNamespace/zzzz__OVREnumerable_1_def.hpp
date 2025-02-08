#pragma once
// IWYU pragma private; include "GlobalNamespace/OVREnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVREnumerable_1)
namespace GlobalNamespace {
template <typename T> struct Enumerator_OVREnumerable_1_CollectionType;
}
namespace GlobalNamespace {
template <typename T> struct OVREnumerable_1_Enumerator;
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
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> struct Enumerator_OVREnumerable_1_CollectionType;
}
namespace GlobalNamespace {
template <typename T> struct OVREnumerable_1;
}
namespace GlobalNamespace {
template <typename T> struct OVREnumerable_1_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType);
MARK_GEN_VAL_T(::GlobalNamespace::OVREnumerable_1);
MARK_GEN_VAL_T(::GlobalNamespace::OVREnumerable_1_Enumerator);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OVREnumerable`1/Enumerator/CollectionType<T>
struct CORDL_TYPE Enumerator_OVREnumerable_1_CollectionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Enumerator_OVREnumerable_1_CollectionType_Unwrapped
  enum struct __Enumerator_OVREnumerable_1_CollectionType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_List = static_cast<int32_t>(0x1),
    __E_Set = static_cast<int32_t>(0x2),
    __E_Queue = static_cast<int32_t>(0x3),
    __E_Enumerable = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Enumerator_OVREnumerable_1_CollectionType_Unwrapped() const noexcept {
    return static_cast<__Enumerator_OVREnumerable_1_CollectionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerator_OVREnumerable_1_CollectionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Enumerator_OVREnumerable_1_CollectionType(int32_t value__) noexcept;

  /// @brief Field Enumerable value: I32(4)
  static ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> const Enumerable;

  /// @brief Field List value: I32(1)
  static ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> const List;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> const None;

  /// @brief Field Queue value: I32(3)
  static ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> const Queue;

  /// @brief Field Set value: I32(2)
  static ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> const Set;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8419 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies OVREnumerable`1::Enumerator::CollectionType<T>, System.Collections.Generic.HashSet`1::Enumerator<T>, System.Collections.Generic.IEnumerator`1<T>,
// System.Collections.Generic.Queue`1::Enumerator<T>, System.Collections.IEnumerator, System.IDisposable
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OVREnumerable`1/Enumerator<T>
struct CORDL_TYPE OVREnumerable_1_Enumerator {
public:
  // Declarations
  using CollectionType = ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T>;

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
  constexpr OVREnumerable_1_Enumerator();

  // Ctor Parameters [CppParam { name: "_listIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_type", ty: "::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T>",
  // modifiers: "", def_value: None }, CppParam { name: "_listCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_enumerator", ty:
  // "::System::Collections::Generic::IEnumerator_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_list", ty: "::System::Collections::Generic::IReadOnlyList_1<T>*", modifiers: "",
  // def_value: None }, CppParam { name: "_setEnumerator", ty: "::System::Collections::Generic::HashSet_1_Enumerator<T>", modifiers: "", def_value: None }, CppParam { name: "_queueEnumerator", ty:
  // "::System::Collections::Generic::Queue_1_Enumerator<T>", modifiers: "", def_value: None }]
  constexpr OVREnumerable_1_Enumerator(int32_t _listIndex, ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> _type, int32_t _listCount,
                                       ::System::Collections::Generic::IEnumerator_1<T>* _enumerator, ::System::Collections::Generic::IReadOnlyList_1<T>* _list,
                                       ::System::Collections::Generic::HashSet_1_Enumerator<T> _setEnumerator, ::System::Collections::Generic::Queue_1_Enumerator<T> _queueEnumerator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8420 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field _listIndex, offset: 0x0, size: 0x4, def value: None
  int32_t _listIndex;

  /// @brief Field _type, offset: 0x4, size: 0x4, def value: None
  ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> _type;

  /// @brief Field _listCount, offset: 0x8, size: 0x4, def value: None
  int32_t _listCount;

  /// @brief Field _enumerator, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<T>* _enumerator;

  /// @brief Field _list, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<T>* _list;

  /// @brief Field _setEnumerator, offset: 0x20, size: 0x18, def value: None
  ::System::Collections::Generic::HashSet_1_Enumerator<T> _setEnumerator;

  /// @brief Field _queueEnumerator, offset: 0x38, size: 0x18, def value: None
  ::System::Collections::Generic::Queue_1_Enumerator<T> _queueEnumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OVREnumerable`1<T>
struct CORDL_TYPE OVREnumerable_1 {
public:
  // Declarations
  using Enumerator = ::GlobalNamespace::OVREnumerable_1_Enumerator<T>;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVREnumerable_1_Enumerator<T> GetEnumerator();

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8421 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _enumerable, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* _enumerable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType, "", "OVREnumerable`1/Enumerator/CollectionType");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVREnumerable_1, "", "OVREnumerable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVREnumerable_1_Enumerator, "", "OVREnumerable`1/Enumerator");
