#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AssetReferenceUIRestriction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssetReferenceUILabelRestriction)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AssetReferenceUILabelRestriction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetReferenceUILabelRestriction);
// Type: UnityEngine::AssetReferenceUILabelRestriction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14058))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14059))
// CS Name: ::UnityEngine::AssetReferenceUILabelRestriction*
class CORDL_TYPE AssetReferenceUILabelRestriction : public ::UnityEngine::AssetReferenceUIRestriction {
public:
  // Declarations
  /// @brief Field m_AllowedLabels, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AllowedLabels, put = __cordl_internal_set_m_AllowedLabels))::ArrayW<::StringW, ::Array<::StringW>*> m_AllowedLabels;

  /// @brief Field m_CachedToString, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedToString, put = __cordl_internal_set_m_CachedToString))::StringW m_CachedToString;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_AllowedLabels();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_AllowedLabels() const;

  constexpr void __cordl_internal_set_m_AllowedLabels(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::StringW& __cordl_internal_get_m_CachedToString();

  constexpr ::StringW const& __cordl_internal_get_m_CachedToString() const;

  constexpr void __cordl_internal_set_m_CachedToString(::StringW value);

  static inline ::UnityEngine::AssetReferenceUILabelRestriction* New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> allowedLabels);

  /// @brief Method .ctor, addr 0x2a11b88, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> allowedLabels);

  /// @brief Method ValidateAsset, addr 0x2a11bb0, size 0x8, virtual true, abstract: false, final false
  inline bool ValidateAsset(::UnityEngine::Object* obj);

  /// @brief Method ValidateAsset, addr 0x2a11bb8, size 0x8, virtual true, abstract: false, final false
  inline bool ValidateAsset(::StringW path);

  /// @brief Method ToString, addr 0x2a11bc0, size 0xf4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceUILabelRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetReferenceUILabelRestriction(AssetReferenceUILabelRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceUILabelRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetReferenceUILabelRestriction(AssetReferenceUILabelRestriction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetReferenceUILabelRestriction();

public:
  /// @brief Field m_AllowedLabels, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_AllowedLabels;

  /// @brief Field m_CachedToString, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_CachedToString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetReferenceUILabelRestriction, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AssetReferenceUILabelRestriction, ___m_AllowedLabels) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AssetReferenceUILabelRestriction, ___m_CachedToString) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AssetReferenceUILabelRestriction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetReferenceUILabelRestriction*, "UnityEngine", "AssetReferenceUILabelRestriction");
