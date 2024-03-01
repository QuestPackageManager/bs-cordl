#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tweening/zzzz__Tween_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorTween)
namespace GlobalNamespace {
struct EaseType;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
struct Color;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue> class StaticMemoryPool_7;
}
// Forward declare root types
namespace Tweening {
class ColorTween;
}
// Write type traits
MARK_REF_PTR_T(::Tweening::ColorTween);
// Type: Tweening::ColorTween
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Tweening {
// Is value type: false
// CS Name: ::Tweening::ColorTween*
class CORDL_TYPE ColorTween : public ::Tweening::Tween_1<::UnityEngine::Color> {
public:
  // Declarations
  /// @brief Field Pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pool, put = setStaticF_Pool))::Zenject::StaticMemoryPool_7<::UnityEngine::Color, ::UnityEngine::Color, ::System::Action_1<::UnityEngine::Color>*, float_t,
                                                                                                         ::GlobalNamespace::EaseType, float_t, ::Tweening::ColorTween*>* Pool;

  /// @brief Method GetValue, addr 0x2af8e94, size 0x48, virtual true, abstract: false, final false
  inline ::UnityEngine::Color GetValue(float_t t);

  static inline ::Tweening::ColorTween* New_ctor();

  static inline ::Tweening::ColorTween* New_ctor(::UnityEngine::Color fromValue, ::UnityEngine::Color toValue, ::System::Action_1<::UnityEngine::Color>* onUpdate, float_t duration,
                                                 ::GlobalNamespace::EaseType easeType, float_t delay);

  /// @brief Method .ctor, addr 0x2af8d7c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2af8dc4, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color fromValue, ::UnityEngine::Color toValue, ::System::Action_1<::UnityEngine::Color>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType,
                    float_t delay);

  static inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Color, ::UnityEngine::Color, ::System::Action_1<::UnityEngine::Color>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                              ::Tweening::ColorTween*>*
  getStaticF_Pool();

  static inline void setStaticF_Pool(::Zenject::StaticMemoryPool_7<::UnityEngine::Color, ::UnityEngine::Color, ::System::Action_1<::UnityEngine::Color>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                                                   ::Tweening::ColorTween*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorTween();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorTween", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorTween(ColorTween&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorTween", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorTween(ColorTween const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tweening::ColorTween, 0x70>, "Size mismatch!");

} // namespace Tweening
NEED_NO_BOX(::Tweening::ColorTween);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::ColorTween*, "Tweening", "ColorTween");
