#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSemanticClassification.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IOVRSceneComponent_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OVRSemanticClassification)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSemanticClassification;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSemanticClassification);
// Dependencies IOVRSceneComponent, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSemanticClassification
class CORDL_TYPE OVRSemanticClassification : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_Labels)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>* Labels;

  /// @brief Field _labels, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__labels, put = __cordl_internal_set__labels)) ::System::Collections::Generic::List_1<::StringW>* _labels;

  /// @brief Convert operator to "::GlobalNamespace::IOVRSceneComponent"
  constexpr operator ::GlobalNamespace::IOVRSceneComponent*() noexcept;

  /// @brief Method Awake, addr 0x40156cc, size 0xd0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Contains, addr 0x4015568, size 0x164, virtual false, abstract: false, final false
  inline bool Contains(::StringW label);

  /// @brief Method IOVRSceneComponent.Initialize, addr 0x401579c, size 0x120, virtual true, abstract: false, final true
  inline void IOVRSceneComponent_Initialize();

  static inline ::GlobalNamespace::OVRSemanticClassification* New_ctor();

  /// @brief Method ValidateAndUpgradeLabels, addr 0x40158bc, size 0x494, virtual false, abstract: false, final false
  static inline ::StringW ValidateAndUpgradeLabels(::StringW labels);

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__labels() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__labels();

  constexpr void __cordl_internal_set__labels(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x4015d50, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Labels, addr 0x4015560, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_Labels();

  /// @brief Convert to "::GlobalNamespace::IOVRSceneComponent"
  constexpr ::GlobalNamespace::IOVRSceneComponent* i___GlobalNamespace__IOVRSceneComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSemanticClassification();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSemanticClassification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSemanticClassification(OVRSemanticClassification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSemanticClassification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSemanticClassification(OVRSemanticClassification const&) = delete;

  /// @brief Field LabelSeparator offset 0xffffffff size 0x2
  static constexpr char16_t LabelSeparator{ u',' };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8303 };

  /// @brief Field _labels, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____labels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSemanticClassification, ____labels) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSemanticClassification, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSemanticClassification);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSemanticClassification*, "", "OVRSemanticClassification");
