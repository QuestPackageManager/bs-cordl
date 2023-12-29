#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchScreenKeyboard)
namespace UnityEngine {
struct RangeInt;
}
namespace UnityEngine {
struct TouchScreenKeyboard_InternalConstructorHelperArguments;
}
namespace UnityEngine {
struct TouchScreenKeyboardType;
}
namespace UnityEngine {
struct __TouchScreenKeyboard__Status;
}
// Forward declare root types
namespace UnityEngine {
struct __TouchScreenKeyboard__Status;
}
namespace UnityEngine {
class TouchScreenKeyboard;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__TouchScreenKeyboard__Status);
MARK_REF_PTR_T(::UnityEngine::TouchScreenKeyboard);
// Type: ::Status
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10111))
// CS Name: ::TouchScreenKeyboard::Status
struct CORDL_TYPE __TouchScreenKeyboard__Status {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TouchScreenKeyboard__Status_Unwrapped
  enum struct ____TouchScreenKeyboard__Status_Unwrapped : int32_t {
    __E_Visible = static_cast<int32_t>(0x0),
    __E_Done = static_cast<int32_t>(0x1),
    __E_Canceled = static_cast<int32_t>(0x2),
    __E_LostFocus = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TouchScreenKeyboard__Status_Unwrapped() const noexcept {
    return static_cast<____TouchScreenKeyboard__Status_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TouchScreenKeyboard__Status(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TouchScreenKeyboard__Status();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Visible value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__TouchScreenKeyboard__Status const Visible;

  /// @brief Field Done value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__TouchScreenKeyboard__Status const Done;

  /// @brief Field Canceled value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__TouchScreenKeyboard__Status const Canceled;

  /// @brief Field LostFocus value: static_cast<int32_t>(0x3)
  static ::UnityEngine::__TouchScreenKeyboard__Status const LostFocus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__TouchScreenKeyboard__Status, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__TouchScreenKeyboard__Status, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::TouchScreenKeyboard
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2601))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10112))
// CS Name: ::UnityEngine::TouchScreenKeyboard*
class CORDL_TYPE TouchScreenKeyboard : public ::System::Object {
public:
  // Declarations
  using Status = ::UnityEngine::__TouchScreenKeyboard__Status;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Ptr, put = __set_m_Ptr)) void* m_Ptr;

  /// @brief Field <disableInPlaceEditing>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__disableInPlaceEditing_k__BackingField, put = setStaticF__disableInPlaceEditing_k__BackingField)) bool _disableInPlaceEditing_k__BackingField;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  __declspec(property(get = get_active, put = set_active)) bool active;

  __declspec(property(get = get_status))::UnityEngine::__TouchScreenKeyboard__Status status;

  __declspec(property(put = set_characterLimit)) int32_t characterLimit;

  __declspec(property(get = get_canGetSelection)) bool canGetSelection;

  __declspec(property(get = get_canSetSelection)) bool canSetSelection;

  __declspec(property(get = get_selection, put = set_selection))::UnityEngine::RangeInt selection;

  constexpr void*& __get_m_Ptr();

  constexpr void* const& __get_m_Ptr() const;

  constexpr void __set_m_Ptr(void* value);

  static inline void setStaticF__disableInPlaceEditing_k__BackingField(bool value);

  static inline bool getStaticF__disableInPlaceEditing_k__BackingField();

  /// @brief Method Internal_Destroy addr 0x2b661bc size 0x3c virtual false final false
  static inline void Internal_Destroy(void* ptr);

  /// @brief Method Destroy addr 0x2b661f8 size 0xcc virtual false final false
  inline void Destroy();

  /// @brief Method Finalize addr 0x2b662c4 size 0x94 virtual true final false
  inline void Finalize();

  static inline ::UnityEngine::TouchScreenKeyboard* New_ctor(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert,
                                                             ::StringW textPlaceholder, int32_t characterLimit);

  /// @brief Method .ctor addr 0x2b66358 size 0x15c virtual false final false
  inline void _ctor(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, ::StringW textPlaceholder,
                    int32_t characterLimit);

  /// @brief Method TouchScreenKeyboard_InternalConstructorHelper addr 0x2b664b4 size 0x54 virtual false final false
  static inline void* TouchScreenKeyboard_InternalConstructorHelper(ByRef<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments> arguments, ::StringW text, ::StringW textPlaceholder);

  /// @brief Method get_isSupported addr 0x2b66508 size 0x58 virtual false final false
  static inline bool get_isSupported();

  /// @brief Method get_disableInPlaceEditing addr 0x2b66560 size 0x48 virtual false final false
  static inline bool get_disableInPlaceEditing();

  /// @brief Method get_isInPlaceEditingAllowed addr 0x2b665a8 size 0x6c virtual false final false
  static inline bool get_isInPlaceEditingAllowed();

  /// @brief Method IsInPlaceEditingAllowed addr 0x2b66614 size 0x28 virtual false final false
  static inline bool IsInPlaceEditingAllowed();

  /// @brief Method Open addr 0x2b6663c size 0xc0 virtual false final false
  static inline ::UnityEngine::TouchScreenKeyboard* Open(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert,
                                                         ::StringW textPlaceholder, int32_t characterLimit);

  /// @brief Method Open addr 0x2b666fc size 0x8c virtual false final false
  static inline ::UnityEngine::TouchScreenKeyboard* Open(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure);

  /// @brief Method get_text addr 0x2b66788 size 0x3c virtual false final false
  inline ::StringW get_text();

  /// @brief Method set_text addr 0x2b667c4 size 0x44 virtual false final false
  inline void set_text(::StringW value);

  /// @brief Method set_hideInput addr 0x2b66808 size 0x3c virtual false final false
  static inline void set_hideInput(bool value);

  /// @brief Method get_active addr 0x2b66844 size 0x3c virtual false final false
  inline bool get_active();

  /// @brief Method set_active addr 0x2b66880 size 0x44 virtual false final false
  inline void set_active(bool value);

  /// @brief Method get_status addr 0x2b668c4 size 0x3c virtual false final false
  inline ::UnityEngine::__TouchScreenKeyboard__Status get_status();

  /// @brief Method set_characterLimit addr 0x2b66900 size 0x44 virtual false final false
  inline void set_characterLimit(int32_t value);

  /// @brief Method get_canGetSelection addr 0x2b66944 size 0x3c virtual false final false
  inline bool get_canGetSelection();

  /// @brief Method get_canSetSelection addr 0x2b66980 size 0x3c virtual false final false
  inline bool get_canSetSelection();

  /// @brief Method get_selection addr 0x2b669bc size 0x50 virtual false final false
  inline ::UnityEngine::RangeInt get_selection();

  /// @brief Method set_selection addr 0x2b66a50 size 0xf8 virtual false final false
  inline void set_selection(::UnityEngine::RangeInt value);

  /// @brief Method GetSelection addr 0x2b66a0c size 0x44 virtual false final false
  static inline void GetSelection(ByRef<int32_t> start, ByRef<int32_t> length);

  /// @brief Method SetSelection addr 0x2b66b48 size 0x44 virtual false final false
  static inline void SetSelection(int32_t start, int32_t length);

  // Ctor Parameters [CppParam { name: "", ty: "TouchScreenKeyboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TouchScreenKeyboard(TouchScreenKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TouchScreenKeyboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TouchScreenKeyboard(TouchScreenKeyboard const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchScreenKeyboard();

public:
  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TouchScreenKeyboard, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TouchScreenKeyboard, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__TouchScreenKeyboard__Status, "UnityEngine", "TouchScreenKeyboard/Status");
NEED_NO_BOX(::UnityEngine::TouchScreenKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TouchScreenKeyboard*, "UnityEngine", "TouchScreenKeyboard");
