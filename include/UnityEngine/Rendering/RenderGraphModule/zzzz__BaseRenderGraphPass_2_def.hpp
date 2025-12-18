#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/BaseRenderGraphPass_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseRenderGraphPass_2)
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphObjectPool;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphPassType;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename TRenderGraphContext> class BaseRenderGraphPass_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2);
// Dependencies UnityEngine.Rendering.RenderGraphModule.RenderGraphPass
namespace UnityEngine::Rendering::RenderGraphModule {
// cpp template
template <typename PassData, typename TRenderGraphContext>
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.BaseRenderGraphPass`2<PassData,TRenderGraphContext>
class CORDL_TYPE BaseRenderGraphPass_2 : public ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass {
public:
  // Declarations
  /// @brief Field data, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) PassData data;

  /// @brief Field renderFunc, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_renderFunc,
                      put = __cordl_internal_set_renderFunc)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, TRenderGraphContext>* renderFunc;

  /// @brief Method GetRenderFuncHash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetRenderFuncHash();

  /// @brief Method HasRenderFunc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool HasRenderFunc();

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Initialize(int32_t passIndex, PassData passData, ::StringW passName, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType passType,
                         ::UnityEngine::Rendering::ProfilingSampler* sampler);

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>* New_ctor();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Release(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* pool);

  constexpr PassData const& __cordl_internal_get_data() const;

  constexpr PassData& __cordl_internal_get_data();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, TRenderGraphContext>* const& __cordl_internal_get_renderFunc() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, TRenderGraphContext>*& __cordl_internal_get_renderFunc();

  constexpr void __cordl_internal_set_data(PassData value);

  constexpr void __cordl_internal_set_renderFunc(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, TRenderGraphContext>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseRenderGraphPass_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseRenderGraphPass_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseRenderGraphPass_2(BaseRenderGraphPass_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseRenderGraphPass_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseRenderGraphPass_2(BaseRenderGraphPass_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12404 };

  /// @brief Field data, offset: 0xb0, size: 0x8, def value: None
  PassData ___data;

  /// @brief Field renderFunc, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, TRenderGraphContext>* ___renderFunc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2, "UnityEngine.Rendering.RenderGraphModule", "BaseRenderGraphPass`2");
