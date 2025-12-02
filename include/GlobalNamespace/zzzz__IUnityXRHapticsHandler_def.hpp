#pragma once
// IWYU pragma private; include "GlobalNamespace/IUnityXRHapticsHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IUnityXRHapticsHandler)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class IUnityXRHapticsHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IUnityXRHapticsHandler);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IUnityXRHapticsHandler
class CORDL_TYPE IUnityXRHapticsHandler {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method StopHaptics, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void StopHaptics();

  /// @brief Method TriggerHapticPulse, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void TriggerHapticPulse(float_t strength, float_t duration);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IUnityXRHapticsHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUnityXRHapticsHandler(IUnityXRHapticsHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20088 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IUnityXRHapticsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IUnityXRHapticsHandler*, "", "IUnityXRHapticsHandler");
