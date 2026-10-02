#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUPerCameraInstanceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CPUPerCameraInstanceData)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct CPUPerCameraInstanceData_PerCameraInstanceDataArrays;
}
namespace UnityEngine {
struct EntityId;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CPUPerCameraInstanceData;
}
namespace UnityEngine::Rendering {
struct CPUPerCameraInstanceData_PerCameraInstanceDataArrays;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CPUPerCameraInstanceData);
MARK_VAL_T(::UnityEngine::Rendering::CPUPerCameraInstanceData_PerCameraInstanceDataArrays);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CPUPerCameraInstanceData, "UnityEngine.Rendering", "CPUPerCameraInstanceData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CPUPerCameraInstanceData_PerCameraInstanceDataArrays, "UnityEngine.Rendering", "CPUPerCameraInstanceData/PerCameraInstanceDataArrays");
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CPUPerCameraInstanceData/PerCameraInstanceDataArrays
struct CORDL_TYPE CPUPerCameraInstanceData_PerCameraInstanceDataArrays {
public:
  // Declarations
  __declspec(property(get = get_IsCreated)) bool IsCreated;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6c59d00, size 0x58, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Grow, addr 0x6c5a5a8, size 0x6c, virtual false, abstract: false, final false
  inline void Grow(int32_t previousCapacity, int32_t newCapacity);

  /// @brief Method Remove, addr 0x6c5a1b8, size 0x7c, virtual false, abstract: false, final false
  inline void Remove(int32_t index, int32_t lastIndex);

  /// @brief Method SetDefault, addr 0x6c5a7f8, size 0x60, virtual false, abstract: false, final false
  inline void SetDefault(int32_t index);

  /// @brief Method .ctor, addr 0x6c59f18, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(int32_t initCapacity);

  /// @brief Method get_IsCreated, addr 0x6c5a858, size 0x5c, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CPUPerCameraInstanceData_PerCameraInstanceDataArrays();

  // Ctor Parameters [CppParam { name: "meshLods", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "crossFades",
  // ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>", modifiers: "", def_value: None, comment: None }]
  constexpr CPUPerCameraInstanceData_PerCameraInstanceDataArrays(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t> meshLods,
                                                                 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t> crossFades) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18220 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field meshLods, offset: 0x0, size: 0x18, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t> meshLods;

  /// @brief Field crossFades, offset: 0x18, size: 0x18, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t> crossFades;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CPUPerCameraInstanceData_PerCameraInstanceDataArrays, meshLods) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUPerCameraInstanceData_PerCameraInstanceDataArrays, crossFades) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::CPUPerCameraInstanceData_PerCameraInstanceDataArrays) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Rendering.CPUPerCameraInstanceData::PerCameraInstanceDataArrays
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CPUPerCameraInstanceData
struct CORDL_TYPE CPUPerCameraInstanceData {
public:
  // Declarations
  using PerCameraInstanceDataArrays = ::UnityEngine::Rendering::CPUPerCameraInstanceData_PerCameraInstanceDataArrays;

  __declspec(property(get = get_cameraCount)) int32_t cameraCount;

  __declspec(property(get = get_instancesCapacity, put = set_instancesCapacity)) int32_t instancesCapacity;

  __declspec(property(get = get_instancesLength, put = set_instancesLength)) int32_t instancesLength;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AllocateCameras, addr 0x6c59d58, size 0x1c0, virtual false, abstract: false, final false
  inline void AllocateCameras(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> cameraIDs);

  /// @brief Method DeallocateCameras, addr 0x6c59b5c, size 0x1a4, virtual false, abstract: false, final false
  inline void DeallocateCameras(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> cameraIDs);

  /// @brief Method Dispose, addr 0x6c5a248, size 0x1c0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Grow, addr 0x6c5a408, size 0x1a0, virtual false, abstract: false, final false
  inline void Grow(int32_t newCapacity);

  /// @brief Method IncreaseInstanceCount, addr 0x6c5a234, size 0x14, virtual false, abstract: false, final false
  inline void IncreaseInstanceCount();

  /// @brief Method Initialize, addr 0x6c59aa0, size 0xbc, virtual false, abstract: false, final false
  inline void Initialize(int32_t initCapacity);

  /// @brief Method Remove, addr 0x6c5a008, size 0x1b0, virtual false, abstract: false, final false
  inline void Remove(int32_t index);

  /// @brief Method SetDefault, addr 0x6c5a614, size 0x1e4, virtual false, abstract: false, final false
  inline void SetDefault(int32_t index);

  /// @brief Method get_cameraCount, addr 0x6c59a54, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_cameraCount();

  /// @brief Method get_instancesCapacity, addr 0x6c59a3c, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_instancesCapacity();

  /// @brief Method get_instancesLength, addr 0x6c59a24, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_instancesLength();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method set_instancesCapacity, addr 0x6c59a48, size 0xc, virtual false, abstract: false, final false
  inline void set_instancesCapacity(int32_t value);

  /// @brief Method set_instancesLength, addr 0x6c59a30, size 0xc, virtual false, abstract: false, final false
  inline void set_instancesLength(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CPUPerCameraInstanceData();

  // Ctor Parameters [CppParam { name: "perCameraData", ty: "::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::CPUPerCameraInstanceData_PerCameraInstanceDataArrays>",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StructData", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
  constexpr CPUPerCameraInstanceData(::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::CPUPerCameraInstanceData_PerCameraInstanceDataArrays> perCameraData,
                                     ::Unity::Collections::NativeArray_1<int32_t> m_StructData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18221 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field k_InvalidByteData offset 0xffffffff size 0x1
  static constexpr uint8_t k_InvalidByteData{ static_cast<uint8_t>(0xffu) };

  /// @brief Field perCameraData, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::CPUPerCameraInstanceData_PerCameraInstanceDataArrays> perCameraData;

  /// @brief Field m_StructData, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> m_StructData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CPUPerCameraInstanceData, perCameraData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUPerCameraInstanceData, m_StructData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::CPUPerCameraInstanceData) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering
