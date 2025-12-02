#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeConstantRuntimeResources.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeConstantRuntimeResources)
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_RuntimeResources;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeVolumeConstantRuntimeResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumeConstantRuntimeResources
class CORDL_TYPE ProbeVolumeConstantRuntimeResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_AntiLeakData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_AntiLeakData, put = setStaticF_k_AntiLeakData)) ::ArrayW<uint32_t, ::Array<uint32_t>*> k_AntiLeakData;

  /// @brief Field k_SkyDirections, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_SkyDirections, put = setStaticF_k_SkyDirections)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> k_SkyDirections;

  /// @brief Field m_AntiLeakDataBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_AntiLeakDataBuffer, put = setStaticF_m_AntiLeakDataBuffer)) ::UnityEngine::ComputeBuffer* m_AntiLeakDataBuffer;

  /// @brief Field m_SkySamplingDirectionsBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_SkySamplingDirectionsBuffer, put = setStaticF_m_SkySamplingDirectionsBuffer)) ::UnityEngine::ComputeBuffer* m_SkySamplingDirectionsBuffer;

  /// @brief Method Cleanup, addr 0x6577a68, size 0xc0, virtual false, abstract: false, final false
  static inline void Cleanup();

  /// @brief Method GenerateSkyDirections, addr 0x65777f0, size 0x21c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GenerateSkyDirections();

  /// @brief Method GetRuntimeResources, addr 0x6577620, size 0x64, virtual false, abstract: false, final false
  static inline void GetRuntimeResources(::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources> rr);

  /// @brief Method GetSkySamplingDirections, addr 0x6577a0c, size 0x5c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetSkySamplingDirections();

  /// @brief Method Initialize, addr 0x6577684, size 0x16c, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_k_AntiLeakData();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_k_SkyDirections();

  static inline ::UnityEngine::ComputeBuffer* getStaticF_m_AntiLeakDataBuffer();

  static inline ::UnityEngine::ComputeBuffer* getStaticF_m_SkySamplingDirectionsBuffer();

  static inline void setStaticF_k_AntiLeakData(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_k_SkyDirections(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline void setStaticF_m_AntiLeakDataBuffer(::UnityEngine::ComputeBuffer* value);

  static inline void setStaticF_m_SkySamplingDirectionsBuffer(::UnityEngine::ComputeBuffer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeConstantRuntimeResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeConstantRuntimeResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeConstantRuntimeResources(ProbeVolumeConstantRuntimeResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeConstantRuntimeResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeConstantRuntimeResources(ProbeVolumeConstantRuntimeResources const&) = delete;

  /// @brief Field NB_SKY_PRECOMPUTED_DIRECTIONS offset 0xffffffff size 0x4
  static constexpr int32_t NB_SKY_PRECOMPUTED_DIRECTIONS{ static_cast<int32_t>(0xff) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12110 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*, "UnityEngine.Rendering", "ProbeVolumeConstantRuntimeResources");
