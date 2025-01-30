#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SavePersistentViewData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(SavePersistentViewData)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class SavePersistentViewData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::SavePersistentViewData);
// Dependencies System.MulticastDelegate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.SavePersistentViewData
class CORDL_TYPE SavePersistentViewData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4a448f4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::UIElements::SavePersistentViewData* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4a4486c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SavePersistentViewData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SavePersistentViewData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SavePersistentViewData(SavePersistentViewData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SavePersistentViewData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SavePersistentViewData(SavePersistentViewData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6013 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::SavePersistentViewData, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::SavePersistentViewData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::SavePersistentViewData*, "UnityEngine.UIElements", "SavePersistentViewData");
