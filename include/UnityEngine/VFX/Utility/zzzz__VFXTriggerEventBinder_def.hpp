#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXTriggerEventBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXEventBinderBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXTriggerEventBinder)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX::Utility {
struct VFXTriggerEventBinder_Activation;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
struct VFXTriggerEventBinder_Activation;
}
namespace UnityEngine::VFX::Utility {
class VFXTriggerEventBinder;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation);
MARK_REF_T(::UnityEngine::VFX::Utility::VFXTriggerEventBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation, "UnityEngine.VFX.Utility", "VFXTriggerEventBinder/Activation");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXTriggerEventBinder*, "UnityEngine.VFX.Utility", "VFXTriggerEventBinder");
// Dependencies
namespace UnityEngine::VFX::Utility {
// Is value type: true
// CS Name: UnityEngine.VFX.Utility.VFXTriggerEventBinder/Activation
struct CORDL_TYPE VFXTriggerEventBinder_Activation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VFXTriggerEventBinder_Activation_Unwrapped
  enum struct __VFXTriggerEventBinder_Activation_Unwrapped : int32_t {
    __E_OnEnter = static_cast<int32_t>(0x0),
    __E_OnExit = static_cast<int32_t>(0x1),
    __E_OnStay = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VFXTriggerEventBinder_Activation_Unwrapped() const noexcept {
    return static_cast<__VFXTriggerEventBinder_Activation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXTriggerEventBinder_Activation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VFXTriggerEventBinder_Activation(int32_t value__) noexcept;

  /// @brief Field OnEnter value: I32(0)
  static ::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation const OnEnter;

  /// @brief Field OnExit value: I32(1)
  static ::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation const OnExit;

  /// @brief Field OnStay value: I32(2)
  static ::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation const OnStay;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19945 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation) == 0x4, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
// Dependencies UnityEngine.VFX.Utility.VFXEventBinderBase, UnityEngine.VFX.Utility.VFXTriggerEventBinder::Activation
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXTriggerEventBinder
class CORDL_TYPE VFXTriggerEventBinder : public ::UnityEngine::VFX::Utility::VFXEventBinderBase {
public:
  // Declarations
  using Activation = ::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation;

  /// @brief Field activation, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_activation, put = __cordl_internal_set_activation)) ::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation activation;

  /// @brief Field colliders, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_colliders, put = __cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* colliders;

  /// @brief Field positionParameter, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_positionParameter, put = __cordl_internal_set_positionParameter)) ::UnityEngine::VFX::Utility::ExposedProperty* positionParameter;

  static inline ::UnityEngine::VFX::Utility::VFXTriggerEventBinder* New_ctor();

  /// @brief Method OnTriggerEnter, addr 0x69dc080, size 0xec, virtual false, abstract: false, final false
  inline void OnTriggerEnter(::UnityEngine::Collider* other);

  /// @brief Method OnTriggerExit, addr 0x69dc16c, size 0xf0, virtual false, abstract: false, final false
  inline void OnTriggerExit(::UnityEngine::Collider* other);

  /// @brief Method OnTriggerStay, addr 0x69dc25c, size 0xf0, virtual false, abstract: false, final false
  inline void OnTriggerStay(::UnityEngine::Collider* other);

  /// @brief Method SetEventAttribute, addr 0x69dbf9c, size 0xe4, virtual true, abstract: false, final false
  inline void SetEventAttribute(::ArrayW<::System::Object*> parameters);

  constexpr ::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation const& __cordl_internal_get_activation() const;

  constexpr ::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation& __cordl_internal_get_activation();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_positionParameter() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_positionParameter();

  constexpr void __cordl_internal_set_activation(::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation value);

  constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* value);

  constexpr void __cordl_internal_set_positionParameter(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69dc34c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXTriggerEventBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXTriggerEventBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXTriggerEventBinder(VFXTriggerEventBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXTriggerEventBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXTriggerEventBinder(VFXTriggerEventBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19946 };

  /// @brief Field colliders, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* ___colliders;

  /// @brief Field activation, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation ___activation;

  /// @brief Field positionParameter, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___positionParameter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTriggerEventBinder, ___colliders) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTriggerEventBinder, ___activation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTriggerEventBinder, ___positionParameter) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXTriggerEventBinder) == 0x50, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
