#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_ParameterModifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ParameterModifier)
namespace HoudiniEngineUnity {
struct HEU_ParameterModifier_ModifierAction;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_ParameterModifier_ModifierAction;
}
namespace HoudiniEngineUnity {
class HEU_ParameterModifier;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ParameterModifier);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_ParameterModifier/ModifierAction
struct CORDL_TYPE HEU_ParameterModifier_ModifierAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_ParameterModifier_ModifierAction_Unwrapped
  enum struct __HEU_ParameterModifier_ModifierAction_Unwrapped : int32_t {
    __E_MULTIPARM_INSERT = static_cast<int32_t>(0x0),
    __E_MULTIPARM_REMOVE = static_cast<int32_t>(0x1),
    __E_MULTIPARM_CLEAR = static_cast<int32_t>(0x2),
    __E_SET_FLOAT = static_cast<int32_t>(0x3),
    __E_SET_INT = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_ParameterModifier_ModifierAction_Unwrapped() const noexcept {
    return static_cast<__HEU_ParameterModifier_ModifierAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ParameterModifier_ModifierAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_ParameterModifier_ModifierAction(int32_t value__) noexcept;

  /// @brief Field MULTIPARM_CLEAR value: I32(2)
  static ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction const MULTIPARM_CLEAR;

  /// @brief Field MULTIPARM_INSERT value: I32(0)
  static ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction const MULTIPARM_INSERT;

  /// @brief Field MULTIPARM_REMOVE value: I32(1)
  static ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction const MULTIPARM_REMOVE;

  /// @brief Field SET_FLOAT value: I32(3)
  static ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction const SET_FLOAT;

  /// @brief Field SET_INT value: I32(4)
  static ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction const SET_INT;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11748 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.HEU_ParameterModifier::ModifierAction, HoudiniEngineUnity.IEquivable`1<T>, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_ParameterModifier
class CORDL_TYPE HEU_ParameterModifier : public ::System::Object {
public:
  // Declarations
  using ModifierAction = ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction;

  /// @brief Field _action, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__action, put = __cordl_internal_set__action)) ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction _action;

  /// @brief Field _floatValue, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__floatValue, put = __cordl_internal_set__floatValue)) float_t _floatValue;

  /// @brief Field _instanceIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__instanceIndex, put = __cordl_internal_set__instanceIndex)) int32_t _instanceIndex;

  /// @brief Field _intValue, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__intValue, put = __cordl_internal_set__intValue)) int32_t _intValue;

  /// @brief Field _modifierValue, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__modifierValue, put = __cordl_internal_set__modifierValue)) int32_t _modifierValue;

  /// @brief Field _parameterIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__parameterIndex, put = __cordl_internal_set__parameterIndex)) int32_t _parameterIndex;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterModifier*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*() noexcept;

  /// @brief Method GetNewModifier, addr 0x3a57620, size 0x84, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_ParameterModifier* GetNewModifier(::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction action, int32_t parameterIndex, int32_t instanceIndex,
                                                                            int32_t modifierValue);

  /// @brief Method IsEquivalentTo, addr 0x3a576ac, size 0x28c, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_ParameterModifier* other);

  static inline ::HoudiniEngineUnity::HEU_ParameterModifier* New_ctor();

  constexpr ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction const& __cordl_internal_get__action() const;

  constexpr ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction& __cordl_internal_get__action();

  constexpr float_t const& __cordl_internal_get__floatValue() const;

  constexpr float_t& __cordl_internal_get__floatValue();

  constexpr int32_t const& __cordl_internal_get__instanceIndex() const;

  constexpr int32_t& __cordl_internal_get__instanceIndex();

  constexpr int32_t const& __cordl_internal_get__intValue() const;

  constexpr int32_t& __cordl_internal_get__intValue();

  constexpr int32_t const& __cordl_internal_get__modifierValue() const;

  constexpr int32_t& __cordl_internal_get__modifierValue();

  constexpr int32_t const& __cordl_internal_get__parameterIndex() const;

  constexpr int32_t& __cordl_internal_get__parameterIndex();

  constexpr void __cordl_internal_set__action(::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction value);

  constexpr void __cordl_internal_set__floatValue(float_t value);

  constexpr void __cordl_internal_set__instanceIndex(int32_t value);

  constexpr void __cordl_internal_set__intValue(int32_t value);

  constexpr void __cordl_internal_set__modifierValue(int32_t value);

  constexpr void __cordl_internal_set__parameterIndex(int32_t value);

  /// @brief Method .ctor, addr 0x3a576a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterModifier*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterModifier*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_ParameterModifier__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ParameterModifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_ParameterModifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ParameterModifier(HEU_ParameterModifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ParameterModifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ParameterModifier(HEU_ParameterModifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11749 };

  /// @brief Field _parameterIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ____parameterIndex;

  /// @brief Field _action, offset: 0x14, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction ____action;

  /// @brief Field _instanceIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ____instanceIndex;

  /// @brief Field _modifierValue, offset: 0x1c, size: 0x4, def value: None
  int32_t ____modifierValue;

  /// @brief Field _floatValue, offset: 0x20, size: 0x4, def value: None
  float_t ____floatValue;

  /// @brief Field _intValue, offset: 0x24, size: 0x4, def value: None
  int32_t ____intValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterModifier, ____parameterIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterModifier, ____action) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterModifier, ____instanceIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterModifier, ____modifierValue) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterModifier, ____floatValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterModifier, ____intValue) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ParameterModifier, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction, "HoudiniEngineUnity", "HEU_ParameterModifier/ModifierAction");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ParameterModifier);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ParameterModifier*, "HoudiniEngineUnity", "HEU_ParameterModifier");
