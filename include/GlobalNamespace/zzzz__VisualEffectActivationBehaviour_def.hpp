#pragma once
// IWYU pragma private; include "GlobalNamespace\VisualEffectActivationBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectActivationBehaviour)
namespace GlobalNamespace {
struct VisualEffectActivationBehaviour_AttributeType;
}
namespace GlobalNamespace {
struct VisualEffectActivationBehaviour_EventState;
}
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
// Forward declare root types
namespace GlobalNamespace {
struct VisualEffectActivationBehaviour_AttributeType;
}
namespace GlobalNamespace {
class VisualEffectActivationBehaviour;
}
namespace GlobalNamespace {
struct VisualEffectActivationBehaviour_EventState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType);
MARK_REF_T(::GlobalNamespace::VisualEffectActivationBehaviour*);
MARK_VAL_T(::GlobalNamespace::VisualEffectActivationBehaviour_EventState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType, "", "VisualEffectActivationBehaviour/AttributeType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualEffectActivationBehaviour*, "", "VisualEffectActivationBehaviour");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualEffectActivationBehaviour_EventState, "", "VisualEffectActivationBehaviour/EventState");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: VisualEffectActivationBehaviour/AttributeType
struct CORDL_TYPE VisualEffectActivationBehaviour_AttributeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VisualEffectActivationBehaviour_AttributeType_Unwrapped
  enum struct __VisualEffectActivationBehaviour_AttributeType_Unwrapped : int32_t {
    __E_Float = static_cast<int32_t>(0x1),
    __E_Float2 = static_cast<int32_t>(0x2),
    __E_Float3 = static_cast<int32_t>(0x3),
    __E_Float4 = static_cast<int32_t>(0x4),
    __E_Int32 = static_cast<int32_t>(0x5),
    __E_Uint32 = static_cast<int32_t>(0x6),
    __E_Boolean = static_cast<int32_t>(0x11),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VisualEffectActivationBehaviour_AttributeType_Unwrapped() const noexcept {
    return static_cast<__VisualEffectActivationBehaviour_AttributeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectActivationBehaviour_AttributeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VisualEffectActivationBehaviour_AttributeType(int32_t value__) noexcept;

  /// @brief Field Boolean value: I32(17)
  static ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType const Boolean;

  /// @brief Field Float value: I32(1)
  static ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType const Float;

  /// @brief Field Float2 value: I32(2)
  static ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType const Float2;

  /// @brief Field Float3 value: I32(3)
  static ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType const Float3;

  /// @brief Field Float4 value: I32(4)
  static ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType const Float4;

  /// @brief Field Int32 value: I32(5)
  static ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType const Int32;

  /// @brief Field Uint32 value: I32(6)
  static ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType const Uint32;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19915 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies VisualEffectActivationBehaviour::AttributeType
namespace GlobalNamespace {
// Is value type: true
// CS Name: VisualEffectActivationBehaviour/EventState
struct CORDL_TYPE VisualEffectActivationBehaviour_EventState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectActivationBehaviour_EventState();

  // Ctor Parameters [CppParam { name: "attribute", ty: "::UnityEngine::VFX::Utility::ExposedProperty*", modifiers: "", def_value: None }, CppParam { name: "type", ty:
  // "::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType", modifiers: "", def_value: None }, CppParam { name: "values", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }]
  constexpr VisualEffectActivationBehaviour_EventState(::UnityEngine::VFX::Utility::ExposedProperty* attribute, ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType type,
                                                       ::ArrayW<float_t> values) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19916 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field attribute, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* attribute;

  /// @brief Field type, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType type;

  /// @brief Field values, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<float_t> values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualEffectActivationBehaviour_EventState, attribute) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectActivationBehaviour_EventState, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectActivationBehaviour_EventState, values) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualEffectActivationBehaviour_EventState) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Playables.PlayableBehaviour, VisualEffectActivationBehaviour::EventState
namespace GlobalNamespace {
// Is value type: false
// CS Name: VisualEffectActivationBehaviour
class CORDL_TYPE VisualEffectActivationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  using AttributeType = ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType;

  using EventState = ::GlobalNamespace::VisualEffectActivationBehaviour_EventState;

  /// @brief Field clipEnterEventAttributes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_clipEnterEventAttributes, put = __cordl_internal_set_clipEnterEventAttributes)) ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>
      clipEnterEventAttributes;

  /// @brief Field clipExitEventAttributes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_clipExitEventAttributes, put = __cordl_internal_set_clipExitEventAttributes)) ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>
      clipExitEventAttributes;

  /// @brief Field onClipEnter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onClipEnter, put = __cordl_internal_set_onClipEnter)) ::UnityEngine::VFX::Utility::ExposedProperty* onClipEnter;

  /// @brief Field onClipExit, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onClipExit, put = __cordl_internal_set_onClipExit)) ::UnityEngine::VFX::Utility::ExposedProperty* onClipExit;

  static inline ::GlobalNamespace::VisualEffectActivationBehaviour* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState> const& __cordl_internal_get_clipEnterEventAttributes() const;

  constexpr ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>& __cordl_internal_get_clipEnterEventAttributes();

  constexpr ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState> const& __cordl_internal_get_clipExitEventAttributes() const;

  constexpr ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>& __cordl_internal_get_clipExitEventAttributes();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_onClipEnter() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_onClipEnter();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_onClipExit() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_onClipExit();

  constexpr void __cordl_internal_set_clipEnterEventAttributes(::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState> value);

  constexpr void __cordl_internal_set_clipExitEventAttributes(::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState> value);

  constexpr void __cordl_internal_set_onClipEnter(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_onClipExit(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69d1434, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectActivationBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectActivationBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualEffectActivationBehaviour(VisualEffectActivationBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectActivationBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualEffectActivationBehaviour(VisualEffectActivationBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19917 };

  /// @brief Field onClipEnter, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___onClipEnter;

  /// @brief Field onClipExit, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___onClipExit;

  /// @brief Field clipEnterEventAttributes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState> ___clipEnterEventAttributes;

  /// @brief Field clipExitEventAttributes, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState> ___clipExitEventAttributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualEffectActivationBehaviour, ___onClipEnter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectActivationBehaviour, ___onClipExit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectActivationBehaviour, ___clipEnterEventAttributes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectActivationBehaviour, ___clipExitEventAttributes) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualEffectActivationBehaviour) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
