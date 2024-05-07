#pragma once
// IWYU pragma private; include "System/Threading/SparselyPopulatedArray_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SparselyPopulatedArray_1)
namespace System::Threading {
template <typename T> struct SparselyPopulatedArrayAddInfo_1;
}
namespace System::Threading {
template <typename T> class SparselyPopulatedArrayFragment_1;
}
// Forward declare root types
namespace System::Threading {
template <typename T> class SparselyPopulatedArray_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::SparselyPopulatedArray_1);
// Type: System.Threading::SparselyPopulatedArray`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.Threading::SparselyPopulatedArray`1<T>*
class CORDL_TYPE SparselyPopulatedArray_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Tail))::System::Threading::SparselyPopulatedArrayFragment_1<T>* Tail;

  /// @brief Field _head, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__head, put = __cordl_internal_set__head))::System::Threading::SparselyPopulatedArrayFragment_1<T>* _head;

  /// @brief Field _tail, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__tail, put = __cordl_internal_set__tail))::System::Threading::SparselyPopulatedArrayFragment_1<T>* _tail;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::SparselyPopulatedArrayAddInfo_1<T> Add(T element);

  static inline ::System::Threading::SparselyPopulatedArray_1<T>* New_ctor(int32_t initialSize);

  constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>*& __cordl_internal_get__head();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SparselyPopulatedArrayFragment_1<T>*> const& __cordl_internal_get__head() const;

  constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>*& __cordl_internal_get__tail();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SparselyPopulatedArrayFragment_1<T>*> const& __cordl_internal_get__tail() const;

  constexpr void __cordl_internal_set__head(::System::Threading::SparselyPopulatedArrayFragment_1<T>* value);

  constexpr void __cordl_internal_set__tail(::System::Threading::SparselyPopulatedArrayFragment_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialSize);

  /// @brief Method get_Tail, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* get_Tail();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SparselyPopulatedArray_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SparselyPopulatedArray_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SparselyPopulatedArray_1(SparselyPopulatedArray_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SparselyPopulatedArray_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SparselyPopulatedArray_1(SparselyPopulatedArray_1 const&) = delete;

  /// @brief Field _head, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::SparselyPopulatedArrayFragment_1<T>* ____head;

  /// @brief Field _tail, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::SparselyPopulatedArrayFragment_1<T>* ____tail;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::SparselyPopulatedArray_1, "System.Threading", "SparselyPopulatedArray`1");
