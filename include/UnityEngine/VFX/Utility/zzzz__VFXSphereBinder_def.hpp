#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXSphereBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXSpaceableBinder_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VFXSphereBinder)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class SphereCollider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXSphereBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXSphereBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXSphereBinder*, "UnityEngine.VFX.Utility", "VFXSphereBinder");
// Dependencies UnityEngine.VFX.Utility.VFXSpaceableBinder
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXSphereBinder
class CORDL_TYPE VFXSphereBinder : public ::UnityEngine::VFX::Utility::VFXSpaceableBinder {
public:
  // Declarations
  __declspec(property(get = get_Property, put = set_Property)) ::StringW Property;

  /// @brief Field Target, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Target, put = __cordl_internal_set_Target)) ::UnityW<::UnityEngine::SphereCollider> Target;

  /// @brief Field m_New_Center, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_New_Center, put = __cordl_internal_set_m_New_Center)) ::UnityEngine::VFX::Utility::ExposedProperty* m_New_Center;

  /// @brief Field m_Old_Center, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Old_Center, put = __cordl_internal_set_m_Old_Center)) ::UnityEngine::VFX::Utility::ExposedProperty* m_Old_Center;

  /// @brief Field m_Property, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Property, put = __cordl_internal_set_m_Property)) ::UnityEngine::VFX::Utility::ExposedProperty* m_Property;

  /// @brief Field m_Radius, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Radius, put = __cordl_internal_set_m_Radius)) ::UnityEngine::VFX::Utility::ExposedProperty* m_Radius;

  /// @brief Method GetSphereColliderScale, addr 0x69e21f0, size 0x14, virtual false, abstract: false, final false
  inline float_t GetSphereColliderScale(::UnityEngine::Vector3 scale);

  /// @brief Method IsValid, addr 0x69e1fbc, size 0xec, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXSphereBinder* New_ctor();

  /// @brief Method OnEnable, addr 0x69e1fa0, size 0x18, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x69e1fb8, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method ToString, addr 0x69e2204, size 0xfc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x69e20a8, size 0x148, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  /// @brief Method UpdateSubProperties, addr 0x69e1eb8, size 0xe8, virtual false, abstract: false, final false
  inline void UpdateSubProperties();

  constexpr ::UnityW<::UnityEngine::SphereCollider> const& __cordl_internal_get_Target() const;

  constexpr ::UnityW<::UnityEngine::SphereCollider>& __cordl_internal_get_Target();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_New_Center() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_New_Center();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_Old_Center() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_Old_Center();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_Property() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_Property();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_Radius() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_Radius();

  constexpr void __cordl_internal_set_Target(::UnityW<::UnityEngine::SphereCollider> value);

  constexpr void __cordl_internal_set_m_New_Center(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_Old_Center(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_Property(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_Radius(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69e2300, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Property, addr 0x69e1e78, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_Property();

  /// @brief Method set_Property, addr 0x69e1e90, size 0x28, virtual false, abstract: false, final false
  inline void set_Property(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXSphereBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXSphereBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXSphereBinder(VFXSphereBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXSphereBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXSphereBinder(VFXSphereBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19974 };

  /// @brief Field m_Property, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_Property;

  /// @brief Field Target, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SphereCollider> ___Target;

  /// @brief Field m_Old_Center, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_Old_Center;

  /// @brief Field m_New_Center, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_New_Center;

  /// @brief Field m_Radius, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_Radius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXSphereBinder, ___m_Property) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXSphereBinder, ___Target) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXSphereBinder, ___m_Old_Center) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXSphereBinder, ___m_New_Center) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXSphereBinder, ___m_Radius) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXSphereBinder) == 0x58, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
