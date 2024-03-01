#pragma once
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
// Type: UnityEngine.Playables::INotification
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: ::UnityEngine.Playables::INotification*
class CORDL_TYPE INotification {
public:
  // Declarations
  __declspec(property(get = get_id))::UnityEngine::PropertyName id;

  /// @brief Method get_id, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::PropertyName get_id();

  // Ctor Parameters [CppParam { name: "", ty: "INotification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INotification(INotification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INotification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INotification(INotification const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::INotification);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::INotification*, "UnityEngine.Playables", "INotification");
