#pragma once
// IWYU pragma private; include "UnityEngine/CanvasGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CanvasGroup)
namespace System {
struct IntPtr;
}
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
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CanvasGroup
class CORDL_TYPE CanvasGroup : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_alpha, put = set_alpha)) float_t alpha;

  __declspec(property(get = get_blocksRaycasts, put = set_blocksRaycasts)) bool blocksRaycasts;

  __declspec(property(get = get_ignoreParentGroups, put = set_ignoreParentGroups)) bool ignoreParentGroups;

  __declspec(property(get = get_interactable, put = set_interactable)) bool interactable;

  /// @brief Convert operator to "::UnityEngine::ICanvasRaycastFilter"
  constexpr operator ::UnityEngine::ICanvasRaycastFilter*() noexcept;

  /// @brief Method IsRaycastLocationValid, addr 0x6c1af68, size 0x4, virtual true, abstract: false, final true
  inline bool IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera);

  static inline ::UnityEngine::CanvasGroup* New_ctor();

  /// @brief Method .ctor, addr 0x6c1af6c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_alpha, addr 0x6c1a920, size 0x80, virtual false, abstract: false, final false
  inline float_t get_alpha();

  /// @brief Method get_alpha_Injected, addr 0x6c1a9a0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_alpha_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_blocksRaycasts, addr 0x6c1ac48, size 0x80, virtual false, abstract: false, final false
  inline bool get_blocksRaycasts();

  /// @brief Method get_blocksRaycasts_Injected, addr 0x6c1acc8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_blocksRaycasts_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_ignoreParentGroups, addr 0x6c1add8, size 0x80, virtual false, abstract: false, final false
  inline bool get_ignoreParentGroups();

  /// @brief Method get_ignoreParentGroups_Injected, addr 0x6c1ae58, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_ignoreParentGroups_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_interactable, addr 0x6c1aab8, size 0x80, virtual false, abstract: false, final false
  inline bool get_interactable();

  /// @brief Method get_interactable_Injected, addr 0x6c1ab38, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_interactable_Injected(::System::IntPtr _unity_self);

  /// @brief Convert to "::UnityEngine::ICanvasRaycastFilter"
  constexpr ::UnityEngine::ICanvasRaycastFilter* i___UnityEngine__ICanvasRaycastFilter() noexcept;

  /// @brief Method set_alpha, addr 0x6c1a9dc, size 0x90, virtual false, abstract: false, final false
  inline void set_alpha(float_t value);

  /// @brief Method set_alpha_Injected, addr 0x6c1aa6c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_alpha_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_blocksRaycasts, addr 0x6c1ad04, size 0x90, virtual false, abstract: false, final false
  inline void set_blocksRaycasts(bool value);

  /// @brief Method set_blocksRaycasts_Injected, addr 0x6c1ad94, size 0x44, virtual false, abstract: false, final false
  static inline void set_blocksRaycasts_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_ignoreParentGroups, addr 0x6c1ae94, size 0x90, virtual false, abstract: false, final false
  inline void set_ignoreParentGroups(bool value);

  /// @brief Method set_ignoreParentGroups_Injected, addr 0x6c1af24, size 0x44, virtual false, abstract: false, final false
  static inline void set_ignoreParentGroups_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_interactable, addr 0x6c1ab74, size 0x90, virtual false, abstract: false, final false
  inline void set_interactable(bool value);

  /// @brief Method set_interactable_Injected, addr 0x6c1ac04, size 0x44, virtual false, abstract: false, final false
  static inline void set_interactable_Injected(::System::IntPtr _unity_self, bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CanvasGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CanvasGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CanvasGroup(CanvasGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CanvasGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CanvasGroup(CanvasGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21890 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CanvasGroup, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CanvasGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CanvasGroup*, "UnityEngine", "CanvasGroup");
