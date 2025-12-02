#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DisallowSmallMeshCulling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisallowSmallMeshCulling)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DisallowSmallMeshCulling;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DisallowSmallMeshCulling);
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DisallowSmallMeshCulling
class CORDL_TYPE DisallowSmallMeshCulling : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_applyToChildrenRecursively, put = set_applyToChildrenRecursively)) bool applyToChildrenRecursively;

  /// @brief Field m_AppliedRecursively, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AppliedRecursively, put = __cordl_internal_set_m_AppliedRecursively)) bool m_AppliedRecursively;

  /// @brief Field m_applyToChildrenRecursively, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_m_applyToChildrenRecursively, put = __cordl_internal_set_m_applyToChildrenRecursively)) bool m_applyToChildrenRecursively;

  /// @brief Method AllowSmallMeshCulling, addr 0x65ebe64, size 0xc4, virtual false, abstract: false, final false
  static inline void AllowSmallMeshCulling(::UnityEngine::Transform* transform, bool allow);

  /// @brief Method AllowSmallMeshCullingRecursively, addr 0x65ebb30, size 0x334, virtual false, abstract: false, final false
  static inline void AllowSmallMeshCullingRecursively(::UnityEngine::Transform* transform, bool allow);

  static inline ::UnityEngine::Rendering::DisallowSmallMeshCulling* New_ctor();

  /// @brief Method OnDisable, addr 0x65ebadc, size 0x28, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x65ebb04, size 0x2c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x65ebf28, size 0x18, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr bool const& __cordl_internal_get_m_AppliedRecursively() const;

  constexpr bool& __cordl_internal_get_m_AppliedRecursively();

  constexpr bool const& __cordl_internal_get_m_applyToChildrenRecursively() const;

  constexpr bool& __cordl_internal_get_m_applyToChildrenRecursively();

  constexpr void __cordl_internal_set_m_AppliedRecursively(bool value);

  constexpr void __cordl_internal_set_m_applyToChildrenRecursively(bool value);

  /// @brief Method .ctor, addr 0x65ebf40, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_applyToChildrenRecursively, addr 0x65ebab8, size 0x8, virtual false, abstract: false, final false
  inline bool get_applyToChildrenRecursively();

  /// @brief Method set_applyToChildrenRecursively, addr 0x65ebac0, size 0x1c, virtual false, abstract: false, final false
  inline void set_applyToChildrenRecursively(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisallowSmallMeshCulling();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisallowSmallMeshCulling", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisallowSmallMeshCulling(DisallowSmallMeshCulling&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisallowSmallMeshCulling", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisallowSmallMeshCulling(DisallowSmallMeshCulling const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17551 };

  /// @brief Field m_AppliedRecursively, offset: 0x20, size: 0x1, def value: None
  bool ___m_AppliedRecursively;

  /// @brief Field m_applyToChildrenRecursively, offset: 0x21, size: 0x1, def value: None
  bool ___m_applyToChildrenRecursively;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DisallowSmallMeshCulling, ___m_AppliedRecursively) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DisallowSmallMeshCulling, ___m_applyToChildrenRecursively) == 0x21, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DisallowSmallMeshCulling, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DisallowSmallMeshCulling);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DisallowSmallMeshCulling*, "UnityEngine.Rendering", "DisallowSmallMeshCulling");
