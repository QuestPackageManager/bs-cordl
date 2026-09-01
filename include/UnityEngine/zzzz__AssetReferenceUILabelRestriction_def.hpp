#pragma once
// IWYU pragma private; include "UnityEngine\AssetReferenceUILabelRestriction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AssetReferenceUIRestriction_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AssetReferenceUILabelRestriction)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AssetReferenceUILabelRestriction;
}
// Write type traits
MARK_REF_T(::UnityEngine::AssetReferenceUILabelRestriction*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AssetReferenceUILabelRestriction*, "UnityEngine", "AssetReferenceUILabelRestriction");
// Dependencies UnityEngine.AssetReferenceUIRestriction
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetReferenceUILabelRestriction
class CORDL_TYPE AssetReferenceUILabelRestriction : public ::UnityEngine::AssetReferenceUIRestriction {
public:
  // Declarations
  /// @brief Field m_AllowedLabels, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AllowedLabels, put = __cordl_internal_set_m_AllowedLabels)) ::ArrayW<::StringW> m_AllowedLabels;

  /// @brief Field m_CachedToString, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedToString, put = __cordl_internal_set_m_CachedToString)) ::StringW m_CachedToString;

  static inline ::UnityEngine::AssetReferenceUILabelRestriction* New_ctor(::ArrayW<::StringW> allowedLabels);

  /// @brief Method ToString, addr 0x644aa6c, size 0x108, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ValidateAsset, addr 0x644aa5c, size 0x8, virtual true, abstract: false, final false
  inline bool ValidateAsset(::UnityEngine::Object* obj);

  /// @brief Method ValidateAsset, addr 0x644aa64, size 0x8, virtual true, abstract: false, final false
  inline bool ValidateAsset(::StringW path);

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m_AllowedLabels() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get_m_AllowedLabels();

  constexpr ::StringW const& __cordl_internal_get_m_CachedToString() const;

  constexpr ::StringW& __cordl_internal_get_m_CachedToString();

  constexpr void __cordl_internal_set_m_AllowedLabels(::ArrayW<::StringW> value);

  constexpr void __cordl_internal_set_m_CachedToString(::StringW value);

  /// @brief Method .ctor, addr 0x644aa54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW> allowedLabels);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetReferenceUILabelRestriction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceUILabelRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetReferenceUILabelRestriction(AssetReferenceUILabelRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceUILabelRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetReferenceUILabelRestriction(AssetReferenceUILabelRestriction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19776 };

  /// @brief Field m_AllowedLabels, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW> ___m_AllowedLabels;

  /// @brief Field m_CachedToString, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_CachedToString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AssetReferenceUILabelRestriction, ___m_AllowedLabels) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AssetReferenceUILabelRestriction, ___m_CachedToString) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AssetReferenceUILabelRestriction) == 0x20, "Size mismatch!");

} // namespace UnityEngine
