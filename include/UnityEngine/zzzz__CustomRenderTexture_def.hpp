#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
CORDL_MODULE_EXPORT(CustomRenderTexture)
// Forward declare root types
namespace UnityEngine {
class CustomRenderTexture;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CustomRenderTexture);
// Type: UnityEngine::CustomRenderTexture
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10006))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10007))
// CS Name: ::UnityEngine::CustomRenderTexture*
class CORDL_TYPE CustomRenderTexture : public ::UnityEngine::RenderTexture {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "CustomRenderTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomRenderTexture(CustomRenderTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomRenderTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomRenderTexture(CustomRenderTexture const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomRenderTexture();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CustomRenderTexture, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CustomRenderTexture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CustomRenderTexture*, "UnityEngine", "CustomRenderTexture");
