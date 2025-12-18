#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderPipelineGlobalSettings_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineGlobalSettings_def.hpp"
CORDL_MODULE_EXPORT(RenderPipelineGlobalSettings_2)
namespace System {
template <typename T> class Lazy_1;
}
namespace UnityEngine::Rendering {
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline> class RenderPipelineGlobalSettings_2___c;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline> class RenderPipelineGlobalSettings_2;
}
namespace UnityEngine::Rendering {
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline> class RenderPipelineGlobalSettings_2___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::RenderPipelineGlobalSettings_2);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline>
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderPipelineGlobalSettings`2/<>c<TGlobalRenderPipelineSettings,TRenderPipeline>
class CORDL_TYPE RenderPipelineGlobalSettings_2___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>* __9;

  static inline ::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>* New_ctor();

  /// @brief Method <.cctor>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TGlobalRenderPipelineSettings __cctor_b__5_0();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipelineGlobalSettings_2___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineGlobalSettings_2___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipelineGlobalSettings_2___c(RenderPipelineGlobalSettings_2___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineGlobalSettings_2___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipelineGlobalSettings_2___c(RenderPipelineGlobalSettings_2___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12162 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.RenderPipelineGlobalSettings
namespace UnityEngine::Rendering {
// cpp template
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline>
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderPipelineGlobalSettings`2<TGlobalRenderPipelineSettings,TRenderPipeline>
class CORDL_TYPE RenderPipelineGlobalSettings_2 : public ::UnityEngine::Rendering::RenderPipelineGlobalSettings {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::System::Lazy_1<TGlobalRenderPipelineSettings>* s_Instance;

  static inline ::UnityEngine::Rendering::RenderPipelineGlobalSettings_2<TGlobalRenderPipelineSettings, TRenderPipeline>* New_ctor();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Lazy_1<TGlobalRenderPipelineSettings>* getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TGlobalRenderPipelineSettings get_instance();

  static inline void setStaticF_s_Instance(::System::Lazy_1<TGlobalRenderPipelineSettings>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipelineGlobalSettings_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineGlobalSettings_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipelineGlobalSettings_2(RenderPipelineGlobalSettings_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineGlobalSettings_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipelineGlobalSettings_2(RenderPipelineGlobalSettings_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12163 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::RenderPipelineGlobalSettings_2, "UnityEngine.Rendering", "RenderPipelineGlobalSettings`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c, "UnityEngine.Rendering", "RenderPipelineGlobalSettings`2/<>c");
