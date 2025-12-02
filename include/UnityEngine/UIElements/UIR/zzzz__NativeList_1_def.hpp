#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/NativeList_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeList_1)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template <typename T> class NativeList_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UIR::NativeList_1);
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>
namespace UnityEngine::UIElements::UIR {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.NativeList`1<T>
class CORDL_TYPE NativeList_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field <disposed>k__BackingField, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Field m_Count, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Count, put = __cordl_internal_set_m_Count)) int32_t m_Count;

  /// @brief Field m_NativeArray, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_m_NativeArray, put = __cordl_internal_set_m_NativeArray)) ::Unity::Collections::NativeArray_1<T> m_NativeArray;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(::Unity::Collections::NativeSlice_1<T> src);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Expand, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Expand(int32_t newLength);

  /// @brief Method GetSlice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeSlice_1<T> GetSlice(int32_t start, int32_t length);

  static inline ::UnityEngine::UIElements::UIR::NativeList_1<T>* New_ctor(int32_t initialCapacity);

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_Count() const;

  constexpr int32_t& __cordl_internal_get_m_Count();

  constexpr ::Unity::Collections::NativeArray_1<T> const& __cordl_internal_get_m_NativeArray() const;

  constexpr ::Unity::Collections::NativeArray_1<T>& __cordl_internal_get_m_NativeArray();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_Count(int32_t value);

  constexpr void __cordl_internal_set_m_NativeArray(::Unity::Collections::NativeArray_1<T> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialCapacity);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_disposed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_disposed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeList_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeList_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeList_1(NativeList_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeList_1(NativeList_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5320 };

  /// @brief Field m_NativeArray, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<T> ___m_NativeArray;

  /// @brief Field m_Count, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_Count;

  /// @brief Field <disposed>k__BackingField, offset: 0x24, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::NativeList_1, "UnityEngine.UIElements.UIR", "NativeList`1");
