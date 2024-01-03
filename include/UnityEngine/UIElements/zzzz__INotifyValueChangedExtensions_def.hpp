#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(INotifyValueChangedExtensions)
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
namespace UnityEngine::UIElements {
template <typename T> class INotifyValueChanged_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class INotifyValueChangedExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::INotifyValueChangedExtensions);
// Type: UnityEngine.UIElements::INotifyValueChangedExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7128))
// CS Name: ::UnityEngine.UIElements::INotifyValueChangedExtensions*
class CORDL_TYPE INotifyValueChangedExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method RegisterValueChangedCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool RegisterValueChangedCallback(::UnityEngine::UIElements::INotifyValueChanged_1<T>* control,
                                                  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<T>*>* callback);

  /// @brief Method UnregisterValueChangedCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool UnregisterValueChangedCallback(::UnityEngine::UIElements::INotifyValueChanged_1<T>* control,
                                                    ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<T>*>* callback);

  // Ctor Parameters [CppParam { name: "", ty: "INotifyValueChangedExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INotifyValueChangedExtensions(INotifyValueChangedExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INotifyValueChangedExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INotifyValueChangedExtensions(INotifyValueChangedExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr INotifyValueChangedExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::INotifyValueChangedExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::INotifyValueChangedExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::INotifyValueChangedExtensions*, "UnityEngine.UIElements", "INotifyValueChangedExtensions");
