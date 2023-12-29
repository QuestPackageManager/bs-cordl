#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRFeature)
// Forward declare root types
namespace Meta::XR {
class MetaXRFeature;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MetaXRFeature);
// Type: Meta.XR::MetaXRFeature
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 78, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Meta::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9509))
// CS Name: ::Meta.XR::MetaXRFeature*
class CORDL_TYPE MetaXRFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  /// @brief Method HookGetInstanceProcAddr addr 0x2685410 size 0x118 virtual true final false
  inline void* HookGetInstanceProcAddr(void* func);

  /// @brief Method OnInstanceCreate addr 0x2685528 size 0xd0 virtual true final false
  inline bool OnInstanceCreate(uint64_t xrInstance);

  /// @brief Method OnInstanceDestroy addr 0x26855f8 size 0xcc virtual true final false
  inline void OnInstanceDestroy(uint64_t xrInstance);

  /// @brief Method OnSessionCreate addr 0x26856c4 size 0xcc virtual true final false
  inline void OnSessionCreate(uint64_t xrSession);

  /// @brief Method OnAppSpaceChange addr 0x2685790 size 0xcc virtual true final false
  inline void OnAppSpaceChange(uint64_t xrSpace);

  /// @brief Method OnSessionStateChange addr 0x268585c size 0xec virtual true final false
  inline void OnSessionStateChange(int32_t oldState, int32_t newState);

  /// @brief Method OnSessionBegin addr 0x2685948 size 0xcc virtual true final false
  inline void OnSessionBegin(uint64_t xrSession);

  /// @brief Method OnSessionEnd addr 0x2685a14 size 0xcc virtual true final false
  inline void OnSessionEnd(uint64_t xrSession);

  /// @brief Method OnSessionExiting addr 0x2685ae0 size 0xcc virtual true final false
  inline void OnSessionExiting(uint64_t xrSession);

  /// @brief Method OnSessionDestroy addr 0x2685bac size 0xcc virtual true final false
  inline void OnSessionDestroy(uint64_t xrSession);

  static inline ::Meta::XR::MetaXRFeature* New_ctor();

  /// @brief Method .ctor addr 0x2685c78 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MetaXRFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaXRFeature(MetaXRFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaXRFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaXRFeature(MetaXRFeature const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaXRFeature();

public:
  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.meta.openxr.feature.metaxr" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::MetaXRFeature, 0x50>, "Size mismatch!");

} // namespace Meta::XR
NEED_NO_BOX(::Meta::XR::MetaXRFeature);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MetaXRFeature*, "Meta.XR", "MetaXRFeature");
