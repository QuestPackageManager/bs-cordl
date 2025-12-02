#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderStateBlock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BlendState_def.hpp"
#include "UnityEngine/Rendering/zzzz__DepthState_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterState_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateMask_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderStateBlock)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct BlendState;
}
namespace UnityEngine::Rendering {
struct DepthState;
}
namespace UnityEngine::Rendering {
struct RasterState;
}
namespace UnityEngine::Rendering {
struct RenderStateMask;
}
namespace UnityEngine::Rendering {
struct StencilState;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderStateBlock;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderStateBlock);
// Dependencies UnityEngine.Rendering.BlendState, UnityEngine.Rendering.DepthState, UnityEngine.Rendering.RasterState, UnityEngine.Rendering.RenderStateMask, UnityEngine.Rendering.StencilState
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderStateBlock
struct CORDL_TYPE RenderStateBlock {
public:
  // Declarations
  __declspec(property(put = set_blendState)) ::UnityEngine::Rendering::BlendState blendState;

  __declspec(property(get = get_depthState, put = set_depthState)) ::UnityEngine::Rendering::DepthState depthState;

  __declspec(property(get = get_mask, put = set_mask)) ::UnityEngine::Rendering::RenderStateMask mask;

  __declspec(property(put = set_rasterState)) ::UnityEngine::Rendering::RasterState rasterState;

  __declspec(property(get = get_stencilReference, put = set_stencilReference)) int32_t stencilReference;

  __declspec(property(get = get_stencilState, put = set_stencilState)) ::UnityEngine::Rendering::StencilState stencilState;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::RenderStateBlock>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::RenderStateBlock>*();

  /// @brief Method Equals, addr 0x68f0830, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x68f0680, size 0x100, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::RenderStateBlock other);

  /// @brief Method GetHashCode, addr 0x68f08c4, size 0xf0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x68f04ec, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderStateMask mask);

  /// @brief Method get_depthState, addr 0x68f0634, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DepthState get_depthState();

  /// @brief Method get_mask, addr 0x68f0670, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderStateMask get_mask();

  /// @brief Method get_stencilReference, addr 0x68f0660, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_stencilReference();

  /// @brief Method get_stencilState, addr 0x68f0644, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::StencilState get_stencilState();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::RenderStateBlock>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::RenderStateBlock>* i___System__IEquatable_1___UnityEngine__Rendering__RenderStateBlock_();

  /// @brief Method set_blendState, addr 0x68f0620, size 0x8, virtual false, abstract: false, final false
  inline void set_blendState(::UnityEngine::Rendering::BlendState value);

  /// @brief Method set_depthState, addr 0x68f063c, size 0x8, virtual false, abstract: false, final false
  inline void set_depthState(::UnityEngine::Rendering::DepthState value);

  /// @brief Method set_mask, addr 0x68f0678, size 0x8, virtual false, abstract: false, final false
  inline void set_mask(::UnityEngine::Rendering::RenderStateMask value);

  /// @brief Method set_rasterState, addr 0x68f0628, size 0xc, virtual false, abstract: false, final false
  inline void set_rasterState(::UnityEngine::Rendering::RasterState value);

  /// @brief Method set_stencilReference, addr 0x68f0668, size 0x8, virtual false, abstract: false, final false
  inline void set_stencilReference(int32_t value);

  /// @brief Method set_stencilState, addr 0x68f0654, size 0xc, virtual false, abstract: false, final false
  inline void set_stencilState(::UnityEngine::Rendering::StencilState value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderStateBlock();

  // Ctor Parameters [CppParam { name: "m_BlendState", ty: "::UnityEngine::Rendering::BlendState", modifiers: "", def_value: None }, CppParam { name: "m_RasterState", ty:
  // "::UnityEngine::Rendering::RasterState", modifiers: "", def_value: None }, CppParam { name: "m_DepthState", ty: "::UnityEngine::Rendering::DepthState", modifiers: "", def_value: None }, CppParam
  // { name: "m_StencilState", ty: "::UnityEngine::Rendering::StencilState", modifiers: "", def_value: None }, CppParam { name: "m_StencilReference", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "m_Mask", ty: "::UnityEngine::Rendering::RenderStateMask", modifiers: "", def_value: None }]
  constexpr RenderStateBlock(::UnityEngine::Rendering::BlendState m_BlendState, ::UnityEngine::Rendering::RasterState m_RasterState, ::UnityEngine::Rendering::DepthState m_DepthState,
                             ::UnityEngine::Rendering::StencilState m_StencilState, int32_t m_StencilReference, ::UnityEngine::Rendering::RenderStateMask m_Mask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10796 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x6c };

  /// @brief Field m_BlendState, offset: 0x0, size: 0x44, def value: None
  ::UnityEngine::Rendering::BlendState m_BlendState;

  /// @brief Field m_RasterState, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Rendering::RasterState m_RasterState;

  /// @brief Field m_DepthState, offset: 0x54, size: 0x2, def value: None
  ::UnityEngine::Rendering::DepthState m_DepthState;

  /// @brief Field m_StencilState, offset: 0x56, size: 0xc, def value: None
  ::UnityEngine::Rendering::StencilState m_StencilState;

  /// @brief Field m_StencilReference, offset: 0x64, size: 0x4, def value: None
  int32_t m_StencilReference;

  /// @brief Field m_Mask, offset: 0x68, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderStateMask m_Mask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderStateBlock, m_BlendState) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderStateBlock, m_RasterState) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderStateBlock, m_DepthState) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderStateBlock, m_StencilState) == 0x56, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderStateBlock, m_StencilReference) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderStateBlock, m_Mask) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderStateBlock, 0x6c>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderStateBlock, "UnityEngine.Rendering", "RenderStateBlock");
