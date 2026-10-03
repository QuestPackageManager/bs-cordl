#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/Scan.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Scan)
namespace UnityEngine::Rendering::RadeonRays {
class RadeonRaysShaders;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
class Scan;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RadeonRays::Scan*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::Scan*, "UnityEngine.Rendering.RadeonRays", "Scan");
// Dependencies System.Object
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: false
// CS Name: UnityEngine.Rendering.RadeonRays.Scan
class CORDL_TYPE Scan : public ::System::Object {
public:
  // Declarations
  /// @brief Field kernelReduce, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_kernelReduce, put = __cordl_internal_set_kernelReduce)) int32_t kernelReduce;

  /// @brief Field kernelScan, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_kernelScan, put = __cordl_internal_set_kernelScan)) int32_t kernelScan;

  /// @brief Field shaderReduce, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_shaderReduce, put = __cordl_internal_set_shaderReduce)) ::UnityW<::UnityEngine::ComputeShader> shaderReduce;

  /// @brief Field shaderScan, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_shaderScan, put = __cordl_internal_set_shaderScan)) ::UnityW<::UnityEngine::ComputeShader> shaderScan;

  /// @brief Method Execute, addr 0x6dfe338, size 0x240, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* buffer, uint32_t inputKeysOffset, uint32_t outputKeysOffset, uint32_t scratchDataOffset,
                      uint32_t size);

  /// @brief Method GetScratchDataSizeInDwords, addr 0x6dfe578, size 0x30, virtual false, abstract: false, final false
  static inline uint64_t GetScratchDataSizeInDwords(uint32_t size);

  static inline ::UnityEngine::Rendering::RadeonRays::Scan* New_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders);

  /// @brief Method SetState, addr 0x6dfe70c, size 0x134, virtual false, abstract: false, final false
  inline void SetState(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* shader, int32_t kernelIndex, uint32_t size, ::UnityEngine::GraphicsBuffer* buffer,
                       uint32_t inputKeysOffset, uint32_t scratchDataOffset, uint32_t outputKeysOffset);

  constexpr int32_t const& __cordl_internal_get_kernelReduce() const;

  constexpr int32_t& __cordl_internal_get_kernelReduce();

  constexpr int32_t const& __cordl_internal_get_kernelScan() const;

  constexpr int32_t& __cordl_internal_get_kernelScan();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_shaderReduce() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_shaderReduce();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_shaderScan() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_shaderScan();

  constexpr void __cordl_internal_set_kernelReduce(int32_t value);

  constexpr void __cordl_internal_set_kernelScan(int32_t value);

  constexpr void __cordl_internal_set_shaderReduce(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_shaderScan(::UnityW<::UnityEngine::ComputeShader> value);

  /// @brief Method .ctor, addr 0x6dfe28c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Scan();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Scan", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Scan(Scan&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Scan", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Scan(Scan const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20446 };

  /// @brief Field kGroupSize offset 0xffffffff size 0x4
  static constexpr uint32_t kGroupSize{ static_cast<uint32_t>(0x100u) };

  /// @brief Field kKeysPerGroup offset 0xffffffff size 0x4
  static constexpr uint32_t kKeysPerGroup{ static_cast<uint32_t>(0x400u) };

  /// @brief Field kKeysPerThread offset 0xffffffff size 0x4
  static constexpr uint32_t kKeysPerThread{ static_cast<uint32_t>(0x4u) };

  /// @brief Field shaderScan, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___shaderScan;

  /// @brief Field kernelScan, offset: 0x18, size: 0x4, def value: None
  int32_t ___kernelScan;

  /// @brief Field shaderReduce, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___shaderReduce;

  /// @brief Field kernelReduce, offset: 0x28, size: 0x4, def value: None
  int32_t ___kernelReduce;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::Scan, ___shaderScan) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::Scan, ___kernelScan) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::Scan, ___shaderReduce) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::Scan, ___kernelReduce) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::Scan) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
