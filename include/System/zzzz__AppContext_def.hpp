#pragma once
// IWYU pragma private; include "System/AppContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppContext)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
struct __AppContext__SwitchValueState;
}
// Forward declare root types
namespace System {
struct __AppContext__SwitchValueState;
}
namespace System {
class AppContext;
}
// Write type traits
MARK_VAL_T(::System::__AppContext__SwitchValueState);
MARK_REF_PTR_T(::System::AppContext);
// Type: ::SwitchValueState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::AppContext::SwitchValueState
struct CORDL_TYPE __AppContext__SwitchValueState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AppContext__SwitchValueState_Unwrapped
  enum struct ____AppContext__SwitchValueState_Unwrapped : int32_t {
    __E_HasFalseValue = static_cast<int32_t>(0x1),
    __E_HasTrueValue = static_cast<int32_t>(0x2),
    __E_HasLookedForOverride = static_cast<int32_t>(0x4),
    __E_UnknownValue = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AppContext__SwitchValueState_Unwrapped() const noexcept {
    return static_cast<____AppContext__SwitchValueState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppContext__SwitchValueState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AppContext__SwitchValueState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HasFalseValue value: static_cast<int32_t>(0x1)
  static ::System::__AppContext__SwitchValueState const HasFalseValue;

  /// @brief Field HasLookedForOverride value: static_cast<int32_t>(0x4)
  static ::System::__AppContext__SwitchValueState const HasLookedForOverride;

  /// @brief Field HasTrueValue value: static_cast<int32_t>(0x2)
  static ::System::__AppContext__SwitchValueState const HasTrueValue;

  /// @brief Field UnknownValue value: static_cast<int32_t>(0x8)
  static ::System::__AppContext__SwitchValueState const UnknownValue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2539 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__AppContext__SwitchValueState, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__AppContext__SwitchValueState, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: System::AppContext
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::AppContext*
class CORDL_TYPE AppContext : public ::System::Object {
public:
  // Declarations
  using SwitchValueState = ::System::__AppContext__SwitchValueState;

  /// @brief Field s_defaultsInitialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_defaultsInitialized, put = setStaticF_s_defaultsInitialized)) bool s_defaultsInitialized;

  /// @brief Field s_switchMap, offset 0xffffffff, size 0x8
  static
      __declspec(property(get = getStaticF_s_switchMap, put = setStaticF_s_switchMap)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::__AppContext__SwitchValueState>* s_switchMap;

  /// @brief Method InitializeDefaultSwitchValues, addr 0x3d9dde8, size 0x174, virtual false, abstract: false, final false
  static inline void InitializeDefaultSwitchValues();

  /// @brief Method TryGetSwitch, addr 0x3d9df5c, size 0x408, virtual false, abstract: false, final false
  static inline bool TryGetSwitch(::StringW switchName, ByRef<bool> isEnabled);

  static inline bool getStaticF_s_defaultsInitialized();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::__AppContext__SwitchValueState>* getStaticF_s_switchMap();

  static inline void setStaticF_s_defaultsInitialized(bool value);

  static inline void setStaticF_s_switchMap(::System::Collections::Generic::Dictionary_2<::StringW, ::System::__AppContext__SwitchValueState>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppContext(AppContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppContext(AppContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2540 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::AppContext, 0x10>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::__AppContext__SwitchValueState, "System", "AppContext/SwitchValueState");
NEED_NO_BOX(::System::AppContext);
DEFINE_IL2CPP_ARG_TYPE(::System::AppContext*, "System", "AppContext");
