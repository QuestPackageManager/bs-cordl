#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TextureGradientParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(TextureGradientParameter)
namespace UnityEngine::Rendering {
class TextureGradient;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class TextureGradientParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::TextureGradientParameter);
// Dependencies UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.TextureGradientParameter
class CORDL_TYPE TextureGradientParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Rendering::TextureGradient*> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::TextureGradientParameter* New_ctor(::UnityEngine::Rendering::TextureGradient* value, bool overrideState);

  /// @brief Method Release, addr 0x6612160, size 0x14, virtual true, abstract: false, final false
  inline void Release();

  /// @brief Method .ctor, addr 0x66120fc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::TextureGradient* value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureGradientParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureGradientParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureGradientParameter(TextureGradientParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureGradientParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureGradientParameter(TextureGradientParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12292 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::TextureGradientParameter, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::TextureGradientParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::TextureGradientParameter*, "UnityEngine.Rendering", "TextureGradientParameter");
