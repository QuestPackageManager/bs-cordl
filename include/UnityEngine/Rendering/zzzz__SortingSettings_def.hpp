#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SortingSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__DistanceMetric_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingCriteria_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SortingSettings)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct SortingCriteria;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct SortingSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SortingSettings);
// Dependencies UnityEngine.Matrix4x4, UnityEngine.Rendering.DistanceMetric, UnityEngine.Rendering.SortingCriteria, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SortingSettings
struct CORDL_TYPE SortingSettings {
public:
  // Declarations
  __declspec(property(get = get_criteria, put = set_criteria)) ::UnityEngine::Rendering::SortingCriteria criteria;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::SortingSettings>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::SortingSettings>*();

  /// @brief Method Equals, addr 0x695d888, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6955ef8, size 0x218, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::SortingSettings other);

  /// @brief Method GetHashCode, addr 0x6956268, size 0xcc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x695d810, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Camera* camera);

  /// @brief Method get_criteria, addr 0x695d878, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SortingCriteria get_criteria();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::SortingSettings>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::SortingSettings>* i___System__IEquatable_1___UnityEngine__Rendering__SortingSettings_();

  /// @brief Method set_criteria, addr 0x695d880, size 0x8, virtual false, abstract: false, final false
  inline void set_criteria(::UnityEngine::Rendering::SortingCriteria value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SortingSettings();

  // Ctor Parameters [CppParam { name: "m_WorldToCameraMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "m_CameraPosition", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "m_CustomAxis", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Criteria", ty:
  // "::UnityEngine::Rendering::SortingCriteria", modifiers: "", def_value: None }, CppParam { name: "m_DistanceMetric", ty: "::UnityEngine::Rendering::DistanceMetric", modifiers: "", def_value: None
  // }]
  constexpr SortingSettings(::UnityEngine::Matrix4x4 m_WorldToCameraMatrix, ::UnityEngine::Vector3 m_CameraPosition, ::UnityEngine::Vector3 m_CustomAxis,
                            ::UnityEngine::Rendering::SortingCriteria m_Criteria, ::UnityEngine::Rendering::DistanceMetric m_DistanceMetric) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10815 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field m_WorldToCameraMatrix, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 m_WorldToCameraMatrix;

  /// @brief Field m_CameraPosition, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_CameraPosition;

  /// @brief Field m_CustomAxis, offset: 0x4c, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_CustomAxis;

  /// @brief Field m_Criteria, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::Rendering::SortingCriteria m_Criteria;

  /// @brief Field m_DistanceMetric, offset: 0x5c, size: 0x4, def value: None
  ::UnityEngine::Rendering::DistanceMetric m_DistanceMetric;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SortingSettings, m_WorldToCameraMatrix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SortingSettings, m_CameraPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SortingSettings, m_CustomAxis) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SortingSettings, m_Criteria) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SortingSettings, m_DistanceMetric) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SortingSettings, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SortingSettings, "UnityEngine.Rendering", "SortingSettings");
