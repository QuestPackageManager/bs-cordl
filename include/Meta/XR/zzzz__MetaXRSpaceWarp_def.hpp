#pragma once
// IWYU pragma private; include "Meta/XR/MetaXRSpaceWarp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MetaXRSpaceWarp)
// Forward declare root types
namespace Meta::XR {
class MetaXRSpaceWarp;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MetaXRSpaceWarp);
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace Meta::XR {
// Is value type: false
// CS Name: Meta.XR.MetaXRSpaceWarp
class CORDL_TYPE MetaXRSpaceWarp : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  /// @brief Method MetaSetAppSpacePosition, addr 0x5ca225c, size 0x90, virtual false, abstract: false, final false
  static inline void MetaSetAppSpacePosition(float_t x, float_t y, float_t z);

  /// @brief Method MetaSetAppSpaceRotation, addr 0x5ca22f0, size 0x98, virtual false, abstract: false, final false
  static inline void MetaSetAppSpaceRotation(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method MetaSetSpaceWarp, addr 0x5ca21dc, size 0x7c, virtual false, abstract: false, final false
  static inline void MetaSetSpaceWarp(bool enabled);

  static inline ::Meta::XR::MetaXRSpaceWarp* New_ctor();

  /// @brief Method SetAppSpacePosition, addr 0x5ca2258, size 0x4, virtual false, abstract: false, final false
  static inline void SetAppSpacePosition(float_t x, float_t y, float_t z);

  /// @brief Method SetAppSpaceRotation, addr 0x5ca22ec, size 0x4, virtual false, abstract: false, final false
  static inline void SetAppSpaceRotation(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method SetSpaceWarp, addr 0x5ca21d8, size 0x4, virtual false, abstract: false, final false
  static inline void SetSpaceWarp(bool enabled);

  /// @brief Method .ctor, addr 0x5ca2388, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaXRSpaceWarp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaXRSpaceWarp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaXRSpaceWarp(MetaXRSpaceWarp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaXRSpaceWarp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaXRSpaceWarp(MetaXRSpaceWarp const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8545 };

  /// @brief Field extensionList offset 0xffffffff size 0x8
  static constexpr ::ConstString extensionList{ u"XR_FB_space_warp" };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.meta.openxr.feature.spacewarp" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::MetaXRSpaceWarp, 0x50>, "Size mismatch!");

} // namespace Meta::XR
NEED_NO_BOX(::Meta::XR::MetaXRSpaceWarp);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MetaXRSpaceWarp*, "Meta.XR", "MetaXRSpaceWarp");
