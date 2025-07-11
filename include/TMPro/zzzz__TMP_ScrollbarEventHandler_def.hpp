#pragma once
// IWYU pragma private; include "TMPro/TMP_ScrollbarEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__IDeselectHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TMP_ScrollbarEventHandler)
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace TMPro {
class TMP_ScrollbarEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_ScrollbarEventHandler);
// Dependencies UnityEngine.EventSystems.IDeselectHandler, UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerClickHandler, UnityEngine.EventSystems.ISelectHandler,
// UnityEngine.MonoBehaviour
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_ScrollbarEventHandler
class CORDL_TYPE TMP_ScrollbarEventHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field isSelected, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isSelected, put = __cordl_internal_set_isSelected)) bool isSelected;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDeselectHandler"
  constexpr operator ::UnityEngine::EventSystems::IDeselectHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
  constexpr operator ::UnityEngine::EventSystems::ISelectHandler*() noexcept;

  static inline ::TMPro::TMP_ScrollbarEventHandler* New_ctor();

  /// @brief Method OnDeselect, addr 0x47fde30, size 0x74, virtual true, abstract: false, final true
  inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnPointerClick, addr 0x47fdd50, size 0x68, virtual true, abstract: false, final true
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSelect, addr 0x47fddb8, size 0x78, virtual true, abstract: false, final true
  inline void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData);

  constexpr bool const& __cordl_internal_get_isSelected() const;

  constexpr bool& __cordl_internal_get_isSelected();

  constexpr void __cordl_internal_set_isSelected(bool value);

  /// @brief Method .ctor, addr 0x47fdea4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::EventSystems::IDeselectHandler"
  constexpr ::UnityEngine::EventSystems::IDeselectHandler* i___UnityEngine__EventSystems__IDeselectHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
  constexpr ::UnityEngine::EventSystems::ISelectHandler* i___UnityEngine__EventSystems__ISelectHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_ScrollbarEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_ScrollbarEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_ScrollbarEventHandler(TMP_ScrollbarEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_ScrollbarEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_ScrollbarEventHandler(TMP_ScrollbarEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14534 };

  /// @brief Field isSelected, offset: 0x20, size: 0x1, def value: None
  bool ___isSelected;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_ScrollbarEventHandler, ___isSelected) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_ScrollbarEventHandler, 0x28>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_ScrollbarEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_ScrollbarEventHandler*, "TMPro", "TMP_ScrollbarEventHandler");
