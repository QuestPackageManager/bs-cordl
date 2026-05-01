#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/ManagedObjectStore_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ManagedObjectStore_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
template <typename T> class ManagedObjectStore_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::Layout::ManagedObjectStore_1);
// Dependencies System.Object
namespace UnityEngine::UIElements::Layout {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.Layout.ManagedObjectStore`1<T>
class CORDL_TYPE ManagedObjectStore_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Chunks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Chunks, put = __cordl_internal_set_m_Chunks)) ::System::Collections::Generic::List_1<::ArrayW<T, ::Array<T>*>>* m_Chunks;

  /// @brief Field m_Free, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Free, put = __cordl_internal_set_m_Free)) ::System::Collections::Generic::Queue_1<int32_t>* m_Free;

  /// @brief Field m_Length, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Length, put = __cordl_internal_set_m_Length)) int32_t m_Length;

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetValue(int32_t index);

  static inline ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>* New_ctor();

  /// @brief Method UpdateValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateValue(::ByRef<int32_t> index, T value);

  constexpr ::System::Collections::Generic::List_1<::ArrayW<T, ::Array<T>*>>* const& __cordl_internal_get_m_Chunks() const;

  constexpr ::System::Collections::Generic::List_1<::ArrayW<T, ::Array<T>*>>*& __cordl_internal_get_m_Chunks();

  constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& __cordl_internal_get_m_Free() const;

  constexpr ::System::Collections::Generic::Queue_1<int32_t>*& __cordl_internal_get_m_Free();

  constexpr int32_t const& __cordl_internal_get_m_Length() const;

  constexpr int32_t& __cordl_internal_get_m_Length();

  constexpr void __cordl_internal_set_m_Chunks(::System::Collections::Generic::List_1<::ArrayW<T, ::Array<T>*>>* value);

  constexpr void __cordl_internal_set_m_Free(::System::Collections::Generic::Queue_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_Length(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ManagedObjectStore_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ManagedObjectStore_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ManagedObjectStore_1(ManagedObjectStore_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ManagedObjectStore_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ManagedObjectStore_1(ManagedObjectStore_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5393 };

  /// @brief Field m_Length, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Length;

  /// @brief Field m_Chunks, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ArrayW<T, ::Array<T>*>>* ___m_Chunks;

  /// @brief Field m_Free, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<int32_t>* ___m_Free;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::Layout::ManagedObjectStore_1, "UnityEngine.UIElements.Layout", "ManagedObjectStore`1");
