#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeSamplingDebugData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeSamplingDebugUpdate_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(ProbeSamplingDebugData)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeSamplingDebugData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeSamplingDebugData);
// Dependencies System.Object, UnityEngine.Rendering.ProbeSamplingDebugUpdate, UnityEngine.Vector2
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeSamplingDebugData
class CORDL_TYPE ProbeSamplingDebugData : public ::System::Object {
public:
  // Declarations
  /// @brief Field camera, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_camera, put = __cordl_internal_set_camera)) ::UnityW<::UnityEngine::Camera> camera;

  /// @brief Field coordinates, offset 0x14, size 0x8
  __declspec(property(get = __cordl_internal_get_coordinates, put = __cordl_internal_set_coordinates)) ::UnityEngine::Vector2 coordinates;

  /// @brief Field forceScreenCenterCoordinates, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_forceScreenCenterCoordinates, put = __cordl_internal_set_forceScreenCenterCoordinates)) bool forceScreenCenterCoordinates;

  /// @brief Field positionNormalBuffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_positionNormalBuffer, put = __cordl_internal_set_positionNormalBuffer)) ::UnityEngine::GraphicsBuffer* positionNormalBuffer;

  /// @brief Field shortcutPressed, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_shortcutPressed, put = __cordl_internal_set_shortcutPressed)) bool shortcutPressed;

  /// @brief Field update, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_update, put = __cordl_internal_set_update)) ::UnityEngine::Rendering::ProbeSamplingDebugUpdate update;

  static inline ::UnityEngine::Rendering::ProbeSamplingDebugData* New_ctor();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_coordinates() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_coordinates();

  constexpr bool const& __cordl_internal_get_forceScreenCenterCoordinates() const;

  constexpr bool& __cordl_internal_get_forceScreenCenterCoordinates();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_positionNormalBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_positionNormalBuffer();

  constexpr bool const& __cordl_internal_get_shortcutPressed() const;

  constexpr bool& __cordl_internal_get_shortcutPressed();

  constexpr ::UnityEngine::Rendering::ProbeSamplingDebugUpdate const& __cordl_internal_get_update() const;

  constexpr ::UnityEngine::Rendering::ProbeSamplingDebugUpdate& __cordl_internal_get_update();

  constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_coordinates(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_forceScreenCenterCoordinates(bool value);

  constexpr void __cordl_internal_set_positionNormalBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_shortcutPressed(bool value);

  constexpr void __cordl_internal_set_update(::UnityEngine::Rendering::ProbeSamplingDebugUpdate value);

  /// @brief Method .ctor, addr 0x6572d04, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeSamplingDebugData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeSamplingDebugData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeSamplingDebugData(ProbeSamplingDebugData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeSamplingDebugData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeSamplingDebugData(ProbeSamplingDebugData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12092 };

  /// @brief Field update, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeSamplingDebugUpdate ___update;

  /// @brief Field coordinates, offset: 0x14, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___coordinates;

  /// @brief Field forceScreenCenterCoordinates, offset: 0x1c, size: 0x1, def value: None
  bool ___forceScreenCenterCoordinates;

  /// @brief Field camera, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___camera;

  /// @brief Field shortcutPressed, offset: 0x28, size: 0x1, def value: None
  bool ___shortcutPressed;

  /// @brief Field positionNormalBuffer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___positionNormalBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeSamplingDebugData, ___update) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeSamplingDebugData, ___coordinates) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeSamplingDebugData, ___forceScreenCenterCoordinates) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeSamplingDebugData, ___camera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeSamplingDebugData, ___shortcutPressed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeSamplingDebugData, ___positionNormalBuffer) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeSamplingDebugData, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProbeSamplingDebugData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeSamplingDebugData*, "UnityEngine.Rendering", "ProbeSamplingDebugData");
