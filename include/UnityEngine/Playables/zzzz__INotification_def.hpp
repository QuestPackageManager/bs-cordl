#pragma once
// IWYU pragma private; include "UnityEngine/Playables/INotification.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INotification)
namespace UnityEngine {
struct PropertyName;
}
// Forward declare root types
namespace UnityEngine::Playables {
class INotification;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Playables::INotification);
// Dependencies
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.INotification
class CORDL_TYPE INotification {
public:
  // Declarations
  __declspec(property(get = get_id)) ::UnityEngine::PropertyName id;

  /// @brief Method get_id, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::PropertyName get_id();

  // Ctor Parameters [CppParam { name: "", ty: "INotification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INotification(INotification const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11269 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::INotification);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::INotification*, "UnityEngine.Playables", "INotification");
