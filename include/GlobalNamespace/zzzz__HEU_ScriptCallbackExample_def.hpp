#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_ScriptCallbackExample)
// Forward declare root types
namespace GlobalNamespace {
class HEU_ScriptCallbackExample;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HEU_ScriptCallbackExample);
// Type: ::HEU_ScriptCallbackExample
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9381))
// CS Name: ::HEU_ScriptCallbackExample*
class CORDL_TYPE HEU_ScriptCallbackExample : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _msg, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__msg, put = __cordl_internal_set__msg))::StringW _msg;

  constexpr ::StringW& __cordl_internal_get__msg();

  constexpr ::StringW const& __cordl_internal_get__msg() const;

  constexpr void __cordl_internal_set__msg(::StringW value);

  /// @brief Method AssetCallbackWithMsg, addr 0x21e28ac, size 0x98, virtual false, abstract: false, final false
  inline void AssetCallbackWithMsg(::StringW msg);

  /// @brief Method AssetCallbackNoMsg, addr 0x21e2944, size 0x68, virtual false, abstract: false, final false
  inline void AssetCallbackNoMsg();

  static inline ::GlobalNamespace::HEU_ScriptCallbackExample* New_ctor();

  /// @brief Method .ctor, addr 0x21e29ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ScriptCallbackExample", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ScriptCallbackExample(HEU_ScriptCallbackExample&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ScriptCallbackExample", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ScriptCallbackExample(HEU_ScriptCallbackExample const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ScriptCallbackExample();

public:
  /// @brief Field _msg, offset: 0x18, size: 0x8, def value: None
  ::StringW ____msg;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HEU_ScriptCallbackExample, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HEU_ScriptCallbackExample, ____msg) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HEU_ScriptCallbackExample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HEU_ScriptCallbackExample*, "", "HEU_ScriptCallbackExample");
