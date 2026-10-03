#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/SpaceWarpFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpaceWarpFeature)
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrResult;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features {
class SpaceWarpFeature;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*, "UnityEngine.XR.OpenXR.Features", "SpaceWarpFeature");
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.SpaceWarpFeature
class CORDL_TYPE SpaceWarpFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  /// @brief Field m_UseRightHandedNDC, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseRightHandedNDC, put = __cordl_internal_set_m_UseRightHandedNDC)) bool m_UseRightHandedNDC;

  __declspec(property(get = get_useRightHandedNDC, put = set_useRightHandedNDC)) bool useRightHandedNDC;

  /// @brief Method Internal_SetSpaceWarpRightHandedNDC, addr 0x6e4c5e0, size 0x84, virtual false, abstract: false, final false
  static inline bool Internal_SetSpaceWarpRightHandedNDC(bool useRightHandedNDC);

  /// @brief Method MetaSetAppSpacePosition, addr 0x6e4c774, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult MetaSetAppSpacePosition(float_t x, float_t y, float_t z);

  /// @brief Method MetaSetAppSpaceRotation, addr 0x6e4c81c, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult MetaSetAppSpaceRotation(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method MetaSetSpaceWarp, addr 0x6e4c6e0, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult MetaSetSpaceWarp(bool enabled);

  static inline ::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature* New_ctor();

  /// @brief Method OnInstanceCreate, addr 0x6e4c664, size 0x64, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t xrInstance);

  /// @brief Method SetAppSpacePosition, addr 0x6e4c75c, size 0x18, virtual false, abstract: false, final false
  static inline bool SetAppSpacePosition(::UnityEngine::Vector3 position);

  /// @brief Method SetAppSpaceRotation, addr 0x6e4c804, size 0x18, virtual false, abstract: false, final false
  static inline bool SetAppSpaceRotation(::UnityEngine::Quaternion rotation);

  /// @brief Method SetSpaceWarp, addr 0x6e4c6c8, size 0x18, virtual false, abstract: false, final false
  static inline bool SetSpaceWarp(bool enabled);

  constexpr bool const& __cordl_internal_get_m_UseRightHandedNDC() const;

  constexpr bool& __cordl_internal_get_m_UseRightHandedNDC();

  constexpr void __cordl_internal_set_m_UseRightHandedNDC(bool value);

  /// @brief Method .ctor, addr 0x6e4c8b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_useRightHandedNDC, addr 0x6e4c4e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_useRightHandedNDC();

  /// @brief Method set_useRightHandedNDC, addr 0x6e4c4e8, size 0xf8, virtual false, abstract: false, final false
  inline void set_useRightHandedNDC(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpaceWarpFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpaceWarpFeature", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpaceWarpFeature(SpaceWarpFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpaceWarpFeature", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpaceWarpFeature(SpaceWarpFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17621 };

  /// @brief Field k_Library offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Library{ u"UnityOpenXR" };

  /// @brief Field k_OpenXRRequestedExtensions offset 0xffffffff size 0x8
  static constexpr ::ConstString k_OpenXRRequestedExtensions{ u"XR_FB_space_warp" };

  /// @brief Field k_SpaceWarpFeatureId offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SpaceWarpFeatureId{ u"com.unity.openxr.feature.spacewarp" };

  /// @brief Field k_UiName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_UiName{ u"Application SpaceWarp" };

  /// [SerializeField]
  /// [Tooltip("Check this box if motion vector uses right-handed normalized device coordinates")]
  /// @brief Field m_UseRightHandedNDC, offset: 0x69, size: 0x1, def value: None
  bool ___m_UseRightHandedNDC;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature, ___m_UseRightHandedNDC) == 0x69, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature) == 0x70, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
