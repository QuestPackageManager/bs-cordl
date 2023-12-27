#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HoverTextSetter)
namespace HMUI {
class HoverTextController;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace HMUI {
class HoverTextSetter;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::HoverTextSetter);
// Type: HMUI::HoverTextSetter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13544))
// CS Name: ::HMUI::HoverTextSetter*
class CORDL_TYPE HoverTextSetter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _hoverTextController, offset 0x18, size 0x8
  __declspec(property(get = __get__hoverTextController, put = __set__hoverTextController))::HMUI::HoverTextController* _hoverTextController;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::StringW _text;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  constexpr ::HMUI::HoverTextController*& __get__hoverTextController();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverTextController*> const& __get__hoverTextController() const;

  constexpr void __set__hoverTextController(::HMUI::HoverTextController* value);

  constexpr ::StringW& __get__text();

  constexpr ::StringW const& __get__text() const;

  constexpr void __set__text(::StringW value);

  /// @brief Method get_text addr 0x211ec40 size 0x8 virtual false final false
  inline ::StringW get_text();

  /// @brief Method set_text addr 0x211ec48 size 0x8 virtual false final false
  inline void set_text(::StringW value);

  /// @brief Method OnPointerEnter addr 0x211ec50 size 0x20 virtual true final true
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit addr 0x211ec70 size 0x18 virtual true final true
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnDisable addr 0x211ec88 size 0x18 virtual false final false
  inline void OnDisable();

  static inline ::HMUI::HoverTextSetter* New_ctor();

  /// @brief Method .ctor addr 0x211eca0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HoverTextSetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HoverTextSetter(HoverTextSetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HoverTextSetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HoverTextSetter(HoverTextSetter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HoverTextSetter();

public:
  /// @brief Field _hoverTextController, offset: 0x18, size: 0x8, def value: None
  ::HMUI::HoverTextController* ____hoverTextController;

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::StringW ____text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::HoverTextSetter, 0x28>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::HoverTextSetter);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HoverTextSetter*, "HMUI", "HoverTextSetter");
