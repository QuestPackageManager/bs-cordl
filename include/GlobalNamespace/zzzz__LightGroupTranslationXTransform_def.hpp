#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LightGroupTranslationXTransform)
// Forward declare root types
namespace GlobalNamespace {
class LightGroupTranslationXTransform;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightGroupTranslationXTransform);
// Type: ::LightGroupTranslationXTransform
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4936))
// CS Name: ::LightGroupTranslationXTransform*
class CORDL_TYPE LightGroupTranslationXTransform : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::LightGroupTranslationXTransform* New_ctor();

  /// @brief Method .ctor, addr 0x23a9a10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupTranslationXTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupTranslationXTransform(LightGroupTranslationXTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupTranslationXTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupTranslationXTransform(LightGroupTranslationXTransform const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupTranslationXTransform();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupTranslationXTransform, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroupTranslationXTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupTranslationXTransform*, "", "LightGroupTranslationXTransform");
