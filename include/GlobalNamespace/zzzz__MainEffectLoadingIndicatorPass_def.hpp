#pragma once
// IWYU pragma private; include "GlobalNamespace\MainEffectLoadingIndicatorPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MainEffectLoadingIndicatorPass)
namespace GlobalNamespace {
class MainEffectLoadingIndicatorPass_PassData;
}
namespace GlobalNamespace {
class MainEffectLoadingIndicatorPass___c;
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
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectLoadingIndicatorPass;
}
namespace GlobalNamespace {
class MainEffectLoadingIndicatorPass_PassData;
}
namespace GlobalNamespace {
class MainEffectLoadingIndicatorPass___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MainEffectLoadingIndicatorPass*);
MARK_REF_T(::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData*);
MARK_REF_T(::GlobalNamespace::MainEffectLoadingIndicatorPass___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainEffectLoadingIndicatorPass*, "", "MainEffectLoadingIndicatorPass");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData*, "", "MainEffectLoadingIndicatorPass/PassData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainEffectLoadingIndicatorPass___c*, "", "MainEffectLoadingIndicatorPass/<>c");
// Dependencies System.Object, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectLoadingIndicatorPass/PassData
class CORDL_TYPE MainEffectLoadingIndicatorPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field positionWS, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_positionWS, put = __cordl_internal_set_positionWS)) ::UnityEngine::Vector4 positionWS;

  /// @brief Field rightWS, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get_rightWS, put = __cordl_internal_set_rightWS)) ::UnityEngine::Vector4 rightWS;

  /// @brief Field secSinceShown, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_secSinceShown, put = __cordl_internal_set_secSinceShown)) float_t secSinceShown;

  /// @brief Field spinnerMaterial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_spinnerMaterial, put = __cordl_internal_set_spinnerMaterial)) ::UnityW<::UnityEngine::Material> spinnerMaterial;

  /// @brief Field upWS, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get_upWS, put = __cordl_internal_set_upWS)) ::UnityEngine::Vector4 upWS;

  static inline ::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData* New_ctor();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_positionWS() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_positionWS();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_rightWS() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_rightWS();

  constexpr float_t const& __cordl_internal_get_secSinceShown() const;

  constexpr float_t& __cordl_internal_get_secSinceShown();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_spinnerMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_spinnerMaterial();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_upWS() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_upWS();

  constexpr void __cordl_internal_set_positionWS(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_rightWS(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_secSinceShown(float_t value);

  constexpr void __cordl_internal_set_spinnerMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_upWS(::UnityEngine::Vector4 value);

  /// @brief Method .ctor, addr 0x5f45858, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectLoadingIndicatorPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectLoadingIndicatorPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectLoadingIndicatorPass_PassData(MainEffectLoadingIndicatorPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectLoadingIndicatorPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectLoadingIndicatorPass_PassData(MainEffectLoadingIndicatorPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20643 };

  /// @brief Field spinnerMaterial, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___spinnerMaterial;

  /// @brief Field secSinceShown, offset: 0x18, size: 0x4, def value: None
  float_t ___secSinceShown;

  /// @brief Field positionWS, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___positionWS;

  /// @brief Field rightWS, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___rightWS;

  /// @brief Field upWS, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___upWS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData, ___spinnerMaterial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData, ___secSinceShown) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData, ___positionWS) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData, ___rightWS) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData, ___upWS) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectLoadingIndicatorPass/<>c
class CORDL_TYPE MainEffectLoadingIndicatorPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MainEffectLoadingIndicatorPass___c* __9;

  /// @brief Field <>9__18_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_0,
                      put = setStaticF___9__18_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__18_0;

  static inline ::GlobalNamespace::MainEffectLoadingIndicatorPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__18_0, addr 0x5f458b4, size 0x15c, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__18_0(::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x5f458b0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MainEffectLoadingIndicatorPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__18_0();

  static inline void setStaticF___9(::GlobalNamespace::MainEffectLoadingIndicatorPass___c* value);

  static inline void setStaticF___9__18_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectLoadingIndicatorPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectLoadingIndicatorPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectLoadingIndicatorPass___c(MainEffectLoadingIndicatorPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectLoadingIndicatorPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectLoadingIndicatorPass___c(MainEffectLoadingIndicatorPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20644 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MainEffectLoadingIndicatorPass___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectLoadingIndicatorPass
class CORDL_TYPE MainEffectLoadingIndicatorPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData;

  using __c = ::GlobalNamespace::MainEffectLoadingIndicatorPass___c;

  /// @brief Field <secSinceShown>k__BackingField, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get__secSinceShown_k__BackingField, put = __cordl_internal_set__secSinceShown_k__BackingField)) float_t _secSinceShown_k__BackingField;

  /// @brief Field _spinnerMaterial, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__spinnerMaterial, put = __cordl_internal_set__spinnerMaterial)) ::UnityW<::UnityEngine::Material> _spinnerMaterial;

  /// @brief Field kMainTexId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kMainTexId, put = setStaticF_kMainTexId)) int32_t kMainTexId;

  /// @brief Field kPositionWSId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kPositionWSId, put = setStaticF_kPositionWSId)) int32_t kPositionWSId;

  /// @brief Field kRightWSId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kRightWSId, put = setStaticF_kRightWSId)) int32_t kRightWSId;

  /// @brief Field kSecSinceShownId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kSecSinceShownId, put = setStaticF_kSecSinceShownId)) int32_t kSecSinceShownId;

  /// @brief Field kUpWSId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kUpWSId, put = setStaticF_kUpWSId)) int32_t kUpWSId;

  __declspec(property(get = get_secSinceShown, put = set_secSinceShown)) float_t secSinceShown;

  /// @brief Method Dispose, addr 0x5f434f0, size 0x60, virtual false, abstract: false, final false
  inline void Dispose();

  static inline ::GlobalNamespace::MainEffectLoadingIndicatorPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Shader* shader,
                                                                            ::UnityEngine::Texture2D* spinnerTexture);

  /// @brief Method RecordRenderGraph, addr 0x5f450cc, size 0x64c, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  constexpr float_t const& __cordl_internal_get__secSinceShown_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__secSinceShown_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__spinnerMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__spinnerMaterial();

  constexpr void __cordl_internal_set__secSinceShown_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__spinnerMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x5f43638, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Shader* shader, ::UnityEngine::Texture2D* spinnerTexture);

  static inline int32_t getStaticF_kMainTexId();

  static inline int32_t getStaticF_kPositionWSId();

  static inline int32_t getStaticF_kRightWSId();

  static inline int32_t getStaticF_kSecSinceShownId();

  static inline int32_t getStaticF_kUpWSId();

  /// @brief Method get_secSinceShown, addr 0x5f450bc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_secSinceShown();

  static inline void setStaticF_kMainTexId(int32_t value);

  static inline void setStaticF_kPositionWSId(int32_t value);

  static inline void setStaticF_kRightWSId(int32_t value);

  static inline void setStaticF_kSecSinceShownId(int32_t value);

  static inline void setStaticF_kUpWSId(int32_t value);

  /// @brief Method set_secSinceShown, addr 0x5f450c4, size 0x8, virtual false, abstract: false, final false
  inline void set_secSinceShown(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectLoadingIndicatorPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectLoadingIndicatorPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectLoadingIndicatorPass(MainEffectLoadingIndicatorPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectLoadingIndicatorPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectLoadingIndicatorPass(MainEffectLoadingIndicatorPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20645 };

  /// @brief Field kDistanceM offset 0xffffffff size 0x4
  static constexpr float_t kDistanceM{ static_cast<float_t>(0.75f) };

  /// @brief Field kHalfSizeM offset 0xffffffff size 0x4
  static constexpr float_t kHalfSizeM{ static_cast<float_t>(0.075f) };

  /// @brief Field kOffsetDownM offset 0xffffffff size 0x4
  static constexpr float_t kOffsetDownM{ static_cast<float_t>(0.29f) };

  /// @brief Field kOffsetRightM offset 0xffffffff size 0x4
  static constexpr float_t kOffsetRightM{ static_cast<float_t>(0.28f) };

  /// @brief Field kSpinnerVertexCount offset 0xffffffff size 0x4
  static constexpr int32_t kSpinnerVertexCount{ static_cast<int32_t>(0x6) };

  /// @brief Field _spinnerMaterial, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____spinnerMaterial;

  /// @brief Field <secSinceShown>k__BackingField, offset: 0xc0, size: 0x4, def value: None
  float_t ____secSinceShown_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainEffectLoadingIndicatorPass, ____spinnerMaterial) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectLoadingIndicatorPass, ____secSinceShown_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MainEffectLoadingIndicatorPass) == 0xc8, "Size mismatch!");

} // namespace GlobalNamespace
