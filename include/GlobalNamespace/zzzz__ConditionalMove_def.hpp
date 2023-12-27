#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(ConditionalMove)
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ConditionalMove;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConditionalMove);
// Type: ::ConditionalMove
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5355))
// CS Name: ::ConditionalMove*
class CORDL_TYPE ConditionalMove : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _offset, offset 0x18, size 0xc
  __declspec(property(get = __get__offset, put = __set__offset))::UnityEngine::Vector3 _offset;

  /// @brief Field _value, offset 0x28, size 0x8
  __declspec(property(get = __get__value, put = __set__value))::GlobalNamespace::BoolSO* _value;

  /// @brief Field _activateOnFalse, offset 0x30, size 0x1
  __declspec(property(get = __get__activateOnFalse, put = __set__activateOnFalse)) bool _activateOnFalse;

  constexpr ::UnityEngine::Vector3& __get__offset();

  constexpr ::UnityEngine::Vector3 const& __get__offset() const;

  constexpr void __set__offset(::UnityEngine::Vector3 value);

  constexpr ::GlobalNamespace::BoolSO*& __get__value();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get__value() const;

  constexpr void __set__value(::GlobalNamespace::BoolSO* value);

  constexpr bool& __get__activateOnFalse();

  constexpr bool const& __get__activateOnFalse() const;

  constexpr void __set__activateOnFalse(bool value);

  /// @brief Method Awake addr 0x226c0c0 size 0xb8 virtual false final false
  inline void Awake();

  static inline ::GlobalNamespace::ConditionalMove* New_ctor();

  /// @brief Method .ctor addr 0x226c178 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalMove", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionalMove(ConditionalMove&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalMove", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionalMove(ConditionalMove const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionalMove();

public:
  /// @brief Field _offset, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____offset;

  /// @brief Field _value, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ____value;

  /// @brief Field _activateOnFalse, offset: 0x30, size: 0x1, def value: None
  bool ____activateOnFalse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConditionalMove, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConditionalMove);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConditionalMove*, "", "ConditionalMove");
