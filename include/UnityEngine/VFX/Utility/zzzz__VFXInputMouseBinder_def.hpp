#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXInputMouseBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VFXInputMouseBinder)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXInputMouseBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXInputMouseBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXInputMouseBinder*, "UnityEngine.VFX.Utility", "VFXInputMouseBinder");
// Dependencies UnityEngine.VFX.Utility.VFXBinderBase, UnityEngine.Vector3
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXInputMouseBinder
class CORDL_TYPE VFXInputMouseBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
  // Declarations
  /// @brief Field CheckLeftClick, offset 0x55, size 0x1
  __declspec(property(get = __cordl_internal_get_CheckLeftClick, put = __cordl_internal_set_CheckLeftClick)) bool CheckLeftClick;

  /// @brief Field CheckRightClick, offset 0x56, size 0x1
  __declspec(property(get = __cordl_internal_get_CheckRightClick, put = __cordl_internal_set_CheckRightClick)) bool CheckRightClick;

  /// @brief Field Distance, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_Distance, put = __cordl_internal_set_Distance)) float_t Distance;

  __declspec(property(get = get_MouseLeftClickProperty, put = set_MouseLeftClickProperty)) ::StringW MouseLeftClickProperty;

  __declspec(property(get = get_MouseRightClickProperty, put = set_MouseRightClickProperty)) ::StringW MouseRightClickProperty;

  __declspec(property(get = get_PositionProperty, put = set_PositionProperty)) ::StringW PositionProperty;

  /// @brief Field SetVelocity, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get_SetVelocity, put = __cordl_internal_set_SetVelocity)) bool SetVelocity;

  /// @brief Field Target, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Target, put = __cordl_internal_set_Target)) ::UnityW<::UnityEngine::Camera> Target;

  __declspec(property(get = get_VelocityProperty, put = set_VelocityProperty)) ::StringW VelocityProperty;

  /// @brief Field m_MouseLeftClickProperty, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MouseLeftClickProperty, put = __cordl_internal_set_m_MouseLeftClickProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* m_MouseLeftClickProperty;

  /// @brief Field m_MouseRightClickProperty, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MouseRightClickProperty,
                      put = __cordl_internal_set_m_MouseRightClickProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* m_MouseRightClickProperty;

  /// @brief Field m_PositionProperty, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PositionProperty, put = __cordl_internal_set_m_PositionProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* m_PositionProperty;

  /// @brief Field m_PreviousPosition, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get_m_PreviousPosition, put = __cordl_internal_set_m_PreviousPosition)) ::UnityEngine::Vector3 m_PreviousPosition;

  /// @brief Field m_VelocityProperty, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VelocityProperty, put = __cordl_internal_set_m_VelocityProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* m_VelocityProperty;

  /// @brief Method GetMousePosition, addr 0x69dee20, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetMousePosition();

  /// @brief Method IsLeftClickPressed, addr 0x69ded40, size 0x70, virtual false, abstract: false, final false
  inline bool IsLeftClickPressed();

  /// @brief Method IsRightClickPressed, addr 0x69dedb0, size 0x70, virtual false, abstract: false, final false
  inline bool IsRightClickPressed();

  /// @brief Method IsValid, addr 0x69dea74, size 0xbc, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXInputMouseBinder* New_ctor();

  /// @brief Method ToString, addr 0x69deec0, size 0x100, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x69deb30, size 0x210, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  constexpr bool const& __cordl_internal_get_CheckLeftClick() const;

  constexpr bool& __cordl_internal_get_CheckLeftClick();

  constexpr bool const& __cordl_internal_get_CheckRightClick() const;

  constexpr bool& __cordl_internal_get_CheckRightClick();

  constexpr float_t const& __cordl_internal_get_Distance() const;

  constexpr float_t& __cordl_internal_get_Distance();

  constexpr bool const& __cordl_internal_get_SetVelocity() const;

  constexpr bool& __cordl_internal_get_SetVelocity();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_Target() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_Target();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_MouseLeftClickProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_MouseLeftClickProperty();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_MouseRightClickProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_MouseRightClickProperty();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_PositionProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_PositionProperty();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PreviousPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PreviousPosition();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_VelocityProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_VelocityProperty();

  constexpr void __cordl_internal_set_CheckLeftClick(bool value);

  constexpr void __cordl_internal_set_CheckRightClick(bool value);

  constexpr void __cordl_internal_set_Distance(float_t value);

  constexpr void __cordl_internal_set_SetVelocity(bool value);

  constexpr void __cordl_internal_set_Target(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_m_MouseLeftClickProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_MouseRightClickProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_PositionProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_PreviousPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_VelocityProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69defc0, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_MouseLeftClickProperty, addr 0x69de9a4, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_MouseLeftClickProperty();

  /// @brief Method get_MouseRightClickProperty, addr 0x69de9d8, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_MouseRightClickProperty();

  /// @brief Method get_PositionProperty, addr 0x69dea0c, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_PositionProperty();

  /// @brief Method get_VelocityProperty, addr 0x69dea40, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_VelocityProperty();

  /// @brief Method set_MouseLeftClickProperty, addr 0x69de9bc, size 0x1c, virtual false, abstract: false, final false
  inline void set_MouseLeftClickProperty(::StringW value);

  /// @brief Method set_MouseRightClickProperty, addr 0x69de9f0, size 0x1c, virtual false, abstract: false, final false
  inline void set_MouseRightClickProperty(::StringW value);

  /// @brief Method set_PositionProperty, addr 0x69dea24, size 0x1c, virtual false, abstract: false, final false
  inline void set_PositionProperty(::StringW value);

  /// @brief Method set_VelocityProperty, addr 0x69dea58, size 0x1c, virtual false, abstract: false, final false
  inline void set_VelocityProperty(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXInputMouseBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXInputMouseBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXInputMouseBinder(VFXInputMouseBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXInputMouseBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXInputMouseBinder(VFXInputMouseBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19962 };

  /// @brief Field m_MouseLeftClickProperty, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_MouseLeftClickProperty;

  /// @brief Field m_MouseRightClickProperty, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_MouseRightClickProperty;

  /// @brief Field m_PositionProperty, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_PositionProperty;

  /// @brief Field m_VelocityProperty, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_VelocityProperty;

  /// @brief Field Target, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___Target;

  /// @brief Field Distance, offset: 0x50, size: 0x4, def value: None
  float_t ___Distance;

  /// @brief Field SetVelocity, offset: 0x54, size: 0x1, def value: None
  bool ___SetVelocity;

  /// @brief Field CheckLeftClick, offset: 0x55, size: 0x1, def value: None
  bool ___CheckLeftClick;

  /// @brief Field CheckRightClick, offset: 0x56, size: 0x1, def value: None
  bool ___CheckRightClick;

  /// @brief Field m_PreviousPosition, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_PreviousPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputMouseBinder, ___m_MouseLeftClickProperty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputMouseBinder, ___m_MouseRightClickProperty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputMouseBinder, ___m_PositionProperty) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputMouseBinder, ___m_VelocityProperty) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputMouseBinder, ___Target) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputMouseBinder, ___Distance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputMouseBinder, ___SetVelocity) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputMouseBinder, ___CheckLeftClick) == 0x55, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputMouseBinder, ___CheckRightClick) == 0x56, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputMouseBinder, ___m_PreviousPosition) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXInputMouseBinder) == 0x68, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
