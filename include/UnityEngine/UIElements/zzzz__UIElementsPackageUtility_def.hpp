#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIElementsPackageUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UIElementsPackageUtility)
// Forward declare root types
namespace UnityEngine::UIElements {
class UIElementsPackageUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIElementsPackageUtility);
// Type: UnityEngine.UIElements::UIElementsPackageUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UIElementsPackageUtility*
class CORDL_TYPE UIElementsPackageUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field <EditorResourcesBasePath>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__EditorResourcesBasePath_k__BackingField, put = setStaticF__EditorResourcesBasePath_k__BackingField)) ::StringW _EditorResourcesBasePath_k__BackingField;

  /// @brief Field <IsUIEPackageLoaded>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__IsUIEPackageLoaded_k__BackingField, put = setStaticF__IsUIEPackageLoaded_k__BackingField)) bool _IsUIEPackageLoaded_k__BackingField;

  /// @brief Method Refresh, addr 0x4a1ff98, size 0xd8, virtual false, abstract: false, final false
  static inline void Refresh();

  static inline ::StringW getStaticF__EditorResourcesBasePath_k__BackingField();

  static inline bool getStaticF__IsUIEPackageLoaded_k__BackingField();

  /// @brief Method get_EditorResourcesBasePath, addr 0x4a1fee0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW get_EditorResourcesBasePath();

  /// @brief Method get_IsUIEPackageLoaded, addr 0x4a1fe28, size 0x58, virtual false, abstract: false, final false
  static inline bool get_IsUIEPackageLoaded();

  static inline void setStaticF__EditorResourcesBasePath_k__BackingField(::StringW value);

  static inline void setStaticF__IsUIEPackageLoaded_k__BackingField(bool value);

  /// @brief Method set_EditorResourcesBasePath, addr 0x4a1ff38, size 0x5c, virtual false, abstract: false, final false
  static inline void set_EditorResourcesBasePath(::StringW value);

  /// @brief Method set_IsUIEPackageLoaded, addr 0x4a1fe80, size 0x60, virtual false, abstract: false, final false
  static inline void set_IsUIEPackageLoaded(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIElementsPackageUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIElementsPackageUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIElementsPackageUtility(UIElementsPackageUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIElementsPackageUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIElementsPackageUtility(UIElementsPackageUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6176 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIElementsPackageUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIElementsPackageUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIElementsPackageUtility*, "UnityEngine.UIElements", "UIElementsPackageUtility");
