#pragma once
// IWYU pragma private; include "GlobalNamespace/ScreenBackButtonAnimationController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenBackButtonAnimationController)
namespace GlobalNamespace {
struct ScreenBackButtonAnimationController_AnimationType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
struct ScreenBackButtonAnimationController_AnimationType;
}
namespace GlobalNamespace {
class ScreenBackButtonAnimationController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScreenBackButtonAnimationController_AnimationType);
MARK_REF_PTR_T(::GlobalNamespace::ScreenBackButtonAnimationController);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ScreenBackButtonAnimationController/AnimationType
struct CORDL_TYPE ScreenBackButtonAnimationController_AnimationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScreenBackButtonAnimationController_AnimationType_Unwrapped
  enum struct __ScreenBackButtonAnimationController_AnimationType_Unwrapped : int32_t {
    __E_FadeIn = static_cast<int32_t>(0x0),
    __E_FadeOut = static_cast<int32_t>(0x1),
    __E_MoveIn = static_cast<int32_t>(0x2),
    __E_MoveOut = static_cast<int32_t>(0x3),
    __E_MoveIn2 = static_cast<int32_t>(0x4),
    __E_MoveOut2 = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScreenBackButtonAnimationController_AnimationType_Unwrapped() const noexcept {
    return static_cast<__ScreenBackButtonAnimationController_AnimationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenBackButtonAnimationController_AnimationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScreenBackButtonAnimationController_AnimationType(int32_t value__) noexcept;

  /// @brief Field FadeIn value: I32(0)
  static ::GlobalNamespace::ScreenBackButtonAnimationController_AnimationType const FadeIn;

  /// @brief Field FadeOut value: I32(1)
  static ::GlobalNamespace::ScreenBackButtonAnimationController_AnimationType const FadeOut;

  /// @brief Field MoveIn value: I32(2)
  static ::GlobalNamespace::ScreenBackButtonAnimationController_AnimationType const MoveIn;

  /// @brief Field MoveIn2 value: I32(4)
  static ::GlobalNamespace::ScreenBackButtonAnimationController_AnimationType const MoveIn2;

  /// @brief Field MoveOut value: I32(3)
  static ::GlobalNamespace::ScreenBackButtonAnimationController_AnimationType const MoveOut;

  /// @brief Field MoveOut2 value: I32(5)
  static ::GlobalNamespace::ScreenBackButtonAnimationController_AnimationType const MoveOut2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16778 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenBackButtonAnimationController_AnimationType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenBackButtonAnimationController_AnimationType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenBackButtonAnimationController
class CORDL_TYPE ScreenBackButtonAnimationController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AnimationType = ::GlobalNamespace::ScreenBackButtonAnimationController_AnimationType;

  /// @brief Field _animationHashes, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__animationHashes,
      put = __cordl_internal_set__animationHashes)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ScreenBackButtonAnimationController_AnimationType, int32_t>* _animationHashes;

  /// @brief Field _animator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator)) ::UnityW<::UnityEngine::Animator> _animator;

  /// @brief Method Awake, addr 0x2282888, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::ScreenBackButtonAnimationController* New_ctor();

  /// @brief Method StartAnimation, addr 0x22828a8, size 0x70, virtual false, abstract: false, final false
  inline void StartAnimation(::GlobalNamespace::ScreenBackButtonAnimationController_AnimationType animationType);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ScreenBackButtonAnimationController_AnimationType, int32_t>* const& __cordl_internal_get__animationHashes() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ScreenBackButtonAnimationController_AnimationType, int32_t>*& __cordl_internal_get__animationHashes();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator();

  constexpr void __cordl_internal_set__animationHashes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ScreenBackButtonAnimationController_AnimationType, int32_t>* value);

  constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value);

  /// @brief Method .ctor, addr 0x2282918, size 0x1e0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenBackButtonAnimationController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenBackButtonAnimationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenBackButtonAnimationController(ScreenBackButtonAnimationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenBackButtonAnimationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenBackButtonAnimationController(ScreenBackButtonAnimationController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16779 };

  /// @brief Field _animator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____animator;

  /// @brief Field _animationHashes, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ScreenBackButtonAnimationController_AnimationType, int32_t>* ____animationHashes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenBackButtonAnimationController, ____animator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenBackButtonAnimationController, ____animationHashes) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenBackButtonAnimationController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenBackButtonAnimationController_AnimationType, "", "ScreenBackButtonAnimationController/AnimationType");
NEED_NO_BOX(::GlobalNamespace::ScreenBackButtonAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenBackButtonAnimationController*, "", "ScreenBackButtonAnimationController");
