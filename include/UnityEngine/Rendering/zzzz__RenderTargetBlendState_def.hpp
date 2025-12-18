#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderTargetBlendState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTargetBlendState)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct BlendMode;
}
namespace UnityEngine::Rendering {
struct BlendOp;
}
namespace UnityEngine::Rendering {
struct ColorWriteMask;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderTargetBlendState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderTargetBlendState);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderTargetBlendState
struct CORDL_TYPE RenderTargetBlendState {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::RenderTargetBlendState>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::RenderTargetBlendState>*();

  /// @brief Method Equals, addr 0x69598e0, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6952ccc, size 0x78, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::RenderTargetBlendState other);

  /// @brief Method GetHashCode, addr 0x6953090, size 0x54, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x69598bc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ColorWriteMask writeMask, ::UnityEngine::Rendering::BlendMode sourceColorBlendMode, ::UnityEngine::Rendering::BlendMode destinationColorBlendMode,
                    ::UnityEngine::Rendering::BlendMode sourceAlphaBlendMode, ::UnityEngine::Rendering::BlendMode destinationAlphaBlendMode, ::UnityEngine::Rendering::BlendOp colorBlendOperation,
                    ::UnityEngine::Rendering::BlendOp alphaBlendOperation);

  /// @brief Method get_defaultValue, addr 0x6952bf8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderTargetBlendState get_defaultValue();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::RenderTargetBlendState>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::RenderTargetBlendState>* i___System__IEquatable_1___UnityEngine__Rendering__RenderTargetBlendState_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTargetBlendState();

  // Ctor Parameters [CppParam { name: "m_WriteMask", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_SourceColorBlendMode", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "m_DestinationColorBlendMode", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_SourceAlphaBlendMode", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "m_DestinationAlphaBlendMode", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_ColorBlendOperation", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "m_AlphaBlendOperation", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_Padding", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr RenderTargetBlendState(uint8_t m_WriteMask, uint8_t m_SourceColorBlendMode, uint8_t m_DestinationColorBlendMode, uint8_t m_SourceAlphaBlendMode, uint8_t m_DestinationAlphaBlendMode,
                                   uint8_t m_ColorBlendOperation, uint8_t m_AlphaBlendOperation, uint8_t m_Padding) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10802 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_WriteMask, offset: 0x0, size: 0x1, def value: None
  uint8_t m_WriteMask;

  /// @brief Field m_SourceColorBlendMode, offset: 0x1, size: 0x1, def value: None
  uint8_t m_SourceColorBlendMode;

  /// @brief Field m_DestinationColorBlendMode, offset: 0x2, size: 0x1, def value: None
  uint8_t m_DestinationColorBlendMode;

  /// @brief Field m_SourceAlphaBlendMode, offset: 0x3, size: 0x1, def value: None
  uint8_t m_SourceAlphaBlendMode;

  /// @brief Field m_DestinationAlphaBlendMode, offset: 0x4, size: 0x1, def value: None
  uint8_t m_DestinationAlphaBlendMode;

  /// @brief Field m_ColorBlendOperation, offset: 0x5, size: 0x1, def value: None
  uint8_t m_ColorBlendOperation;

  /// @brief Field m_AlphaBlendOperation, offset: 0x6, size: 0x1, def value: None
  uint8_t m_AlphaBlendOperation;

  /// @brief Field m_Padding, offset: 0x7, size: 0x1, def value: None
  uint8_t m_Padding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderTargetBlendState, m_WriteMask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetBlendState, m_SourceColorBlendMode) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetBlendState, m_DestinationColorBlendMode) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetBlendState, m_SourceAlphaBlendMode) == 0x3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetBlendState, m_DestinationAlphaBlendMode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetBlendState, m_ColorBlendOperation) == 0x5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetBlendState, m_AlphaBlendOperation) == 0x6, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetBlendState, m_Padding) == 0x7, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderTargetBlendState, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderTargetBlendState, "UnityEngine.Rendering", "RenderTargetBlendState");
