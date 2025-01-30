#pragma once
// IWYU pragma private; include "Tweening/Vector2Tween.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tweening/zzzz__Tween_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector2Tween)
namespace GlobalNamespace {
struct EaseType;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue> class StaticMemoryPool_7;
}
// Forward declare root types
namespace Tweening {
class Vector2Tween;
}
// Write type traits
MARK_REF_PTR_T(::Tweening::Vector2Tween);
// Dependencies Tweening.Tween`1<T>, UnityEngine.Vector2
namespace Tweening {
// Is value type: false
// CS Name: Tweening.Vector2Tween
class CORDL_TYPE Vector2Tween : public ::Tweening::Tween_1<::UnityEngine::Vector2> {
public:
  // Declarations
  /// @brief Field Pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pool, put = setStaticF_Pool)) ::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Action_1<::UnityEngine::Vector2>*, float_t,
                                                                                                   ::GlobalNamespace::EaseType, float_t, ::Tweening::Vector2Tween*>* Pool;

  /// @brief Method GetValue, addr 0x44dcd44, size 0x30, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 GetValue(float_t t);

  static inline ::Tweening::Vector2Tween* New_ctor();

  static inline ::Tweening::Vector2Tween* New_ctor(::UnityEngine::Vector2 fromValue, ::UnityEngine::Vector2 toValue, ::System::Action_1<::UnityEngine::Vector2>* onUpdate, float_t duration,
                                                   ::GlobalNamespace::EaseType easeType, float_t delay);

  /// @brief Method .ctor, addr 0x44dcc54, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x44dcc9c, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2 fromValue, ::UnityEngine::Vector2 toValue, ::System::Action_1<::UnityEngine::Vector2>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType,
                    float_t delay);

  static inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Action_1<::UnityEngine::Vector2>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                              ::Tweening::Vector2Tween*>*
  getStaticF_Pool();

  static inline void setStaticF_Pool(::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Action_1<::UnityEngine::Vector2>*, float_t, ::GlobalNamespace::EaseType,
                                                                   float_t, ::Tweening::Vector2Tween*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2Tween();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2Tween", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2Tween(Vector2Tween&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2Tween", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2Tween(Vector2Tween const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18664 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tweening::Vector2Tween, 0x60>, "Size mismatch!");

} // namespace Tweening
NEED_NO_BOX(::Tweening::Vector2Tween);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::Vector2Tween*, "Tweening", "Vector2Tween");
