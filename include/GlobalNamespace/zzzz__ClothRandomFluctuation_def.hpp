#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ClothRandomFluctuation)
namespace GlobalNamespace {
class __ClothRandomFluctuation__SineLayer;
}
namespace UnityEngine {
class Cloth;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ClothRandomFluctuation;
}
namespace GlobalNamespace {
class __ClothRandomFluctuation__SineLayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ClothRandomFluctuation);
MARK_REF_PTR_T(::GlobalNamespace::__ClothRandomFluctuation__SineLayer);
// Type: ::SineLayer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3993))
// CS Name: ::ClothRandomFluctuation::SineLayer*
class CORDL_TYPE __ClothRandomFluctuation__SineLayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field multiplier, offset 0x10, size 0x4
  __declspec(property(get = __get_multiplier, put = __set_multiplier)) float_t multiplier;

  /// @brief Field offset, offset 0x14, size 0x4
  __declspec(property(get = __get_offset, put = __set_offset)) float_t offset;

  constexpr float_t& __get_multiplier();

  constexpr float_t const& __get_multiplier() const;

  constexpr void __set_multiplier(float_t value);

  constexpr float_t& __get_offset();

  constexpr float_t const& __get_offset() const;

  constexpr void __set_offset(float_t value);

  static inline ::GlobalNamespace::__ClothRandomFluctuation__SineLayer* New_ctor();

  /// @brief Method .ctor addr 0x20c0eec size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ClothRandomFluctuation__SineLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ClothRandomFluctuation__SineLayer(__ClothRandomFluctuation__SineLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ClothRandomFluctuation__SineLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ClothRandomFluctuation__SineLayer(__ClothRandomFluctuation__SineLayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ClothRandomFluctuation__SineLayer();

public:
  /// @brief Field multiplier, offset: 0x10, size: 0x4, def value: None
  float_t ___multiplier;

  /// @brief Field offset, offset: 0x14, size: 0x4, def value: None
  float_t ___offset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ClothRandomFluctuation__SineLayer, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ClothRandomFluctuation__SineLayer, ___multiplier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ClothRandomFluctuation__SineLayer, ___offset) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ClothRandomFluctuation
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3994))
// CS Name: ::ClothRandomFluctuation*
class CORDL_TYPE ClothRandomFluctuation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using SineLayer = ::GlobalNamespace::__ClothRandomFluctuation__SineLayer;

  /// @brief Field _cloth, offset 0x18, size 0x8
  __declspec(property(get = __get__cloth, put = __set__cloth))::UnityEngine::Cloth* _cloth;

  /// @brief Field _useLocalExternalFluctuations, offset 0x20, size 0x1
  __declspec(property(get = __get__useLocalExternalFluctuations, put = __set__useLocalExternalFluctuations)) bool _useLocalExternalFluctuations;

  /// @brief Field _externalFluctuations, offset 0x24, size 0xc
  __declspec(property(get = __get__externalFluctuations, put = __set__externalFluctuations))::UnityEngine::Vector3 _externalFluctuations;

  /// @brief Field _useLocalRandomFluctuations, offset 0x30, size 0x1
  __declspec(property(get = __get__useLocalRandomFluctuations, put = __set__useLocalRandomFluctuations)) bool _useLocalRandomFluctuations;

  /// @brief Field _minFluctuations, offset 0x34, size 0xc
  __declspec(property(get = __get__minFluctuations, put = __set__minFluctuations))::UnityEngine::Vector3 _minFluctuations;

  /// @brief Field _maxFluctuations, offset 0x40, size 0xc
  __declspec(property(get = __get__maxFluctuations, put = __set__maxFluctuations))::UnityEngine::Vector3 _maxFluctuations;

  /// @brief Field _compoundSins, offset 0x50, size 0x8
  __declspec(property(get = __get__compoundSins, put = __set__compoundSins))::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>* _compoundSins;

  /// @brief Field _speed, offset 0x58, size 0x4
  __declspec(property(get = __get__speed, put = __set__speed)) float_t _speed;

  constexpr ::UnityEngine::Cloth*& __get__cloth();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Cloth*> const& __get__cloth() const;

  constexpr void __set__cloth(::UnityEngine::Cloth* value);

  constexpr bool& __get__useLocalExternalFluctuations();

  constexpr bool const& __get__useLocalExternalFluctuations() const;

  constexpr void __set__useLocalExternalFluctuations(bool value);

  constexpr ::UnityEngine::Vector3& __get__externalFluctuations();

  constexpr ::UnityEngine::Vector3 const& __get__externalFluctuations() const;

  constexpr void __set__externalFluctuations(::UnityEngine::Vector3 value);

  constexpr bool& __get__useLocalRandomFluctuations();

  constexpr bool const& __get__useLocalRandomFluctuations() const;

  constexpr void __set__useLocalRandomFluctuations(bool value);

  constexpr ::UnityEngine::Vector3& __get__minFluctuations();

  constexpr ::UnityEngine::Vector3 const& __get__minFluctuations() const;

  constexpr void __set__minFluctuations(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__maxFluctuations();

  constexpr ::UnityEngine::Vector3 const& __get__maxFluctuations() const;

  constexpr void __set__maxFluctuations(::UnityEngine::Vector3 value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>*& __get__compoundSins();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>*> const& __get__compoundSins() const;

  constexpr void __set__compoundSins(::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>* value);

  constexpr float_t& __get__speed();

  constexpr float_t const& __get__speed() const;

  constexpr void __set__speed(float_t value);

  /// @brief Method Update addr 0x20c0c68 size 0x8 virtual false final false
  inline void Update();

  /// @brief Method FluctuateCloth addr 0x20c0c70 size 0x170 virtual false final false
  inline void FluctuateCloth(::UnityEngine::Cloth* cloth);

  /// @brief Method GetNoise addr 0x20c0de0 size 0x104 virtual false final false
  inline float_t GetNoise(float_t time, float_t offset);

  static inline ::GlobalNamespace::ClothRandomFluctuation* New_ctor();

  /// @brief Method .ctor addr 0x20c0ee4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ClothRandomFluctuation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClothRandomFluctuation(ClothRandomFluctuation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClothRandomFluctuation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClothRandomFluctuation(ClothRandomFluctuation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClothRandomFluctuation();

public:
  /// @brief Field _cloth, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Cloth* ____cloth;

  /// @brief Field _useLocalExternalFluctuations, offset: 0x20, size: 0x1, def value: None
  bool ____useLocalExternalFluctuations;

  /// @brief Field _externalFluctuations, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____externalFluctuations;

  /// @brief Field _useLocalRandomFluctuations, offset: 0x30, size: 0x1, def value: None
  bool ____useLocalRandomFluctuations;

  /// @brief Field _minFluctuations, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____minFluctuations;

  /// @brief Field _maxFluctuations, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____maxFluctuations;

  /// @brief Field _compoundSins, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>* ____compoundSins;

  /// @brief Field _speed, offset: 0x58, size: 0x4, def value: None
  float_t ____speed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ClothRandomFluctuation, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation, ____cloth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation, ____useLocalExternalFluctuations) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation, ____externalFluctuations) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation, ____useLocalRandomFluctuations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation, ____minFluctuations) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation, ____maxFluctuations) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation, ____compoundSins) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClothRandomFluctuation, ____speed) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ClothRandomFluctuation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ClothRandomFluctuation*, "", "ClothRandomFluctuation");
NEED_NO_BOX(::GlobalNamespace::__ClothRandomFluctuation__SineLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ClothRandomFluctuation__SineLayer*, "", "ClothRandomFluctuation/SineLayer");
