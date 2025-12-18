#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceAllocator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceAllocator)
// Forward declare root types
namespace UnityEngine::Rendering {
struct InstanceAllocator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::InstanceAllocator);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceAllocator
struct CORDL_TYPE InstanceAllocator {
public:
  // Declarations
  __declspec(property(get = get_length, put = set_length)) int32_t length;

  __declspec(property(get = get_valid)) bool valid;

  /// @brief Method AllocateInstance, addr 0x666c5a0, size 0x148, virtual false, abstract: false, final false
  inline int32_t AllocateInstance();

  /// @brief Method Dispose, addr 0x666c530, size 0x70, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method FreeInstance, addr 0x666c6e8, size 0x60, virtual false, abstract: false, final false
  inline void FreeInstance(int32_t instance);

  /// @brief Method GetNumAllocated, addr 0x666c748, size 0x70, virtual false, abstract: false, final false
  inline int32_t GetNumAllocated();

  /// @brief Method Initialize, addr 0x666c478, size 0xb8, virtual false, abstract: false, final false
  inline void Initialize(int32_t baseInstanceOffset, int32_t instanceStride);

  /// @brief Method get_length, addr 0x666c414, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_length();

  /// @brief Method get_valid, addr 0x666c42c, size 0x4c, virtual false, abstract: false, final false
  inline bool get_valid();

  /// @brief Method set_length, addr 0x666c420, size 0xc, virtual false, abstract: false, final false
  inline void set_length(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceAllocator();

  // Ctor Parameters [CppParam { name: "m_StructData", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_FreeInstances", ty:
  // "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_BaseInstanceOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_InstanceStride", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InstanceAllocator(::Unity::Collections::NativeArray_1<int32_t> m_StructData, ::Unity::Collections::NativeList_1<int32_t> m_FreeInstances, int32_t m_BaseInstanceOffset,
                              int32_t m_InstanceStride) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17660 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_StructData, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> m_StructData;

  /// @brief Field m_FreeInstances, offset: 0x10, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<int32_t> m_FreeInstances;

  /// @brief Field m_BaseInstanceOffset, offset: 0x18, size: 0x4, def value: None
  int32_t m_BaseInstanceOffset;

  /// @brief Field m_InstanceStride, offset: 0x1c, size: 0x4, def value: None
  int32_t m_InstanceStride;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceAllocator, m_StructData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceAllocator, m_FreeInstances) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceAllocator, m_BaseInstanceOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceAllocator, m_InstanceStride) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceAllocator, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceAllocator, "UnityEngine.Rendering", "InstanceAllocator");
