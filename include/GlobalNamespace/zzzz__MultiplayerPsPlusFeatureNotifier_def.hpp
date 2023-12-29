#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerPsPlusFeatureNotifier)
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerPsPlusFeatureNotifier;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerPsPlusFeatureNotifier);
// Type: ::MultiplayerPsPlusFeatureNotifier
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5335))
// CS Name: ::MultiplayerPsPlusFeatureNotifier*
class CORDL_TYPE MultiplayerPsPlusFeatureNotifier : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::MultiplayerPsPlusFeatureNotifier* New_ctor();

  /// @brief Method .ctor addr 0x21149a0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPsPlusFeatureNotifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerPsPlusFeatureNotifier(MultiplayerPsPlusFeatureNotifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPsPlusFeatureNotifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerPsPlusFeatureNotifier(MultiplayerPsPlusFeatureNotifier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerPsPlusFeatureNotifier();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPsPlusFeatureNotifier, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerPsPlusFeatureNotifier);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPsPlusFeatureNotifier*, "", "MultiplayerPsPlusFeatureNotifier");
