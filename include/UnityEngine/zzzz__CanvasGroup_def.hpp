#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CanvasGroup)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class ICanvasRaycastFilter;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class CanvasGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CanvasGroup);
// Type: UnityEngine::CanvasGroup
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10187))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15666))
// CS Name: ::UnityEngine::CanvasGroup*
class CORDL_TYPE CanvasGroup : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_alpha, put = set_alpha)) float_t alpha;

  __declspec(property(get = get_interactable, put = set_interactable)) bool interactable;

  __declspec(property(get = get_blocksRaycasts, put = set_blocksRaycasts)) bool blocksRaycasts;

  __declspec(property(get = get_ignoreParentGroups, put = set_ignoreParentGroups)) bool ignoreParentGroups;

  /// @brief Convert operator to "::UnityEngine::ICanvasRaycastFilter"
  constexpr operator ::UnityEngine::ICanvasRaycastFilter*() noexcept;

  /// @brief Method get_alpha, addr 0x2eab730, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_alpha();

  /// @brief Method set_alpha, addr 0x2eab76c, size 0x4c, virtual false, abstract: false, final false
  inline void set_alpha(float_t value);

  /// @brief Method get_interactable, addr 0x2eab7b8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_interactable();

  /// @brief Method set_interactable, addr 0x2eab7f4, size 0x44, virtual false, abstract: false, final false
  inline void set_interactable(bool value);

  /// @brief Method get_blocksRaycasts, addr 0x2eab838, size 0x3c, virtual false, abstract: false, final false
  inline bool get_blocksRaycasts();

  /// @brief Method set_blocksRaycasts, addr 0x2eab874, size 0x44, virtual false, abstract: false, final false
  inline void set_blocksRaycasts(bool value);

  /// @brief Method get_ignoreParentGroups, addr 0x2eab8b8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_ignoreParentGroups();

  /// @brief Method set_ignoreParentGroups, addr 0x2eab8f4, size 0x44, virtual false, abstract: false, final false
  inline void set_ignoreParentGroups(bool value);

  /// @brief Method IsRaycastLocationValid, addr 0x2eab938, size 0x3c, virtual true, abstract: false, final true
  inline bool IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera);

  static inline ::UnityEngine::CanvasGroup* New_ctor();

  /// @brief Method .ctor, addr 0x2eab974, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CanvasGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CanvasGroup(CanvasGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CanvasGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CanvasGroup(CanvasGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CanvasGroup();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CanvasGroup, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CanvasGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CanvasGroup*, "UnityEngine", "CanvasGroup");
