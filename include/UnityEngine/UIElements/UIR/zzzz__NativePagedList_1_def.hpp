#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/NativePagedList_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativePagedList_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> struct NativePagedList_1_Enumerator;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template <typename T> class NativePagedList_1;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> struct NativePagedList_1_Enumerator;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UIR::NativePagedList_1);
MARK_GEN_VAL_T(::UnityEngine::UIElements::UIR::NativePagedList_1_Enumerator);
// Dependencies Unity.Collections.NativeArray`1<T>
namespace UnityEngine::UIElements::UIR {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.NativePagedList`1/Enumerator<T>
struct CORDL_TYPE NativePagedList_1_Enumerator {
public:
  // Declarations
  /// @brief Method GetNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetNext();

  /// @brief Method HasNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool HasNext();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::UIR::NativePagedList_1<T>* nativePagedList, int32_t offset);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativePagedList_1_Enumerator();

  // Ctor Parameters [CppParam { name: "m_NativePagedList", ty: "::UnityEngine::UIElements::UIR::NativePagedList_1<T>*", modifiers: "", def_value: None }, CppParam { name: "m_CurrentPage", ty:
  // "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: None }, CppParam { name: "m_IndexInCurrentPage", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_IndexOfCurrentPage", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CountInCurrentPage", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NativePagedList_1_Enumerator(::UnityEngine::UIElements::UIR::NativePagedList_1<T>* m_NativePagedList, ::Unity::Collections::NativeArray_1<T> m_CurrentPage, int32_t m_IndexInCurrentPage,
                                         int32_t m_IndexOfCurrentPage, int32_t m_CountInCurrentPage) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5321 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field m_NativePagedList, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::NativePagedList_1<T>* m_NativePagedList;

  /// @brief Field m_CurrentPage, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<T> m_CurrentPage;

  /// @brief Field m_IndexInCurrentPage, offset: 0x18, size: 0x4, def value: None
  int32_t m_IndexInCurrentPage;

  /// @brief Field m_IndexOfCurrentPage, offset: 0x1c, size: 0x4, def value: None
  int32_t m_IndexOfCurrentPage;

  /// @brief Field m_CountInCurrentPage, offset: 0x20, size: 0x4, def value: None
  int32_t m_CountInCurrentPage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object, Unity.Collections.Allocator, Unity.Collections.NativeArray`1<T>
namespace UnityEngine::UIElements::UIR {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.NativePagedList`1<T>
class CORDL_TYPE NativePagedList_1 : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::UnityEngine::UIElements::UIR::NativePagedList_1_Enumerator<T>;

  /// @brief Field <disposed>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Field k_PoolCapacity, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_k_PoolCapacity, put = __cordl_internal_set_k_PoolCapacity)) int32_t k_PoolCapacity;

  /// @brief Field m_CountInLastPage, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CountInLastPage, put = __cordl_internal_set_m_CountInLastPage)) int32_t m_CountInLastPage;

  /// @brief Field m_Enumerator, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Enumerator, put = __cordl_internal_set_m_Enumerator)) ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<T>>* m_Enumerator;

  /// @brief Field m_FirstPageAllocator, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FirstPageAllocator, put = __cordl_internal_set_m_FirstPageAllocator)) ::Unity::Collections::Allocator m_FirstPageAllocator;

  /// @brief Field m_LastPage, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_LastPage, put = __cordl_internal_set_m_LastPage)) ::Unity::Collections::NativeArray_1<T> m_LastPage;

  /// @brief Field m_OtherPagesAllocator, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OtherPagesAllocator, put = __cordl_internal_set_m_OtherPagesAllocator)) ::Unity::Collections::Allocator m_OtherPagesAllocator;

  /// @brief Field m_Pages, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Pages, put = __cordl_internal_set_m_Pages)) ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>* m_Pages;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(::ByRef<T> data);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(T data);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetCount();

  /// @brief Method GetPages, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<T>>* GetPages();

  static inline ::UnityEngine::UIElements::UIR::NativePagedList_1<T>* New_ctor(int32_t poolCapacity, ::Unity::Collections::Allocator firstPageAllocator,
                                                                               ::Unity::Collections::Allocator otherPagesAllocator);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Reset();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_k_PoolCapacity() const;

  constexpr int32_t& __cordl_internal_get_k_PoolCapacity();

  constexpr int32_t const& __cordl_internal_get_m_CountInLastPage() const;

  constexpr int32_t& __cordl_internal_get_m_CountInLastPage();

  constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<T>>* const& __cordl_internal_get_m_Enumerator() const;

  constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<T>>*& __cordl_internal_get_m_Enumerator();

  constexpr ::Unity::Collections::Allocator const& __cordl_internal_get_m_FirstPageAllocator() const;

  constexpr ::Unity::Collections::Allocator& __cordl_internal_get_m_FirstPageAllocator();

  constexpr ::Unity::Collections::NativeArray_1<T> const& __cordl_internal_get_m_LastPage() const;

  constexpr ::Unity::Collections::NativeArray_1<T>& __cordl_internal_get_m_LastPage();

  constexpr ::Unity::Collections::Allocator const& __cordl_internal_get_m_OtherPagesAllocator() const;

  constexpr ::Unity::Collections::Allocator& __cordl_internal_get_m_OtherPagesAllocator();

  constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>* const& __cordl_internal_get_m_Pages() const;

  constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>*& __cordl_internal_get_m_Pages();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_k_PoolCapacity(int32_t value);

  constexpr void __cordl_internal_set_m_CountInLastPage(int32_t value);

  constexpr void __cordl_internal_set_m_Enumerator(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<T>>* value);

  constexpr void __cordl_internal_set_m_FirstPageAllocator(::Unity::Collections::Allocator value);

  constexpr void __cordl_internal_set_m_LastPage(::Unity::Collections::NativeArray_1<T> value);

  constexpr void __cordl_internal_set_m_OtherPagesAllocator(::Unity::Collections::Allocator value);

  constexpr void __cordl_internal_set_m_Pages(::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t poolCapacity, ::Unity::Collections::Allocator firstPageAllocator, ::Unity::Collections::Allocator otherPagesAllocator);

  /// @brief Method get_disposed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_disposed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativePagedList_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativePagedList_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativePagedList_1(NativePagedList_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativePagedList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativePagedList_1(NativePagedList_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5322 };

  /// @brief Field k_PoolCapacity, offset: 0x10, size: 0x4, def value: None
  int32_t ___k_PoolCapacity;

  /// @brief Field m_Pages, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>* ___m_Pages;

  /// @brief Field m_LastPage, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<T> ___m_LastPage;

  /// @brief Field m_CountInLastPage, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_CountInLastPage;

  /// @brief Field m_FirstPageAllocator, offset: 0x34, size: 0x4, def value: None
  ::Unity::Collections::Allocator ___m_FirstPageAllocator;

  /// @brief Field m_OtherPagesAllocator, offset: 0x38, size: 0x4, def value: None
  ::Unity::Collections::Allocator ___m_OtherPagesAllocator;

  /// @brief Field m_Enumerator, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<T>>* ___m_Enumerator;

  /// @brief Field <disposed>k__BackingField, offset: 0x48, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::NativePagedList_1, "UnityEngine.UIElements.UIR", "NativePagedList`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::UIR::NativePagedList_1_Enumerator, "UnityEngine.UIElements.UIR", "NativePagedList`1/Enumerator");
