#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/RaycasterManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RaycasterManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class BaseRaycaster;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class RaycasterManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::RaycasterManager);
// Dependencies System.Object
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.RaycasterManager
class CORDL_TYPE RaycasterManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Raycasters, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Raycasters, put = setStaticF_s_Raycasters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseRaycaster>>* s_Raycasters;

  /// @brief Method AddRaycaster, addr 0x4ae18f8, size 0x110, virtual false, abstract: false, final false
  static inline void AddRaycaster(::UnityEngine::EventSystems::BaseRaycaster* baseRaycaster);

  /// @brief Method GetRaycasters, addr 0x4ae1a08, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseRaycaster>>* GetRaycasters();

  /// @brief Method RemoveRaycasters, addr 0x4ae1a60, size 0xd0, virtual false, abstract: false, final false
  static inline void RemoveRaycasters(::UnityEngine::EventSystems::BaseRaycaster* baseRaycaster);

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseRaycaster>>* getStaticF_s_Raycasters();

  static inline void setStaticF_s_Raycasters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseRaycaster>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RaycasterManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RaycasterManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RaycasterManager(RaycasterManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RaycasterManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RaycasterManager(RaycasterManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15223 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::RaycasterManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::RaycasterManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::RaycasterManager*, "UnityEngine.EventSystems", "RaycasterManager");
