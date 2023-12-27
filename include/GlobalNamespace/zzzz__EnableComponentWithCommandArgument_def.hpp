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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14362))
// CS Name: ::EnableComponentWithCommandArgument*
class CORDL_TYPE EnableComponentWithCommandArgument : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _argument, offset 0x18, size 0x8
  __declspec(property(get = __get__argument, put = __set__argument))::StringW _argument;

  /// @brief Field _component, offset 0x20, size 0x8
  __declspec(property(get = __get__component, put = __set__component))::UnityEngine::Behaviour* _component;

  constexpr ::StringW& __get__argument();

  constexpr ::StringW const& __get__argument() const;

  constexpr void __set__argument(::StringW value);

  constexpr ::UnityEngine::Behaviour*& __get__component();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Behaviour*> const& __get__component() const;

  constexpr void __set__component(::UnityEngine::Behaviour* value);

  /// @brief Method Awake addr 0x20f2038 size 0x90 virtual false final false
  inline void Awake();

  static inline ::GlobalNamespace::EnableComponentWithCommandArgument* New_ctor();

  /// @brief Method .ctor addr 0x20f20c8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnableComponentWithCommandArgument", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnableComponentWithCommandArgument(EnableComponentWithCommandArgument&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnableComponentWithCommandArgument", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnableComponentWithCommandArgument(EnableComponentWithCommandArgument const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnableComponentWithCommandArgument();

public:
  /// @brief Field _argument, offset: 0x18, size: 0x8, def value: None
  ::StringW ____argument;

  /// @brief Field _component, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Behaviour* ____component;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnableComponentWithCommandArgument, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnableComponentWithCommandArgument);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnableComponentWithCommandArgument*, "", "EnableComponentWithCommandArgument");
