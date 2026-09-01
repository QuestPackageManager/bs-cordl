#pragma once
// IWYU pragma private; include "GlobalNamespace\SetFrustumPlanesPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SetFrustumPlanesPass)
namespace GlobalNamespace {
class SetFrustumPlanesPass_PassData;
}
namespace GlobalNamespace {
class SetFrustumPlanesPass___c;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class SetFrustumPlanesPass;
}
namespace GlobalNamespace {
class SetFrustumPlanesPass_PassData;
}
namespace GlobalNamespace {
class SetFrustumPlanesPass___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SetFrustumPlanesPass*);
MARK_REF_T(::GlobalNamespace::SetFrustumPlanesPass_PassData*);
MARK_REF_T(::GlobalNamespace::SetFrustumPlanesPass___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetFrustumPlanesPass*, "", "SetFrustumPlanesPass");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetFrustumPlanesPass_PassData*, "", "SetFrustumPlanesPass/PassData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetFrustumPlanesPass___c*, "", "SetFrustumPlanesPass/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetFrustumPlanesPass/PassData
class CORDL_TYPE SetFrustumPlanesPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field visualise, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_visualise, put = __cordl_internal_set_visualise)) bool visualise;

  static inline ::GlobalNamespace::SetFrustumPlanesPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr bool const& __cordl_internal_get_visualise() const;

  constexpr bool& __cordl_internal_get_visualise();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_visualise(bool value);

  /// @brief Method .ctor, addr 0x5f4e80c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetFrustumPlanesPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetFrustumPlanesPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetFrustumPlanesPass_PassData(SetFrustumPlanesPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetFrustumPlanesPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetFrustumPlanesPass_PassData(SetFrustumPlanesPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20685 };

  /// @brief Field cameraData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field visualise, offset: 0x18, size: 0x1, def value: None
  bool ___visualise;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetFrustumPlanesPass_PassData, ___cameraData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetFrustumPlanesPass_PassData, ___visualise) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SetFrustumPlanesPass_PassData) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetFrustumPlanesPass/<>c
class CORDL_TYPE SetFrustumPlanesPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::SetFrustumPlanesPass___c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0,
                      put = setStaticF___9__6_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::SetFrustumPlanesPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__6_0;

  static inline ::GlobalNamespace::SetFrustumPlanesPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__6_0, addr 0x5f4e868, size 0x70, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__6_0(::GlobalNamespace::SetFrustumPlanesPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x5f4e864, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::SetFrustumPlanesPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::SetFrustumPlanesPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__6_0();

  static inline void setStaticF___9(::GlobalNamespace::SetFrustumPlanesPass___c* value);

  static inline void setStaticF___9__6_0(
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::SetFrustumPlanesPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetFrustumPlanesPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetFrustumPlanesPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetFrustumPlanesPass___c(SetFrustumPlanesPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetFrustumPlanesPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetFrustumPlanesPass___c(SetFrustumPlanesPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20686 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SetFrustumPlanesPass___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Plane, UnityEngine.Rendering.Universal.ScriptableRenderPass, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetFrustumPlanesPass
class CORDL_TYPE SetFrustumPlanesPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::GlobalNamespace::SetFrustumPlanesPass_PassData;

  using __c = ::GlobalNamespace::SetFrustumPlanesPass___c;

  /// @brief Field _planes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__planes, put = setStaticF__planes)) ::ArrayW<::UnityEngine::Plane> _planes;

  /// @brief Field _vectorPlanes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__vectorPlanes, put = setStaticF__vectorPlanes)) ::ArrayW<::UnityEngine::Vector4> _vectorPlanes;

  /// @brief Field _visualise, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get__visualise, put = __cordl_internal_set__visualise)) bool _visualise;

  /// @brief Field kFrustumPlanesId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kFrustumPlanesId, put = setStaticF_kFrustumPlanesId)) int32_t kFrustumPlanesId;

  /// @brief Method ExecutePass, addr 0x5f4e4d0, size 0x268, virtual false, abstract: false, final false
  static inline void ExecutePass(::GlobalNamespace::SetFrustumPlanesPass_PassData* passData, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  static inline ::GlobalNamespace::SetFrustumPlanesPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, bool visualise);

  /// @brief Method RecordRenderGraph, addr 0x5f4e12c, size 0x3a4, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  constexpr bool const& __cordl_internal_get__visualise() const;

  constexpr bool& __cordl_internal_get__visualise();

  constexpr void __cordl_internal_set__visualise(bool value);

  /// @brief Method .ctor, addr 0x5f4e080, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, bool visualise);

  static inline ::ArrayW<::UnityEngine::Plane> getStaticF__planes();

  static inline ::ArrayW<::UnityEngine::Vector4> getStaticF__vectorPlanes();

  static inline int32_t getStaticF_kFrustumPlanesId();

  static inline void setStaticF__planes(::ArrayW<::UnityEngine::Plane> value);

  static inline void setStaticF__vectorPlanes(::ArrayW<::UnityEngine::Vector4> value);

  static inline void setStaticF_kFrustumPlanesId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetFrustumPlanesPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetFrustumPlanesPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetFrustumPlanesPass(SetFrustumPlanesPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetFrustumPlanesPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetFrustumPlanesPass(SetFrustumPlanesPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20687 };

  /// @brief Field _visualise, offset: 0xb8, size: 0x1, def value: None
  bool ____visualise;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetFrustumPlanesPass, ____visualise) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SetFrustumPlanesPass) == 0xc0, "Size mismatch!");

} // namespace GlobalNamespace
