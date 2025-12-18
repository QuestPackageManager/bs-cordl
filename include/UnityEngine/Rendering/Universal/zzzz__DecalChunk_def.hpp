#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalChunk.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecalChunk)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Jobs {
struct TransformAccessArray;
}
namespace UnityEngine::Rendering::Universal {
class DecalProjector;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalChunk;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalChunk);
// Dependencies System.Object, Unity.Jobs.JobHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalChunk
class CORDL_TYPE DecalChunk : public ::System::Object {
public:
  // Declarations
  /// @brief Field <capacity>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__capacity_k__BackingField, put = __cordl_internal_set__capacity_k__BackingField)) int32_t _capacity_k__BackingField;

  /// @brief Field <count>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__count_k__BackingField, put = __cordl_internal_set__count_k__BackingField)) int32_t _count_k__BackingField;

  /// @brief Field <currentJobHandle>k__BackingField, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__currentJobHandle_k__BackingField,
                      put = __cordl_internal_set__currentJobHandle_k__BackingField)) ::Unity::Jobs::JobHandle _currentJobHandle_k__BackingField;

  __declspec(property(get = get_capacity, put = set_capacity)) int32_t capacity;

  __declspec(property(get = get_count, put = set_count)) int32_t count;

  __declspec(property(get = get_currentJobHandle, put = set_currentJobHandle)) ::Unity::Jobs::JobHandle currentJobHandle;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x66a197c, size 0x4, virtual true, abstract: false, final false
  inline void Dispose();

  static inline ::UnityEngine::Rendering::Universal::DecalChunk* New_ctor();

  /// @brief Method Push, addr 0x66a196c, size 0x10, virtual true, abstract: false, final false
  inline void Push();

  /// @brief Method RemoveAtSwapBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RemoveAtSwapBack(::ByRef<::ArrayW<T, ::Array<T>*>> array, int32_t index, int32_t count);

  /// @brief Method RemoveAtSwapBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RemoveAtSwapBack(::ByRef<::Unity::Collections::NativeArray_1<T>> array, int32_t index, int32_t count);

  /// @brief Method RemoveAtSwapBack, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RemoveAtSwapBack(int32_t index);

  /// @brief Method ResizeNativeArray, addr 0x66a1980, size 0xe0, virtual false, abstract: false, final false
  inline void ResizeNativeArray(::ByRef<::UnityEngine::Jobs::TransformAccessArray> array,
                                ::ArrayW<::UnityEngine::Rendering::Universal::DecalProjector*, ::Array<::UnityEngine::Rendering::Universal::DecalProjector*>*> decalProjectors, int32_t capacity);

  /// @brief Method SetCapacity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  constexpr int32_t const& __cordl_internal_get__capacity_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__capacity_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__count_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__count_k__BackingField();

  constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get__currentJobHandle_k__BackingField() const;

  constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get__currentJobHandle_k__BackingField();

  constexpr void __cordl_internal_set__capacity_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__count_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__currentJobHandle_k__BackingField(::Unity::Jobs::JobHandle value);

  /// @brief Method .ctor, addr 0x66a1a60, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_capacity, addr 0x66a1948, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_capacity();

  /// @brief Method get_count, addr 0x66a1938, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// @brief Method get_currentJobHandle, addr 0x66a1958, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle get_currentJobHandle();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_capacity, addr 0x66a1950, size 0x8, virtual false, abstract: false, final false
  inline void set_capacity(int32_t value);

  /// @brief Method set_count, addr 0x66a1940, size 0x8, virtual false, abstract: false, final false
  inline void set_count(int32_t value);

  /// @brief Method set_currentJobHandle, addr 0x66a1964, size 0x8, virtual false, abstract: false, final false
  inline void set_currentJobHandle(::Unity::Jobs::JobHandle value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalChunk();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalChunk", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalChunk(DecalChunk&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalChunk", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalChunk(DecalChunk const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12662 };

  /// @brief Field <count>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____count_k__BackingField;

  /// @brief Field <capacity>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____capacity_k__BackingField;

  /// @brief Field <currentJobHandle>k__BackingField, offset: 0x18, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle ____currentJobHandle_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalChunk, ____count_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalChunk, ____capacity_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalChunk, ____currentJobHandle_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalChunk, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalChunk);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalChunk*, "UnityEngine.Rendering.Universal", "DecalChunk");
