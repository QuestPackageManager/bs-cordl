#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/TransformData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TransformData)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct TransformData;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::TransformData);
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.TransformData
struct CORDL_TYPE TransformData {
public:
  // Declarations
  /// @brief Method CopyTo, addr 0x3a69654, size 0x80, virtual false, abstract: false, final false
  inline void CopyTo(::UnityEngine::Transform* other, bool copyParent);

  /// @brief Method CopyToLocal, addr 0x3a696d4, size 0x80, virtual false, abstract: false, final false
  inline void CopyToLocal(::UnityEngine::Transform* other, bool copyParent);

  /// @brief Method .ctor, addr 0x3a695bc, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* other);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformData();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "localScale", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::UnityW<::UnityEngine::Transform>",
  // modifiers: "", def_value: None }]
  constexpr TransformData(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 localPosition, ::UnityEngine::Vector3 localScale,
                          ::UnityEngine::Quaternion localRotation, ::UnityW<::UnityEngine::Transform> parent) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11810 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion rotation;

  /// @brief Field localPosition, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 localPosition;

  /// @brief Field localScale, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 localScale;

  /// @brief Field localRotation, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Quaternion localRotation;

  /// @brief Field parent, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> parent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::TransformData, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::TransformData, rotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::TransformData, localPosition) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::TransformData, localScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::TransformData, localRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::TransformData, parent) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::TransformData, 0x50>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::TransformData, "HoudiniEngineUnity", "TransformData");
