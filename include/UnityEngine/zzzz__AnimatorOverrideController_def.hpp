#pragma once
// IWYU pragma private; include "UnityEngine/AnimatorOverrideController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
CORDL_MODULE_EXPORT(AnimatorOverrideController)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class AnimatorOverrideController_OnOverrideControllerDirtyCallback;
}
namespace UnityEngine {
class RuntimeAnimatorController;
}
// Forward declare root types
namespace UnityEngine {
class AnimatorOverrideController;
}
namespace UnityEngine {
class AnimatorOverrideController_OnOverrideControllerDirtyCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AnimatorOverrideController);
MARK_REF_PTR_T(::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback);
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
class CORDL_TYPE AnimatorOverrideController_OnOverrideControllerDirtyCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x68755e4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x687557c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorOverrideController_OnOverrideControllerDirtyCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimatorOverrideController_OnOverrideControllerDirtyCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimatorOverrideController_OnOverrideControllerDirtyCallback(AnimatorOverrideController_OnOverrideControllerDirtyCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimatorOverrideController_OnOverrideControllerDirtyCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimatorOverrideController_OnOverrideControllerDirtyCallback(AnimatorOverrideController_OnOverrideControllerDirtyCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19998 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.RuntimeAnimatorController
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AnimatorOverrideController
class CORDL_TYPE AnimatorOverrideController : public ::UnityEngine::RuntimeAnimatorController {
public:
  // Declarations
  using OnOverrideControllerDirtyCallback = ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback;

  /// @brief Field OnOverrideControllerDirty, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_OnOverrideControllerDirty,
                      put = __cordl_internal_set_OnOverrideControllerDirty)) ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* OnOverrideControllerDirty;

  /// @brief Method ApplyOverrides, addr 0x6875330, size 0x224, virtual false, abstract: false, final false
  inline void
  ApplyOverrides(::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::AnimationClip>, ::UnityW<::UnityEngine::AnimationClip>>>* overrides);

  /// @brief Method Internal_Create, addr 0x6875054, size 0x90, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::AnimatorOverrideController* self, ::UnityEngine::RuntimeAnimatorController* controller);

  /// @brief Method Internal_Create_Injected, addr 0x68750e4, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_Create_Injected(::UnityEngine::AnimatorOverrideController* self, ::System::IntPtr controller);

  static inline ::UnityEngine::AnimatorOverrideController* New_ctor(::UnityEngine::RuntimeAnimatorController* controller);

  /// @brief Method OnInvalidateOverrideController, addr 0x6875554, size 0x28, virtual false, abstract: false, final false
  static inline void OnInvalidateOverrideController(::UnityEngine::AnimatorOverrideController* controller);

  /// @brief Method SendNotification, addr 0x6875274, size 0x80, virtual false, abstract: false, final false
  inline void SendNotification();

  /// @brief Method SendNotification_Injected, addr 0x68752f4, size 0x3c, virtual false, abstract: false, final false
  static inline void SendNotification_Injected(::System::IntPtr _unity_self);

  /// @brief Method SetClip, addr 0x6875128, size 0xf0, virtual false, abstract: false, final false
  inline void SetClip(::UnityEngine::AnimationClip* originalClip, ::UnityEngine::AnimationClip* overrideClip, bool notify);

  /// @brief Method SetClip_Injected, addr 0x6875218, size 0x5c, virtual false, abstract: false, final false
  static inline void SetClip_Injected(::System::IntPtr _unity_self, ::System::IntPtr originalClip, ::System::IntPtr overrideClip, bool notify);

  constexpr ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* const& __cordl_internal_get_OnOverrideControllerDirty() const;

  constexpr ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*& __cordl_internal_get_OnOverrideControllerDirty();

  constexpr void __cordl_internal_set_OnOverrideControllerDirty(::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* value);

  /// @brief Method .ctor, addr 0x6874fcc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::RuntimeAnimatorController* controller);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorOverrideController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimatorOverrideController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimatorOverrideController(AnimatorOverrideController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimatorOverrideController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimatorOverrideController(AnimatorOverrideController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19999 };

  /// @brief Field OnOverrideControllerDirty, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* ___OnOverrideControllerDirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AnimatorOverrideController, ___OnOverrideControllerDirty) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorOverrideController, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AnimatorOverrideController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorOverrideController*, "UnityEngine", "AnimatorOverrideController");
NEED_NO_BOX(::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*, "UnityEngine", "AnimatorOverrideController/OnOverrideControllerDirtyCallback");
