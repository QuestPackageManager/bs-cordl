#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Shaders)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class Shaders;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Shaders);
// Type: UnityEngine.UIElements.UIR::Shaders
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.UIR::Shaders*
class CORDL_TYPE Shaders : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_AtlasBlit, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_AtlasBlit, put = setStaticF_k_AtlasBlit))::StringW k_AtlasBlit;

  /// @brief Field k_Editor, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_Editor, put = setStaticF_k_Editor))::StringW k_Editor;

  /// @brief Field k_GraphView, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_GraphView, put = setStaticF_k_GraphView))::StringW k_GraphView;

  /// @brief Field k_Runtime, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_Runtime, put = setStaticF_k_Runtime))::StringW k_Runtime;

  /// @brief Field k_RuntimeWorld, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_RuntimeWorld, put = setStaticF_k_RuntimeWorld))::StringW k_RuntimeWorld;

  static inline ::StringW getStaticF_k_AtlasBlit();

  static inline ::StringW getStaticF_k_Editor();

  static inline ::StringW getStaticF_k_GraphView();

  static inline ::StringW getStaticF_k_Runtime();

  static inline ::StringW getStaticF_k_RuntimeWorld();

  static inline void setStaticF_k_AtlasBlit(::StringW value);

  static inline void setStaticF_k_Editor(::StringW value);

  static inline void setStaticF_k_GraphView(::StringW value);

  static inline void setStaticF_k_Runtime(::StringW value);

  static inline void setStaticF_k_RuntimeWorld(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Shaders();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Shaders", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Shaders(Shaders&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Shaders", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Shaders(Shaders const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Shaders, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Shaders);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Shaders*, "UnityEngine.UIElements.UIR", "Shaders");
