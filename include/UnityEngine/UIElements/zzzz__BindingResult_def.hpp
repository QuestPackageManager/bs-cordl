#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindingStatus_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BindingResult)
namespace UnityEngine::UIElements {
struct BindingStatus;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct BindingResult;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::BindingResult);
// Dependencies UnityEngine.UIElements.BindingStatus
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.BindingResult
struct CORDL_TYPE BindingResult {
public:
  // Declarations
  __declspec(property(get = get_message)) ::StringW message;

  __declspec(property(get = get_status)) ::UnityEngine::UIElements::BindingStatus status;

  /// @brief Method .ctor, addr 0x6a652a8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BindingStatus status, ::StringW message);

  /// @brief Method get_message, addr 0x6a652a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_message();

  /// @brief Method get_status, addr 0x6a65298, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingStatus get_status();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingResult();

  // Ctor Parameters [CppParam { name: "_status_k__BackingField", ty: "::UnityEngine::UIElements::BindingStatus", modifiers: "", def_value: None }, CppParam { name: "_message_k__BackingField", ty:
  // "::StringW", modifiers: "", def_value: None }]
  constexpr BindingResult(::UnityEngine::UIElements::BindingStatus _status_k__BackingField, ::StringW _message_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4025 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field <status>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::BindingStatus _status_k__BackingField;

  /// @brief Field <message>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::StringW _message_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BindingResult, _status_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BindingResult, _message_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BindingResult, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BindingResult, "UnityEngine.UIElements", "BindingResult");
