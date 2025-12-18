#pragma once
// IWYU pragma private; include "Meta/XR/MetaXRFeature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRFeature)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Meta::XR {
class MetaXRFeature;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MetaXRFeature);
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace Meta::XR {
// Is value type: false
// CS Name: Meta.XR.MetaXRFeature
class CORDL_TYPE MetaXRFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  __declspec(property(get = get_userPresent)) bool userPresent;

  /// @brief Method HookGetInstanceProcAddr, addr 0x5ca139c, size 0x130, virtual true, abstract: false, final false
  inline ::System::IntPtr HookGetInstanceProcAddr(::System::IntPtr func);

  static inline ::Meta::XR::MetaXRFeature* New_ctor();

  /// @brief Method OnAppSpaceChange, addr 0x5ca197c, size 0xe4, virtual true, abstract: false, final false
  inline void OnAppSpaceChange(uint64_t xrSpace);

  /// @brief Method OnInstanceCreate, addr 0x5ca14cc, size 0x2f8, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t xrInstance);

  /// @brief Method OnInstanceDestroy, addr 0x5ca17c4, size 0xdc, virtual true, abstract: false, final false
  inline void OnInstanceDestroy(uint64_t xrInstance);

  /// @brief Method OnSessionBegin, addr 0x5ca1b64, size 0xdc, virtual true, abstract: false, final false
  inline void OnSessionBegin(uint64_t xrSession);

  /// @brief Method OnSessionCreate, addr 0x5ca18a0, size 0xdc, virtual true, abstract: false, final false
  inline void OnSessionCreate(uint64_t xrSession);

  /// @brief Method OnSessionDestroy, addr 0x5ca1df8, size 0xdc, virtual true, abstract: false, final false
  inline void OnSessionDestroy(uint64_t xrSession);

  /// @brief Method OnSessionEnd, addr 0x5ca1c40, size 0xdc, virtual true, abstract: false, final false
  inline void OnSessionEnd(uint64_t xrSession);

  /// @brief Method OnSessionExiting, addr 0x5ca1d1c, size 0xdc, virtual true, abstract: false, final false
  inline void OnSessionExiting(uint64_t xrSession);

  /// @brief Method OnSessionStateChange, addr 0x5ca1a60, size 0x104, virtual true, abstract: false, final false
  inline void OnSessionStateChange(int32_t oldState, int32_t newState);

  /// @brief Method .ctor, addr 0x5ca1ed4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_userPresent, addr 0x5ca1310, size 0x8c, virtual false, abstract: false, final false
  inline bool get_userPresent();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaXRFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaXRFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaXRFeature(MetaXRFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaXRFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaXRFeature(MetaXRFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8542 };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.meta.openxr.feature.metaxr" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::MetaXRFeature, 0x50>, "Size mismatch!");

} // namespace Meta::XR
NEED_NO_BOX(::Meta::XR::MetaXRFeature);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MetaXRFeature*, "Meta.XR", "MetaXRFeature");
