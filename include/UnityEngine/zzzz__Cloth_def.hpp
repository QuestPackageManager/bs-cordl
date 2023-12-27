#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Cloth)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Cloth;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Cloth);
// Type: UnityEngine::Cloth
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10238))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16181))
// CS Name: ::UnityEngine::Cloth*
class CORDL_TYPE Cloth : public ::UnityEngine::Component {
public:
  // Declarations
  /// @brief Field <useContinuousCollision>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__useContinuousCollision_k__BackingField, put = __set__useContinuousCollision_k__BackingField)) float_t _useContinuousCollision_k__BackingField;

  /// @brief Field <selfCollision>k__BackingField, offset 0x1c, size 0x1
  __declspec(property(get = __get__selfCollision_k__BackingField, put = __set__selfCollision_k__BackingField)) bool _selfCollision_k__BackingField;

  __declspec(property(put = set_externalAcceleration))::UnityEngine::Vector3 externalAcceleration;

  constexpr float_t& __get__useContinuousCollision_k__BackingField();

  constexpr float_t const& __get__useContinuousCollision_k__BackingField() const;

  constexpr void __set__useContinuousCollision_k__BackingField(float_t value);

  constexpr bool& __get__selfCollision_k__BackingField();

  constexpr bool const& __get__selfCollision_k__BackingField() const;

  constexpr void __set__selfCollision_k__BackingField(bool value);

  /// @brief Method set_externalAcceleration addr 0x2c9d454 size 0x54 virtual false final false
  inline void set_externalAcceleration(::UnityEngine::Vector3 value);

  /// @brief Method set_externalAcceleration_Injected addr 0x2c9d4a8 size 0x44 virtual false final false
  inline void set_externalAcceleration_Injected(ByRef<::UnityEngine::Vector3> value);

  // Ctor Parameters [CppParam { name: "", ty: "Cloth", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cloth(Cloth&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cloth", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cloth(Cloth const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cloth();

public:
  /// @brief Field <useContinuousCollision>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t ____useContinuousCollision_k__BackingField;

  /// @brief Field <selfCollision>k__BackingField, offset: 0x1c, size: 0x1, def value: None
  bool ____selfCollision_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Cloth, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Cloth);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Cloth*, "UnityEngine", "Cloth");
