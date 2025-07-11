#pragma once
// IWYU pragma private; include "Tweening/Vector3Tween.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tweening/zzzz__Tween_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector3Tween)
namespace GlobalNamespace {
struct EaseType;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue> class StaticMemoryPool_7;
}
// Forward declare root types
namespace Tweening {
class Vector3Tween;
}
// Write type traits
MARK_REF_PTR_T(::Tweening::Vector3Tween);
// Dependencies Tweening.Tween`1<T>, UnityEngine.Vector3
namespace Tweening {
// Is value type: false
// CS Name: Tweening.Vector3Tween
class CORDL_TYPE Vector3Tween : public ::Tweening::Tween_1<::UnityEngine::Vector3> {
public:
  // Declarations
  /// @brief Field Pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pool, put = setStaticF_Pool)) ::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t,
                                                                                                   ::GlobalNamespace::EaseType, float_t, ::Tweening::Vector3Tween*>* Pool;

  /// @brief Method GetValue, addr 0x44db3a4, size 0x50, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetValue(float_t t);

  static inline ::Tweening::Vector3Tween* New_ctor();

  static inline ::Tweening::Vector3Tween* New_ctor(::UnityEngine::Vector3 fromValue, ::UnityEngine::Vector3 toValue, ::System::Action_1<::UnityEngine::Vector3>* onUpdate, float_t duration,
                                                   ::GlobalNamespace::EaseType easeType, float_t delay);

  /// @brief Method .ctor, addr 0x44db29c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x44db2e4, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 fromValue, ::UnityEngine::Vector3 toValue, ::System::Action_1<::UnityEngine::Vector3>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType,
                    float_t delay);

  static inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                              ::Tweening::Vector3Tween*>*
  getStaticF_Pool();

  static inline void setStaticF_Pool(::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t, ::GlobalNamespace::EaseType,
                                                                   float_t, ::Tweening::Vector3Tween*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3Tween();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3Tween", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3Tween(Vector3Tween&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3Tween", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3Tween(Vector3Tween const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18673 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tweening::Vector3Tween, 0x68>, "Size mismatch!");

} // namespace Tweening
NEED_NO_BOX(::Tweening::Vector3Tween);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::Vector3Tween*, "Tweening", "Vector3Tween");
