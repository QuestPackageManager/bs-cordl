#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/TempAllocator_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TempAllocator_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> struct TempAllocator_1_Page;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template <typename T> class TempAllocator_1;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> struct TempAllocator_1_Page;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UIR::TempAllocator_1);
MARK_GEN_VAL_T(::UnityEngine::UIElements::UIR::TempAllocator_1_Page);
// Dependencies Unity.Collections.NativeArray`1<T>
namespace UnityEngine::UIElements::UIR {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.TempAllocator`1/Page<T>
struct CORDL_TYPE TempAllocator_1_Page {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TempAllocator_1_Page();

  // Ctor Parameters [CppParam { name: "array", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: None }, CppParam { name: "used", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr TempAllocator_1_Page(::Unity::Collections::NativeArray_1<T> array, int32_t used) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6392 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field array, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<T> array;

  /// @brief Field used, offset: 0x10, size: 0x4, def value: None
  int32_t used;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR
// Dependencies System.IDisposable, System.Object, UnityEngine.UIElements.UIR.TempAllocator`1::Page<T>
namespace UnityEngine::UIElements::UIR {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.TempAllocator`1<T>
class CORDL_TYPE TempAllocator_1 : public ::System::Object {
public:
  // Declarations
  using Page = ::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T>;

  /// @brief Field <disposed>k__BackingField, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Field m_Excess, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Excess,
                      put = __cordl_internal_set_m_Excess)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T>>* m_Excess;

  /// @brief Field m_ExcessMaxCapacity, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ExcessMaxCapacity, put = __cordl_internal_set_m_ExcessMaxCapacity)) int32_t m_ExcessMaxCapacity;

  /// @brief Field m_ExcessMinCapacity, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ExcessMinCapacity, put = __cordl_internal_set_m_ExcessMinCapacity)) int32_t m_ExcessMinCapacity;

  /// @brief Field m_NextExcessSize, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NextExcessSize, put = __cordl_internal_set_m_NextExcessSize)) int32_t m_NextExcessSize;

  /// @brief Field m_Pool, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get_m_Pool, put = __cordl_internal_set_m_Pool)) ::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T> m_Pool;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Alloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeSlice_1<T> Alloc(int32_t count);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::UIR::TempAllocator_1<T>* New_ctor(int32_t poolCapacity, int32_t excessMinCapacity, int32_t excessMaxCapacity);

  /// @brief Method ReleaseExcess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ReleaseExcess();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Reset();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T>>* const& __cordl_internal_get_m_Excess() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T>>*& __cordl_internal_get_m_Excess();

  constexpr int32_t const& __cordl_internal_get_m_ExcessMaxCapacity() const;

  constexpr int32_t& __cordl_internal_get_m_ExcessMaxCapacity();

  constexpr int32_t const& __cordl_internal_get_m_ExcessMinCapacity() const;

  constexpr int32_t& __cordl_internal_get_m_ExcessMinCapacity();

  constexpr int32_t const& __cordl_internal_get_m_NextExcessSize() const;

  constexpr int32_t& __cordl_internal_get_m_NextExcessSize();

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T> const& __cordl_internal_get_m_Pool() const;

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T>& __cordl_internal_get_m_Pool();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_Excess(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T>>* value);

  constexpr void __cordl_internal_set_m_ExcessMaxCapacity(int32_t value);

  constexpr void __cordl_internal_set_m_ExcessMinCapacity(int32_t value);

  constexpr void __cordl_internal_set_m_NextExcessSize(int32_t value);

  constexpr void __cordl_internal_set_m_Pool(::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t poolCapacity, int32_t excessMinCapacity, int32_t excessMaxCapacity);

  /// @brief Method get_disposed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_disposed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TempAllocator_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TempAllocator_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TempAllocator_1(TempAllocator_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TempAllocator_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TempAllocator_1(TempAllocator_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6393 };

  /// @brief Field m_ExcessMinCapacity, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_ExcessMinCapacity;

  /// @brief Field m_ExcessMaxCapacity, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_ExcessMaxCapacity;

  /// @brief Field m_Pool, offset: 0x18, size: 0x18, def value: None
  ::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T> ___m_Pool;

  /// @brief Field m_Excess, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T>>* ___m_Excess;

  /// @brief Field m_NextExcessSize, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_NextExcessSize;

  /// @brief Field <disposed>k__BackingField, offset: 0x3c, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::TempAllocator_1, "UnityEngine.UIElements.UIR", "TempAllocator`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::UIR::TempAllocator_1_Page, "UnityEngine.UIElements.UIR", "TempAllocator`1/Page");
