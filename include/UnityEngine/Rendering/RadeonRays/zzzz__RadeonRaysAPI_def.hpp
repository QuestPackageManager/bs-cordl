#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/RadeonRaysAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RadeonRaysAPI)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::RadeonRays {
struct BottomLevelLevelAccelStruct;
}
namespace UnityEngine::Rendering::RadeonRays {
struct BuildFlags;
}
namespace UnityEngine::Rendering::RadeonRays {
class HlbvhBuilder;
}
namespace UnityEngine::Rendering::RadeonRays {
class HlbvhTopLevelBuilder;
}
namespace UnityEngine::Rendering::RadeonRays {
struct Instance;
}
namespace UnityEngine::Rendering::RadeonRays {
struct MeshBuildInfo;
}
namespace UnityEngine::Rendering::RadeonRays {
struct MeshBuildMemoryRequirements;
}
namespace UnityEngine::Rendering::RadeonRays {
class RadeonRaysShaders;
}
namespace UnityEngine::Rendering::RadeonRays {
class RestructureBvh;
}
namespace UnityEngine::Rendering::RadeonRays {
struct SceneBuildMemoryRequirements;
}
namespace UnityEngine::Rendering::RadeonRays {
class SceneMemoryRequirements;
}
namespace UnityEngine::Rendering::RadeonRays {
struct TopLevelAccelStruct;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
class RadeonRaysAPI;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*, "UnityEngine.Rendering.RadeonRays", "RadeonRaysAPI");
// Dependencies System.Object, UnityEngine.GraphicsBuffer::Target
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: false
// CS Name: UnityEngine.Rendering.RadeonRays.RadeonRaysAPI
class CORDL_TYPE RadeonRaysAPI : public ::System::Object {
public:
  // Declarations
  /// @brief Field buildBvh, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buildBvh, put = __cordl_internal_set_buildBvh)) ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder* buildBvh;

  /// @brief Field buildTopLevelBvh, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_buildTopLevelBvh, put = __cordl_internal_set_buildTopLevelBvh)) ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder* buildTopLevelBvh;

  /// @brief Field restructureBvh, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_restructureBvh, put = __cordl_internal_set_restructureBvh)) ::UnityEngine::Rendering::RadeonRays::RestructureBvh* restructureBvh;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BuildMeshAccelStruct, addr 0x6dfd618, size 0xdc, virtual false, abstract: false, final false
  inline void BuildMeshAccelStruct(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RadeonRays::MeshBuildInfo buildInfo,
                                   ::UnityEngine::Rendering::RadeonRays::BuildFlags buildFlags, ::UnityEngine::GraphicsBuffer* scratchBuffer,
                                   /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct> result);

  /// @brief Method BuildSceneAccelStruct, addr 0x6dfdb5c, size 0x1d0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct BuildSceneAccelStruct(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* meshAccelStructsBuffer,
                                                                                         ::ArrayW<::UnityEngine::Rendering::RadeonRays::Instance> instances,
                                                                                         ::UnityEngine::GraphicsBuffer* scratchBuffer);

  /// @brief Method BvhInternalNodeSizeInBytes, addr 0x6dfd4c0, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t BvhInternalNodeSizeInBytes();

  /// @brief Method BvhInternalNodeSizeInDwords, addr 0x6dfd440, size 0x80, virtual false, abstract: false, final false
  static inline int32_t BvhInternalNodeSizeInDwords();

  /// @brief Method BvhLeafNodeSizeInBytes, addr 0x6dfd52c, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t BvhLeafNodeSizeInBytes();

  /// @brief Method BvhLeafNodeSizeInDwords, addr 0x6dfd598, size 0x80, virtual false, abstract: false, final false
  static inline int32_t BvhLeafNodeSizeInDwords();

  /// @brief Method CreateSceneAccelStructBuffers, addr 0x6dfdd2c, size 0x29c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct CreateSceneAccelStructBuffers(::UnityEngine::GraphicsBuffer* meshAccelStructsBuffer, uint32_t tlasSizeInDwords,
                                                                                                 ::ArrayW<::UnityEngine::Rendering::RadeonRays::Instance> instances);

  /// @brief Method Dispose, addr 0x6dfd404, size 0x24, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetMeshBuildMemoryRequirements, addr 0x6dfda88, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RadeonRays::MeshBuildMemoryRequirements GetMeshBuildMemoryRequirements(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo buildInfo,
                                                                                                          ::UnityEngine::Rendering::RadeonRays::BuildFlags buildFlags);

  /// @brief Method GetSceneBuildMemoryRequirements, addr 0x6dfdfc8, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RadeonRays::SceneBuildMemoryRequirements GetSceneBuildMemoryRequirements(uint32_t instanceCount);

  /// @brief Method GetSceneMemoryRequirements, addr 0x6dfdff8, size 0x28c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements* GetSceneMemoryRequirements(::ArrayW<::UnityEngine::Rendering::RadeonRays::MeshBuildInfo> buildInfos,
                                                                                                   ::UnityEngine::Rendering::RadeonRays::BuildFlags buildFlags);

  /// @brief Method GetTraceMemoryRequirements, addr 0x6dfe284, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t GetTraceMemoryRequirements(uint32_t rayCount);

  static inline ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI* New_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders);

  constexpr ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder* const& __cordl_internal_get_buildBvh() const;

  constexpr ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder*& __cordl_internal_get_buildBvh();

  constexpr ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder* const& __cordl_internal_get_buildTopLevelBvh() const;

  constexpr ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*& __cordl_internal_get_buildTopLevelBvh();

  constexpr ::UnityEngine::Rendering::RadeonRays::RestructureBvh* const& __cordl_internal_get_restructureBvh() const;

  constexpr ::UnityEngine::Rendering::RadeonRays::RestructureBvh*& __cordl_internal_get_restructureBvh();

  constexpr void __cordl_internal_set_buildBvh(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder* value);

  constexpr void __cordl_internal_set_buildTopLevelBvh(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder* value);

  constexpr void __cordl_internal_set_restructureBvh(::UnityEngine::Rendering::RadeonRays::RestructureBvh* value);

  /// @brief Method .ctor, addr 0x6dfd1ec, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadeonRaysAPI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadeonRaysAPI", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadeonRaysAPI(RadeonRaysAPI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadeonRaysAPI", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadeonRaysAPI(RadeonRaysAPI const&) = delete;

  /// @brief Field BufferTarget value: I32(16)
  static ::UnityEngine::GraphicsBuffer_Target const BufferTarget;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20442 };

  /// @brief Field buildBvh, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder* ___buildBvh;

  /// @brief Field buildTopLevelBvh, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder* ___buildTopLevelBvh;

  /// @brief Field restructureBvh, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::RadeonRays::RestructureBvh* ___restructureBvh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI, ___buildBvh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI, ___buildTopLevelBvh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI, ___restructureBvh) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
