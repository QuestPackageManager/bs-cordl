#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SaberModelContainer)
namespace GlobalNamespace {
class SaberModelController;
}
namespace GlobalNamespace {
class Saber;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberModelContainer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberModelContainer);
// Type: ::SaberModelContainer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SaberModelContainer*
class CORDL_TYPE SaberModelContainer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _container, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container))::Zenject::DiContainer* _container;

  /// @brief Field _saber, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__saber, put = __cordl_internal_set__saber))::UnityW<::GlobalNamespace::Saber> _saber;

  /// @brief Field _saberModelControllerPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__saberModelControllerPrefab,
                      put = __cordl_internal_set__saberModelControllerPrefab))::UnityW<::GlobalNamespace::SaberModelController> _saberModelControllerPrefab;

  static inline ::GlobalNamespace::SaberModelContainer* New_ctor();

  /// @brief Method Start, addr 0x24f9dbc, size 0x84, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr ::UnityW<::GlobalNamespace::Saber> const& __cordl_internal_get__saber() const;

  constexpr ::UnityW<::GlobalNamespace::Saber>& __cordl_internal_get__saber();

  constexpr ::UnityW<::GlobalNamespace::SaberModelController> const& __cordl_internal_get__saberModelControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::SaberModelController>& __cordl_internal_get__saberModelControllerPrefab();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__saber(::UnityW<::GlobalNamespace::Saber> value);

  constexpr void __cordl_internal_set__saberModelControllerPrefab(::UnityW<::GlobalNamespace::SaberModelController> value);

  /// @brief Method .ctor, addr 0x24fa130, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _saber, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Saber> ____saber;

  /// @brief Field _saberModelControllerPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberModelController> ____saberModelControllerPrefab;

  /// @brief Field _container, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberModelContainer, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberModelContainer, ____saber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberModelContainer, ____saberModelControllerPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberModelContainer, ____container) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberModelContainer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberModelContainer*, "", "SaberModelContainer");
