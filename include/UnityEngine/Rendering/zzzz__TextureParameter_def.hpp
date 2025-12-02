#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TextureParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextureParameter)
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class TextureParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::TextureParameter);
// Dependencies UnityEngine.Rendering.TextureDimension, UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.TextureParameter
class CORDL_TYPE TextureParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityW<::UnityEngine::Texture>> {
public:
  // Declarations
  /// @brief Field dimension, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_dimension, put = __cordl_internal_set_dimension)) ::UnityEngine::Rendering::TextureDimension dimension;

  /// @brief Method GetHashCode, addr 0x65aeb00, size 0x108, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::TextureParameter* New_ctor(::UnityEngine::Texture* value, ::UnityEngine::Rendering::TextureDimension dimension, bool overrideState);

  static inline ::UnityEngine::Rendering::TextureParameter* New_ctor(::UnityEngine::Texture* value, bool overrideState);

  constexpr ::UnityEngine::Rendering::TextureDimension const& __cordl_internal_get_dimension() const;

  constexpr ::UnityEngine::Rendering::TextureDimension& __cordl_internal_get_dimension();

  constexpr void __cordl_internal_set_dimension(::UnityEngine::Rendering::TextureDimension value);

  /// @brief Method .ctor, addr 0x65aea88, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Texture* value, ::UnityEngine::Rendering::TextureDimension dimension, bool overrideState);

  /// @brief Method .ctor, addr 0x65aea7c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Texture* value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureParameter(TextureParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureParameter(TextureParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12334 };

  /// @brief Field dimension, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::TextureDimension ___dimension;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::TextureParameter, ___dimension) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::TextureParameter, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::TextureParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::TextureParameter*, "UnityEngine.Rendering", "TextureParameter");
