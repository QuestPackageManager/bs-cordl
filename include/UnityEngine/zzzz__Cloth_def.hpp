#pragma once
// IWYU pragma private; include "UnityEngine/Cloth.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Cloth)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Cloth;
}
// Write type traits
MARK_REF_T(::UnityEngine::Cloth*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Cloth*, "UnityEngine", "Cloth");
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Cloth
class CORDL_TYPE Cloth : public ::UnityEngine::Component {
public:
  // Declarations
  /// @brief Field <selfCollision>k__BackingField, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__selfCollision_k__BackingField, put = __cordl_internal_set__selfCollision_k__BackingField)) bool _selfCollision_k__BackingField;

  /// @brief Field <useContinuousCollision>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__useContinuousCollision_k__BackingField,
                      put = __cordl_internal_set__useContinuousCollision_k__BackingField)) float_t _useContinuousCollision_k__BackingField;

  __declspec(property(put = set_externalAcceleration)) ::UnityEngine::Vector3 externalAcceleration;

  static inline ::UnityEngine::Cloth* New_ctor();

  constexpr bool const& __cordl_internal_get__selfCollision_k__BackingField() const;

  constexpr bool& __cordl_internal_get__selfCollision_k__BackingField();

  constexpr float_t const& __cordl_internal_get__useContinuousCollision_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__useContinuousCollision_k__BackingField();

  constexpr void __cordl_internal_set__selfCollision_k__BackingField(bool value);

  constexpr void __cordl_internal_set__useContinuousCollision_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0x6a55fe8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_externalAcceleration, addr 0x6a55f0c, size 0x98, virtual false, abstract: false, final false
  inline void set_externalAcceleration(::UnityEngine::Vector3 value);

  /// @brief Method set_externalAcceleration_Injected, addr 0x6a55fa4, size 0x44, virtual false, abstract: false, final false
  static inline void set_externalAcceleration_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cloth();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Cloth", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cloth(Cloth&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cloth", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cloth(Cloth const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23360 };

  /// @brief Field <useContinuousCollision>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t ____useContinuousCollision_k__BackingField;

  /// @brief Field <selfCollision>k__BackingField, offset: 0x1c, size: 0x1, def value: None
  bool ____selfCollision_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Cloth, ____useContinuousCollision_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Cloth, ____selfCollision_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Cloth) == 0x20, "Size mismatch!");

} // namespace UnityEngine
