#pragma once
// IWYU pragma private; include "GlobalNamespace/ConditionalMove.hpp"
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
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConditionalMove*
class CORDL_TYPE ConditionalMove : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _activateOnFalse, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__activateOnFalse, put = __cordl_internal_set__activateOnFalse)) bool _activateOnFalse;

  /// @brief Field _offset, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get__offset, put = __cordl_internal_set__offset)) ::UnityEngine::Vector3 _offset;

  /// @brief Field _value, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) ::UnityW<::GlobalNamespace::BoolSO> _value;

  /// @brief Method Awake, addr 0x3acd7f4, size 0xb8, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::ConditionalMove* New_ctor();

  constexpr bool const& __cordl_internal_get__activateOnFalse() const;

  constexpr bool& __cordl_internal_get__activateOnFalse();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__offset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__offset();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__value() const;

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__activateOnFalse(bool value);

  constexpr void __cordl_internal_set__offset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__value(::UnityW<::GlobalNamespace::BoolSO> value);

  /// @brief Method .ctor, addr 0x3acd8ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionalMove();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConditionalMove", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionalMove(ConditionalMove&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalMove", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionalMove(ConditionalMove const&) = delete;

  /// @brief Field _offset, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____offset;

  /// @brief Field _value, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____value;

  /// @brief Field _activateOnFalse, offset: 0x38, size: 0x1, def value: None
  bool ____activateOnFalse;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5143 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConditionalMove, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalMove, ____offset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalMove, ____value) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalMove, ____activateOnFalse) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConditionalMove);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConditionalMove*, "", "ConditionalMove");
