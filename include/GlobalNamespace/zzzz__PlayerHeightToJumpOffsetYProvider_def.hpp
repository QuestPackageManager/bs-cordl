#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerHeightToJumpOffsetYProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerHeightToJumpOffsetYProvider)
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
namespace GlobalNamespace {
class PlayerHeightDetector;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerHeightToJumpOffsetYProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerHeightToJumpOffsetYProvider);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerHeightToJumpOffsetYProvider
class CORDL_TYPE PlayerHeightToJumpOffsetYProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _jumpOffsetY, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__jumpOffsetY, put = __cordl_internal_set__jumpOffsetY)) float_t _jumpOffsetY;

  /// @brief Field _playerHeightDetector, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__playerHeightDetector, put = __cordl_internal_set__playerHeightDetector)) ::UnityW<::GlobalNamespace::PlayerHeightDetector> _playerHeightDetector;

  __declspec(property(get = get_jumpOffsetY)) float_t jumpOffsetY;

  /// @brief Convert operator to "::GlobalNamespace::IJumpOffsetYProvider"
  constexpr operator ::GlobalNamespace::IJumpOffsetYProvider*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method Dispose, addr 0x5842038, size 0x110, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandlePlayerHeightDidChange, addr 0x5841ffc, size 0x3c, virtual false, abstract: false, final false
  inline void HandlePlayerHeightDidChange(float_t playerHeight);

  /// @brief Method Initialize, addr 0x5841e84, size 0x140, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method JumpOffsetYForPlayerHeight, addr 0x5841fc4, size 0x38, virtual false, abstract: false, final false
  static inline float_t JumpOffsetYForPlayerHeight(float_t playerHeight);

  static inline ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider* New_ctor();

  constexpr float_t const& __cordl_internal_get__jumpOffsetY() const;

  constexpr float_t& __cordl_internal_get__jumpOffsetY();

  constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector> const& __cordl_internal_get__playerHeightDetector() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector>& __cordl_internal_get__playerHeightDetector();

  constexpr void __cordl_internal_set__jumpOffsetY(float_t value);

  constexpr void __cordl_internal_set__playerHeightDetector(::UnityW<::GlobalNamespace::PlayerHeightDetector> value);

  /// @brief Method .ctor, addr 0x5842148, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_jumpOffsetY, addr 0x5841e7c, size 0x8, virtual true, abstract: false, final true
  inline float_t get_jumpOffsetY();

  /// @brief Convert to "::GlobalNamespace::IJumpOffsetYProvider"
  constexpr ::GlobalNamespace::IJumpOffsetYProvider* i___GlobalNamespace__IJumpOffsetYProvider() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerHeightToJumpOffsetYProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeightToJumpOffsetYProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerHeightToJumpOffsetYProvider(PlayerHeightToJumpOffsetYProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeightToJumpOffsetYProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerHeightToJumpOffsetYProvider(PlayerHeightToJumpOffsetYProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6224 };

  /// @brief Field _playerHeightDetector, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerHeightDetector> ____playerHeightDetector;

  /// @brief Field _jumpOffsetY, offset: 0x18, size: 0x4, def value: None
  float_t ____jumpOffsetY;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerHeightToJumpOffsetYProvider, ____playerHeightDetector) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightToJumpOffsetYProvider, ____jumpOffsetY) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerHeightToJumpOffsetYProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*, "", "PlayerHeightToJumpOffsetYProvider");
