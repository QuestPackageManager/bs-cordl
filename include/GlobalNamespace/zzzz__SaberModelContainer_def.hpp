#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberModelContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SaberModelContainer)
namespace GlobalNamespace {
class SaberModelContainer_InitData;
}
namespace GlobalNamespace {
class SaberModelController;
}
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
struct Color;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberModelContainer;
}
namespace GlobalNamespace {
class SaberModelContainer_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberModelContainer);
MARK_REF_PTR_T(::GlobalNamespace::SaberModelContainer_InitData);
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaberModelContainer/InitData
class CORDL_TYPE SaberModelContainer_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field trailTintColor, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_trailTintColor, put = __cordl_internal_set_trailTintColor)) ::UnityEngine::Color trailTintColor;

  static inline ::GlobalNamespace::SaberModelContainer_InitData* New_ctor();

  static inline ::GlobalNamespace::SaberModelContainer_InitData* New_ctor(::UnityEngine::Color trailTintColor);

  constexpr ::UnityEngine::Color const& __cordl_internal_get_trailTintColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_trailTintColor();

  constexpr void __cordl_internal_set_trailTintColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x3bf93d8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3bf93f8, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color trailTintColor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberModelContainer_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaberModelContainer_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberModelContainer_InitData(SaberModelContainer_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberModelContainer_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberModelContainer_InitData(SaberModelContainer_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4661 };

  /// @brief Field trailTintColor, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ___trailTintColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaberModelContainer_InitData, ___trailTintColor) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberModelContainer_InitData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaberModelContainer
class CORDL_TYPE SaberModelContainer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::SaberModelContainer_InitData;

  /// @brief Field _container, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _initData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::SaberModelContainer_InitData* _initData;

  /// @brief Field _saber, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__saber, put = __cordl_internal_set__saber)) ::UnityW<::GlobalNamespace::Saber> _saber;

  /// @brief Field _saberModelControllerPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__saberModelControllerPrefab, put = __cordl_internal_set__saberModelControllerPrefab)) ::UnityW<::GlobalNamespace::SaberModelController>
      _saberModelControllerPrefab;

  static inline ::GlobalNamespace::SaberModelContainer* New_ctor();

  /// @brief Method Start, addr 0x3bf9150, size 0x94, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::GlobalNamespace::SaberModelContainer_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::SaberModelContainer_InitData*& __cordl_internal_get__initData();

  constexpr ::UnityW<::GlobalNamespace::Saber> const& __cordl_internal_get__saber() const;

  constexpr ::UnityW<::GlobalNamespace::Saber>& __cordl_internal_get__saber();

  constexpr ::UnityW<::GlobalNamespace::SaberModelController> const& __cordl_internal_get__saberModelControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::SaberModelController>& __cordl_internal_get__saberModelControllerPrefab();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::SaberModelContainer_InitData* value);

  constexpr void __cordl_internal_set__saber(::UnityW<::GlobalNamespace::Saber> value);

  constexpr void __cordl_internal_set__saberModelControllerPrefab(::UnityW<::GlobalNamespace::SaberModelController> value);

  /// @brief Method .ctor, addr 0x3bf9370, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberModelContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaberModelContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberModelContainer(SaberModelContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberModelContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberModelContainer(SaberModelContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4662 };

  /// @brief Field _saber, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Saber> ____saber;

  /// @brief Field _saberModelControllerPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberModelController> ____saberModelControllerPrefab;

  /// @brief Field _container, offset: 0x30, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _initData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SaberModelContainer_InitData* ____initData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaberModelContainer, ____saber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberModelContainer, ____saberModelControllerPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberModelContainer, ____container) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberModelContainer, ____initData) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberModelContainer, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberModelContainer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberModelContainer*, "", "SaberModelContainer");
NEED_NO_BOX(::GlobalNamespace::SaberModelContainer_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberModelContainer_InitData*, "", "SaberModelContainer/InitData");
