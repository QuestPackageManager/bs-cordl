#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RasterState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__CullMode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RasterState)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct CullMode;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RasterState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RasterState);
// Dependencies UnityEngine.Rendering.CullMode
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RasterState
struct CORDL_TYPE RasterState {
public:
  // Declarations
  /// @brief Field defaultValue, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_defaultValue, put = setStaticF_defaultValue)) ::UnityEngine::Rendering::RasterState defaultValue;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::RasterState>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::RasterState>*();

  /// @brief Method Equals, addr 0x68edb70, size 0xb4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x68edaf4, size 0x7c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::RasterState other);

  /// @brief Method GetHashCode, addr 0x68edc24, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x68eda60, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::CullMode cullingMode, int32_t offsetUnits, float_t offsetFactor, bool depthClip);

  static inline ::UnityEngine::Rendering::RasterState getStaticF_defaultValue();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::RasterState>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::RasterState>* i___System__IEquatable_1___UnityEngine__Rendering__RasterState_();

  static inline void setStaticF_defaultValue(::UnityEngine::Rendering::RasterState value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RasterState();

  // Ctor Parameters [CppParam { name: "m_CullingMode", ty: "::UnityEngine::Rendering::CullMode", modifiers: "", def_value: None }, CppParam { name: "m_OffsetUnits", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_OffsetFactor", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_DepthClip", ty: "uint8_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_Conservative", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_Padding1", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_Padding2", ty:
  // "uint8_t", modifiers: "", def_value: None }]
  constexpr RasterState(::UnityEngine::Rendering::CullMode m_CullingMode, int32_t m_OffsetUnits, float_t m_OffsetFactor, uint8_t m_DepthClip, uint8_t m_Conservative, uint8_t m_Padding1,
                        uint8_t m_Padding2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10787 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_CullingMode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::CullMode m_CullingMode;

  /// @brief Field m_OffsetUnits, offset: 0x4, size: 0x4, def value: None
  int32_t m_OffsetUnits;

  /// @brief Field m_OffsetFactor, offset: 0x8, size: 0x4, def value: None
  float_t m_OffsetFactor;

  /// @brief Field m_DepthClip, offset: 0xc, size: 0x1, def value: None
  uint8_t m_DepthClip;

  /// @brief Field m_Conservative, offset: 0xd, size: 0x1, def value: None
  uint8_t m_Conservative;

  /// @brief Field m_Padding1, offset: 0xe, size: 0x1, def value: None
  uint8_t m_Padding1;

  /// @brief Field m_Padding2, offset: 0xf, size: 0x1, def value: None
  uint8_t m_Padding2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RasterState, m_CullingMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RasterState, m_OffsetUnits) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RasterState, m_OffsetFactor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RasterState, m_DepthClip) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RasterState, m_Conservative) == 0xd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RasterState, m_Padding1) == 0xe, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RasterState, m_Padding2) == 0xf, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RasterState, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RasterState, "UnityEngine.Rendering", "RasterState");
