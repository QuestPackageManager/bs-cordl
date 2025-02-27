#pragma once
// IWYU pragma private; include "GlobalNamespace/HEU_ScriptCallbackExample.hpp"
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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HEU_ScriptCallbackExample
class CORDL_TYPE HEU_ScriptCallbackExample : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _msg, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__msg, put = __cordl_internal_set__msg)) ::StringW _msg;

  /// @brief Method AssetCallbackNoMsg, addr 0x3a12b68, size 0x68, virtual false, abstract: false, final false
  inline void AssetCallbackNoMsg();

  /// @brief Method AssetCallbackWithMsg, addr 0x3a12ad0, size 0x98, virtual false, abstract: false, final false
  inline void AssetCallbackWithMsg(::StringW msg);

  static inline ::GlobalNamespace::HEU_ScriptCallbackExample* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__msg() const;

  constexpr ::StringW& __cordl_internal_get__msg();

  constexpr void __cordl_internal_set__msg(::StringW value);

  /// @brief Method .ctor, addr 0x3a12bd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ScriptCallbackExample();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_ScriptCallbackExample", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ScriptCallbackExample(HEU_ScriptCallbackExample&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ScriptCallbackExample", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ScriptCallbackExample(HEU_ScriptCallbackExample const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11574 };

  /// @brief Field _msg, offset: 0x20, size: 0x8, def value: None
  ::StringW ____msg;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HEU_ScriptCallbackExample, ____msg) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HEU_ScriptCallbackExample, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HEU_ScriptCallbackExample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HEU_ScriptCallbackExample*, "", "HEU_ScriptCallbackExample");
