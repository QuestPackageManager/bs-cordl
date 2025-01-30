#pragma once
// IWYU pragma private; include "GlobalNamespace/ClothRandomFluctuation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ClothRandomFluctuation)
namespace GlobalNamespace {
class ClothRandomFluctuation_SineLayer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Cloth;
}
// Forward declare root types
namespace GlobalNamespace {
class ClothRandomFluctuation;
}
namespace GlobalNamespace {
class ClothRandomFluctuation_SineLayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ClothRandomFluctuation);
MARK_REF_PTR_T(::GlobalNamespace::ClothRandomFluctuation_SineLayer);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ClothRandomFluctuation/SineLayer
class CORDL_TYPE ClothRandomFluctuation_SineLayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field multiplier, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_multiplier, put = __cordl_internal_set_multiplier)) float_t multiplier;

  /// @brief Field offset, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset)) float_t offset;

  static inline ::GlobalNamespace::ClothRandomFluctuation_SineLayer* New_ctor();

  constexpr float_t const& __cordl_internal_get_multiplier() const;

  constexpr float_t& __cordl_internal_get_multiplier();

  constexpr float_t const& __cordl_internal_get_offset() const;

  constexpr float_t& __cordl_internal_get_offset();

  constexpr void __cordl_internal_set_multiplier(float_t value);

  constexpr void __cordl_internal_set_offset(float_t value);

  /// @brief Method .ctor, addr 0x3acd850, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClothRandomFluctuation_SineLayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClothRandomFluctuation_SineLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClothRandomFluctuation_SineLayer(ClothRandomFluctuation_SineLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClothRandomFluctuation_SineLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClothRandomFluctuation_SineLayer(ClothRandomFluctuation_SineLayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3976 };

  /// @brief Field multiplier, offset: 0x10, size: 0x4, def value: None
  float_t ___multiplier;

  /// @brief Field offset, offset: 0x14, size: 0x4, def value: None
  float_t ___offset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation_SineLayer, ___multiplier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation_SineLayer, ___offset) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ClothRandomFluctuation_SineLayer, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ClothRandomFluctuation
class CORDL_TYPE ClothRandomFluctuation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using SineLayer = ::GlobalNamespace::ClothRandomFluctuation_SineLayer;

  /// @brief Field _cloth, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cloth, put = __cordl_internal_set__cloth)) ::UnityW<::UnityEngine::Cloth> _cloth;

  /// @brief Field _compoundSins, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__compoundSins,
                      put = __cordl_internal_set__compoundSins)) ::System::Collections::Generic::List_1<::GlobalNamespace::ClothRandomFluctuation_SineLayer*>* _compoundSins;

  /// @brief Field _externalFluctuations, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get__externalFluctuations, put = __cordl_internal_set__externalFluctuations)) ::UnityEngine::Vector3 _externalFluctuations;

  /// @brief Field _maxFluctuations, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get__maxFluctuations, put = __cordl_internal_set__maxFluctuations)) ::UnityEngine::Vector3 _maxFluctuations;

  /// @brief Field _minFluctuations, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get__minFluctuations, put = __cordl_internal_set__minFluctuations)) ::UnityEngine::Vector3 _minFluctuations;

  /// @brief Field _speed, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__speed, put = __cordl_internal_set__speed)) float_t _speed;

  /// @brief Field _useLocalExternalFluctuations, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__useLocalExternalFluctuations, put = __cordl_internal_set__useLocalExternalFluctuations)) bool _useLocalExternalFluctuations;

  /// @brief Field _useLocalRandomFluctuations, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__useLocalRandomFluctuations, put = __cordl_internal_set__useLocalRandomFluctuations)) bool _useLocalRandomFluctuations;

  /// @brief Method FluctuateCloth, addr 0x3acd5d4, size 0x170, virtual false, abstract: false, final false
  inline void FluctuateCloth(::UnityEngine::Cloth* cloth);

  /// @brief Method GetNoise, addr 0x3acd744, size 0x104, virtual false, abstract: false, final false
  inline float_t GetNoise(float_t time, float_t offset);

  static inline ::GlobalNamespace::ClothRandomFluctuation* New_ctor();

  /// @brief Method Update, addr 0x3acd5cc, size 0x8, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::Cloth> const& __cordl_internal_get__cloth() const;

  constexpr ::UnityW<::UnityEngine::Cloth>& __cordl_internal_get__cloth();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ClothRandomFluctuation_SineLayer*>* const& __cordl_internal_get__compoundSins() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ClothRandomFluctuation_SineLayer*>*& __cordl_internal_get__compoundSins();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__externalFluctuations() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__externalFluctuations();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__maxFluctuations() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__maxFluctuations();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__minFluctuations() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__minFluctuations();

  constexpr float_t const& __cordl_internal_get__speed() const;

  constexpr float_t& __cordl_internal_get__speed();

  constexpr bool const& __cordl_internal_get__useLocalExternalFluctuations() const;

  constexpr bool& __cordl_internal_get__useLocalExternalFluctuations();

  constexpr bool const& __cordl_internal_get__useLocalRandomFluctuations() const;

  constexpr bool& __cordl_internal_get__useLocalRandomFluctuations();

  constexpr void __cordl_internal_set__cloth(::UnityW<::UnityEngine::Cloth> value);

  constexpr void __cordl_internal_set__compoundSins(::System::Collections::Generic::List_1<::GlobalNamespace::ClothRandomFluctuation_SineLayer*>* value);

  constexpr void __cordl_internal_set__externalFluctuations(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__maxFluctuations(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__minFluctuations(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__speed(float_t value);

  constexpr void __cordl_internal_set__useLocalExternalFluctuations(bool value);

  constexpr void __cordl_internal_set__useLocalRandomFluctuations(bool value);

  /// @brief Method .ctor, addr 0x3acd848, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClothRandomFluctuation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClothRandomFluctuation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClothRandomFluctuation(ClothRandomFluctuation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClothRandomFluctuation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClothRandomFluctuation(ClothRandomFluctuation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3977 };

  /// @brief Field _cloth, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Cloth> ____cloth;

  /// @brief Field _useLocalExternalFluctuations, offset: 0x28, size: 0x1, def value: None
  bool ____useLocalExternalFluctuations;

  /// @brief Field _externalFluctuations, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____externalFluctuations;

  /// @brief Field _useLocalRandomFluctuations, offset: 0x38, size: 0x1, def value: None
  bool ____useLocalRandomFluctuations;

  /// @brief Field _minFluctuations, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____minFluctuations;

  /// @brief Field _maxFluctuations, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____maxFluctuations;

  /// @brief Field _compoundSins, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ClothRandomFluctuation_SineLayer*>* ____compoundSins;

  /// @brief Field _speed, offset: 0x60, size: 0x4, def value: None
  float_t ____speed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation, ____cloth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation, ____useLocalExternalFluctuations) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation, ____externalFluctuations) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation, ____useLocalRandomFluctuations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation, ____minFluctuations) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation, ____maxFluctuations) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation, ____compoundSins) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation, ____speed) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ClothRandomFluctuation, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ClothRandomFluctuation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ClothRandomFluctuation*, "", "ClothRandomFluctuation");
NEED_NO_BOX(::GlobalNamespace::ClothRandomFluctuation_SineLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ClothRandomFluctuation_SineLayer*, "", "ClothRandomFluctuation/SineLayer");
