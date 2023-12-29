#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloorLightTile)
namespace System {
template <typename T> class Action_1;
}
namespace Tweening {
class ColorTween;
}
namespace GlobalNamespace {
class MaterialPropertyBlockColorSetter;
}
namespace UnityEngine {
struct Color;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace Ice {
class __FloorLightTile__Pool;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
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
// Type: Ice::FloorLightTile
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16008))
// CS Name: ::Ice::FloorLightTile*
class CORDL_TYPE FloorLightTile : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Pool = ::Ice::__FloorLightTile__Pool;

  /// @brief Field _colorSetter, offset 0x18, size 0x8
  __declspec(property(get = __get__colorSetter, put = __set__colorSetter))::GlobalNamespace::MaterialPropertyBlockColorSetter* _colorSetter;

  /// @brief Field _tubeBloomPrePassLight, offset 0x20, size 0x8
  __declspec(property(get = __get__tubeBloomPrePassLight, put = __set__tubeBloomPrePassLight))::GlobalNamespace::TubeBloomPrePassLight* _tubeBloomPrePassLight;

  /// @brief Field _songTimeTweeningManager, offset 0x28, size 0x8
  __declspec(property(get = __get__songTimeTweeningManager, put = __set__songTimeTweeningManager))::Tweening::SongTimeTweeningManager* _songTimeTweeningManager;

  /// @brief Field didFinish, offset 0x30, size 0x8
  __declspec(property(get = __get_didFinish, put = __set_didFinish))::System::Action_1<::Ice::FloorLightTile*>* didFinish;

  /// @brief Field _fadeInTween, offset 0x38, size 0x8
  __declspec(property(get = __get__fadeInTween, put = __set__fadeInTween))::Tweening::ColorTween* _fadeInTween;

  /// @brief Field _fadeOutTween, offset 0x40, size 0x8
  __declspec(property(get = __get__fadeOutTween, put = __set__fadeOutTween))::Tweening::ColorTween* _fadeOutTween;

  constexpr ::GlobalNamespace::MaterialPropertyBlockColorSetter*& __get__colorSetter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockColorSetter*> const& __get__colorSetter() const;

  constexpr void __set__colorSetter(::GlobalNamespace::MaterialPropertyBlockColorSetter* value);

  constexpr ::GlobalNamespace::TubeBloomPrePassLight*& __get__tubeBloomPrePassLight();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> const& __get__tubeBloomPrePassLight() const;

  constexpr void __set__tubeBloomPrePassLight(::GlobalNamespace::TubeBloomPrePassLight* value);

  constexpr ::Tweening::SongTimeTweeningManager*& __get__songTimeTweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> const& __get__songTimeTweeningManager() const;

  constexpr void __set__songTimeTweeningManager(::Tweening::SongTimeTweeningManager* value);

  constexpr ::System::Action_1<::Ice::FloorLightTile*>*& __get_didFinish();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Ice::FloorLightTile*>*> const& __get_didFinish() const;

  constexpr void __set_didFinish(::System::Action_1<::Ice::FloorLightTile*>* value);

  constexpr ::Tweening::ColorTween*& __get__fadeInTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __get__fadeInTween() const;

  constexpr void __set__fadeInTween(::Tweening::ColorTween* value);

  constexpr ::Tweening::ColorTween*& __get__fadeOutTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __get__fadeOutTween() const;

  constexpr void __set__fadeOutTween(::Tweening::ColorTween* value);

  /// @brief Method Awake addr 0x122d568 size 0x1f0 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x122d758 size 0xa0 virtual false final false
  inline void OnDestroy();

  /// @brief Method HighlightWithColor addr 0x122d7f8 size 0xcc virtual false final false
  inline void HighlightWithColor(::UnityEngine::Color color, float_t fadeInDuration, float_t fadeOutDuration);

  /// @brief Method HandleFadeInTweenOnCompleted addr 0x122d8c4 size 0x24 virtual false final false
  inline void HandleFadeInTweenOnCompleted();

  /// @brief Method HandleFadeOutTweenOnCompleted addr 0x122d8e8 size 0x20 virtual false final false
  inline void HandleFadeOutTweenOnCompleted();

  /// @brief Method SetColor addr 0x122d908 size 0x64 virtual false final false
  inline void SetColor(::UnityEngine::Color color);

  static inline ::Ice::FloorLightTile* New_ctor();

  /// @brief Method .ctor addr 0x122d96c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FloorLightTile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloorLightTile(FloorLightTile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloorLightTile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloorLightTile(FloorLightTile const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloorLightTile();

public:
  /// @brief Field _colorSetter, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockColorSetter* ____colorSetter;

  /// @brief Field _tubeBloomPrePassLight, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::TubeBloomPrePassLight* ____tubeBloomPrePassLight;

  /// @brief Field _songTimeTweeningManager, offset: 0x28, size: 0x8, def value: None
  ::Tweening::SongTimeTweeningManager* ____songTimeTweeningManager;

  /// @brief Field didFinish, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::Ice::FloorLightTile*>* ___didFinish;

  /// @brief Field _fadeInTween, offset: 0x38, size: 0x8, def value: None
  ::Tweening::ColorTween* ____fadeInTween;

  /// @brief Field _fadeOutTween, offset: 0x40, size: 0x8, def value: None
  ::Tweening::ColorTween* ____fadeOutTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Ice::FloorLightTile, 0x48>, "Size mismatch!");

static_assert(offsetof(::Ice::FloorLightTile, ____colorSetter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTile, ____tubeBloomPrePassLight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTile, ____songTimeTweeningManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTile, ___didFinish) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTile, ____fadeInTween) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTile, ____fadeOutTween) == 0x40, "Offset mismatch!");

} // namespace Ice
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16008)), TypeDefinitionIndex(TypeDefinitionIndex(10978)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10978), inst:
// 309 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(16007)) CS Name: ::FloorLightTile::Pool*
class CORDL_TYPE __FloorLightTile__Pool : public ::Zenject::MonoMemoryPool_1<::Ice::FloorLightTile*> {
public:
  // Declarations
  static inline ::Ice::__FloorLightTile__Pool* New_ctor();

  /// @brief Method .ctor addr 0x122d974 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__FloorLightTile__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FloorLightTile__Pool(__FloorLightTile__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FloorLightTile__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FloorLightTile__Pool(__FloorLightTile__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FloorLightTile__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Ice::__FloorLightTile__Pool, 0x40>, "Size mismatch!");

} // namespace Ice
NEED_NO_BOX(::Ice::FloorLightTile);
DEFINE_IL2CPP_ARG_TYPE(::Ice::FloorLightTile*, "Ice", "FloorLightTile");
NEED_NO_BOX(::Ice::__FloorLightTile__Pool);
DEFINE_IL2CPP_ARG_TYPE(::Ice::__FloorLightTile__Pool*, "Ice", "FloorLightTile/Pool");
