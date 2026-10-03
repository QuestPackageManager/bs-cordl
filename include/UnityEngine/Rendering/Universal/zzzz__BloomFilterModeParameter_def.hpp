#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/BloomFilterModeParameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__BloomFilterMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(BloomFilterModeParameter)
namespace UnityEngine::Rendering::Universal {
struct BloomFilterMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class BloomFilterModeParameter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::BloomFilterModeParameter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::BloomFilterModeParameter*, "UnityEngine.Rendering.Universal", "BloomFilterModeParameter");
// Dependencies UnityEngine.Rendering.Universal.BloomFilterMode, UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.BloomFilterModeParameter
class CORDL_TYPE BloomFilterModeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Rendering::Universal::BloomFilterMode> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::BloomFilterModeParameter* New_ctor(::UnityEngine::Rendering::Universal::BloomFilterMode value, bool overrideState);

  /// @brief Method .ctor, addr 0x6cbcdf4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::BloomFilterMode value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomFilterModeParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomFilterModeParameter", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomFilterModeParameter(BloomFilterModeParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomFilterModeParameter", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomFilterModeParameter(BloomFilterModeParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13026 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::BloomFilterModeParameter) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
