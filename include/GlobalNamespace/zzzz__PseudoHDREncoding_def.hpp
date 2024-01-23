#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PseudoHDREncoding)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class PseudoHDREncoding;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PseudoHDREncoding);
// Type: ::PseudoHDREncoding
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5864))
// CS Name: ::PseudoHDREncoding*
class CORDL_TYPE PseudoHDREncoding : public ::System::Object {
public:
  // Declarations
  /// @brief Field _material, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__material, put = setStaticF__material))::UnityW<::UnityEngine::Material> _material;

  static inline void setStaticF__material(::UnityW<::UnityEngine::Material> value);

  static inline ::UnityW<::UnityEngine::Material> getStaticF__material();

  /// @brief Method CreatePseudoHDREncodedTexture, addr 0x22f8108, size 0x1f0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> CreatePseudoHDREncodedTexture(::UnityEngine::RenderTexture* src);

  // Ctor Parameters [CppParam { name: "", ty: "PseudoHDREncoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PseudoHDREncoding(PseudoHDREncoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PseudoHDREncoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PseudoHDREncoding(PseudoHDREncoding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PseudoHDREncoding();

public:
  /// @brief Field kPseudoHDREncodingShaderName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPseudoHDREncodingShaderName{ u"Hidden/PseudoHDREncoding" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PseudoHDREncoding, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PseudoHDREncoding);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PseudoHDREncoding*, "", "PseudoHDREncoding");
