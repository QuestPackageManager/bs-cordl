#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastResult)
namespace UnityEngine::EventSystems {
class BaseRaycaster;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
// Write type traits
MARK_VAL_T(::UnityEngine::EventSystems::RaycastResult);
// Type: UnityEngine.EventSystems::RaycastResult
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13213))
// CS Name: ::UnityEngine.EventSystems::RaycastResult
struct CORDL_TYPE RaycastResult {
public:
  // Declarations
  __declspec(property(get = get_gameObject, put = set_gameObject))::UnityEngine::GameObject* gameObject;

  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Method get_gameObject, addr 0x2da13fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_gameObject();

  /// @brief Method set_gameObject, addr 0x2da1404, size 0x8, virtual false, abstract: false, final false
  inline void set_gameObject(::UnityEngine::GameObject* value);

  /// @brief Method get_isValid, addr 0x2da140c, size 0x98, virtual false, abstract: false, final false
  inline bool get_isValid();

  /// @brief Method Clear, addr 0x2da14a4, size 0xa4, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ToString, addr 0x2d96204, size 0x6d8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "m_GameObject", ty: "::UnityEngine::GameObject*", modifiers: "", def_value: None }, CppParam { name: "module", ty: "::UnityEngine::EventSystems::BaseRaycaster*",
  // modifiers: "", def_value: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "index", ty: "float_t", modifiers: "", def_value: None }, CppParam
  // { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sortingLayer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sortingOrder", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "worldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "worldNormal", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "screenPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "displayIndex", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr RaycastResult(::UnityEngine::GameObject* m_GameObject, ::UnityEngine::EventSystems::BaseRaycaster* module, float_t distance, float_t index, int32_t depth, int32_t sortingLayer,
                          int32_t sortingOrder, ::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 worldNormal, ::UnityEngine::Vector2 screenPosition, int32_t displayIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RaycastResult();

  /// @brief Field m_GameObject, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::GameObject* m_GameObject;

  /// @brief Field module, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::EventSystems::BaseRaycaster* module;

  /// @brief Field distance, offset: 0x10, size: 0x4, def value: None
  float_t distance;

  /// @brief Field index, offset: 0x14, size: 0x4, def value: None
  float_t index;

  /// @brief Field depth, offset: 0x18, size: 0x4, def value: None
  int32_t depth;

  /// @brief Field sortingLayer, offset: 0x1c, size: 0x4, def value: None
  int32_t sortingLayer;

  /// @brief Field sortingOrder, offset: 0x20, size: 0x4, def value: None
  int32_t sortingOrder;

  /// @brief Field worldPosition, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 worldPosition;

  /// @brief Field worldNormal, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 worldNormal;

  /// @brief Field screenPosition, offset: 0x3c, size: 0x8, def value: None
  ::UnityEngine::Vector2 screenPosition;

  /// @brief Field displayIndex, offset: 0x44, size: 0x4, def value: None
  int32_t displayIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::RaycastResult, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::RaycastResult, m_GameObject) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::RaycastResult, module) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::RaycastResult, distance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::RaycastResult, index) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::RaycastResult, depth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::RaycastResult, sortingLayer) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::RaycastResult, sortingOrder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::RaycastResult, worldPosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::RaycastResult, worldNormal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::RaycastResult, screenPosition) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::RaycastResult, displayIndex) == 0x44, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::RaycastResult, "UnityEngine.EventSystems", "RaycastResult");
