#pragma once
// IWYU pragma private; include "GlobalNamespace/SortExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortExtensions)
namespace GlobalNamespace {
template <typename T> class SortExtensions___c__DisplayClass1_0_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class SortExtensions;
}
namespace GlobalNamespace {
template <typename T> class SortExtensions___c__DisplayClass1_0_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SortExtensions);
MARK_GEN_REF_PTR_T(::GlobalNamespace::SortExtensions___c__DisplayClass1_0_1);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: SortExtensions/<>c__DisplayClass1_0`1<T>
class CORDL_TYPE SortExtensions___c__DisplayClass1_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field getSortIndex, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_getSortIndex, put = __cordl_internal_set_getSortIndex)) ::System::Func_2<T, int32_t>* getSortIndex;

  static inline ::GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>* New_ctor();

  /// @brief Method <Sort>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t _Sort_b__0(T a, T b);

  constexpr ::System::Func_2<T, int32_t>* const& __cordl_internal_get_getSortIndex() const;

  constexpr ::System::Func_2<T, int32_t>*& __cordl_internal_get_getSortIndex();

  constexpr void __cordl_internal_set_getSortIndex(::System::Func_2<T, int32_t>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortExtensions___c__DisplayClass1_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortExtensions___c__DisplayClass1_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortExtensions___c__DisplayClass1_0_1(SortExtensions___c__DisplayClass1_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortExtensions___c__DisplayClass1_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortExtensions___c__DisplayClass1_0_1(SortExtensions___c__DisplayClass1_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14972 };

  /// @brief Field getSortIndex, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<T, int32_t>* ___getSortIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SortExtensions
class CORDL_TYPE SortExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using __c__DisplayClass1_0_1 = ::GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>;

  /// @brief Method InsertSorted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void InsertSorted(::System::Collections::Generic::List_1<T>* list, T item, ::System::Func_2<T, int32_t>* getSortIndex);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::System::Collections::Generic::List_1<T>* list, ::System::Func_2<T, int32_t>* getSortIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortExtensions(SortExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortExtensions(SortExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14973 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SortExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SortExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SortExtensions*, "", "SortExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SortExtensions___c__DisplayClass1_0_1, "", "SortExtensions/<>c__DisplayClass1_0`1");
