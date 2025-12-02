#pragma once
// IWYU pragma private; include "UnityEngine/RenderingLayerMask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderingLayerMask)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine {
struct RenderingLayerMask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RenderingLayerMask);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RenderingLayerMask
struct CORDL_TYPE RenderingLayerMask {
public:
  // Declarations
  /// @brief Field <defaultRenderingLayerMask>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__defaultRenderingLayerMask_k__BackingField,
                      put = setStaticF__defaultRenderingLayerMask_k__BackingField)) ::UnityEngine::RenderingLayerMask _defaultRenderingLayerMask_k__BackingField;

  /// @brief Method GetDefinedRenderingLayerNames, addr 0x68a50c0, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetDefinedRenderingLayerNames();

  /// @brief Method GetDefinedRenderingLayersCombinedMaskValue, addr 0x68a5098, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t GetDefinedRenderingLayersCombinedMaskValue();

  /// @brief Method GetRenderingLayerCount, addr 0x68a50e8, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetRenderingLayerCount();

  /// @brief Method NameToRenderingLayer, addr 0x68a4f04, size 0x158, virtual false, abstract: false, final false
  static inline int32_t NameToRenderingLayer(::StringW layerName);

  /// @brief Method NameToRenderingLayer_Injected, addr 0x68a505c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t NameToRenderingLayer_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> layerName);

  static inline ::UnityEngine::RenderingLayerMask getStaticF__defaultRenderingLayerMask_k__BackingField();

  /// @brief Method op_Implicit, addr 0x68a4f00, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t op_Implicit_uint32_t(::UnityEngine::RenderingLayerMask mask);

  static inline void setStaticF__defaultRenderingLayerMask_k__BackingField(::UnityEngine::RenderingLayerMask value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderingLayerMask();

  // Ctor Parameters [CppParam { name: "m_Bits", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr RenderingLayerMask(uint32_t m_Bits) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10267 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field maxRenderingLayerSize offset 0xffffffff size 0x4
  static constexpr int32_t maxRenderingLayerSize{ static_cast<int32_t>(0x20) };

  /// @brief Field m_Bits, offset: 0x0, size: 0x4, def value: None
  uint32_t m_Bits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RenderingLayerMask, m_Bits) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderingLayerMask, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderingLayerMask, "UnityEngine", "RenderingLayerMask");
