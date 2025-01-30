#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidAssetPackState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackError_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AndroidAssetPackState)
namespace UnityEngine::Android {
struct AndroidAssetPackError;
}
namespace UnityEngine::Android {
struct AndroidAssetPackStatus;
}
// Forward declare root types
namespace UnityEngine::Android {
class AndroidAssetPackState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Android::AndroidAssetPackState);
// Dependencies System.Object, UnityEngine.Android.AndroidAssetPackError, UnityEngine.Android.AndroidAssetPackStatus
namespace UnityEngine::Android {
// Is value type: false
// CS Name: UnityEngine.Android.AndroidAssetPackState
class CORDL_TYPE AndroidAssetPackState : public ::System::Object {
public:
  // Declarations
  /// @brief Field <error>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__error_k__BackingField, put = __cordl_internal_set__error_k__BackingField)) ::UnityEngine::Android::AndroidAssetPackError _error_k__BackingField;

  /// @brief Field <name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__name_k__BackingField, put = __cordl_internal_set__name_k__BackingField)) ::StringW _name_k__BackingField;

  /// @brief Field <status>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__status_k__BackingField, put = __cordl_internal_set__status_k__BackingField)) ::UnityEngine::Android::AndroidAssetPackStatus _status_k__BackingField;

  static inline ::UnityEngine::Android::AndroidAssetPackState* New_ctor(::StringW name, ::UnityEngine::Android::AndroidAssetPackStatus status, ::UnityEngine::Android::AndroidAssetPackError error);

  constexpr ::UnityEngine::Android::AndroidAssetPackError const& __cordl_internal_get__error_k__BackingField() const;

  constexpr ::UnityEngine::Android::AndroidAssetPackError& __cordl_internal_get__error_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__name_k__BackingField();

  constexpr ::UnityEngine::Android::AndroidAssetPackStatus const& __cordl_internal_get__status_k__BackingField() const;

  constexpr ::UnityEngine::Android::AndroidAssetPackStatus& __cordl_internal_get__status_k__BackingField();

  constexpr void __cordl_internal_set__error_k__BackingField(::UnityEngine::Android::AndroidAssetPackError value);

  constexpr void __cordl_internal_set__name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__status_k__BackingField(::UnityEngine::Android::AndroidAssetPackStatus value);

  /// @brief Method .ctor, addr 0x484ca70, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::UnityEngine::Android::AndroidAssetPackStatus status, ::UnityEngine::Android::AndroidAssetPackError error);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidAssetPackState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidAssetPackState(AndroidAssetPackState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidAssetPackState(AndroidAssetPackState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16771 };

  /// @brief Field <name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name_k__BackingField;

  /// @brief Field <status>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Android::AndroidAssetPackStatus ____status_k__BackingField;

  /// @brief Field <error>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Android::AndroidAssetPackError ____error_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Android::AndroidAssetPackState, ____name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidAssetPackState, ____status_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidAssetPackState, ____error_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidAssetPackState, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Android
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPackState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPackState*, "UnityEngine.Android", "AndroidAssetPackState");
