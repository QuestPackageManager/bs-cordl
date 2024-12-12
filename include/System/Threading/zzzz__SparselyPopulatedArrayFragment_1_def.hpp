#pragma once
// IWYU pragma private; include "System/Threading/SparselyPopulatedArrayFragment_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SparselyPopulatedArrayFragment_1)
// Forward declare root types
namespace System::Threading {
template <typename T> class SparselyPopulatedArrayFragment_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::SparselyPopulatedArrayFragment_1);
// Dependencies System.Object
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Threading.SparselyPopulatedArrayFragment`1<T>
class CORDL_TYPE SparselyPopulatedArrayFragment_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item)) T Item[];

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Prev)) ::System::Threading::SparselyPopulatedArrayFragment_1<T>* Prev;

  /// @brief Field _elements, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__elements, put = __cordl_internal_set__elements)) ::ArrayW<T, ::Array<T>*> _elements;

  /// @brief Field _freeCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__freeCount, put = __cordl_internal_set__freeCount)) int32_t _freeCount;

  /// @brief Field _next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__next, put = __cordl_internal_set__next)) ::System::Threading::SparselyPopulatedArrayFragment_1<T>* _next;

  /// @brief Field _prev, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__prev, put = __cordl_internal_set__prev)) ::System::Threading::SparselyPopulatedArrayFragment_1<T>* _prev;

  static inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* New_ctor(int32_t size);

  static inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* New_ctor(int32_t size, ::System::Threading::SparselyPopulatedArrayFragment_1<T>* prev);

  /// @brief Method SafeAtomicRemove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T SafeAtomicRemove(int32_t index, T expectedElement);

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get__elements() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get__elements();

  constexpr int32_t const& __cordl_internal_get__freeCount() const;

  constexpr int32_t& __cordl_internal_get__freeCount();

  constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* const& __cordl_internal_get__next() const;

  constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>*& __cordl_internal_get__next();

  constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* const& __cordl_internal_get__prev() const;

  constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>*& __cordl_internal_get__prev();

  constexpr void __cordl_internal_set__elements(::ArrayW<T, ::Array<T>*> value);

  constexpr void __cordl_internal_set__freeCount(int32_t value);

  constexpr void __cordl_internal_set__next(::System::Threading::SparselyPopulatedArrayFragment_1<T>* value);

  constexpr void __cordl_internal_set__prev(::System::Threading::SparselyPopulatedArrayFragment_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t size);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t size, ::System::Threading::SparselyPopulatedArrayFragment_1<T>* prev);

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_Prev, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* get_Prev();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SparselyPopulatedArrayFragment_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SparselyPopulatedArrayFragment_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SparselyPopulatedArrayFragment_1(SparselyPopulatedArrayFragment_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SparselyPopulatedArrayFragment_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SparselyPopulatedArrayFragment_1(SparselyPopulatedArrayFragment_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2697 };

  /// @brief Field _elements, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____elements;

  /// @brief Field _freeCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____freeCount;

  /// @brief Field _next, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::SparselyPopulatedArrayFragment_1<T>* ____next;

  /// @brief Field _prev, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::SparselyPopulatedArrayFragment_1<T>* ____prev;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::SparselyPopulatedArrayFragment_1, "System.Threading", "SparselyPopulatedArrayFragment`1");
