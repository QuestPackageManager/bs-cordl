#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyPublisherSKUSettingsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SonyPublisherSKUSettingsSO)
// Forward declare root types
namespace GlobalNamespace {
class SonyPublisherSKUSettingsSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyPublisherSKUSettingsSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyPublisherSKUSettingsSO
class CORDL_TYPE SonyPublisherSKUSettingsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _productLabel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__productLabel, put = __cordl_internal_set__productLabel)) ::StringW _productLabel;

  /// @brief Field _serviceIdPrefix, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__serviceIdPrefix, put = __cordl_internal_set__serviceIdPrefix)) ::StringW _serviceIdPrefix;

  /// @brief Field _skuName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__skuName, put = __cordl_internal_set__skuName)) ::StringW _skuName;

  /// @brief Field _titleId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__titleId, put = __cordl_internal_set__titleId)) ::StringW _titleId;

  __declspec(property(get = get_productLabel)) ::StringW productLabel;

  __declspec(property(get = get_serviceIdPrefix)) ::StringW serviceIdPrefix;

  __declspec(property(get = get_skuName)) ::StringW skuName;

  __declspec(property(get = get_titleId)) ::StringW titleId;

  static inline ::GlobalNamespace::SonyPublisherSKUSettingsSO* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__productLabel() const;

  constexpr ::StringW& __cordl_internal_get__productLabel();

  constexpr ::StringW const& __cordl_internal_get__serviceIdPrefix() const;

  constexpr ::StringW& __cordl_internal_get__serviceIdPrefix();

  constexpr ::StringW const& __cordl_internal_get__skuName() const;

  constexpr ::StringW& __cordl_internal_get__skuName();

  constexpr ::StringW const& __cordl_internal_get__titleId() const;

  constexpr ::StringW& __cordl_internal_get__titleId();

  constexpr void __cordl_internal_set__productLabel(::StringW value);

  constexpr void __cordl_internal_set__serviceIdPrefix(::StringW value);

  constexpr void __cordl_internal_set__skuName(::StringW value);

  constexpr void __cordl_internal_set__titleId(::StringW value);

  /// @brief Method .ctor, addr 0x26eaf70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_productLabel, addr 0x26f05ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_productLabel();

  /// @brief Method get_serviceIdPrefix, addr 0x26f05dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_serviceIdPrefix();

  /// @brief Method get_skuName, addr 0x26f05d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_skuName();

  /// @brief Method get_titleId, addr 0x26f05e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_titleId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyPublisherSKUSettingsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyPublisherSKUSettingsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyPublisherSKUSettingsSO(SonyPublisherSKUSettingsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyPublisherSKUSettingsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyPublisherSKUSettingsSO(SonyPublisherSKUSettingsSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13211 };

  /// @brief Field _skuName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____skuName;

  /// @brief Field _serviceIdPrefix, offset: 0x20, size: 0x8, def value: None
  ::StringW ____serviceIdPrefix;

  /// @brief Field _titleId, offset: 0x28, size: 0x8, def value: None
  ::StringW ____titleId;

  /// @brief Field _productLabel, offset: 0x30, size: 0x8, def value: None
  ::StringW ____productLabel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyPublisherSKUSettingsSO, ____skuName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPublisherSKUSettingsSO, ____serviceIdPrefix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPublisherSKUSettingsSO, ____titleId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPublisherSKUSettingsSO, ____productLabel) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyPublisherSKUSettingsSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyPublisherSKUSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyPublisherSKUSettingsSO*, "", "SonyPublisherSKUSettingsSO");
