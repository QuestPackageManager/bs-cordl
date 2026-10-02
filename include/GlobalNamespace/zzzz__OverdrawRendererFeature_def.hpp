#pragma once
// IWYU pragma private; include "GlobalNamespace/OverdrawRendererFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OverdrawRendererFeature)
namespace GlobalNamespace {
class OverdrawComputePass;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
// Forward declare root types
namespace GlobalNamespace {
class OverdrawRendererFeature;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OverdrawRendererFeature*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OverdrawRendererFeature*, "", "OverdrawRendererFeature");
// Dependencies UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace GlobalNamespace {
// Is value type: false
// CS Name: OverdrawRendererFeature
class CORDL_TYPE OverdrawRendererFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  /// @brief Field _pass, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__pass, put = __cordl_internal_set__pass)) ::GlobalNamespace::OverdrawComputePass* _pass;

  /// @brief Field _recordOverdrawCompute, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF__recordOverdrawCompute,
      put = setStaticF__recordOverdrawCompute)) ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* _recordOverdrawCompute;

  /// @brief Method AddRenderPasses, addr 0x63671f0, size 0x8c, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x6367164, size 0x64, virtual true, abstract: false, final false
  inline void Create();

  /// @brief Method Dispose, addr 0x63671e8, size 0x8, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::GlobalNamespace::OverdrawRendererFeature* New_ctor();

  /// @brief Method Register, addr 0x6367090, size 0x50, virtual false, abstract: false, final false
  static inline void Register(::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* recordOverdrawCompute);

  /// @brief Method Unregister, addr 0x63670e0, size 0x84, virtual false, abstract: false, final false
  static inline void Unregister(::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* recordOverdrawCompute);

  constexpr ::GlobalNamespace::OverdrawComputePass* const& __cordl_internal_get__pass() const;

  constexpr ::GlobalNamespace::OverdrawComputePass*& __cordl_internal_get__pass();

  constexpr void __cordl_internal_set__pass(::GlobalNamespace::OverdrawComputePass* value);

  /// @brief Method .ctor, addr 0x636727c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* getStaticF__recordOverdrawCompute();

  static inline void setStaticF__recordOverdrawCompute(::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OverdrawRendererFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OverdrawRendererFeature", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OverdrawRendererFeature(OverdrawRendererFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OverdrawRendererFeature", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OverdrawRendererFeature(OverdrawRendererFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21158 };

  /// @brief Field _pass, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OverdrawComputePass* ____pass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OverdrawRendererFeature, ____pass) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OverdrawRendererFeature) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
