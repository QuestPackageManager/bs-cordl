#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ConditionalActivation)
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ConditionalActivation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConditionalActivation);
// Type: ::ConditionalActivation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5352))
// CS Name: ::ConditionalActivation*
class CORDL_TYPE ConditionalActivation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _value, offset 0x18, size 0x8
  __declspec(property(get = __get__value, put = __set__value))::GlobalNamespace::BoolSO* _value;

  /// @brief Field _activateOnFalse, offset 0x20, size 0x1
  __declspec(property(get = __get__activateOnFalse, put = __set__activateOnFalse)) bool _activateOnFalse;

  constexpr ::GlobalNamespace::BoolSO*& __get__value();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get__value() const;

  constexpr void __set__value(::GlobalNamespace::BoolSO* value);

  constexpr bool& __get__activateOnFalse();

  constexpr bool const& __get__activateOnFalse() const;

  constexpr void __set__activateOnFalse(bool value);

  /// @brief Method Awake, addr 0x226bf2c, size 0x84, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::ConditionalActivation* New_ctor();

  /// @brief Method .ctor, addr 0x226bfb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalActivation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionalActivation(ConditionalActivation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalActivation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionalActivation(ConditionalActivation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionalActivation();

public:
  /// @brief Field _value, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ____value;

  /// @brief Field _activateOnFalse, offset: 0x20, size: 0x1, def value: None
  bool ____activateOnFalse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConditionalActivation, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalActivation, ____value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalActivation, ____activateOnFalse) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConditionalActivation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConditionalActivation*, "", "ConditionalActivation");
