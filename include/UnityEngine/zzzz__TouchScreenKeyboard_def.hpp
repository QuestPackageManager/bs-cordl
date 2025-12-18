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
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct RangeInt;
}
namespace UnityEngine {
struct TouchScreenKeyboardType;
}
namespace UnityEngine {
class TouchScreenKeyboard_BindingsMarshaller;
}
namespace UnityEngine {
struct TouchScreenKeyboard_InputFieldAppearance;
}
namespace UnityEngine {
struct TouchScreenKeyboard_InternalConstructorHelperArguments;
}
namespace UnityEngine {
struct TouchScreenKeyboard_Status;
}
// Forward declare root types
namespace UnityEngine {
struct TouchScreenKeyboard_InputFieldAppearance;
}
namespace UnityEngine {
struct TouchScreenKeyboard_Status;
}
namespace UnityEngine {
class TouchScreenKeyboard;
}
namespace UnityEngine {
class TouchScreenKeyboard_BindingsMarshaller;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TouchScreenKeyboard_InputFieldAppearance);
MARK_VAL_T(::UnityEngine::TouchScreenKeyboard_Status);
MARK_REF_PTR_T(::UnityEngine::TouchScreenKeyboard);
MARK_REF_PTR_T(::UnityEngine::TouchScreenKeyboard_BindingsMarshaller);
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10387 };

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
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TouchScreenKeyboard/InputFieldAppearance
struct CORDL_TYPE TouchScreenKeyboard_InputFieldAppearance {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TouchScreenKeyboard_InputFieldAppearance_Unwrapped
  enum struct __TouchScreenKeyboard_InputFieldAppearance_Unwrapped : int32_t {
    __E_Customizable = static_cast<int32_t>(0x0),
    __E_AlwaysVisible = static_cast<int32_t>(0x1),
    __E_AlwaysHidden = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TouchScreenKeyboard_InputFieldAppearance_Unwrapped() const noexcept {
    return static_cast<__TouchScreenKeyboard_InputFieldAppearance_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchScreenKeyboard_InputFieldAppearance();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TouchScreenKeyboard_InputFieldAppearance(int32_t value__) noexcept;

  /// @brief Field AlwaysHidden value: I32(2)
  static ::UnityEngine::TouchScreenKeyboard_InputFieldAppearance const AlwaysHidden;

  /// @brief Field AlwaysVisible value: I32(1)
  static ::UnityEngine::TouchScreenKeyboard_InputFieldAppearance const AlwaysVisible;

  /// @brief Field Customizable value: I32(0)
  static ::UnityEngine::TouchScreenKeyboard_InputFieldAppearance const Customizable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10388 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TouchScreenKeyboard_InputFieldAppearance, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TouchScreenKeyboard_InputFieldAppearance, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TouchScreenKeyboard/BindingsMarshaller
class CORDL_TYPE TouchScreenKeyboard_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x692819c, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::TouchScreenKeyboard* touchScreenKeyboard);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchScreenKeyboard_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TouchScreenKeyboard_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TouchScreenKeyboard_BindingsMarshaller(TouchScreenKeyboard_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TouchScreenKeyboard_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TouchScreenKeyboard_BindingsMarshaller(TouchScreenKeyboard_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10389 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TouchScreenKeyboard_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TouchScreenKeyboard
class CORDL_TYPE TouchScreenKeyboard : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::TouchScreenKeyboard_BindingsMarshaller;

  using InputFieldAppearance = ::UnityEngine::TouchScreenKeyboard_InputFieldAppearance;

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

  /// @brief Method Destroy, addr 0x69271e0, size 0x90, virtual false, abstract: false, final false
  inline void Destroy();

  /// @brief Method Finalize, addr 0x6927270, size 0x44, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetSelection, addr 0x6928050, size 0x44, virtual false, abstract: false, final false
  static inline void GetSelection(::ByRef<int32_t> start, ::ByRef<int32_t> length);

  /// @brief Method Internal_Destroy, addr 0x69271a4, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(::System::IntPtr ptr);

  /// @brief Method IsInPlaceEditingAllowed, addr 0x692776c, size 0x28, virtual false, abstract: false, final false
  static inline bool IsInPlaceEditingAllowed();

  static inline ::UnityEngine::TouchScreenKeyboard* New_ctor(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert,
                                                             ::StringW textPlaceholder, int32_t characterLimit);

  /// @brief Method Open, addr 0x69278e0, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TouchScreenKeyboard* Open(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType);

  /// @brief Method Open, addr 0x6927850, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::TouchScreenKeyboard* Open(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure);

  /// @brief Method Open, addr 0x6927794, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::TouchScreenKeyboard* Open(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert,
                                                         ::StringW textPlaceholder, int32_t characterLimit);

  /// @brief Method SetSelection, addr 0x6928158, size 0x44, virtual false, abstract: false, final false
  static inline void SetSelection(int32_t start, int32_t length);

  /// @brief Method TouchScreenKeyboard_InternalConstructorHelper, addr 0x69273bc, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::IntPtr TouchScreenKeyboard_InternalConstructorHelper(::ByRef<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments> arguments, ::StringW text,
                                                                               ::StringW textPlaceholder);

  /// @brief Method TouchScreenKeyboard_InternalConstructorHelper_Injected, addr 0x6927578, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr TouchScreenKeyboard_InternalConstructorHelper_Injected(::ByRef<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments> arguments,
                                                                                        ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> text,
                                                                                        ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> textPlaceholder);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x69272b4, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, ::StringW textPlaceholder,
                    int32_t characterLimit);

  static inline bool getStaticF__disableInPlaceEditing_k__BackingField();

  /// @brief Method get_active, addr 0x6927c9c, size 0x50, virtual false, abstract: false, final false
  inline bool get_active();

  /// @brief Method get_active_Injected, addr 0x6927cec, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_active_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_canGetSelection, addr 0x6927eec, size 0x50, virtual false, abstract: false, final false
  inline bool get_canGetSelection();

  /// @brief Method get_canGetSelection_Injected, addr 0x6927f3c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_canGetSelection_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_canSetSelection, addr 0x6927f78, size 0x50, virtual false, abstract: false, final false
  inline bool get_canSetSelection();

  /// @brief Method get_canSetSelection_Injected, addr 0x6927fc8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_canSetSelection_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_disableInPlaceEditing, addr 0x69276a4, size 0x4c, virtual false, abstract: false, final false
  static inline bool get_disableInPlaceEditing();

  /// @brief Method get_inputFieldAppearance, addr 0x6927c74, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::TouchScreenKeyboard_InputFieldAppearance get_inputFieldAppearance();

  /// @brief Method get_isInPlaceEditingAllowed, addr 0x69276f0, size 0x7c, virtual false, abstract: false, final false
  static inline bool get_isInPlaceEditingAllowed();

  /// @brief Method get_isSupported, addr 0x69275cc, size 0xd8, virtual false, abstract: false, final false
  static inline bool get_isSupported();

  /// @brief Method get_selection, addr 0x6928004, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::RangeInt get_selection();

  /// @brief Method get_status, addr 0x6927dc4, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::TouchScreenKeyboard_Status get_status();

  /// @brief Method get_status_Injected, addr 0x6927e14, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TouchScreenKeyboard_Status get_status_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_text, addr 0x692795c, size 0x100, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method get_text_Injected, addr 0x6927a5c, size 0x44, virtual false, abstract: false, final false
  static inline void get_text_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  static inline void setStaticF__disableInPlaceEditing_k__BackingField(bool value);

  /// @brief Method set_active, addr 0x6927d28, size 0x58, virtual false, abstract: false, final false
  inline void set_active(bool value);

  /// @brief Method set_active_Injected, addr 0x6927d80, size 0x44, virtual false, abstract: false, final false
  static inline void set_active_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_characterLimit, addr 0x6927e50, size 0x58, virtual false, abstract: false, final false
  inline void set_characterLimit(int32_t value);

  /// @brief Method set_characterLimit_Injected, addr 0x6927ea8, size 0x44, virtual false, abstract: false, final false
  static inline void set_characterLimit_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_hideInput, addr 0x6927c38, size 0x3c, virtual false, abstract: false, final false
  static inline void set_hideInput(bool value);

  /// @brief Method set_selection, addr 0x6928094, size 0xc4, virtual false, abstract: false, final false
  inline void set_selection(::UnityEngine::RangeInt value);

  /// @brief Method set_text, addr 0x6927aa0, size 0x154, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method set_text_Injected, addr 0x6927bf4, size 0x44, virtual false, abstract: false, final false
  static inline void set_text_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10390 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TouchScreenKeyboard, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TouchScreenKeyboard, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TouchScreenKeyboard_InputFieldAppearance, "UnityEngine", "TouchScreenKeyboard/InputFieldAppearance");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TouchScreenKeyboard_Status, "UnityEngine", "TouchScreenKeyboard/Status");
NEED_NO_BOX(::UnityEngine::TouchScreenKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TouchScreenKeyboard*, "UnityEngine", "TouchScreenKeyboard");
NEED_NO_BOX(::UnityEngine::TouchScreenKeyboard_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TouchScreenKeyboard_BindingsMarshaller*, "UnityEngine", "TouchScreenKeyboard/BindingsMarshaller");
