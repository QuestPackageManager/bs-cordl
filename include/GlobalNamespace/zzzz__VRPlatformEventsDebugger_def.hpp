#pragma once
// IWYU pragma private; include "GlobalNamespace/VRPlatformEventsDebugger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VRPlatformEventsDebugger)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace GlobalNamespace {
class VRPlatformEventsDebugger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRPlatformEventsDebugger);
// Type: ::VRPlatformEventsDebugger
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VRPlatformEventsDebugger*
class CORDL_TYPE VRPlatformEventsDebugger : public ::System::Object {
public:
  // Declarations
  /// @brief Field _vrPlatformHelper, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  __declspec(property(get = get_loggerPrefix))::StringW loggerPrefix;

  /// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
  constexpr operator ::GlobalNamespace::IVerboseLogger*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method Dispose, addr 0x24e3478, size 0x404, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleHMDMounted, addr 0x24e3888, size 0x4, virtual false, abstract: false, final false
  inline void HandleHMDMounted();

  /// @brief Method HandleHMDUnmounted, addr 0x24e3884, size 0x4, virtual false, abstract: false, final false
  inline void HandleHMDUnmounted();

  /// @brief Method HandleInputFocusWasCaptured, addr 0x24e387c, size 0x4, virtual false, abstract: false, final false
  inline void HandleInputFocusWasCaptured();

  /// @brief Method HandleInputFocusWasReleased, addr 0x24e3880, size 0x4, virtual false, abstract: false, final false
  inline void HandleInputFocusWasReleased();

  /// @brief Method HandleVRFocusWasCaptured, addr 0x24e388c, size 0x4, virtual false, abstract: false, final false
  inline void HandleVRFocusWasCaptured();

  /// @brief Method HandleVRFocusWasReleased, addr 0x24e3890, size 0x4, virtual false, abstract: false, final false
  inline void HandleVRFocusWasReleased();

  /// @brief Method Initialize, addr 0x24e3078, size 0x400, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::GlobalNamespace::VRPlatformEventsDebugger* New_ctor();

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method .ctor, addr 0x24e3894, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_loggerPrefix, addr 0x24e3038, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_loggerPrefix();

  /// @brief Convert to "::GlobalNamespace::IVerboseLogger"
  constexpr ::GlobalNamespace::IVerboseLogger* i___GlobalNamespace__IVerboseLogger() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRPlatformEventsDebugger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRPlatformEventsDebugger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRPlatformEventsDebugger(VRPlatformEventsDebugger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRPlatformEventsDebugger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRPlatformEventsDebugger(VRPlatformEventsDebugger const&) = delete;

  /// @brief Field _vrPlatformHelper, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRPlatformEventsDebugger, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VRPlatformEventsDebugger, ____vrPlatformHelper) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRPlatformEventsDebugger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRPlatformEventsDebugger*, "", "VRPlatformEventsDebugger");
