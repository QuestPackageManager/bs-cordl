#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OVRSemanticClassification)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class IOVRSceneComponent;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSemanticClassification;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSemanticClassification);
// Type: ::OVRSemanticClassification
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8823))
// CS Name: ::OVRSemanticClassification*
class CORDL_TYPE OVRSemanticClassification : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _labels, offset 0x18, size 0x8
  __declspec(property(get = __get__labels, put = __set__labels))::System::Collections::Generic::List_1<::StringW>* _labels;

  __declspec(property(get = get_Labels))::System::Collections::Generic::IReadOnlyList_1<::StringW>* Labels;

  /// @brief Convert operator to "::GlobalNamespace::IOVRSceneComponent"
  constexpr operator ::GlobalNamespace::IOVRSceneComponent*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get__labels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get__labels() const;

  constexpr void __set__labels(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method get_Labels addr 0x2622084 size 0x8 virtual false final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_Labels();

  /// @brief Method Contains addr 0x262208c size 0x160 virtual false final false
  inline bool Contains(::StringW label);

  /// @brief Method Awake addr 0x26221ec size 0xd0 virtual false final false
  inline void Awake();

  /// @brief Method IOVRSceneComponent.Initialize addr 0x26222bc size 0x11c virtual true final true
  inline void IOVRSceneComponent_Initialize();

  static inline ::GlobalNamespace::OVRSemanticClassification* New_ctor();

  /// @brief Method .ctor addr 0x26223d8 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRSemanticClassification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSemanticClassification(OVRSemanticClassification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSemanticClassification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSemanticClassification(OVRSemanticClassification const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSemanticClassification();

public:
  /// @brief Field _labels, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____labels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSemanticClassification, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSemanticClassification, ____labels) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSemanticClassification);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSemanticClassification*, "", "OVRSemanticClassification");
