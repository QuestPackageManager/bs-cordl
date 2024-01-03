#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DefaultUnityXRHapticsHandler)
namespace System {
class IDisposable;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
class IUnityXRHapticsHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class DefaultUnityXRHapticsHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DefaultUnityXRHapticsHandler);
// Type: ::DefaultUnityXRHapticsHandler
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15614)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14412))
// CS Name: ::DefaultUnityXRHapticsHandler*
class CORDL_TYPE DefaultUnityXRHapticsHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field _node, offset 0x10, size 0x4
  __declspec(property(get = __get__node, put = __set__node))::UnityEngine::XR::XRNode _node;

  /// @brief Convert operator to "::GlobalNamespace::IUnityXRHapticsHandler"
  constexpr operator ::GlobalNamespace::IUnityXRHapticsHandler*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::UnityEngine::XR::XRNode& __get__node();

  constexpr ::UnityEngine::XR::XRNode const& __get__node() const;

  constexpr void __set__node(::UnityEngine::XR::XRNode value);

  static inline ::GlobalNamespace::DefaultUnityXRHapticsHandler* New_ctor(::UnityEngine::XR::XRNode node);

  /// @brief Method .ctor, addr 0x20f7014, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::XRNode node);

  /// @brief Method Destroy, addr 0x20f703c, size 0x4, virtual false, abstract: false, final false
  inline void Destroy();

  /// @brief Method TriggerHapticPulse, addr 0x20f7040, size 0x4c, virtual true, abstract: false, final true
  inline void TriggerHapticPulse(float_t strength, float_t duration);

  /// @brief Method StopHaptics, addr 0x20f708c, size 0x30, virtual true, abstract: false, final true
  inline void StopHaptics();

  /// @brief Method Dispose, addr 0x20f70bc, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultUnityXRHapticsHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultUnityXRHapticsHandler(DefaultUnityXRHapticsHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultUnityXRHapticsHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultUnityXRHapticsHandler(DefaultUnityXRHapticsHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultUnityXRHapticsHandler();

public:
  /// @brief Field _node, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode ____node;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DefaultUnityXRHapticsHandler, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultUnityXRHapticsHandler, ____node) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DefaultUnityXRHapticsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultUnityXRHapticsHandler*, "", "DefaultUnityXRHapticsHandler");
