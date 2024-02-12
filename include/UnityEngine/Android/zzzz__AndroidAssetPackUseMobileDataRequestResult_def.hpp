#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AndroidAssetPackUseMobileDataRequestResult)
// Forward declare root types
namespace UnityEngine::Android {
class AndroidAssetPackUseMobileDataRequestResult;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult);
// Type: UnityEngine.Android::AndroidAssetPackUseMobileDataRequestResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::Android {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14797))
// CS Name: ::UnityEngine.Android::AndroidAssetPackUseMobileDataRequestResult*
class CORDL_TYPE AndroidAssetPackUseMobileDataRequestResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field <allowed>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__allowed_k__BackingField, put = __cordl_internal_set__allowed_k__BackingField)) bool _allowed_k__BackingField;

  constexpr bool& __cordl_internal_get__allowed_k__BackingField();

  constexpr bool const& __cordl_internal_get__allowed_k__BackingField() const;

  constexpr void __cordl_internal_set__allowed_k__BackingField(bool value);

  static inline ::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult* New_ctor(bool allowed);

  /// @brief Method .ctor, addr 0x2c89770, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool allowed);

  // Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackUseMobileDataRequestResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidAssetPackUseMobileDataRequestResult(AndroidAssetPackUseMobileDataRequestResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackUseMobileDataRequestResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidAssetPackUseMobileDataRequestResult(AndroidAssetPackUseMobileDataRequestResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidAssetPackUseMobileDataRequestResult();

public:
  /// @brief Field <allowed>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____allowed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult, ____allowed_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Android
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*, "UnityEngine.Android", "AndroidAssetPackUseMobileDataRequestResult");
