#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/OculusQuestSupport/OculusQuestFeature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OculusQuestFeature)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::OculusQuestSupport {
class OculusQuestFeature;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature);
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace UnityEngine::XR::OpenXR::Features::OculusQuestSupport {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.OculusQuestSupport.OculusQuestFeature
class CORDL_TYPE OculusQuestFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  /// @brief Field targetQuest, offset 0x4e, size 0x1
  __declspec(property(get = __cordl_internal_get_targetQuest, put = __cordl_internal_set_targetQuest)) bool targetQuest;

  /// @brief Field targetQuest2, offset 0x4f, size 0x1
  __declspec(property(get = __cordl_internal_get_targetQuest2, put = __cordl_internal_set_targetQuest2)) bool targetQuest2;

  static inline ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature* New_ctor();

  constexpr bool const& __cordl_internal_get_targetQuest() const;

  constexpr bool& __cordl_internal_get_targetQuest();

  constexpr bool const& __cordl_internal_get_targetQuest2() const;

  constexpr bool& __cordl_internal_get_targetQuest2();

  constexpr void __cordl_internal_set_targetQuest(bool value);

  constexpr void __cordl_internal_set_targetQuest2(bool value);

  /// @brief Method .ctor, addr 0x683dc2c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusQuestFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusQuestFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusQuestFeature(OculusQuestFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusQuestFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusQuestFeature(OculusQuestFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23396 };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.oculusquest" };

  /// @brief Field targetQuest, offset: 0x4e, size: 0x1, def value: None
  bool ___targetQuest;

  /// @brief Field targetQuest2, offset: 0x4f, size: 0x1, def value: None
  bool ___targetQuest2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature, ___targetQuest) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature, ___targetQuest2) == 0x4f, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::OculusQuestSupport
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature*, "UnityEngine.XR.OpenXR.Features.OculusQuestSupport", "OculusQuestFeature");
