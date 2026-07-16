#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXTransformBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXSpaceableBinder_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VFXTransformBinder)
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
class VFXTransformBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXTransformBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXTransformBinder*, "UnityEngine.VFX.Utility", "VFXTransformBinder");
// Dependencies UnityEngine.VFX.Utility.VFXSpaceableBinder
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXTransformBinder
class CORDL_TYPE VFXTransformBinder : public ::UnityEngine::VFX::Utility::VFXSpaceableBinder {
public:
  // Declarations
  /// @brief Field Angles, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Angles, put = __cordl_internal_set_Angles)) ::UnityEngine::VFX::Utility::ExposedProperty* Angles;

  /// @brief Field Position, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Position, put = __cordl_internal_set_Position)) ::UnityEngine::VFX::Utility::ExposedProperty* Position;

  __declspec(property(get = get_Property, put = set_Property)) ::StringW Property;

  /// @brief Field Scale, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_Scale, put = __cordl_internal_set_Scale)) ::UnityEngine::VFX::Utility::ExposedProperty* Scale;

  /// @brief Field Target, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Target, put = __cordl_internal_set_Target)) ::UnityW<::UnityEngine::Transform> Target;

  /// @brief Field m_Property, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Property, put = __cordl_internal_set_m_Property)) ::UnityEngine::VFX::Utility::ExposedProperty* m_Property;

  /// @brief Method IsValid, addr 0x69e29d0, size 0xec, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXTransformBinder* New_ctor();

  /// @brief Method OnEnable, addr 0x69e29b4, size 0x18, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x69e29cc, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method ToString, addr 0x69e2b7c, size 0xfc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x69e2abc, size 0xc0, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  /// @brief Method UpdateSubProperties, addr 0x69e28cc, size 0xe8, virtual false, abstract: false, final false
  inline void UpdateSubProperties();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_Angles() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_Angles();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_Position() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_Position();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_Scale() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_Scale();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Target() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Target();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_Property() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_Property();

  constexpr void __cordl_internal_set_Angles(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_Position(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_Scale(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_Target(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_Property(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69e2c78, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Property, addr 0x69e288c, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_Property();

  /// @brief Method set_Property, addr 0x69e28a4, size 0x28, virtual false, abstract: false, final false
  inline void set_Property(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXTransformBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXTransformBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXTransformBinder(VFXTransformBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXTransformBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXTransformBinder(VFXTransformBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19976 };

  /// @brief Field m_Property, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_Property;

  /// @brief Field Target, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___Target;

  /// @brief Field Position, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___Position;

  /// @brief Field Angles, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___Angles;

  /// @brief Field Scale, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___Scale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTransformBinder, ___m_Property) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTransformBinder, ___Target) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTransformBinder, ___Position) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTransformBinder, ___Angles) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTransformBinder, ___Scale) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXTransformBinder) == 0x58, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
