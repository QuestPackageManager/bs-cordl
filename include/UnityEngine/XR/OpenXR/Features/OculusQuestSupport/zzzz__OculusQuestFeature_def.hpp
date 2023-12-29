#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
CORDL_MODULE_EXPORT(OculusQuestFeature)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::OculusQuestSupport {
class OculusQuestFeature;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature);
// Type: UnityEngine.XR.OpenXR.Features.OculusQuestSupport::OculusQuestFeature
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::OculusQuestSupport {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16108))
// CS Name: ::UnityEngine.XR.OpenXR.Features.OculusQuestSupport::OculusQuestFeature*
class CORDL_TYPE OculusQuestFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  /// @brief Field targetQuest, offset 0x4e, size 0x1
  __declspec(property(get = __get_targetQuest, put = __set_targetQuest)) bool targetQuest;

  /// @brief Field targetQuest2, offset 0x4f, size 0x1
  __declspec(property(get = __get_targetQuest2, put = __set_targetQuest2)) bool targetQuest2;

  constexpr bool& __get_targetQuest();

  constexpr bool const& __get_targetQuest() const;

  constexpr void __set_targetQuest(bool value);

  constexpr bool& __get_targetQuest2();

  constexpr bool const& __get_targetQuest2() const;

  constexpr void __set_targetQuest2(bool value);

  static inline ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature* New_ctor();

  /// @brief Method .ctor addr 0x2b17a84 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OculusQuestFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusQuestFeature(OculusQuestFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusQuestFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusQuestFeature(OculusQuestFeature const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusQuestFeature();

public:
  /// @brief Field targetQuest, offset: 0x4e, size: 0x1, def value: None
  bool ___targetQuest;

  /// @brief Field targetQuest2, offset: 0x4f, size: 0x1, def value: None
  bool ___targetQuest2;

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.oculusquest" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature, ___targetQuest) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature, ___targetQuest2) == 0x4f, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::OculusQuestSupport
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature*, "UnityEngine.XR.OpenXR.Features.OculusQuestSupport", "OculusQuestFeature");
