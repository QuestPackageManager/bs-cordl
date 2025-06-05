#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerPsPlusFeatureNotifier.hpp"
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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerPsPlusFeatureNotifier
class CORDL_TYPE MultiplayerPsPlusFeatureNotifier : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _isSpectator, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isSpectator, put = __cordl_internal_set__isSpectator)) bool _isSpectator;

  static inline ::GlobalNamespace::MultiplayerPsPlusFeatureNotifier* New_ctor();

  constexpr bool const& __cordl_internal_get__isSpectator() const;

  constexpr bool& __cordl_internal_get__isSpectator();

  constexpr void __cordl_internal_set__isSpectator(bool value);

  /// @brief Method .ctor, addr 0x3be06c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerPsPlusFeatureNotifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPsPlusFeatureNotifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerPsPlusFeatureNotifier(MultiplayerPsPlusFeatureNotifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPsPlusFeatureNotifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerPsPlusFeatureNotifier(MultiplayerPsPlusFeatureNotifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4606 };

  /// @brief Field _isSpectator, offset: 0x20, size: 0x1, def value: None
  bool ____isSpectator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerPsPlusFeatureNotifier, ____isSpectator) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPsPlusFeatureNotifier, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerPsPlusFeatureNotifier);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPsPlusFeatureNotifier*, "", "MultiplayerPsPlusFeatureNotifier");
