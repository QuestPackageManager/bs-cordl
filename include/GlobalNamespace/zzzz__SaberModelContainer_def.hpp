#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SaberModelContainer)
namespace GlobalNamespace {
class SaberModelController;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class Saber;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5297))
// CS Name: ::SaberModelContainer*
class CORDL_TYPE SaberModelContainer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _saber, offset 0x18, size 0x8
  __declspec(property(get = __get__saber, put = __set__saber))::GlobalNamespace::Saber* _saber;

  /// @brief Field _saberModelControllerPrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__saberModelControllerPrefab, put = __set__saberModelControllerPrefab))::GlobalNamespace::SaberModelController* _saberModelControllerPrefab;

  /// @brief Field _container, offset 0x28, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  constexpr ::GlobalNamespace::Saber*& __get__saber();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> const& __get__saber() const;

  constexpr void __set__saber(::GlobalNamespace::Saber* value);

  constexpr ::GlobalNamespace::SaberModelController*& __get__saberModelControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberModelController*> const& __get__saberModelControllerPrefab() const;

  constexpr void __set__saberModelControllerPrefab(::GlobalNamespace::SaberModelController* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  /// @brief Method Start, addr 0x2264128, size 0x84, virtual false, abstract: false, final false
  inline void Start();

  static inline ::GlobalNamespace::SaberModelContainer* New_ctor();

  /// @brief Method .ctor, addr 0x226449c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SaberModelContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberModelContainer(SaberModelContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberModelContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberModelContainer(SaberModelContainer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberModelContainer();

public:
  /// @brief Field _saber, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::Saber* ____saber;

  /// @brief Field _saberModelControllerPrefab, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SaberModelController* ____saberModelControllerPrefab;

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
