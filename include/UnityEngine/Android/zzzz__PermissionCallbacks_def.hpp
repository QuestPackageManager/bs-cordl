#pragma once
// IWYU pragma private; include "UnityEngine/Android/PermissionCallbacks.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PermissionCallbacks)
namespace System {
template <typename T> class Action_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Android {
struct PermissionCallbacks_Result;
}
// Forward declare root types
namespace UnityEngine::Android {
struct PermissionCallbacks_Result;
}
namespace UnityEngine::Android {
class PermissionCallbacks;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Android::PermissionCallbacks_Result);
MARK_REF_PTR_T(::UnityEngine::Android::PermissionCallbacks);
// Dependencies
namespace UnityEngine::Android {
// Is value type: true
// CS Name: UnityEngine.Android.PermissionCallbacks/Result
struct CORDL_TYPE PermissionCallbacks_Result {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PermissionCallbacks_Result_Unwrapped
  enum struct __PermissionCallbacks_Result_Unwrapped : int32_t {
    __E_Dismissed = static_cast<int32_t>(0x0),
    __E_Granted = static_cast<int32_t>(0x1),
    __E_Denied = static_cast<int32_t>(0x2),
    __E_DeniedDontAskAgain = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PermissionCallbacks_Result_Unwrapped() const noexcept {
    return static_cast<__PermissionCallbacks_Result_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PermissionCallbacks_Result();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PermissionCallbacks_Result(int32_t value__) noexcept;

  /// @brief Field Denied value: I32(2)
  static ::UnityEngine::Android::PermissionCallbacks_Result const Denied;

  /// @brief Field DeniedDontAskAgain value: I32(3)
  static ::UnityEngine::Android::PermissionCallbacks_Result const DeniedDontAskAgain;

  /// @brief Field Dismissed value: I32(0)
  static ::UnityEngine::Android::PermissionCallbacks_Result const Dismissed;

  /// @brief Field Granted value: I32(1)
  static ::UnityEngine::Android::PermissionCallbacks_Result const Granted;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19919 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Android::PermissionCallbacks_Result, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::PermissionCallbacks_Result, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Android
// Dependencies UnityEngine.AndroidJavaProxy
namespace UnityEngine::Android {
// Is value type: false
// CS Name: UnityEngine.Android.PermissionCallbacks
class CORDL_TYPE PermissionCallbacks : public ::UnityEngine::AndroidJavaProxy {
public:
  // Declarations
  using Result = ::UnityEngine::Android::PermissionCallbacks_Result;

  /// @brief Field PermissionDenied, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_PermissionDenied, put = __cordl_internal_set_PermissionDenied)) ::System::Action_1<::StringW>* PermissionDenied;

  /// @brief Field PermissionDeniedAndDontAskAgain, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_PermissionDeniedAndDontAskAgain,
                      put = __cordl_internal_set_PermissionDeniedAndDontAskAgain)) ::System::Action_1<::StringW>* PermissionDeniedAndDontAskAgain;

  /// @brief Field PermissionGranted, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_PermissionGranted, put = __cordl_internal_set_PermissionGranted)) ::System::Action_1<::StringW>* PermissionGranted;

  /// @brief Field PermissionRequestDismissed, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_PermissionRequestDismissed, put = __cordl_internal_set_PermissionRequestDismissed)) ::System::Action_1<::StringW>* PermissionRequestDismissed;

  /// @brief Method Invoke, addr 0x67fc1c4, size 0x90, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::StringW methodName, ::System::IntPtr javaArgs);

  static inline ::UnityEngine::Android::PermissionCallbacks* New_ctor();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PermissionDenied() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PermissionDenied();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PermissionDeniedAndDontAskAgain() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PermissionDeniedAndDontAskAgain();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PermissionGranted() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PermissionGranted();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PermissionRequestDismissed() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PermissionRequestDismissed();

  constexpr void __cordl_internal_set_PermissionDenied(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_PermissionDeniedAndDontAskAgain(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_PermissionGranted(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_PermissionRequestDismissed(::System::Action_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x67fc150, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_PermissionDenied, addr 0x67fbcd0, size 0xc0, virtual false, abstract: false, final false
  inline void add_PermissionDenied(::System::Action_1<::StringW>* value);

  /// @brief Method add_PermissionDeniedAndDontAskAgain, addr 0x67fbe50, size 0xc0, virtual false, abstract: false, final false
  inline void add_PermissionDeniedAndDontAskAgain(::System::Action_1<::StringW>* value);

  /// @brief Method add_PermissionGranted, addr 0x67fbb50, size 0xc0, virtual false, abstract: false, final false
  inline void add_PermissionGranted(::System::Action_1<::StringW>* value);

  /// @brief Method add_PermissionRequestDismissed, addr 0x67fbfd0, size 0xc0, virtual false, abstract: false, final false
  inline void add_PermissionRequestDismissed(::System::Action_1<::StringW>* value);

  /// @brief Method onPermissionResult, addr 0x67fc254, size 0xf8, virtual false, abstract: false, final false
  inline void onPermissionResult(::System::IntPtr javaArgs);

  /// @brief Method remove_PermissionDenied, addr 0x67fbd90, size 0xc0, virtual false, abstract: false, final false
  inline void remove_PermissionDenied(::System::Action_1<::StringW>* value);

  /// @brief Method remove_PermissionDeniedAndDontAskAgain, addr 0x67fbf10, size 0xc0, virtual false, abstract: false, final false
  inline void remove_PermissionDeniedAndDontAskAgain(::System::Action_1<::StringW>* value);

  /// @brief Method remove_PermissionGranted, addr 0x67fbc10, size 0xc0, virtual false, abstract: false, final false
  inline void remove_PermissionGranted(::System::Action_1<::StringW>* value);

  /// @brief Method remove_PermissionRequestDismissed, addr 0x67fc090, size 0xc0, virtual false, abstract: false, final false
  inline void remove_PermissionRequestDismissed(::System::Action_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PermissionCallbacks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PermissionCallbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PermissionCallbacks(PermissionCallbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PermissionCallbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PermissionCallbacks(PermissionCallbacks const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19920 };

  /// @brief Field PermissionGranted, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___PermissionGranted;

  /// @brief Field PermissionDenied, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___PermissionDenied;

  /// @brief Field PermissionDeniedAndDontAskAgain, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___PermissionDeniedAndDontAskAgain;

  /// @brief Field PermissionRequestDismissed, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___PermissionRequestDismissed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Android::PermissionCallbacks, ___PermissionGranted) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::PermissionCallbacks, ___PermissionDenied) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::PermissionCallbacks, ___PermissionDeniedAndDontAskAgain) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::PermissionCallbacks, ___PermissionRequestDismissed) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::PermissionCallbacks, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Android
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::PermissionCallbacks_Result, "UnityEngine.Android", "PermissionCallbacks/Result");
NEED_NO_BOX(::UnityEngine::Android::PermissionCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::PermissionCallbacks*, "UnityEngine.Android", "PermissionCallbacks");
