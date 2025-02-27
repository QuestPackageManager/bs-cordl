#pragma once
// IWYU pragma private; include "GlobalNamespace/DefaultUnityXRHapticsHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IUnityXRHapticsHandler_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DefaultUnityXRHapticsHandler)
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace GlobalNamespace {
class DefaultUnityXRHapticsHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DefaultUnityXRHapticsHandler);
// Dependencies IUnityXRHapticsHandler, System.IDisposable, System.Object, UnityEngine.XR.XRNode
namespace GlobalNamespace {
// Is value type: false
// CS Name: DefaultUnityXRHapticsHandler
class CORDL_TYPE DefaultUnityXRHapticsHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field _node, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__node, put = __cordl_internal_set__node)) ::UnityEngine::XR::XRNode _node;

  /// @brief Convert operator to "::GlobalNamespace::IUnityXRHapticsHandler"
  constexpr operator ::GlobalNamespace::IUnityXRHapticsHandler*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Destroy, addr 0x39d4720, size 0x4, virtual false, abstract: false, final false
  inline void Destroy();

  /// @brief Method Dispose, addr 0x39d47a0, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::DefaultUnityXRHapticsHandler* New_ctor(::UnityEngine::XR::XRNode node);

  /// @brief Method StopHaptics, addr 0x39d4770, size 0x30, virtual true, abstract: false, final true
  inline void StopHaptics();

  /// @brief Method TriggerHapticPulse, addr 0x39d4724, size 0x4c, virtual true, abstract: false, final true
  inline void TriggerHapticPulse(float_t strength, float_t duration);

  constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get__node() const;

  constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get__node();

  constexpr void __cordl_internal_set__node(::UnityEngine::XR::XRNode value);

  /// @brief Method .ctor, addr 0x39d46f8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::XRNode node);

  /// @brief Convert to "::GlobalNamespace::IUnityXRHapticsHandler"
  constexpr ::GlobalNamespace::IUnityXRHapticsHandler* i___GlobalNamespace__IUnityXRHapticsHandler() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultUnityXRHapticsHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultUnityXRHapticsHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultUnityXRHapticsHandler(DefaultUnityXRHapticsHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultUnityXRHapticsHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultUnityXRHapticsHandler(DefaultUnityXRHapticsHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16466 };

  /// @brief Field _node, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode ____node;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DefaultUnityXRHapticsHandler, ____node) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DefaultUnityXRHapticsHandler, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DefaultUnityXRHapticsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultUnityXRHapticsHandler*, "", "DefaultUnityXRHapticsHandler");
