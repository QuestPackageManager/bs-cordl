#pragma once
// IWYU pragma private; include "GlobalNamespace/OverdrawComputePass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OverdrawComputePass)
namespace GlobalNamespace {
class OverdrawComputePass_PassData;
}
namespace GlobalNamespace {
class OverdrawComputePass___c;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
// Forward declare root types
namespace GlobalNamespace {
class OverdrawComputePass;
}
namespace GlobalNamespace {
class OverdrawComputePass_PassData;
}
namespace GlobalNamespace {
class OverdrawComputePass___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OverdrawComputePass*);
MARK_REF_T(::GlobalNamespace::OverdrawComputePass_PassData*);
MARK_REF_T(::GlobalNamespace::OverdrawComputePass___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OverdrawComputePass*, "", "OverdrawComputePass");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OverdrawComputePass_PassData*, "", "OverdrawComputePass/PassData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OverdrawComputePass___c*, "", "OverdrawComputePass/<>c");
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace GlobalNamespace {
// Is value type: false
// CS Name: OverdrawComputePass/PassData
class CORDL_TYPE OverdrawComputePass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field colorTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_colorTexture, put = __cordl_internal_set_colorTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorTexture;

  /// @brief Field height, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) int32_t height;

  /// @brief Field recordOverdrawCompute, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get_recordOverdrawCompute,
      put = __cordl_internal_set_recordOverdrawCompute)) ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* recordOverdrawCompute;

  /// @brief Field width, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_width, put = __cordl_internal_set_width)) int32_t width;

  static inline ::GlobalNamespace::OverdrawComputePass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_colorTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_colorTexture();

  constexpr int32_t const& __cordl_internal_get_height() const;

  constexpr int32_t& __cordl_internal_get_height();

  constexpr ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* const& __cordl_internal_get_recordOverdrawCompute() const;

  constexpr ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>*& __cordl_internal_get_recordOverdrawCompute();

  constexpr int32_t const& __cordl_internal_get_width() const;

  constexpr int32_t& __cordl_internal_get_width();

  constexpr void __cordl_internal_set_colorTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_height(int32_t value);

  constexpr void __cordl_internal_set_recordOverdrawCompute(::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* value);

  constexpr void __cordl_internal_set_width(int32_t value);

  /// @brief Method .ctor, addr 0x6367940, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OverdrawComputePass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OverdrawComputePass_PassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OverdrawComputePass_PassData(OverdrawComputePass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OverdrawComputePass_PassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OverdrawComputePass_PassData(OverdrawComputePass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21159 };

  /// @brief Field colorTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___colorTexture;

  /// @brief Field width, offset: 0x20, size: 0x4, def value: None
  int32_t ___width;

  /// @brief Field height, offset: 0x24, size: 0x4, def value: None
  int32_t ___height;

  /// @brief Field recordOverdrawCompute, offset: 0x28, size: 0x8, def value: None
  ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* ___recordOverdrawCompute;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OverdrawComputePass_PassData, ___colorTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverdrawComputePass_PassData, ___width) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverdrawComputePass_PassData, ___height) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverdrawComputePass_PassData, ___recordOverdrawCompute) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OverdrawComputePass_PassData) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OverdrawComputePass/<>c
class CORDL_TYPE OverdrawComputePass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::OverdrawComputePass___c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0,
                      put = setStaticF___9__4_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::OverdrawComputePass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__4_0;

  static inline ::GlobalNamespace::OverdrawComputePass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__4_0, addr 0x636799c, size 0xc, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__4_0(::GlobalNamespace::OverdrawComputePass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method .ctor, addr 0x6367998, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OverdrawComputePass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::OverdrawComputePass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__4_0();

  static inline void setStaticF___9(::GlobalNamespace::OverdrawComputePass___c* value);

  static inline void setStaticF___9__4_0(
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::OverdrawComputePass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OverdrawComputePass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OverdrawComputePass___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OverdrawComputePass___c(OverdrawComputePass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OverdrawComputePass___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OverdrawComputePass___c(OverdrawComputePass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21160 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OverdrawComputePass___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: OverdrawComputePass
class CORDL_TYPE OverdrawComputePass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::GlobalNamespace::OverdrawComputePass_PassData;

  using __c = ::GlobalNamespace::OverdrawComputePass___c;

  /// @brief Field _recordOverdrawCompute, offset 0x60, size 0x8
  __declspec(property(
      get = __cordl_internal_get__recordOverdrawCompute,
      put = __cordl_internal_set__recordOverdrawCompute)) ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* _recordOverdrawCompute;

  /// @brief Method Execute, addr 0x6367850, size 0xf0, virtual false, abstract: false, final false
  static inline void Execute(::GlobalNamespace::OverdrawComputePass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  static inline ::GlobalNamespace::OverdrawComputePass* New_ctor();

  /// @brief Method RecordRenderGraph, addr 0x6367294, size 0x5bc, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method Setup, addr 0x636728c, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* recordOverdrawCompute);

  constexpr ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* const& __cordl_internal_get__recordOverdrawCompute() const;

  constexpr ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>*& __cordl_internal_get__recordOverdrawCompute();

  constexpr void __cordl_internal_set__recordOverdrawCompute(::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* value);

  /// @brief Method .ctor, addr 0x63671c8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OverdrawComputePass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OverdrawComputePass", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OverdrawComputePass(OverdrawComputePass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OverdrawComputePass", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OverdrawComputePass(OverdrawComputePass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21161 };

  /// @brief Field _recordOverdrawCompute, offset: 0x60, size: 0x8, def value: None
  ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* ____recordOverdrawCompute;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OverdrawComputePass, ____recordOverdrawCompute) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OverdrawComputePass) == 0x68, "Size mismatch!");

} // namespace GlobalNamespace
