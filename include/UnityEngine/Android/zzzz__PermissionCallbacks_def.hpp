#pragma once
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
// Type: UnityEngine.Android::PermissionCallbacks
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Android {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14785))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14802))
// CS Name: ::UnityEngine.Android::PermissionCallbacks*
class CORDL_TYPE PermissionCallbacks : public ::UnityEngine::AndroidJavaProxy {
public:
  // Declarations
  /// @brief Field PermissionGranted, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_PermissionGranted, put = __cordl_internal_set_PermissionGranted))::System::Action_1<::StringW>* PermissionGranted;

  /// @brief Field PermissionDenied, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_PermissionDenied, put = __cordl_internal_set_PermissionDenied))::System::Action_1<::StringW>* PermissionDenied;

  /// @brief Field PermissionDeniedAndDontAskAgain, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_PermissionDeniedAndDontAskAgain,
                      put = __cordl_internal_set_PermissionDeniedAndDontAskAgain))::System::Action_1<::StringW>* PermissionDeniedAndDontAskAgain;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PermissionGranted();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_PermissionGranted() const;

  constexpr void __cordl_internal_set_PermissionGranted(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PermissionDenied();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_PermissionDenied() const;

  constexpr void __cordl_internal_set_PermissionDenied(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PermissionDeniedAndDontAskAgain();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_PermissionDeniedAndDontAskAgain() const;

  constexpr void __cordl_internal_set_PermissionDeniedAndDontAskAgain(::System::Action_1<::StringW>* value);

  /// @brief Method add_PermissionGranted, addr 0x2c8a1c8, size 0xb0, virtual false, abstract: false, final false
  inline void add_PermissionGranted(::System::Action_1<::StringW>* value);

  /// @brief Method remove_PermissionGranted, addr 0x2c8a278, size 0xb0, virtual false, abstract: false, final false
  inline void remove_PermissionGranted(::System::Action_1<::StringW>* value);

  /// @brief Method add_PermissionDenied, addr 0x2c8a328, size 0xb0, virtual false, abstract: false, final false
  inline void add_PermissionDenied(::System::Action_1<::StringW>* value);

  /// @brief Method remove_PermissionDenied, addr 0x2c8a3d8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_PermissionDenied(::System::Action_1<::StringW>* value);

  /// @brief Method add_PermissionDeniedAndDontAskAgain, addr 0x2c8a488, size 0xb0, virtual false, abstract: false, final false
  inline void add_PermissionDeniedAndDontAskAgain(::System::Action_1<::StringW>* value);

  /// @brief Method remove_PermissionDeniedAndDontAskAgain, addr 0x2c8a538, size 0xb0, virtual false, abstract: false, final false
  inline void remove_PermissionDeniedAndDontAskAgain(::System::Action_1<::StringW>* value);

  static inline ::UnityEngine::Android::PermissionCallbacks* New_ctor();

  /// @brief Method .ctor, addr 0x2c8a5e8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method onPermissionGranted, addr 0x2c8a654, size 0x1c, virtual false, abstract: false, final false
  inline void onPermissionGranted(::StringW permissionName);

  /// @brief Method onPermissionDenied, addr 0x2c8a670, size 0x1c, virtual false, abstract: false, final false
  inline void onPermissionDenied(::StringW permissionName);

  /// @brief Method onPermissionDeniedAndDontAskAgain, addr 0x2c8a68c, size 0x24, virtual false, abstract: false, final false
  inline void onPermissionDeniedAndDontAskAgain(::StringW permissionName);

  // Ctor Parameters [CppParam { name: "", ty: "PermissionCallbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PermissionCallbacks(PermissionCallbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PermissionCallbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PermissionCallbacks(PermissionCallbacks const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PermissionCallbacks();

public:
  /// @brief Field PermissionGranted, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___PermissionGranted;

  /// @brief Field PermissionDenied, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___PermissionDenied;

  /// @brief Field PermissionDeniedAndDontAskAgain, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___PermissionDeniedAndDontAskAgain;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::PermissionCallbacks, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Android::PermissionCallbacks, ___PermissionGranted) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::PermissionCallbacks, ___PermissionDenied) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::PermissionCallbacks, ___PermissionDeniedAndDontAskAgain) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Android
NEED_NO_BOX(::UnityEngine::Android::PermissionCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::PermissionCallbacks*, "UnityEngine.Android", "PermissionCallbacks");
