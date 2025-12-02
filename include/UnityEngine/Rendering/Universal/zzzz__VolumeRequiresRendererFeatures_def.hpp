#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/VolumeRequiresRendererFeatures.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(VolumeRequiresRendererFeatures)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class VolumeRequiresRendererFeatures;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures);
// Dependencies System.Attribute
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.VolumeRequiresRendererFeatures
class CORDL_TYPE VolumeRequiresRendererFeatures : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field TargetFeatureTypes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_TargetFeatureTypes, put = __cordl_internal_set_TargetFeatureTypes)) ::System::Collections::Generic::HashSet_1<::System::Type*>* TargetFeatureTypes;

  static inline ::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures* New_ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> featureTypes);

  constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>* const& __cordl_internal_get_TargetFeatureTypes() const;

  constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>*& __cordl_internal_get_TargetFeatureTypes();

  constexpr void __cordl_internal_set_TargetFeatureTypes(::System::Collections::Generic::HashSet_1<::System::Type*>* value);

  /// @brief Method .ctor, addr 0x66c89e8, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> featureTypes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeRequiresRendererFeatures();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeRequiresRendererFeatures", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeRequiresRendererFeatures(VolumeRequiresRendererFeatures&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeRequiresRendererFeatures", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeRequiresRendererFeatures(VolumeRequiresRendererFeatures const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13018 };

  /// @brief Field TargetFeatureTypes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Type*>* ___TargetFeatureTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures, ___TargetFeatureTypes) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures*, "UnityEngine.Rendering.Universal", "VolumeRequiresRendererFeatures");
