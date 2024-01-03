#pragma once
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
// Type: ::PlayerHeightToJumpOffsetYProvider
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5281))
// CS Name: ::PlayerHeightToJumpOffsetYProvider*
class CORDL_TYPE PlayerHeightToJumpOffsetYProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _playerHeightDetector, offset 0x10, size 0x8
  __declspec(property(get = __get__playerHeightDetector, put = __set__playerHeightDetector))::GlobalNamespace::PlayerHeightDetector* _playerHeightDetector;

  /// @brief Field _jumpOffsetY, offset 0x18, size 0x4
  __declspec(property(get = __get__jumpOffsetY, put = __set__jumpOffsetY)) float_t _jumpOffsetY;

  __declspec(property(get = get_jumpOffsetY)) float_t jumpOffsetY;

  /// @brief Convert operator to "::GlobalNamespace::IJumpOffsetYProvider"
  constexpr operator ::GlobalNamespace::IJumpOffsetYProvider*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IJumpOffsetYProvider"
  constexpr ::GlobalNamespace::IJumpOffsetYProvider* i___GlobalNamespace__IJumpOffsetYProvider() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr ::GlobalNamespace::PlayerHeightDetector*& __get__playerHeightDetector();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeightDetector*> const& __get__playerHeightDetector() const;

  constexpr void __set__playerHeightDetector(::GlobalNamespace::PlayerHeightDetector* value);

  constexpr float_t& __get__jumpOffsetY();

  constexpr float_t const& __get__jumpOffsetY() const;

  constexpr void __set__jumpOffsetY(float_t value);

  /// @brief Method get_jumpOffsetY, addr 0x2261628, size 0x8, virtual true, abstract: false, final true
  inline float_t get_jumpOffsetY();

  /// @brief Method Initialize, addr 0x2261630, size 0xf8, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method Dispose, addr 0x2261794, size 0xd0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandlePlayerHeightDidChange, addr 0x226175c, size 0x38, virtual false, abstract: false, final false
  inline void HandlePlayerHeightDidChange(float_t playerHeight);

  /// @brief Method JumpOffsetYForPlayerHeight, addr 0x2261728, size 0x34, virtual false, abstract: false, final false
  static inline float_t JumpOffsetYForPlayerHeight(float_t playerHeight);

  static inline ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider* New_ctor();

  /// @brief Method .ctor, addr 0x2261864, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeightToJumpOffsetYProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerHeightToJumpOffsetYProvider(PlayerHeightToJumpOffsetYProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeightToJumpOffsetYProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerHeightToJumpOffsetYProvider(PlayerHeightToJumpOffsetYProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerHeightToJumpOffsetYProvider();

public:
  /// @brief Field _playerHeightDetector, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::PlayerHeightDetector* ____playerHeightDetector;

  /// @brief Field _jumpOffsetY, offset: 0x18, size: 0x4, def value: None
  float_t ____jumpOffsetY;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightToJumpOffsetYProvider, ____playerHeightDetector) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightToJumpOffsetYProvider, ____jumpOffsetY) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerHeightToJumpOffsetYProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*, "", "PlayerHeightToJumpOffsetYProvider");
