#pragma once
// IWYU pragma private; include "GlobalNamespace/RenderTextureExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RenderTextureExtensions)
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class RenderTextureExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RenderTextureExtensions);
// Type: ::RenderTextureExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RenderTextureExtensions*
class CORDL_TYPE RenderTextureExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetTexture2D, addr 0x39580a0, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> GetTexture2D(::UnityEngine::RenderTexture* rt);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTextureExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderTextureExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderTextureExtensions(RenderTextureExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderTextureExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderTextureExtensions(RenderTextureExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16352 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RenderTextureExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RenderTextureExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RenderTextureExtensions*, "", "RenderTextureExtensions");
