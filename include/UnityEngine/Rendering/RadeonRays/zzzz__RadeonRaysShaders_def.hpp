#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/RadeonRaysShaders.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RadeonRaysShaders)
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
class RadeonRaysShaders;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*, "UnityEngine.Rendering.RadeonRays", "RadeonRaysShaders");
// Dependencies System.Object
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: false
// CS Name: UnityEngine.Rendering.RadeonRays.RadeonRaysShaders
class CORDL_TYPE RadeonRaysShaders : public ::System::Object {
public:
  // Declarations
  /// @brief Field bitHistogram, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bitHistogram, put = __cordl_internal_set_bitHistogram)) ::UnityW<::UnityEngine::ComputeShader> bitHistogram;

  /// @brief Field blockReducePart, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_blockReducePart, put = __cordl_internal_set_blockReducePart)) ::UnityW<::UnityEngine::ComputeShader> blockReducePart;

  /// @brief Field blockScan, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_blockScan, put = __cordl_internal_set_blockScan)) ::UnityW<::UnityEngine::ComputeShader> blockScan;

  /// @brief Field buildHlbvh, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_buildHlbvh, put = __cordl_internal_set_buildHlbvh)) ::UnityW<::UnityEngine::ComputeShader> buildHlbvh;

  /// @brief Field restructureBvh, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_restructureBvh, put = __cordl_internal_set_restructureBvh)) ::UnityW<::UnityEngine::ComputeShader> restructureBvh;

  /// @brief Field scatter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_scatter, put = __cordl_internal_set_scatter)) ::UnityW<::UnityEngine::ComputeShader> scatter;

  static inline ::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* New_ctor();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_bitHistogram() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_bitHistogram();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_blockReducePart() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_blockReducePart();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_blockScan() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_blockScan();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_buildHlbvh() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_buildHlbvh();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_restructureBvh() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_restructureBvh();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_scatter() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_scatter();

  constexpr void __cordl_internal_set_bitHistogram(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_blockReducePart(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_blockScan(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_buildHlbvh(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_restructureBvh(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_scatter(::UnityW<::UnityEngine::ComputeShader> value);

  /// @brief Method .ctor, addr 0x6dfd1e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadeonRaysShaders();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadeonRaysShaders", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadeonRaysShaders(RadeonRaysShaders&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadeonRaysShaders", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadeonRaysShaders(RadeonRaysShaders const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20441 };

  /// @brief Field bitHistogram, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___bitHistogram;

  /// @brief Field blockReducePart, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___blockReducePart;

  /// @brief Field blockScan, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___blockScan;

  /// @brief Field buildHlbvh, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___buildHlbvh;

  /// @brief Field restructureBvh, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___restructureBvh;

  /// @brief Field scatter, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___scatter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders, ___bitHistogram) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders, ___blockReducePart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders, ___blockScan) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders, ___buildHlbvh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders, ___restructureBvh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders, ___scatter) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders) == 0x40, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
