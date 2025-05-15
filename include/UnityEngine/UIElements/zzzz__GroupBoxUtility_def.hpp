#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/GroupBoxUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GroupBoxUtility)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
namespace UnityEngine::UIElements {
class IGroupBox;
}
namespace UnityEngine::UIElements {
class IGroupManager;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class GroupBoxUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::GroupBoxUtility);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.GroupBoxUtility
class CORDL_TYPE GroupBoxUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_GenericGroupBoxType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_GenericGroupBoxType, put = setStaticF_k_GenericGroupBoxType)) ::System::Type* k_GenericGroupBoxType;

  /// @brief Field s_GroupManagers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_GroupManagers,
                      put =
                          setStaticF_s_GroupManagers)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBox*, ::UnityEngine::UIElements::IGroupManager*>* s_GroupManagers;

  /// @brief Field s_GroupOptionManagerCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_GroupOptionManagerCache,
                      put = setStaticF_s_GroupOptionManagerCache)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBoxOption*, ::UnityEngine::UIElements::IGroupManager*>*
      s_GroupOptionManagerCache;

  /// @brief Method FindOrCreateGroupManager, addr 0x4a3caa8, size 0x46c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::IGroupManager* FindOrCreateGroupManager(::UnityEngine::UIElements::IGroupBox* groupBox);

  /// @brief Method OnGroupBoxDetachedFromPanel, addr 0x4a3d040, size 0xb4, virtual false, abstract: false, final false
  static inline void OnGroupBoxDetachedFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt);

  /// @brief Method OnOptionSelected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void OnOptionSelected(T selectedOption);

  /// @brief Method OnPanelDestroyed, addr 0x4a3d0f4, size 0xd4, virtual false, abstract: false, final false
  static inline void OnPanelDestroyed(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method RegisterGroupBoxOption, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RegisterGroupBoxOption(T option);

  /// @brief Method UnregisterGroupBoxOption, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnregisterGroupBoxOption(T option);

  static inline ::System::Type* getStaticF_k_GenericGroupBoxType();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBox*, ::UnityEngine::UIElements::IGroupManager*>* getStaticF_s_GroupManagers();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBoxOption*, ::UnityEngine::UIElements::IGroupManager*>* getStaticF_s_GroupOptionManagerCache();

  static inline void setStaticF_k_GenericGroupBoxType(::System::Type* value);

  static inline void setStaticF_s_GroupManagers(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBox*, ::UnityEngine::UIElements::IGroupManager*>* value);

  static inline void setStaticF_s_GroupOptionManagerCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBoxOption*, ::UnityEngine::UIElements::IGroupManager*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GroupBoxUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GroupBoxUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GroupBoxUtility(GroupBoxUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GroupBoxUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GroupBoxUtility(GroupBoxUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5970 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GroupBoxUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::GroupBoxUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GroupBoxUtility*, "UnityEngine.UIElements", "GroupBoxUtility");
