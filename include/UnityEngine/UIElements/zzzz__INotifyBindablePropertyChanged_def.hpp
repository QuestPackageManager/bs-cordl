#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/INotifyBindablePropertyChanged.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INotifyBindablePropertyChanged)
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace UnityEngine::UIElements {
struct BindablePropertyChangedEventArgs;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class INotifyBindablePropertyChanged;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::INotifyBindablePropertyChanged);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.INotifyBindablePropertyChanged
class CORDL_TYPE INotifyBindablePropertyChanged {
public:
  // Declarations
  /// @brief Method add_propertyChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_propertyChanged(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* value);

  /// @brief Method remove_propertyChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_propertyChanged(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* value);

  // Ctor Parameters [CppParam { name: "", ty: "INotifyBindablePropertyChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INotifyBindablePropertyChanged(INotifyBindablePropertyChanged const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4060 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::INotifyBindablePropertyChanged);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::INotifyBindablePropertyChanged*, "UnityEngine.UIElements", "INotifyBindablePropertyChanged");
