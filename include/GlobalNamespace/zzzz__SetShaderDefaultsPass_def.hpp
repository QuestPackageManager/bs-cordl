#pragma once
// IWYU pragma private; include "GlobalNamespace\SetShaderDefaultsPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
CORDL_MODULE_EXPORT(SetShaderDefaultsPass)
namespace GlobalNamespace {
class SetShaderDefaultsPass_PassData;
}
namespace GlobalNamespace {
class SetShaderDefaultsPass___c;
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
namespace UnityEngine::Rendering {
class ContextContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class SetShaderDefaultsPass;
}
namespace GlobalNamespace {
class SetShaderDefaultsPass_PassData;
}
namespace GlobalNamespace {
class SetShaderDefaultsPass___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SetShaderDefaultsPass*);
MARK_REF_T(::GlobalNamespace::SetShaderDefaultsPass_PassData*);
MARK_REF_T(::GlobalNamespace::SetShaderDefaultsPass___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetShaderDefaultsPass*, "", "SetShaderDefaultsPass");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetShaderDefaultsPass_PassData*, "", "SetShaderDefaultsPass/PassData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetShaderDefaultsPass___c*, "", "SetShaderDefaultsPass/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetShaderDefaultsPass/PassData
class CORDL_TYPE SetShaderDefaultsPass_PassData : public ::System::Object {
public:
  // Declarations
  static inline ::GlobalNamespace::SetShaderDefaultsPass_PassData* New_ctor();

  /// @brief Method .ctor, addr 0x5f4ed98, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetShaderDefaultsPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetShaderDefaultsPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetShaderDefaultsPass_PassData(SetShaderDefaultsPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetShaderDefaultsPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetShaderDefaultsPass_PassData(SetShaderDefaultsPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20689 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SetShaderDefaultsPass_PassData) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetShaderDefaultsPass/<>c
class CORDL_TYPE SetShaderDefaultsPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::SetShaderDefaultsPass___c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0,
                      put = setStaticF___9__2_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::SetShaderDefaultsPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__2_0;

  static inline ::GlobalNamespace::SetShaderDefaultsPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__2_0, addr 0x5f4edf4, size 0xc, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__2_0(::GlobalNamespace::SetShaderDefaultsPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x5f4edf0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::SetShaderDefaultsPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::SetShaderDefaultsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__2_0();

  static inline void setStaticF___9(::GlobalNamespace::SetShaderDefaultsPass___c* value);

  static inline void setStaticF___9__2_0(
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::SetShaderDefaultsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetShaderDefaultsPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetShaderDefaultsPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetShaderDefaultsPass___c(SetShaderDefaultsPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetShaderDefaultsPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetShaderDefaultsPass___c(SetShaderDefaultsPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20690 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SetShaderDefaultsPass___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetShaderDefaultsPass
class CORDL_TYPE SetShaderDefaultsPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::GlobalNamespace::SetShaderDefaultsPass_PassData;

  using __c = ::GlobalNamespace::SetShaderDefaultsPass___c;

  /// @brief Method ExecutePass, addr 0x5f4ed2c, size 0x6c, virtual false, abstract: false, final false
  static inline void ExecutePass(::GlobalNamespace::SetShaderDefaultsPass_PassData* passData, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  static inline ::GlobalNamespace::SetShaderDefaultsPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  /// @brief Method RecordRenderGraph, addr 0x5f4e9d4, size 0x358, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method .ctor, addr 0x5f4e934, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetShaderDefaultsPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetShaderDefaultsPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetShaderDefaultsPass(SetShaderDefaultsPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetShaderDefaultsPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetShaderDefaultsPass(SetShaderDefaultsPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20691 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SetShaderDefaultsPass) == 0xb8, "Size mismatch!");

} // namespace GlobalNamespace
