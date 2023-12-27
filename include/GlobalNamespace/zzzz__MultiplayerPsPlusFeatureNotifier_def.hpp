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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5241))
// CS Name: ::MultiplayerPsPlusFeatureNotifier*
class CORDL_TYPE MultiplayerPsPlusFeatureNotifier : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _isSpectator, offset 0x18, size 0x1
  __declspec(property(get = __get__isSpectator, put = __set__isSpectator)) bool _isSpectator;

  constexpr bool& __get__isSpectator();

  constexpr bool const& __get__isSpectator() const;

  constexpr void __set__isSpectator(bool value);

  static inline ::GlobalNamespace::MultiplayerPsPlusFeatureNotifier* New_ctor();

  /// @brief Method .ctor addr 0x2257e08 size 0x8 virtual false final false
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
  /// @brief Field _isSpectator, offset: 0x18, size: 0x1, def value: None
  bool ____isSpectator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPsPlusFeatureNotifier, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerPsPlusFeatureNotifier);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPsPlusFeatureNotifier*, "", "MultiplayerPsPlusFeatureNotifier");
