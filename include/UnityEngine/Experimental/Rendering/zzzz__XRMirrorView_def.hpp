#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRMirrorView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRMirrorView)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class XRMirrorView;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::XRMirrorView);
// Dependencies System.Object
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: UnityEngine.Experimental.Rendering.XRMirrorView
class CORDL_TYPE XRMirrorView : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_ColorTransform, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_ColorTransform, put = setStaticF_k_ColorTransform)) int32_t k_ColorTransform;

  /// @brief Field k_MaxNits, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MaxNits, put = setStaticF_k_MaxNits)) int32_t k_MaxNits;

  /// @brief Field k_MirrorViewProfilingSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_MirrorViewProfilingSampler, put = setStaticF_k_MirrorViewProfilingSampler)) ::UnityEngine::Rendering::ProfilingSampler* k_MirrorViewProfilingSampler;

  /// @brief Field k_SRGBRead, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_SRGBRead, put = setStaticF_k_SRGBRead)) int32_t k_SRGBRead;

  /// @brief Field k_SRGBWrite, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_SRGBWrite, put = setStaticF_k_SRGBWrite)) int32_t k_SRGBWrite;

  /// @brief Field k_ScaleBias, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_ScaleBias, put = setStaticF_k_ScaleBias)) int32_t k_ScaleBias;

  /// @brief Field k_ScaleBiasRt, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_ScaleBiasRt, put = setStaticF_k_ScaleBiasRt)) int32_t k_ScaleBiasRt;

  /// @brief Field k_SourceHDREncoding, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_SourceHDREncoding, put = setStaticF_k_SourceHDREncoding)) int32_t k_SourceHDREncoding;

  /// @brief Field k_SourceMaxNits, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_SourceMaxNits, put = setStaticF_k_SourceMaxNits)) int32_t k_SourceMaxNits;

  /// @brief Field k_SourceTex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_SourceTex, put = setStaticF_k_SourceTex)) int32_t k_SourceTex;

  /// @brief Field k_SourceTexArraySlice, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_SourceTexArraySlice, put = setStaticF_k_SourceTexArraySlice)) int32_t k_SourceTexArraySlice;

  /// @brief Field s_MirrorViewMaterialProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MirrorViewMaterialProperty, put = setStaticF_s_MirrorViewMaterialProperty)) ::UnityEngine::MaterialPropertyBlock* s_MirrorViewMaterialProperty;

  /// @brief Method RenderMirrorView, addr 0x65906ec, size 0xe9c, virtual false, abstract: false, final false
  static inline void RenderMirrorView(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera, ::UnityEngine::Material* mat, Il2CppObject* display);

  static inline int32_t getStaticF_k_ColorTransform();

  static inline int32_t getStaticF_k_MaxNits();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_k_MirrorViewProfilingSampler();

  static inline int32_t getStaticF_k_SRGBRead();

  static inline int32_t getStaticF_k_SRGBWrite();

  static inline int32_t getStaticF_k_ScaleBias();

  static inline int32_t getStaticF_k_ScaleBiasRt();

  static inline int32_t getStaticF_k_SourceHDREncoding();

  static inline int32_t getStaticF_k_SourceMaxNits();

  static inline int32_t getStaticF_k_SourceTex();

  static inline int32_t getStaticF_k_SourceTexArraySlice();

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF_s_MirrorViewMaterialProperty();

  static inline void setStaticF_k_ColorTransform(int32_t value);

  static inline void setStaticF_k_MaxNits(int32_t value);

  static inline void setStaticF_k_MirrorViewProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_k_SRGBRead(int32_t value);

  static inline void setStaticF_k_SRGBWrite(int32_t value);

  static inline void setStaticF_k_ScaleBias(int32_t value);

  static inline void setStaticF_k_ScaleBiasRt(int32_t value);

  static inline void setStaticF_k_SourceHDREncoding(int32_t value);

  static inline void setStaticF_k_SourceMaxNits(int32_t value);

  static inline void setStaticF_k_SourceTex(int32_t value);

  static inline void setStaticF_k_SourceTexArraySlice(int32_t value);

  static inline void setStaticF_s_MirrorViewMaterialProperty(::UnityEngine::MaterialPropertyBlock* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRMirrorView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRMirrorView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRMirrorView(XRMirrorView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRMirrorView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRMirrorView(XRMirrorView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11830 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::XRMirrorView, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::XRMirrorView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::XRMirrorView*, "UnityEngine.Experimental.Rendering", "XRMirrorView");
