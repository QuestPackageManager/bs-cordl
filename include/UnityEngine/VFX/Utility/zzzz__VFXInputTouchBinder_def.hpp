#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXInputTouchBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXInputTouchBinder)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::InputSystem::Controls {
class TouchControl;
}
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX::Utility {
class VFXInputTouchBinder___c;
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
class VFXInputTouchBinder;
}
namespace UnityEngine::VFX::Utility {
class VFXInputTouchBinder___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXInputTouchBinder*);
MARK_REF_T(::UnityEngine::VFX::Utility::VFXInputTouchBinder___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXInputTouchBinder*, "UnityEngine.VFX.Utility", "VFXInputTouchBinder");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXInputTouchBinder___c*, "UnityEngine.VFX.Utility", "VFXInputTouchBinder/<>c");
// Dependencies System.Object
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXInputTouchBinder/<>c
class CORDL_TYPE VFXInputTouchBinder___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::VFX::Utility::VFXInputTouchBinder___c* __9;

  /// @brief Field <>9__20_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_0, put = setStaticF___9__20_0)) ::System::Func_2<::UnityEngine::InputSystem::Controls::TouchControl*, bool>* __9__20_0;

  static inline ::UnityEngine::VFX::Utility::VFXInputTouchBinder___c* New_ctor();

  /// @brief Method <GetTouchCount>b__20_0, addr 0x69e5360, size 0x10, virtual false, abstract: false, final false
  inline bool _GetTouchCount_b__20_0(::UnityEngine::InputSystem::Controls::TouchControl* t);

  /// @brief Method .ctor, addr 0x69e535c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::VFX::Utility::VFXInputTouchBinder___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Controls::TouchControl*, bool>* getStaticF___9__20_0();

  static inline void setStaticF___9(::UnityEngine::VFX::Utility::VFXInputTouchBinder___c* value);

  static inline void setStaticF___9__20_0(::System::Func_2<::UnityEngine::InputSystem::Controls::TouchControl*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXInputTouchBinder___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXInputTouchBinder___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXInputTouchBinder___c(VFXInputTouchBinder___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXInputTouchBinder___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXInputTouchBinder___c(VFXInputTouchBinder___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19996 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::Utility::VFXInputTouchBinder___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
// Dependencies UnityEngine.VFX.Utility.VFXBinderBase, UnityEngine.Vector3
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXInputTouchBinder
class CORDL_TYPE VFXInputTouchBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
  // Declarations
  using __c = ::UnityEngine::VFX::Utility::VFXInputTouchBinder___c;

  /// @brief Field Distance, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_Distance, put = __cordl_internal_set_Distance)) float_t Distance;

  __declspec(property(get = get_Parameter, put = set_Parameter)) ::StringW Parameter;

  /// @brief Field SetVelocity, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get_SetVelocity, put = __cordl_internal_set_SetVelocity)) bool SetVelocity;

  /// @brief Field Target, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Target, put = __cordl_internal_set_Target)) ::UnityW<::UnityEngine::Camera> Target;

  __declspec(property(get = get_TouchEnabledProperty, put = set_TouchEnabledProperty)) ::StringW TouchEnabledProperty;

  /// @brief Field TouchIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_TouchIndex, put = __cordl_internal_set_TouchIndex)) int32_t TouchIndex;

  __declspec(property(get = get_VelocityParameter, put = set_VelocityParameter)) ::StringW VelocityParameter;

  /// @brief Field m_Parameter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Parameter, put = __cordl_internal_set_m_Parameter)) ::UnityEngine::VFX::Utility::ExposedProperty* m_Parameter;

  /// @brief Field m_PreviousPosition, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get_m_PreviousPosition, put = __cordl_internal_set_m_PreviousPosition)) ::UnityEngine::Vector3 m_PreviousPosition;

  /// @brief Field m_PreviousTouch, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PreviousTouch, put = __cordl_internal_set_m_PreviousTouch)) bool m_PreviousTouch;

  /// @brief Field m_TouchEnabledProperty, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TouchEnabledProperty, put = __cordl_internal_set_m_TouchEnabledProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* m_TouchEnabledProperty;

  /// @brief Field m_VelocityParameter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VelocityParameter, put = __cordl_internal_set_m_VelocityParameter)) ::UnityEngine::VFX::Utility::ExposedProperty* m_VelocityParameter;

  /// @brief Method GetTouchCount, addr 0x69e4c7c, size 0x218, virtual false, abstract: false, final false
  inline int32_t GetTouchCount();

  /// @brief Method GetTouchPosition, addr 0x69e4e94, size 0x22c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetTouchPosition(int32_t touchIndex);

  /// @brief Method IsValid, addr 0x69e4950, size 0xf0, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXInputTouchBinder* New_ctor();

  /// @brief Method ToString, addr 0x69e50c0, size 0x128, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x69e4a40, size 0x23c, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  constexpr float_t const& __cordl_internal_get_Distance() const;

  constexpr float_t& __cordl_internal_get_Distance();

  constexpr bool const& __cordl_internal_get_SetVelocity() const;

  constexpr bool& __cordl_internal_get_SetVelocity();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_Target() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_Target();

  constexpr int32_t const& __cordl_internal_get_TouchIndex() const;

  constexpr int32_t& __cordl_internal_get_TouchIndex();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_Parameter() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_Parameter();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PreviousPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PreviousPosition();

  constexpr bool const& __cordl_internal_get_m_PreviousTouch() const;

  constexpr bool& __cordl_internal_get_m_PreviousTouch();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_TouchEnabledProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_TouchEnabledProperty();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_VelocityParameter() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_VelocityParameter();

  constexpr void __cordl_internal_set_Distance(float_t value);

  constexpr void __cordl_internal_set_SetVelocity(bool value);

  constexpr void __cordl_internal_set_Target(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_TouchIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Parameter(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_PreviousPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_PreviousTouch(bool value);

  constexpr void __cordl_internal_set_m_TouchEnabledProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_VelocityParameter(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69e51e8, size 0x120, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Parameter, addr 0x69e48e8, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_Parameter();

  /// @brief Method get_TouchEnabledProperty, addr 0x69e48b4, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_TouchEnabledProperty();

  /// @brief Method get_VelocityParameter, addr 0x69e491c, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_VelocityParameter();

  /// @brief Method set_Parameter, addr 0x69e4900, size 0x1c, virtual false, abstract: false, final false
  inline void set_Parameter(::StringW value);

  /// @brief Method set_TouchEnabledProperty, addr 0x69e48cc, size 0x1c, virtual false, abstract: false, final false
  inline void set_TouchEnabledProperty(::StringW value);

  /// @brief Method set_VelocityParameter, addr 0x69e4934, size 0x1c, virtual false, abstract: false, final false
  inline void set_VelocityParameter(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXInputTouchBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXInputTouchBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXInputTouchBinder(VFXInputTouchBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXInputTouchBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXInputTouchBinder(VFXInputTouchBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19997 };

  /// @brief Field m_TouchEnabledProperty, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_TouchEnabledProperty;

  /// @brief Field m_Parameter, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_Parameter;

  /// @brief Field m_VelocityParameter, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_VelocityParameter;

  /// @brief Field TouchIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ___TouchIndex;

  /// @brief Field Target, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___Target;

  /// @brief Field Distance, offset: 0x50, size: 0x4, def value: None
  float_t ___Distance;

  /// @brief Field SetVelocity, offset: 0x54, size: 0x1, def value: None
  bool ___SetVelocity;

  /// @brief Field m_PreviousPosition, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_PreviousPosition;

  /// @brief Field m_PreviousTouch, offset: 0x64, size: 0x1, def value: None
  bool ___m_PreviousTouch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputTouchBinder, ___m_TouchEnabledProperty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputTouchBinder, ___m_Parameter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputTouchBinder, ___m_VelocityParameter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputTouchBinder, ___TouchIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputTouchBinder, ___Target) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputTouchBinder, ___Distance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputTouchBinder, ___SetVelocity) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputTouchBinder, ___m_PreviousPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXInputTouchBinder, ___m_PreviousTouch) == 0x64, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXInputTouchBinder) == 0x68, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
