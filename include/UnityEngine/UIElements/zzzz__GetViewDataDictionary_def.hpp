#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/GetViewDataDictionary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(GetViewDataDictionary)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class ISerializableJsonDictionary;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class GetViewDataDictionary;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::GetViewDataDictionary);
// Dependencies System.MulticastDelegate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.GetViewDataDictionary
class CORDL_TYPE GetViewDataDictionary : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4a43d40, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::ISerializableJsonDictionary* Invoke();

  static inline ::UnityEngine::UIElements::GetViewDataDictionary* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4a43cb8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetViewDataDictionary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetViewDataDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetViewDataDictionary(GetViewDataDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetViewDataDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetViewDataDictionary(GetViewDataDictionary const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6014 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GetViewDataDictionary, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::GetViewDataDictionary);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GetViewDataDictionary*, "UnityEngine.UIElements", "GetViewDataDictionary");
