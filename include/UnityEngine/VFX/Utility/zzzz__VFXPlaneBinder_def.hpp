#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXPlaneBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXSpaceableBinder_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VFXPlaneBinder)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXPlaneBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXPlaneBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXPlaneBinder*, "UnityEngine.VFX.Utility", "VFXPlaneBinder");
// Dependencies UnityEngine.VFX.Utility.VFXSpaceableBinder
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXPlaneBinder
class CORDL_TYPE VFXPlaneBinder : public ::UnityEngine::VFX::Utility::VFXSpaceableBinder {
public:
  // Declarations
  /// @brief Field Normal, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Normal, put = __cordl_internal_set_Normal)) ::UnityEngine::VFX::Utility::ExposedProperty* Normal;

  /// @brief Field Position, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Position, put = __cordl_internal_set_Position)) ::UnityEngine::VFX::Utility::ExposedProperty* Position;

  __declspec(property(get = get_Property, put = set_Property)) ::StringW Property;

  /// @brief Field Target, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Target, put = __cordl_internal_set_Target)) ::UnityW<::UnityEngine::Transform> Target;

  /// @brief Field m_Property, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Property, put = __cordl_internal_set_m_Property)) ::UnityEngine::VFX::Utility::ExposedProperty* m_Property;

  /// @brief Method IsValid, addr 0x69e6144, size 0xcc, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXPlaneBinder* New_ctor();

  /// @brief Method OnEnable, addr 0x69e6128, size 0x18, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x69e6140, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method ToString, addr 0x69e6434, size 0xfc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x69e6210, size 0xb0, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  /// @brief Method UpdateSubProperties, addr 0x69e6080, size 0xa8, virtual false, abstract: false, final false
  inline void UpdateSubProperties();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_Normal() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_Normal();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_Position() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_Position();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Target() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Target();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_Property() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_Property();

  constexpr void __cordl_internal_set_Normal(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_Position(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_Target(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_Property(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69e6530, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Property, addr 0x69e6040, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_Property();

  /// @brief Method set_Property, addr 0x69e6058, size 0x28, virtual false, abstract: false, final false
  inline void set_Property(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXPlaneBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXPlaneBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXPlaneBinder(VFXPlaneBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXPlaneBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXPlaneBinder(VFXPlaneBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20000 };

  /// @brief Field m_Property, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_Property;

  /// @brief Field Target, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___Target;

  /// @brief Field Position, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___Position;

  /// @brief Field Normal, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___Normal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXPlaneBinder, ___m_Property) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXPlaneBinder, ___Target) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXPlaneBinder, ___Position) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXPlaneBinder, ___Normal) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXPlaneBinder) == 0x50, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
