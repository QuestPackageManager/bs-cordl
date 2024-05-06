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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UIElementsPackageUtility*
class CORDL_TYPE UIElementsPackageUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field EditorResourcesBasePath, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EditorResourcesBasePath, put = setStaticF_EditorResourcesBasePath))::StringW EditorResourcesBasePath;

  /// @brief Field IsUIEPackageLoaded, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_IsUIEPackageLoaded, put = setStaticF_IsUIEPackageLoaded)) bool IsUIEPackageLoaded;

  static inline ::StringW getStaticF_EditorResourcesBasePath();

  static inline bool getStaticF_IsUIEPackageLoaded();

  static inline void setStaticF_EditorResourcesBasePath(::StringW value);

  static inline void setStaticF_IsUIEPackageLoaded(bool value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIElementsPackageUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIElementsPackageUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIElementsPackageUtility*, "UnityEngine.UIElements", "UIElementsPackageUtility");
