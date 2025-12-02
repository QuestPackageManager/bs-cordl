#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VisibleLight.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VisibleLightFlags_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LightType_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisibleLight)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct LightType;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct VisibleLight;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::VisibleLight);
// Dependencies UnityEngine.Color, UnityEngine.LightType, UnityEngine.Matrix4x4, UnityEngine.Rect, UnityEngine.Rendering.VisibleLightFlags
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.VisibleLight
struct CORDL_TYPE VisibleLight {
public:
  // Declarations
  __declspec(property(get = get_finalColor)) ::UnityEngine::Color finalColor;

  __declspec(property(get = get_light)) ::UnityW<::UnityEngine::Light> light;

  __declspec(property(get = get_lightType)) ::UnityEngine::LightType lightType;

  __declspec(property(get = get_localToWorldMatrix)) ::UnityEngine::Matrix4x4 localToWorldMatrix;

  __declspec(property(get = get_range)) float_t range;

  __declspec(property(get = get_spotAngle)) float_t spotAngle;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::VisibleLight>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::VisibleLight>*();

  /// @brief Method Equals, addr 0x68f59b8, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x68f56cc, size 0x2ec, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::VisibleLight other);

  /// @brief Method GetHashCode, addr 0x68f5a4c, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_finalColor, addr 0x68f5694, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_finalColor();

  /// @brief Method get_light, addr 0x68f55f8, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Light> get_light();

  /// @brief Method get_lightType, addr 0x68f568c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LightType get_lightType();

  /// @brief Method get_localToWorldMatrix, addr 0x68f56a0, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_localToWorldMatrix();

  /// @brief Method get_range, addr 0x68f56bc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_range();

  /// @brief Method get_spotAngle, addr 0x68f56c4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_spotAngle();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::VisibleLight>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::VisibleLight>* i___System__IEquatable_1___UnityEngine__Rendering__VisibleLight_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisibleLight();

  // Ctor Parameters [CppParam { name: "m_LightType", ty: "::UnityEngine::LightType", modifiers: "", def_value: None }, CppParam { name: "m_FinalColor", ty: "::UnityEngine::Color", modifiers: "",
  // def_value: None }, CppParam { name: "m_ScreenRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "m_LocalToWorldMatrix", ty: "::UnityEngine::Matrix4x4",
  // modifiers: "", def_value: None }, CppParam { name: "m_Range", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_SpotAngle", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m_InstanceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::Rendering::VisibleLightFlags", modifiers: "", def_value: None }]
  constexpr VisibleLight(::UnityEngine::LightType m_LightType, ::UnityEngine::Color m_FinalColor, ::UnityEngine::Rect m_ScreenRect, ::UnityEngine::Matrix4x4 m_LocalToWorldMatrix, float_t m_Range,
                         float_t m_SpotAngle, int32_t m_InstanceId, ::UnityEngine::Rendering::VisibleLightFlags m_Flags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10817 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x74 };

  /// @brief Field m_LightType, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::LightType m_LightType;

  /// @brief Field m_FinalColor, offset: 0x4, size: 0x10, def value: None
  ::UnityEngine::Color m_FinalColor;

  /// @brief Field m_ScreenRect, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Rect m_ScreenRect;

  /// @brief Field m_LocalToWorldMatrix, offset: 0x24, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 m_LocalToWorldMatrix;

  /// @brief Field m_Range, offset: 0x64, size: 0x4, def value: None
  float_t m_Range;

  /// @brief Field m_SpotAngle, offset: 0x68, size: 0x4, def value: None
  float_t m_SpotAngle;

  /// @brief Field m_InstanceId, offset: 0x6c, size: 0x4, def value: None
  int32_t m_InstanceId;

  /// @brief Field m_Flags, offset: 0x70, size: 0x4, def value: None
  ::UnityEngine::Rendering::VisibleLightFlags m_Flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VisibleLight, m_LightType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleLight, m_FinalColor) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleLight, m_ScreenRect) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleLight, m_LocalToWorldMatrix) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleLight, m_Range) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleLight, m_SpotAngle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleLight, m_InstanceId) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleLight, m_Flags) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VisibleLight, 0x74>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VisibleLight, "UnityEngine.Rendering", "VisibleLight");
