#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/XRSystemUniversal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRSystemUniversal)
namespace UnityEngine::Rendering::Universal {
class XRPassUniversal;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class XRSystemUniversal;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::XRSystemUniversal);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.XRSystemUniversal
class CORDL_TYPE XRSystemUniversal : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_projMatrix, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_projMatrix, put = setStaticF_s_projMatrix)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> s_projMatrix;

  /// @brief Method BeginLateLatching, addr 0x66c8c98, size 0xdc, virtual false, abstract: false, final false
  static inline void BeginLateLatching(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::XRPassUniversal* xrPass);

  /// @brief Method EndLateLatching, addr 0x66c8d74, size 0xc8, virtual false, abstract: false, final false
  static inline void EndLateLatching(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::XRPassUniversal* xrPass);

  /// @brief Method MarkShaderProperties, addr 0x66c8ec8, size 0x240, virtual false, abstract: false, final false
  static inline void MarkShaderProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::XRPassUniversal* xrPass, bool renderIntoTexture);

  /// @brief Method UnmarkShaderProperties, addr 0x66c8e3c, size 0x8c, virtual false, abstract: false, final false
  static inline void UnmarkShaderProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::XRPassUniversal* xrPass);

  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> getStaticF_s_projMatrix();

  static inline void setStaticF_s_projMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSystemUniversal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSystemUniversal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSystemUniversal(XRSystemUniversal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSystemUniversal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSystemUniversal(XRSystemUniversal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13020 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::XRSystemUniversal, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::XRSystemUniversal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::XRSystemUniversal*, "UnityEngine.Rendering.Universal", "XRSystemUniversal");
