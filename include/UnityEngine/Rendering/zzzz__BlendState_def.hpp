#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BlendState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__RenderTargetBlendState_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlendState)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct RenderTargetBlendState;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BlendState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BlendState);
// Dependencies UnityEngine.Rendering.RenderTargetBlendState
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BlendState
struct CORDL_TYPE BlendState {
public:
  // Declarations
  __declspec(property(put = set_blendState0)) ::UnityEngine::Rendering::RenderTargetBlendState blendState0;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::BlendState>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::BlendState>*();

  /// @brief Method Equals, addr 0x68e9ec0, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x68e9d88, size 0xc0, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::BlendState other);

  /// @brief Method GetHashCode, addr 0x68e9f54, size 0x2b8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x68e9ce8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(bool separateMRTBlend, bool alphaToMask);

  /// @brief Method get_defaultValue, addr 0x68e9ca0, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::BlendState get_defaultValue();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::BlendState>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::BlendState>* i___System__IEquatable_1___UnityEngine__Rendering__BlendState_();

  /// @brief Method set_blendState0, addr 0x68e9d80, size 0x8, virtual false, abstract: false, final false
  inline void set_blendState0(::UnityEngine::Rendering::RenderTargetBlendState value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BlendState();

  // Ctor Parameters [CppParam { name: "m_BlendState0", ty: "::UnityEngine::Rendering::RenderTargetBlendState", modifiers: "", def_value: None }, CppParam { name: "m_BlendState1", ty:
  // "::UnityEngine::Rendering::RenderTargetBlendState", modifiers: "", def_value: None }, CppParam { name: "m_BlendState2", ty: "::UnityEngine::Rendering::RenderTargetBlendState", modifiers: "",
  // def_value: None }, CppParam { name: "m_BlendState3", ty: "::UnityEngine::Rendering::RenderTargetBlendState", modifiers: "", def_value: None }, CppParam { name: "m_BlendState4", ty:
  // "::UnityEngine::Rendering::RenderTargetBlendState", modifiers: "", def_value: None }, CppParam { name: "m_BlendState5", ty: "::UnityEngine::Rendering::RenderTargetBlendState", modifiers: "",
  // def_value: None }, CppParam { name: "m_BlendState6", ty: "::UnityEngine::Rendering::RenderTargetBlendState", modifiers: "", def_value: None }, CppParam { name: "m_BlendState7", ty:
  // "::UnityEngine::Rendering::RenderTargetBlendState", modifiers: "", def_value: None }, CppParam { name: "m_SeparateMRTBlendStates", ty: "uint8_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_AlphaToMask", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_Padding", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr BlendState(::UnityEngine::Rendering::RenderTargetBlendState m_BlendState0, ::UnityEngine::Rendering::RenderTargetBlendState m_BlendState1,
                       ::UnityEngine::Rendering::RenderTargetBlendState m_BlendState2, ::UnityEngine::Rendering::RenderTargetBlendState m_BlendState3,
                       ::UnityEngine::Rendering::RenderTargetBlendState m_BlendState4, ::UnityEngine::Rendering::RenderTargetBlendState m_BlendState5,
                       ::UnityEngine::Rendering::RenderTargetBlendState m_BlendState6, ::UnityEngine::Rendering::RenderTargetBlendState m_BlendState7, uint8_t m_SeparateMRTBlendStates,
                       uint8_t m_AlphaToMask, int16_t m_Padding) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10763 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x44 };

  /// @brief Field m_BlendState0, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderTargetBlendState m_BlendState0;

  /// @brief Field m_BlendState1, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderTargetBlendState m_BlendState1;

  /// @brief Field m_BlendState2, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderTargetBlendState m_BlendState2;

  /// @brief Field m_BlendState3, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderTargetBlendState m_BlendState3;

  /// @brief Field m_BlendState4, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderTargetBlendState m_BlendState4;

  /// @brief Field m_BlendState5, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderTargetBlendState m_BlendState5;

  /// @brief Field m_BlendState6, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderTargetBlendState m_BlendState6;

  /// @brief Field m_BlendState7, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderTargetBlendState m_BlendState7;

  /// @brief Field m_SeparateMRTBlendStates, offset: 0x40, size: 0x1, def value: None
  uint8_t m_SeparateMRTBlendStates;

  /// @brief Field m_AlphaToMask, offset: 0x41, size: 0x1, def value: None
  uint8_t m_AlphaToMask;

  /// @brief Field m_Padding, offset: 0x42, size: 0x2, def value: None
  int16_t m_Padding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BlendState, m_BlendState0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BlendState, m_BlendState1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BlendState, m_BlendState2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BlendState, m_BlendState3) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BlendState, m_BlendState4) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BlendState, m_BlendState5) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BlendState, m_BlendState6) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BlendState, m_BlendState7) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BlendState, m_SeparateMRTBlendStates) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BlendState, m_AlphaToMask) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BlendState, m_Padding) == 0x42, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BlendState, 0x44>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BlendState, "UnityEngine.Rendering", "BlendState");
