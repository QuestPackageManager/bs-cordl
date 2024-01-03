#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortExtensions)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
template <typename T> class __SortExtensions____c__DisplayClass1_0_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class SortExtensions;
}
namespace GlobalNamespace {
template <typename T> class __SortExtensions____c__DisplayClass1_0_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SortExtensions);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__SortExtensions____c__DisplayClass1_0_1);
// Type: ::<>c__DisplayClass1_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12961))
// CS Name: ::SortExtensions::<>c__DisplayClass1_0`1<T>*
class CORDL_TYPE __SortExtensions____c__DisplayClass1_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field getSortIndex, offset 0x10, size 0x8
  __declspec(property(get = __get_getSortIndex, put = __set_getSortIndex))::System::Func_2<T, int32_t>* getSortIndex;

  constexpr ::System::Func_2<T, int32_t>*& __get_getSortIndex();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<T, int32_t>*> const& __get_getSortIndex() const;

  constexpr void __set_getSortIndex(::System::Func_2<T, int32_t>* value);

  static inline ::GlobalNamespace::__SortExtensions____c__DisplayClass1_0_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Sort>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t _Sort_b__0(T a, T b);

  // Ctor Parameters [CppParam { name: "", ty: "__SortExtensions____c__DisplayClass1_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SortExtensions____c__DisplayClass1_0_1(__SortExtensions____c__DisplayClass1_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SortExtensions____c__DisplayClass1_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SortExtensions____c__DisplayClass1_0_1(__SortExtensions____c__DisplayClass1_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SortExtensions____c__DisplayClass1_0_1();

public:
  /// @brief Field getSortIndex, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<T, int32_t>* ___getSortIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::SortExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12962))
// CS Name: ::SortExtensions*
class CORDL_TYPE SortExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using __c__DisplayClass1_0_1 = ::GlobalNamespace::__SortExtensions____c__DisplayClass1_0_1<T>;

  /// @brief Method InsertSorted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void InsertSorted(::System::Collections::Generic::List_1<T>* list, T item, ::System::Func_2<T, int32_t>* getSortIndex);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::System::Collections::Generic::List_1<T>* list, ::System::Func_2<T, int32_t>* getSortIndex);

  // Ctor Parameters [CppParam { name: "", ty: "SortExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortExtensions(SortExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortExtensions(SortExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SortExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SortExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SortExtensions*, "", "SortExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__SortExtensions____c__DisplayClass1_0_1, "", "SortExtensions/<>c__DisplayClass1_0`1");
