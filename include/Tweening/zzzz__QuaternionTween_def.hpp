#pragma once
// IWYU pragma private; include "Tweening/QuaternionTween.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tweening/zzzz__Tween_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(QuaternionTween)
namespace GlobalNamespace {
struct EaseType;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue> class StaticMemoryPool_7;
}
// Forward declare root types
namespace Tweening {
class QuaternionTween;
}
// Write type traits
MARK_REF_PTR_T(::Tweening::QuaternionTween);
// Dependencies Tweening.Tween`1<T>, UnityEngine.Quaternion
namespace Tweening {
// Is value type: false
// CS Name: Tweening.QuaternionTween
class CORDL_TYPE QuaternionTween : public ::Tweening::Tween_1<::UnityEngine::Quaternion> {
public:
  // Declarations
  /// @brief Field Pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pool, put = setStaticF_Pool)) ::Zenject::StaticMemoryPool_7<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::Quaternion>*,
                                                                                                   float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::QuaternionTween*>* Pool;

  /// @brief Method GetValue, addr 0x44dfe94, size 0x40, virtual true, abstract: false, final false
  inline ::UnityEngine::Quaternion GetValue(float_t t);

  static inline ::Tweening::QuaternionTween* New_ctor();

  static inline ::Tweening::QuaternionTween* New_ctor(::UnityEngine::Quaternion fromValue, ::UnityEngine::Quaternion toValue, ::System::Action_1<::UnityEngine::Quaternion>* onUpdate, float_t duration,
                                                      ::GlobalNamespace::EaseType easeType, float_t delay);

  /// @brief Method .ctor, addr 0x44dfd7c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x44dfdc4, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Quaternion fromValue, ::UnityEngine::Quaternion toValue, ::System::Action_1<::UnityEngine::Quaternion>* onUpdate, float_t duration,
                    ::GlobalNamespace::EaseType easeType, float_t delay);

  static inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::Quaternion>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                              ::Tweening::QuaternionTween*>*
  getStaticF_Pool();

  static inline void setStaticF_Pool(::Zenject::StaticMemoryPool_7<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::Quaternion>*, float_t,
                                                                   ::GlobalNamespace::EaseType, float_t, ::Tweening::QuaternionTween*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuaternionTween();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuaternionTween", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuaternionTween(QuaternionTween&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuaternionTween", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuaternionTween(QuaternionTween const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18667 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tweening::QuaternionTween, 0x70>, "Size mismatch!");

} // namespace Tweening
NEED_NO_BOX(::Tweening::QuaternionTween);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::QuaternionTween*, "Tweening", "QuaternionTween");
