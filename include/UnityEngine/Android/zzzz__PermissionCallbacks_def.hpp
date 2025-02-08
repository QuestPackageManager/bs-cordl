#pragma once
// IWYU pragma private; include "UnityEngine/Android/PermissionCallbacks.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PermissionCallbacks)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace UnityEngine::Android {
class PermissionCallbacks;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Android::PermissionCallbacks);
// Dependencies UnityEngine.AndroidJavaProxy
namespace UnityEngine::Android {
// Is value type: false
// CS Name: UnityEngine.Android.PermissionCallbacks
class CORDL_TYPE PermissionCallbacks : public ::UnityEngine::AndroidJavaProxy {
public:
  // Declarations
  /// @brief Field PermissionDenied, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_PermissionDenied, put = __cordl_internal_set_PermissionDenied)) ::System::Action_1<::StringW>* PermissionDenied;

  /// @brief Field PermissionDeniedAndDontAskAgain, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_PermissionDeniedAndDontAskAgain,
                      put = __cordl_internal_set_PermissionDeniedAndDontAskAgain)) ::System::Action_1<::StringW>* PermissionDeniedAndDontAskAgain;

  /// @brief Field PermissionGranted, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_PermissionGranted, put = __cordl_internal_set_PermissionGranted)) ::System::Action_1<::StringW>* PermissionGranted;

  static inline ::UnityEngine::Android::PermissionCallbacks* New_ctor();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PermissionDenied() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PermissionDenied();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PermissionDeniedAndDontAskAgain() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PermissionDeniedAndDontAskAgain();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PermissionGranted() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PermissionGranted();

  constexpr void __cordl_internal_set_PermissionDenied(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_PermissionDeniedAndDontAskAgain(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_PermissionGranted(::System::Action_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x48505e0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_PermissionDenied, addr 0x4850320, size 0xb0, virtual false, abstract: false, final false
  inline void add_PermissionDenied(::System::Action_1<::StringW>* value);

  /// @brief Method add_PermissionDeniedAndDontAskAgain, addr 0x4850480, size 0xb0, virtual false, abstract: false, final false
  inline void add_PermissionDeniedAndDontAskAgain(::System::Action_1<::StringW>* value);

  /// @brief Method add_PermissionGranted, addr 0x48501c0, size 0xb0, virtual false, abstract: false, final false
  inline void add_PermissionGranted(::System::Action_1<::StringW>* value);

  /// @brief Method onPermissionDenied, addr 0x4850668, size 0x1c, virtual false, abstract: false, final false
  inline void onPermissionDenied(::StringW permissionName);

  /// @brief Method onPermissionDeniedAndDontAskAgain, addr 0x4850684, size 0x24, virtual false, abstract: false, final false
  inline void onPermissionDeniedAndDontAskAgain(::StringW permissionName);

  /// @brief Method onPermissionGranted, addr 0x485064c, size 0x1c, virtual false, abstract: false, final false
  inline void onPermissionGranted(::StringW permissionName);

  /// @brief Method remove_PermissionDenied, addr 0x48503d0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_PermissionDenied(::System::Action_1<::StringW>* value);

  /// @brief Method remove_PermissionDeniedAndDontAskAgain, addr 0x4850530, size 0xb0, virtual false, abstract: false, final false
  inline void remove_PermissionDeniedAndDontAskAgain(::System::Action_1<::StringW>* value);

  /// @brief Method remove_PermissionGranted, addr 0x4850270, size 0xb0, virtual false, abstract: false, final false
  inline void remove_PermissionGranted(::System::Action_1<::StringW>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16778 };

  /// @brief Field PermissionGranted, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___PermissionGranted;

  /// @brief Field PermissionDenied, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___PermissionDenied;

  /// @brief Field PermissionDeniedAndDontAskAgain, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___PermissionDeniedAndDontAskAgain;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Android::PermissionCallbacks, ___PermissionGranted) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::PermissionCallbacks, ___PermissionDenied) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::PermissionCallbacks, ___PermissionDeniedAndDontAskAgain) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::PermissionCallbacks, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Android
NEED_NO_BOX(::UnityEngine::Android::PermissionCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::PermissionCallbacks*, "UnityEngine.Android", "PermissionCallbacks");
