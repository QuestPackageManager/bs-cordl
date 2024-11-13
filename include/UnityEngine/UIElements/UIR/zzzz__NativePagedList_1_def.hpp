#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/NativePagedList_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativePagedList_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template <typename T> class NativePagedList_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UIR::NativePagedList_1);
// Type: UnityEngine.UIElements.UIR::NativePagedList`1
// SizeInfo { instance_size: 72, native_size: 65, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.UIElements.UIR::NativePagedList`1<T>*
class CORDL_TYPE NativePagedList_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <disposed>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Field k_PoolCapacity, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_k_PoolCapacity, put = __cordl_internal_set_k_PoolCapacity)) int32_t k_PoolCapacity;

  /// @brief Field m_CurrentPage, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CurrentPage, put = __cordl_internal_set_m_CurrentPage)) ::Unity::Collections::NativeArray_1<T> m_CurrentPage;

  /// @brief Field m_CurrentPageCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentPageCount, put = __cordl_internal_set_m_CurrentPageCount)) int32_t m_CurrentPageCount;

  /// @brief Field m_Enumerator, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Enumerator, put = __cordl_internal_set_m_Enumerator)) ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<T>>* m_Enumerator;

  /// @brief Field m_Pages, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Pages, put = __cordl_internal_set_m_Pages)) ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>* m_Pages;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(ByRef<T> data);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetPages, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<T>>* GetPages();

  static inline ::UnityEngine::UIElements::UIR::NativePagedList_1<T>* New_ctor(int32_t poolCapacity);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Reset();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_k_PoolCapacity() const;

  constexpr int32_t& __cordl_internal_get_k_PoolCapacity();

  constexpr ::Unity::Collections::NativeArray_1<T> const& __cordl_internal_get_m_CurrentPage() const;

  constexpr ::Unity::Collections::NativeArray_1<T>& __cordl_internal_get_m_CurrentPage();

  constexpr int32_t const& __cordl_internal_get_m_CurrentPageCount() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentPageCount();

  constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<T>>*& __cordl_internal_get_m_Enumerator();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<T>>*> const& __cordl_internal_get_m_Enumerator() const;

  constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>*& __cordl_internal_get_m_Pages();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>*> const& __cordl_internal_get_m_Pages() const;

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_k_PoolCapacity(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentPage(::Unity::Collections::NativeArray_1<T> value);

  constexpr void __cordl_internal_set_m_CurrentPageCount(int32_t value);

  constexpr void __cordl_internal_set_m_Enumerator(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<T>>* value);

  constexpr void __cordl_internal_set_m_Pages(::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t poolCapacity);

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

  /// @brief Field k_PoolCapacity, offset: 0x10, size: 0x4, def value: None
  int32_t ___k_PoolCapacity;

  /// @brief Field m_Pages, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>* ___m_Pages;

  /// @brief Field m_CurrentPage, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<T> ___m_CurrentPage;

  /// @brief Field m_CurrentPageCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_CurrentPageCount;

  /// @brief Field m_Enumerator, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<T>>* ___m_Enumerator;

  /// @brief Field <disposed>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6346 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::NativePagedList_1, "UnityEngine.UIElements.UIR", "NativePagedList`1");
