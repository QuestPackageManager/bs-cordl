#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlatformUpdater)
namespace OculusStudios::Platform::Core {
class IPlatform;
}
namespace Zenject {
class ITickable;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformUpdater;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformUpdater);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformUpdater
class CORDL_TYPE PlatformUpdater : public ::System::Object {
public:
  // Declarations
  /// @brief Field platform, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_platform, put = __cordl_internal_set_platform)) ::OculusStudios::Platform::Core::IPlatform* platform;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  static inline ::GlobalNamespace::PlatformUpdater* New_ctor(::OculusStudios::Platform::Core::IPlatform* platform);

  /// @brief Method Tick, addr 0x3678bc8, size 0xe4, virtual true, abstract: false, final true
  inline void Tick();

  constexpr ::OculusStudios::Platform::Core::IPlatform* const& __cordl_internal_get_platform() const;

  constexpr ::OculusStudios::Platform::Core::IPlatform*& __cordl_internal_get_platform();

  constexpr void __cordl_internal_set_platform(::OculusStudios::Platform::Core::IPlatform* value);

  /// @brief Method .ctor, addr 0x3678bc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::OculusStudios::Platform::Core::IPlatform* platform);

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformUpdater(PlatformUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformUpdater(PlatformUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21020 };

  /// @brief Field platform, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatform* ___platform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformUpdater, ___platform) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformUpdater, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformUpdater);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformUpdater*, "", "PlatformUpdater");
