#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/FilmGrain.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(FilmGrain)
namespace UnityEngine::Rendering::Universal {
class FilmGrainLookupParameter;
}
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
namespace UnityEngine::Rendering {
class IPostProcessComponent;
}
namespace UnityEngine::Rendering {
class NoInterpTextureParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class FilmGrain;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::FilmGrain);
// Dependencies UnityEngine.Rendering.VolumeComponent
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.FilmGrain
class CORDL_TYPE FilmGrain : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field intensity, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity)) ::UnityEngine::Rendering::ClampedFloatParameter* intensity;

  /// @brief Field response, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_response, put = __cordl_internal_set_response)) ::UnityEngine::Rendering::ClampedFloatParameter* response;

  /// @brief Field texture, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_texture, put = __cordl_internal_set_texture)) ::UnityEngine::Rendering::NoInterpTextureParameter* texture;

  /// @brief Field type, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::UnityEngine::Rendering::Universal::FilmGrainLookupParameter* type;

  /// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x66c66e8, size 0xdc, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x66c67c4, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::FilmGrain* New_ctor();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_intensity() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_intensity();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_response() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_response();

  constexpr ::UnityEngine::Rendering::NoInterpTextureParameter* const& __cordl_internal_get_texture() const;

  constexpr ::UnityEngine::Rendering::NoInterpTextureParameter*& __cordl_internal_get_texture();

  constexpr ::UnityEngine::Rendering::Universal::FilmGrainLookupParameter* const& __cordl_internal_get_type() const;

  constexpr ::UnityEngine::Rendering::Universal::FilmGrainLookupParameter*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_intensity(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_response(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_texture(::UnityEngine::Rendering::NoInterpTextureParameter* value);

  constexpr void __cordl_internal_set_type(::UnityEngine::Rendering::Universal::FilmGrainLookupParameter* value);

  /// @brief Method .ctor, addr 0x66c67cc, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::IPostProcessComponent* i___UnityEngine__Rendering__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FilmGrain();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FilmGrain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FilmGrain(FilmGrain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FilmGrain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FilmGrain(FilmGrain const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12770 };

  /// @brief Field type, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::FilmGrainLookupParameter* ___type;

  /// @brief Field intensity, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___intensity;

  /// @brief Field response, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___response;

  /// @brief Field texture, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::NoInterpTextureParameter* ___texture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::FilmGrain, ___type) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FilmGrain, ___intensity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FilmGrain, ___response) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FilmGrain, ___texture) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::FilmGrain, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::FilmGrain);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::FilmGrain*, "UnityEngine.Rendering.Universal", "FilmGrain");
