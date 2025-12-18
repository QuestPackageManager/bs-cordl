#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VisibleReflectionProbe.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisibleReflectionProbe)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class ReflectionProbe;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct VisibleReflectionProbe;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::VisibleReflectionProbe);
// Dependencies UnityEngine.Bounds, UnityEngine.Matrix4x4, UnityEngine.Vector3, UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.VisibleReflectionProbe
struct CORDL_TYPE VisibleReflectionProbe {
public:
  // Declarations
  __declspec(property(get = get_blendDistance)) float_t blendDistance;

  __declspec(property(get = get_bounds)) ::UnityEngine::Bounds bounds;

  __declspec(property(get = get_hdrData)) ::UnityEngine::Vector4 hdrData;

  __declspec(property(get = get_importance)) int32_t importance;

  __declspec(property(get = get_isBoxProjection)) bool isBoxProjection;

  __declspec(property(get = get_localToWorldMatrix)) ::UnityEngine::Matrix4x4 localToWorldMatrix;

  __declspec(property(get = get_reflectionProbe)) ::UnityW<::UnityEngine::ReflectionProbe> reflectionProbe;

  __declspec(property(get = get_texture)) ::UnityW<::UnityEngine::Texture> texture;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::VisibleReflectionProbe>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::VisibleReflectionProbe>*();

  /// @brief Method Equals, addr 0x695eea8, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x695ebb8, size 0x2f0, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::VisibleReflectionProbe other);

  /// @brief Method GetHashCode, addr 0x695ef3c, size 0x1bc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_blendDistance, addr 0x695eb48, size 0x8, virtual false, abstract: false, final false
  inline float_t get_blendDistance();

  /// @brief Method get_bounds, addr 0x695eb0c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_hdrData, addr 0x695eb3c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_hdrData();

  /// @brief Method get_importance, addr 0x695eb50, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_importance();

  /// @brief Method get_isBoxProjection, addr 0x695eb58, size 0x60, virtual false, abstract: false, final false
  inline bool get_isBoxProjection();

  /// @brief Method get_localToWorldMatrix, addr 0x695eb20, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_localToWorldMatrix();

  /// @brief Method get_reflectionProbe, addr 0x695ea78, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ReflectionProbe> get_reflectionProbe();

  /// @brief Method get_texture, addr 0x695e9c8, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_texture();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::VisibleReflectionProbe>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::VisibleReflectionProbe>* i___System__IEquatable_1___UnityEngine__Rendering__VisibleReflectionProbe_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisibleReflectionProbe();

  // Ctor Parameters [CppParam { name: "m_Bounds", ty: "::UnityEngine::Bounds", modifiers: "", def_value: None }, CppParam { name: "m_LocalToWorldMatrix", ty: "::UnityEngine::Matrix4x4", modifiers:
  // "", def_value: None }, CppParam { name: "m_HdrData", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "m_Center", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "m_BlendDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Importance", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "m_BoxProjection", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_InstanceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_TextureId", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr VisibleReflectionProbe(::UnityEngine::Bounds m_Bounds, ::UnityEngine::Matrix4x4 m_LocalToWorldMatrix, ::UnityEngine::Vector4 m_HdrData, ::UnityEngine::Vector3 m_Center,
                                   float_t m_BlendDistance, int32_t m_Importance, int32_t m_BoxProjection, int32_t m_InstanceId, int32_t m_TextureId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10823 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x88 };

  /// @brief Field m_Bounds, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::Bounds m_Bounds;

  /// @brief Field m_LocalToWorldMatrix, offset: 0x18, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 m_LocalToWorldMatrix;

  /// @brief Field m_HdrData, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Vector4 m_HdrData;

  /// @brief Field m_Center, offset: 0x68, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Center;

  /// @brief Field m_BlendDistance, offset: 0x74, size: 0x4, def value: None
  float_t m_BlendDistance;

  /// @brief Field m_Importance, offset: 0x78, size: 0x4, def value: None
  int32_t m_Importance;

  /// @brief Field m_BoxProjection, offset: 0x7c, size: 0x4, def value: None
  int32_t m_BoxProjection;

  /// @brief Field m_InstanceId, offset: 0x80, size: 0x4, def value: None
  int32_t m_InstanceId;

  /// @brief Field m_TextureId, offset: 0x84, size: 0x4, def value: None
  int32_t m_TextureId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_Bounds) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_LocalToWorldMatrix) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_HdrData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_Center) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_BlendDistance) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_Importance) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_BoxProjection) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_InstanceId) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_TextureId) == 0x84, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VisibleReflectionProbe, 0x88>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VisibleReflectionProbe, "UnityEngine.Rendering", "VisibleReflectionProbe");
