#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnableComponentWithCommandArgument)
namespace UnityEngine {
class Behaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class EnableComponentWithCommandArgument;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnableComponentWithCommandArgument);
// Type: ::EnableComponentWithCommandArgument
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnableComponentWithCommandArgument*
class CORDL_TYPE EnableComponentWithCommandArgument : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _argument, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__argument, put = __cordl_internal_set__argument))::StringW _argument;

  /// @brief Field _component, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__component, put = __cordl_internal_set__component))::UnityW<::UnityEngine::Behaviour> _component;

  /// @brief Method Awake, addr 0x2254c64, size 0x90, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::EnableComponentWithCommandArgument* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__argument() const;

  constexpr ::StringW& __cordl_internal_get__argument();

  constexpr ::UnityW<::UnityEngine::Behaviour> const& __cordl_internal_get__component() const;

  constexpr ::UnityW<::UnityEngine::Behaviour>& __cordl_internal_get__component();

  constexpr void __cordl_internal_set__argument(::StringW value);

  constexpr void __cordl_internal_set__component(::UnityW<::UnityEngine::Behaviour> value);

  /// @brief Method .ctor, addr 0x2254cf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnableComponentWithCommandArgument();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnableComponentWithCommandArgument", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnableComponentWithCommandArgument(EnableComponentWithCommandArgument&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnableComponentWithCommandArgument", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnableComponentWithCommandArgument(EnableComponentWithCommandArgument const&) = delete;

  /// @brief Field _argument, offset: 0x18, size: 0x8, def value: None
  ::StringW ____argument;

  /// @brief Field _component, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Behaviour> ____component;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnableComponentWithCommandArgument, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnableComponentWithCommandArgument, ____argument) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnableComponentWithCommandArgument, ____component) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnableComponentWithCommandArgument);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnableComponentWithCommandArgument*, "", "EnableComponentWithCommandArgument");
