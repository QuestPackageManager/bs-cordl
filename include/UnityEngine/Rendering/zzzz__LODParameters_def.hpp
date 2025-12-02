#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LODParameters)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LODParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LODParameters);
// Dependencies UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LODParameters
struct CORDL_TYPE LODParameters {
public:
  // Declarations
  __declspec(property(get = get_cameraPosition)) ::UnityEngine::Vector3 cameraPosition;

  __declspec(property(get = get_fieldOfView)) float_t fieldOfView;

  __declspec(property(get = get_isOrthographic)) bool isOrthographic;

  __declspec(property(get = get_orthoSize)) float_t orthoSize;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>*();

  /// @brief Method Equals, addr 0x68ed9c4, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x68eb9a0, size 0xd0, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::LODParameters other);

  /// @brief Method GetHashCode, addr 0x68ebddc, size 0x9c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_cameraPosition, addr 0x68ed9a8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_cameraPosition();

  /// @brief Method get_fieldOfView, addr 0x68ed9b4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fieldOfView();

  /// @brief Method get_isOrthographic, addr 0x68ed948, size 0x60, virtual false, abstract: false, final false
  inline bool get_isOrthographic();

  /// @brief Method get_orthoSize, addr 0x68ed9bc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_orthoSize();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>* i___System__IEquatable_1___UnityEngine__Rendering__LODParameters_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LODParameters();

  // Ctor Parameters [CppParam { name: "m_IsOrthographic", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CameraPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
  // None }, CppParam { name: "m_FieldOfView", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_OrthoSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_CameraPixelHeight", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LODParameters(int32_t m_IsOrthographic, ::UnityEngine::Vector3 m_CameraPosition, float_t m_FieldOfView, float_t m_OrthoSize, int32_t m_CameraPixelHeight) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10784 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field m_IsOrthographic, offset: 0x0, size: 0x4, def value: None
  int32_t m_IsOrthographic;

  /// @brief Field m_CameraPosition, offset: 0x4, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_CameraPosition;

  /// @brief Field m_FieldOfView, offset: 0x10, size: 0x4, def value: None
  float_t m_FieldOfView;

  /// @brief Field m_OrthoSize, offset: 0x14, size: 0x4, def value: None
  float_t m_OrthoSize;

  /// @brief Field m_CameraPixelHeight, offset: 0x18, size: 0x4, def value: None
  int32_t m_CameraPixelHeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LODParameters, m_IsOrthographic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODParameters, m_CameraPosition) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODParameters, m_FieldOfView) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODParameters, m_OrthoSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODParameters, m_CameraPixelHeight) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LODParameters, 0x1c>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LODParameters, "UnityEngine.Rendering", "LODParameters");
