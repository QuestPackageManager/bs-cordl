#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/InstantiationParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InstantiationParameters)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct InstantiationParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters);
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
struct CORDL_TYPE InstantiationParameters {
public:
  // Declarations
  __declspec(property(get = get_InstantiateInWorldPosition)) bool InstantiateInWorldPosition;

  __declspec(property(get = get_Parent)) ::UnityW<::UnityEngine::Transform> Parent;

  __declspec(property(get = get_Position)) ::UnityEngine::Vector3 Position;

  __declspec(property(get = get_Rotation)) ::UnityEngine::Quaternion Rotation;

  __declspec(property(get = get_SetPositionRotation)) bool SetPositionRotation;

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline TObject Instantiate(TObject source);

  /// @brief Method .ctor, addr 0x479dfc4, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* parent, bool instantiateInWorldSpace);

  /// @brief Method .ctor, addr 0x479e074, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent);

  /// @brief Method get_InstantiateInWorldPosition, addr 0x479dfb4, size 0x8, virtual false, abstract: false, final false
  inline bool get_InstantiateInWorldPosition();

  /// @brief Method get_Parent, addr 0x479dfac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_Parent();

  /// @brief Method get_Position, addr 0x479df94, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_Position();

  /// @brief Method get_Rotation, addr 0x479dfa0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_Rotation();

  /// @brief Method get_SetPositionRotation, addr 0x479dfbc, size 0x8, virtual false, abstract: false, final false
  inline bool get_SetPositionRotation();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstantiationParameters();

  // Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }, CppParam { name: "m_Parent", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "m_InstantiateInWorldPosition", ty: "bool", modifiers:
  // "", def_value: None }, CppParam { name: "m_SetPositionRotation", ty: "bool", modifiers: "", def_value: None }]
  constexpr InstantiationParameters(::UnityEngine::Vector3 m_Position, ::UnityEngine::Quaternion m_Rotation, ::UnityW<::UnityEngine::Transform> m_Parent, bool m_InstantiateInWorldPosition,
                                    bool m_SetPositionRotation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15667 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_Position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Position;

  /// @brief Field m_Rotation, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion m_Rotation;

  /// @brief Field m_Parent, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> m_Parent;

  /// @brief Field m_InstantiateInWorldPosition, offset: 0x28, size: 0x1, def value: None
  bool m_InstantiateInWorldPosition;

  /// @brief Field m_SetPositionRotation, offset: 0x29, size: 0x1, def value: None
  bool m_SetPositionRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, m_Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, m_Rotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, m_Parent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, m_InstantiateInWorldPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, m_SetPositionRotation) == 0x29, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, 0x30>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, "UnityEngine.ResourceManagement.ResourceProviders", "InstantiationParameters");
