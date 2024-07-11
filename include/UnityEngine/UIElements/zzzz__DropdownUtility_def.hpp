#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DropdownUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DropdownUtility)
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UIElements {
class IGenericMenu;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DropdownUtility);
// Type: UnityEngine.UIElements::DropdownUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::DropdownUtility*
class CORDL_TYPE DropdownUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field MakeDropdownFunc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MakeDropdownFunc, put = setStaticF_MakeDropdownFunc))::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* MakeDropdownFunc;

  /// @brief Method CreateDropdown, addr 0x3548134, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::IGenericMenu* CreateDropdown();

  static inline ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* getStaticF_MakeDropdownFunc();

  static inline void setStaticF_MakeDropdownFunc(::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DropdownUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownUtility(DropdownUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownUtility(DropdownUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DropdownUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownUtility*, "UnityEngine.UIElements", "DropdownUtility");
