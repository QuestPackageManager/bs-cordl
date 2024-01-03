#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenBackButtonAnimationController)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
class Animator;
}
namespace GlobalNamespace {
struct __ScreenBackButtonAnimationController__AnimationType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ScreenBackButtonAnimationController__AnimationType;
}
namespace GlobalNamespace {
class ScreenBackButtonAnimationController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType);
MARK_REF_PTR_T(::GlobalNamespace::ScreenBackButtonAnimationController);
// Type: ::AnimationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13498))
// CS Name: ::ScreenBackButtonAnimationController::AnimationType
struct CORDL_TYPE __ScreenBackButtonAnimationController__AnimationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ScreenBackButtonAnimationController__AnimationType_Unwrapped
  enum struct ____ScreenBackButtonAnimationController__AnimationType_Unwrapped : int32_t {
    __E_FadeIn = static_cast<int32_t>(0x0),
    __E_FadeOut = static_cast<int32_t>(0x1),
    __E_MoveIn = static_cast<int32_t>(0x2),
    __E_MoveOut = static_cast<int32_t>(0x3),
    __E_MoveIn2 = static_cast<int32_t>(0x4),
    __E_MoveOut2 = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ScreenBackButtonAnimationController__AnimationType_Unwrapped() const noexcept {
    return static_cast<____ScreenBackButtonAnimationController__AnimationType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScreenBackButtonAnimationController__AnimationType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScreenBackButtonAnimationController__AnimationType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field FadeIn value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType const FadeIn;

  /// @brief Field FadeOut value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType const FadeOut;

  /// @brief Field MoveIn value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType const MoveIn;

  /// @brief Field MoveOut value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType const MoveOut;

  /// @brief Field MoveIn2 value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType const MoveIn2;

  /// @brief Field MoveOut2 value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType const MoveOut2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ScreenBackButtonAnimationController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13499))
// CS Name: ::ScreenBackButtonAnimationController*
class CORDL_TYPE ScreenBackButtonAnimationController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AnimationType = ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType;

  /// @brief Field _animator, offset 0x18, size 0x8
  __declspec(property(get = __get__animator, put = __set__animator))::UnityEngine::Animator* _animator;

  /// @brief Field _animationHashes, offset 0x20, size 0x8
  __declspec(property(get = __get__animationHashes,
                      put = __set__animationHashes))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType, int32_t>* _animationHashes;

  constexpr ::UnityEngine::Animator*& __get__animator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> const& __get__animator() const;

  constexpr void __set__animator(::UnityEngine::Animator* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType, int32_t>*& __get__animationHashes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType, int32_t>*> const&
  __get__animationHashes() const;

  constexpr void __set__animationHashes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType, int32_t>* value);

  /// @brief Method Awake, addr 0x2115f54, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method StartAnimation, addr 0x2115f74, size 0x70, virtual false, abstract: false, final false
  inline void StartAnimation(::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType animationType);

  static inline ::GlobalNamespace::ScreenBackButtonAnimationController* New_ctor();

  /// @brief Method .ctor, addr 0x2115fe4, size 0x1e0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ScreenBackButtonAnimationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenBackButtonAnimationController(ScreenBackButtonAnimationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenBackButtonAnimationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenBackButtonAnimationController(ScreenBackButtonAnimationController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenBackButtonAnimationController();

public:
  /// @brief Field _animator, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Animator* ____animator;

  /// @brief Field _animationHashes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType, int32_t>* ____animationHashes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenBackButtonAnimationController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenBackButtonAnimationController, ____animator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenBackButtonAnimationController, ____animationHashes) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType, "", "ScreenBackButtonAnimationController/AnimationType");
NEED_NO_BOX(::GlobalNamespace::ScreenBackButtonAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenBackButtonAnimationController*, "", "ScreenBackButtonAnimationController");
