#pragma once
// IWYU pragma private; include "UnityEngine/TouchScreenKeyboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchScreenKeyboard)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct RangeInt;
}
namespace UnityEngine {
struct TouchScreenKeyboardType;
}
namespace UnityEngine {
struct TouchScreenKeyboard_InternalConstructorHelperArguments;
}
namespace UnityEngine {
struct TouchScreenKeyboard_Status;
}
// Forward declare root types
namespace UnityEngine {
struct TouchScreenKeyboard_Status;
}
namespace UnityEngine {
class TouchScreenKeyboard;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TouchScreenKeyboard_Status);
MARK_REF_PTR_T(::UnityEngine::TouchScreenKeyboard);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TouchScreenKeyboard/Status
struct CORDL_TYPE TouchScreenKeyboard_Status {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TouchScreenKeyboard_Status_Unwrapped
  enum struct __TouchScreenKeyboard_Status_Unwrapped : int32_t {
    __E_Visible = static_cast<int32_t>(0x0),
    __E_Done = static_cast<int32_t>(0x1),
    __E_Canceled = static_cast<int32_t>(0x2),
    __E_LostFocus = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TouchScreenKeyboard_Status_Unwrapped() const noexcept {
    return static_cast<__TouchScreenKeyboard_Status_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchScreenKeyboard_Status();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TouchScreenKeyboard_Status(int32_t value__) noexcept;

  /// @brief Field Canceled value: I32(2)
  static ::UnityEngine::TouchScreenKeyboard_Status const Canceled;

  /// @brief Field Done value: I32(1)
  static ::UnityEngine::TouchScreenKeyboard_Status const Done;

  /// @brief Field LostFocus value: I32(3)
  static ::UnityEngine::TouchScreenKeyboard_Status const LostFocus;

  /// @brief Field Visible value: I32(0)
  static ::UnityEngine::TouchScreenKeyboard_Status const Visible;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10940 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TouchScreenKeyboard_Status, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TouchScreenKeyboard_Status, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TouchScreenKeyboard
class CORDL_TYPE TouchScreenKeyboard : public ::System::Object {
public:
  // Declarations
  using Status = ::UnityEngine::TouchScreenKeyboard_Status;

  /// @brief Field <disableInPlaceEditing>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__disableInPlaceEditing_k__BackingField, put = setStaticF__disableInPlaceEditing_k__BackingField)) bool _disableInPlaceEditing_k__BackingField;

  __declspec(property(get = get_active, put = set_active)) bool active;

  __declspec(property(get = get_canGetSelection)) bool canGetSelection;

  __declspec(property(get = get_canSetSelection)) bool canSetSelection;

  __declspec(property(put = set_characterLimit)) int32_t characterLimit;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  __declspec(property(get = get_selection, put = set_selection)) ::UnityEngine::RangeInt selection;

  __declspec(property(get = get_status)) ::UnityEngine::TouchScreenKeyboard_Status status;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  /// @brief Method Destroy, addr 0x48b1f44, size 0xa4, virtual false, abstract: false, final false
  inline void Destroy();

  /// @brief Method Finalize, addr 0x48b1fe8, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetSelection, addr 0x48b2778, size 0x44, virtual false, abstract: false, final false
  static inline void GetSelection(::ByRef<int32_t> start, ::ByRef<int32_t> length);

  /// @brief Method Internal_Destroy, addr 0x48b1f08, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(::System::IntPtr ptr);

  /// @brief Method IsInPlaceEditingAllowed, addr 0x48b238c, size 0x28, virtual false, abstract: false, final false
  static inline bool IsInPlaceEditingAllowed();

  static inline ::UnityEngine::TouchScreenKeyboard* New_ctor(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert,
                                                             ::StringW textPlaceholder, int32_t characterLimit);

  /// @brief Method Open, addr 0x48b246c, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TouchScreenKeyboard* Open(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure);

  /// @brief Method Open, addr 0x48b23b4, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityEngine::TouchScreenKeyboard* Open(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert,
                                                         ::StringW textPlaceholder, int32_t characterLimit);

  /// @brief Method SetSelection, addr 0x48b28b0, size 0x44, virtual false, abstract: false, final false
  static inline void SetSelection(int32_t start, int32_t length);

  /// @brief Method TouchScreenKeyboard_InternalConstructorHelper, addr 0x48b21d8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr TouchScreenKeyboard_InternalConstructorHelper(::ByRef<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments> arguments, ::StringW text,
                                                                               ::StringW textPlaceholder);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x48b207c, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, ::StringW textPlaceholder,
                    int32_t characterLimit);

  static inline bool getStaticF__disableInPlaceEditing_k__BackingField();

  /// @brief Method get_active, addr 0x48b25b4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_active();

  /// @brief Method get_canGetSelection, addr 0x48b26b4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canGetSelection();

  /// @brief Method get_canSetSelection, addr 0x48b26f0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetSelection();

  /// @brief Method get_disableInPlaceEditing, addr 0x48b22d8, size 0x48, virtual false, abstract: false, final false
  static inline bool get_disableInPlaceEditing();

  /// @brief Method get_isInPlaceEditingAllowed, addr 0x48b2320, size 0x6c, virtual false, abstract: false, final false
  static inline bool get_isInPlaceEditingAllowed();

  /// @brief Method get_isSupported, addr 0x48b222c, size 0xac, virtual false, abstract: false, final false
  static inline bool get_isSupported();

  /// @brief Method get_selection, addr 0x48b272c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::RangeInt get_selection();

  /// @brief Method get_status, addr 0x48b2634, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::TouchScreenKeyboard_Status get_status();

  /// @brief Method get_text, addr 0x48b24f8, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_text();

  static inline void setStaticF__disableInPlaceEditing_k__BackingField(bool value);

  /// @brief Method set_active, addr 0x48b25f0, size 0x44, virtual false, abstract: false, final false
  inline void set_active(bool value);

  /// @brief Method set_characterLimit, addr 0x48b2670, size 0x44, virtual false, abstract: false, final false
  inline void set_characterLimit(int32_t value);

  /// @brief Method set_hideInput, addr 0x48b2578, size 0x3c, virtual false, abstract: false, final false
  static inline void set_hideInput(bool value);

  /// @brief Method set_selection, addr 0x48b27bc, size 0xf4, virtual false, abstract: false, final false
  inline void set_selection(::UnityEngine::RangeInt value);

  /// @brief Method set_text, addr 0x48b2534, size 0x44, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchScreenKeyboard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TouchScreenKeyboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TouchScreenKeyboard(TouchScreenKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TouchScreenKeyboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TouchScreenKeyboard(TouchScreenKeyboard const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10941 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TouchScreenKeyboard, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TouchScreenKeyboard, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TouchScreenKeyboard_Status, "UnityEngine", "TouchScreenKeyboard/Status");
NEED_NO_BOX(::UnityEngine::TouchScreenKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TouchScreenKeyboard*, "UnityEngine", "TouchScreenKeyboard");
