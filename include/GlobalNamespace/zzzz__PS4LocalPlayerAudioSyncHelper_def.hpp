#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PS4LocalPlayerAudioSyncHelper)
// Forward declare root types
namespace GlobalNamespace {
class PS4LocalPlayerAudioSyncHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS4LocalPlayerAudioSyncHelper);
// Type: ::PS4LocalPlayerAudioSyncHelper
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5168))
// CS Name: ::PS4LocalPlayerAudioSyncHelper*
class CORDL_TYPE PS4LocalPlayerAudioSyncHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::PS4LocalPlayerAudioSyncHelper* New_ctor();

  /// @brief Method .ctor, addr 0x23ddfb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PS4LocalPlayerAudioSyncHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS4LocalPlayerAudioSyncHelper(PS4LocalPlayerAudioSyncHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS4LocalPlayerAudioSyncHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS4LocalPlayerAudioSyncHelper(PS4LocalPlayerAudioSyncHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS4LocalPlayerAudioSyncHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4LocalPlayerAudioSyncHelper, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS4LocalPlayerAudioSyncHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4LocalPlayerAudioSyncHelper*, "", "PS4LocalPlayerAudioSyncHelper");
