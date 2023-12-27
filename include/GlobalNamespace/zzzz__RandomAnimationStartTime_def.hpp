#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RandomAnimationStartTime)
namespace UnityEngine {
class Animation;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomAnimationStartTime;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RandomAnimationStartTime);
// Type: ::RandomAnimationStartTime
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14376))
// CS Name: ::RandomAnimationStartTime*
class CORDL_TYPE RandomAnimationStartTime : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animation, offset 0x18, size 0x8
  __declspec(property(get = __get__animation, put = __set__animation))::UnityEngine::Animation* _animation;

  constexpr ::UnityEngine::Animation*& __get__animation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animation*> const& __get__animation() const;

  constexpr void __set__animation(::UnityEngine::Animation* value);

  /// @brief Method Start addr 0x20f39a4 size 0x2e4 virtual false final false
  inline void Start();

  static inline ::GlobalNamespace::RandomAnimationStartTime* New_ctor();

  /// @brief Method .ctor addr 0x20f3c88 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RandomAnimationStartTime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomAnimationStartTime(RandomAnimationStartTime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomAnimationStartTime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomAnimationStartTime(RandomAnimationStartTime const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RandomAnimationStartTime();

public:
  /// @brief Field _animation, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Animation* ____animation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RandomAnimationStartTime, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RandomAnimationStartTime);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomAnimationStartTime*, "", "RandomAnimationStartTime");
