#pragma once
// IWYU pragma private; include "Ice/FloorLightTile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloorLightTile)
namespace GlobalNamespace {
class MaterialPropertyBlockColorSetter;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace Ice {
class __FloorLightTile__Pool;
}
namespace System {
template <typename T> class Action_1;
}
namespace Tweening {
class ColorTween;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Ice {
class FloorLightTile;
}
namespace Ice {
class __FloorLightTile__Pool;
}
// Write type traits
MARK_REF_PTR_T(::Ice::FloorLightTile);
MARK_REF_PTR_T(::Ice::__FloorLightTile__Pool);
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Ice {
// Is value type: false
// CS Name: ::FloorLightTile::Pool*
class CORDL_TYPE __FloorLightTile__Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::Ice::FloorLightTile>> {
public:
  // Declarations
  static inline ::Ice::__FloorLightTile__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x223c68c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FloorLightTile__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FloorLightTile__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FloorLightTile__Pool(__FloorLightTile__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FloorLightTile__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FloorLightTile__Pool(__FloorLightTile__Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18811 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Ice::__FloorLightTile__Pool, 0x40>, "Size mismatch!");

} // namespace Ice
// Type: Ice::FloorLightTile
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Ice {
// Is value type: false
// CS Name: ::Ice::FloorLightTile*
class CORDL_TYPE FloorLightTile : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Pool = ::Ice::__FloorLightTile__Pool;

  /// @brief Field _colorSetter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSetter, put = __cordl_internal_set__colorSetter)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> _colorSetter;

  /// @brief Field _fadeInTween, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeInTween, put = __cordl_internal_set__fadeInTween)) ::Tweening::ColorTween* _fadeInTween;

  /// @brief Field _fadeOutTween, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeOutTween, put = __cordl_internal_set__fadeOutTween)) ::Tweening::ColorTween* _fadeOutTween;

  /// @brief Field _songTimeTweeningManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__songTimeTweeningManager, put = __cordl_internal_set__songTimeTweeningManager)) ::UnityW<::Tweening::SongTimeTweeningManager> _songTimeTweeningManager;

  /// @brief Field _tubeBloomPrePassLight, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tubeBloomPrePassLight, put = __cordl_internal_set__tubeBloomPrePassLight)) ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> _tubeBloomPrePassLight;

  /// @brief Field didFinish, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinish, put = __cordl_internal_set_didFinish)) ::System::Action_1<::UnityW<::Ice::FloorLightTile>>* didFinish;

  /// @brief Method Awake, addr 0x223c290, size 0x1e0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleFadeInTweenOnCompleted, addr 0x223c5dc, size 0x28, virtual false, abstract: false, final false
  inline void HandleFadeInTweenOnCompleted();

  /// @brief Method HandleFadeOutTweenOnCompleted, addr 0x223c604, size 0x20, virtual false, abstract: false, final false
  inline void HandleFadeOutTweenOnCompleted();

  /// @brief Method HighlightWithColor, addr 0x223c510, size 0xcc, virtual false, abstract: false, final false
  inline void HighlightWithColor(::UnityEngine::Color color, float_t fadeInDuration, float_t fadeOutDuration);

  static inline ::Ice::FloorLightTile* New_ctor();

  /// @brief Method OnDestroy, addr 0x223c470, size 0xa0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetColor, addr 0x223c624, size 0x60, virtual false, abstract: false, final false
  inline void SetColor(::UnityEngine::Color color);

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> const& __cordl_internal_get__colorSetter() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter>& __cordl_internal_get__colorSetter();

  constexpr ::Tweening::ColorTween*& __cordl_internal_get__fadeInTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __cordl_internal_get__fadeInTween() const;

  constexpr ::Tweening::ColorTween*& __cordl_internal_get__fadeOutTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __cordl_internal_get__fadeOutTween() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& __cordl_internal_get__songTimeTweeningManager() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& __cordl_internal_get__songTimeTweeningManager();

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& __cordl_internal_get__tubeBloomPrePassLight() const;

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& __cordl_internal_get__tubeBloomPrePassLight();

  constexpr ::System::Action_1<::UnityW<::Ice::FloorLightTile>>*& __cordl_internal_get_didFinish();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::Ice::FloorLightTile>>*> const& __cordl_internal_get_didFinish() const;

  constexpr void __cordl_internal_set__colorSetter(::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> value);

  constexpr void __cordl_internal_set__fadeInTween(::Tweening::ColorTween* value);

  constexpr void __cordl_internal_set__fadeOutTween(::Tweening::ColorTween* value);

  constexpr void __cordl_internal_set__songTimeTweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value);

  constexpr void __cordl_internal_set__tubeBloomPrePassLight(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value);

  constexpr void __cordl_internal_set_didFinish(::System::Action_1<::UnityW<::Ice::FloorLightTile>>* value);

  /// @brief Method .ctor, addr 0x223c684, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloorLightTile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloorLightTile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloorLightTile(FloorLightTile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloorLightTile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloorLightTile(FloorLightTile const&) = delete;

  /// @brief Field _colorSetter, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> ____colorSetter;

  /// @brief Field _tubeBloomPrePassLight, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> ____tubeBloomPrePassLight;

  /// @brief Field _songTimeTweeningManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::Tweening::SongTimeTweeningManager> ____songTimeTweeningManager;

  /// @brief Field didFinish, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::Ice::FloorLightTile>>* ___didFinish;

  /// @brief Field _fadeInTween, offset: 0x40, size: 0x8, def value: None
  ::Tweening::ColorTween* ____fadeInTween;

  /// @brief Field _fadeOutTween, offset: 0x48, size: 0x8, def value: None
  ::Tweening::ColorTween* ____fadeOutTween;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18812 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Ice::FloorLightTile, 0x50>, "Size mismatch!");

static_assert(offsetof(::Ice::FloorLightTile, ____colorSetter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTile, ____tubeBloomPrePassLight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTile, ____songTimeTweeningManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTile, ___didFinish) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTile, ____fadeInTween) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTile, ____fadeOutTween) == 0x48, "Offset mismatch!");

} // namespace Ice
NEED_NO_BOX(::Ice::FloorLightTile);
DEFINE_IL2CPP_ARG_TYPE(::Ice::FloorLightTile*, "Ice", "FloorLightTile");
NEED_NO_BOX(::Ice::__FloorLightTile__Pool);
DEFINE_IL2CPP_ARG_TYPE(::Ice::__FloorLightTile__Pool*, "Ice", "FloorLightTile/Pool");
