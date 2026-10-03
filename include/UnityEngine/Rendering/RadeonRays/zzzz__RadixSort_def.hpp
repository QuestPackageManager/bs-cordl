#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/RadixSort.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RadixSort)
namespace UnityEngine::Rendering::RadeonRays {
class RadeonRaysShaders;
}
namespace UnityEngine::Rendering::RadeonRays {
class Scan;
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
class RadixSort;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RadeonRays::RadixSort*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::RadixSort*, "UnityEngine.Rendering.RadeonRays", "RadixSort");
// Dependencies System.Object
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: false
// CS Name: UnityEngine.Rendering.RadeonRays.RadixSort
class CORDL_TYPE RadixSort : public ::System::Object {
public:
  // Declarations
  /// @brief Field kernelBitHistogram, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_kernelBitHistogram, put = __cordl_internal_set_kernelBitHistogram)) int32_t kernelBitHistogram;

  /// @brief Field kernelScatter, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_kernelScatter, put = __cordl_internal_set_kernelScatter)) int32_t kernelScatter;

  /// @brief Field scan, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_scan, put = __cordl_internal_set_scan)) ::UnityEngine::Rendering::RadeonRays::Scan* scan;

  /// @brief Field shaderBitHistogram, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_shaderBitHistogram, put = __cordl_internal_set_shaderBitHistogram)) ::UnityW<::UnityEngine::ComputeShader> shaderBitHistogram;

  /// @brief Field shaderScatter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_shaderScatter, put = __cordl_internal_set_shaderScatter)) ::UnityW<::UnityEngine::ComputeShader> shaderScatter;

  /// @brief Method Execute, addr 0x6dfc148, size 0x37c, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* buffer, uint32_t inputKeysOffset, uint32_t outputKeysOffset, uint32_t inputValuesOffset,
                      uint32_t outputValuesOffset, uint32_t scratchDataOffset, uint32_t size);

  /// @brief Method GetScratchDataSizeInDwords, addr 0x6dfc4c4, size 0x48, virtual false, abstract: false, final false
  static inline uint64_t GetScratchDataSizeInDwords(uint32_t size);

  static inline ::UnityEngine::Rendering::RadeonRays::RadixSort* New_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders);

  constexpr int32_t const& __cordl_internal_get_kernelBitHistogram() const;

  constexpr int32_t& __cordl_internal_get_kernelBitHistogram();

  constexpr int32_t const& __cordl_internal_get_kernelScatter() const;

  constexpr int32_t& __cordl_internal_get_kernelScatter();

  constexpr ::UnityEngine::Rendering::RadeonRays::Scan* const& __cordl_internal_get_scan() const;

  constexpr ::UnityEngine::Rendering::RadeonRays::Scan*& __cordl_internal_get_scan();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_shaderBitHistogram() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_shaderBitHistogram();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_shaderScatter() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_shaderScatter();

  constexpr void __cordl_internal_set_kernelBitHistogram(int32_t value);

  constexpr void __cordl_internal_set_kernelScatter(int32_t value);

  constexpr void __cordl_internal_set_scan(::UnityEngine::Rendering::RadeonRays::Scan* value);

  constexpr void __cordl_internal_set_shaderBitHistogram(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_shaderScatter(::UnityW<::UnityEngine::ComputeShader> value);

  /// @brief Method .ctor, addr 0x6dfb918, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadixSort();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadixSort", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadixSort(RadixSort&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadixSort", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadixSort(RadixSort const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20443 };

  /// @brief Field kGroupSize offset 0xffffffff size 0x4
  static constexpr uint32_t kGroupSize{ static_cast<uint32_t>(0x100u) };

  /// @brief Field kKeysPerGroup offset 0xffffffff size 0x4
  static constexpr uint32_t kKeysPerGroup{ static_cast<uint32_t>(0x400u) };

  /// @brief Field kKeysPerThread offset 0xffffffff size 0x4
  static constexpr uint32_t kKeysPerThread{ static_cast<uint32_t>(0x4u) };

  /// @brief Field kNumBitsPerPass offset 0xffffffff size 0x4
  static constexpr int32_t kNumBitsPerPass{ static_cast<int32_t>(0x4) };

  /// @brief Field shaderBitHistogram, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___shaderBitHistogram;

  /// @brief Field kernelBitHistogram, offset: 0x18, size: 0x4, def value: None
  int32_t ___kernelBitHistogram;

  /// @brief Field shaderScatter, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___shaderScatter;

  /// @brief Field kernelScatter, offset: 0x28, size: 0x4, def value: None
  int32_t ___kernelScatter;

  /// @brief Field scan, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::RadeonRays::Scan* ___scan;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RadixSort, ___shaderBitHistogram) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RadixSort, ___kernelBitHistogram) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RadixSort, ___shaderScatter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RadixSort, ___kernelScatter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RadixSort, ___scan) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::RadixSort) == 0x38, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
