#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TMP_ScrollbarEventHandler)
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IDeselectHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class ISelectHandler;
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
// Type: TMPro::TMP_ScrollbarEventHandler
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12412))
// CS Name: ::TMPro::TMP_ScrollbarEventHandler*
class CORDL_TYPE TMP_ScrollbarEventHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field isSelected, offset 0x18, size 0x1
  __declspec(property(get = __get_isSelected, put = __set_isSelected)) bool isSelected;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
  constexpr operator ::UnityEngine::EventSystems::ISelectHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
  constexpr ::UnityEngine::EventSystems::ISelectHandler* i___UnityEngine__EventSystems__ISelectHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDeselectHandler"
  constexpr operator ::UnityEngine::EventSystems::IDeselectHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IDeselectHandler"
  constexpr ::UnityEngine::EventSystems::IDeselectHandler* i___UnityEngine__EventSystems__IDeselectHandler() noexcept;

  constexpr bool& __get_isSelected();

  constexpr bool const& __get_isSelected() const;

  constexpr void __set_isSelected(bool value);

  /// @brief Method OnPointerClick, addr 0x2c3f998, size 0x68, virtual true, abstract: false, final true
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSelect, addr 0x2c3fa00, size 0x78, virtual true, abstract: false, final true
  inline void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnDeselect, addr 0x2c3fa78, size 0x74, virtual true, abstract: false, final true
  inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData);

  static inline ::TMPro::TMP_ScrollbarEventHandler* New_ctor();

  /// @brief Method .ctor, addr 0x2c3faec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TMP_ScrollbarEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_ScrollbarEventHandler(TMP_ScrollbarEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_ScrollbarEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_ScrollbarEventHandler(TMP_ScrollbarEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_ScrollbarEventHandler();

public:
  /// @brief Field isSelected, offset: 0x18, size: 0x1, def value: None
  bool ___isSelected;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_ScrollbarEventHandler, 0x20>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_ScrollbarEventHandler, ___isSelected) == 0x18, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_ScrollbarEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_ScrollbarEventHandler*, "TMPro", "TMP_ScrollbarEventHandler");
