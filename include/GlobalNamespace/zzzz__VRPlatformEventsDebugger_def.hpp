#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VRPlatformEventsDebugger)
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class IInitializable;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14440))
// CS Name: ::VRPlatformEventsDebugger*
class CORDL_TYPE VRPlatformEventsDebugger : public ::System::Object {
public:
  // Declarations
  /// @brief Field _vrPlatformHelper, offset 0x10, size 0x8
  __declspec(property(get = __get__vrPlatformHelper, put = __set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  __declspec(property(get = get_loggerPrefix))::StringW loggerPrefix;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
  constexpr operator ::GlobalNamespace::IVerboseLogger*() noexcept;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__vrPlatformHelper() const;

  constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method get_loggerPrefix addr 0x21003bc size 0x40 virtual true final true
  inline ::StringW get_loggerPrefix();

  /// @brief Method Initialize addr 0x21003fc size 0x400 virtual true final true
  inline void Initialize();

  /// @brief Method Dispose addr 0x21007fc size 0x404 virtual true final true
  inline void Dispose();

  /// @brief Method HandleInputFocusWasCaptured addr 0x2100c00 size 0x4 virtual false final false
  inline void HandleInputFocusWasCaptured();

  /// @brief Method HandleInputFocusWasReleased addr 0x2100c04 size 0x4 virtual false final false
  inline void HandleInputFocusWasReleased();

  /// @brief Method HandleHMDUnmounted addr 0x2100c08 size 0x4 virtual false final false
  inline void HandleHMDUnmounted();

  /// @brief Method HandleHMDMounted addr 0x2100c0c size 0x4 virtual false final false
  inline void HandleHMDMounted();

  /// @brief Method HandleVRFocusWasCaptured addr 0x2100c10 size 0x4 virtual false final false
  inline void HandleVRFocusWasCaptured();

  /// @brief Method HandleVRFocusWasReleased addr 0x2100c14 size 0x4 virtual false final false
  inline void HandleVRFocusWasReleased();

  static inline ::GlobalNamespace::VRPlatformEventsDebugger* New_ctor();

  /// @brief Method .ctor addr 0x2100c18 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VRPlatformEventsDebugger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRPlatformEventsDebugger(VRPlatformEventsDebugger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRPlatformEventsDebugger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRPlatformEventsDebugger(VRPlatformEventsDebugger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRPlatformEventsDebugger();

public:
  /// @brief Field _vrPlatformHelper, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRPlatformEventsDebugger, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRPlatformEventsDebugger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRPlatformEventsDebugger*, "", "VRPlatformEventsDebugger");
