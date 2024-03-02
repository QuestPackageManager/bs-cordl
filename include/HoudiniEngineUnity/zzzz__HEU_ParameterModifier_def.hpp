#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_ParameterModifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ParameterModifier)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct __HEU_ParameterModifier__ModifierAction;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_ParameterModifier__ModifierAction;
}
namespace HoudiniEngineUnity {
class HEU_ParameterModifier;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ParameterModifier);
// Type: ::ModifierAction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HEU_ParameterModifier::ModifierAction
struct CORDL_TYPE __HEU_ParameterModifier__ModifierAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_ParameterModifier__ModifierAction_Unwrapped
  enum struct ____HEU_ParameterModifier__ModifierAction_Unwrapped : int32_t {
    __E_MULTIPARM_INSERT = static_cast<int32_t>(0x0),
    __E_MULTIPARM_REMOVE = static_cast<int32_t>(0x1),
    __E_MULTIPARM_CLEAR = static_cast<int32_t>(0x2),
    __E_SET_FLOAT = static_cast<int32_t>(0x3),
    __E_SET_INT = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_ParameterModifier__ModifierAction_Unwrapped() const noexcept {
    return static_cast<____HEU_ParameterModifier__ModifierAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_ParameterModifier__ModifierAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_ParameterModifier__ModifierAction(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field MULTIPARM_CLEAR value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction const MULTIPARM_CLEAR;

  /// @brief Field MULTIPARM_INSERT value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction const MULTIPARM_INSERT;

  /// @brief Field MULTIPARM_REMOVE value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction const MULTIPARM_REMOVE;

  /// @brief Field SET_FLOAT value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction const SET_FLOAT;

  /// @brief Field SET_INT value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction const SET_INT;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_ParameterModifier
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_ParameterModifier*
class CORDL_TYPE HEU_ParameterModifier : public ::System::Object {
public:
  // Declarations
  using ModifierAction = ::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction;

  /// @brief Field _action, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__action, put = __cordl_internal_set__action))::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction _action;

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

  /// @brief Method GetNewModifier, addr 0x22f4c8c, size 0x84, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_ParameterModifier* GetNewModifier(::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction action, int32_t parameterIndex, int32_t instanceIndex,
                                                                            int32_t modifierValue);

  /// @brief Method IsEquivalentTo, addr 0x22f4d18, size 0x28c, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_ParameterModifier* other);

  static inline ::HoudiniEngineUnity::HEU_ParameterModifier* New_ctor();

  constexpr ::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction const& __cordl_internal_get__action() const;

  constexpr ::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction& __cordl_internal_get__action();

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

  constexpr void __cordl_internal_set__action(::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction value);

  constexpr void __cordl_internal_set__floatValue(float_t value);

  constexpr void __cordl_internal_set__instanceIndex(int32_t value);

  constexpr void __cordl_internal_set__intValue(int32_t value);

  constexpr void __cordl_internal_set__modifierValue(int32_t value);

  constexpr void __cordl_internal_set__parameterIndex(int32_t value);

  /// @brief Method .ctor, addr 0x22f4d10, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _parameterIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ____parameterIndex;

  /// @brief Field _action, offset: 0x14, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction ____action;

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
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ParameterModifier, 0x28>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterModifier, ____parameterIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterModifier, ____action) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterModifier, ____instanceIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterModifier, ____modifierValue) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterModifier, ____floatValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterModifier, ____intValue) == 0x24, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction, "HoudiniEngineUnity", "HEU_ParameterModifier/ModifierAction");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ParameterModifier);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ParameterModifier*, "HoudiniEngineUnity", "HEU_ParameterModifier");
