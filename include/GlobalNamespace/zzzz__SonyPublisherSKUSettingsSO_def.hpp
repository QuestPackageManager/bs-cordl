#pragma once
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
// Type: ::SonyPublisherSKUSettingsSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4602))
// CS Name: ::SonyPublisherSKUSettingsSO*
class CORDL_TYPE SonyPublisherSKUSettingsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _skuName, offset 0x18, size 0x8
  __declspec(property(get = __get__skuName, put = __set__skuName))::StringW _skuName;

  /// @brief Field _serviceIdPrefix, offset 0x20, size 0x8
  __declspec(property(get = __get__serviceIdPrefix, put = __set__serviceIdPrefix))::StringW _serviceIdPrefix;

  /// @brief Field _titleId, offset 0x28, size 0x8
  __declspec(property(get = __get__titleId, put = __set__titleId))::StringW _titleId;

  /// @brief Field _productLabel, offset 0x30, size 0x8
  __declspec(property(get = __get__productLabel, put = __set__productLabel))::StringW _productLabel;

  __declspec(property(get = get_skuName))::StringW skuName;

  __declspec(property(get = get_serviceIdPrefix))::StringW serviceIdPrefix;

  __declspec(property(get = get_titleId))::StringW titleId;

  __declspec(property(get = get_productLabel))::StringW productLabel;

  constexpr ::StringW& __get__skuName();

  constexpr ::StringW const& __get__skuName() const;

  constexpr void __set__skuName(::StringW value);

  constexpr ::StringW& __get__serviceIdPrefix();

  constexpr ::StringW const& __get__serviceIdPrefix() const;

  constexpr void __set__serviceIdPrefix(::StringW value);

  constexpr ::StringW& __get__titleId();

  constexpr ::StringW const& __get__titleId() const;

  constexpr void __set__titleId(::StringW value);

  constexpr ::StringW& __get__productLabel();

  constexpr ::StringW const& __get__productLabel() const;

  constexpr void __set__productLabel(::StringW value);

  /// @brief Method get_skuName addr 0x2369d84 size 0x8 virtual false final false
  inline ::StringW get_skuName();

  /// @brief Method get_serviceIdPrefix addr 0x2369d8c size 0x8 virtual false final false
  inline ::StringW get_serviceIdPrefix();

  /// @brief Method get_titleId addr 0x2369d94 size 0x8 virtual false final false
  inline ::StringW get_titleId();

  /// @brief Method get_productLabel addr 0x2369d9c size 0x8 virtual false final false
  inline ::StringW get_productLabel();

  static inline ::GlobalNamespace::SonyPublisherSKUSettingsSO* New_ctor();

  /// @brief Method .ctor addr 0x2368248 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SonyPublisherSKUSettingsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyPublisherSKUSettingsSO(SonyPublisherSKUSettingsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyPublisherSKUSettingsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyPublisherSKUSettingsSO(SonyPublisherSKUSettingsSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyPublisherSKUSettingsSO();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyPublisherSKUSettingsSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyPublisherSKUSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyPublisherSKUSettingsSO*, "", "SonyPublisherSKUSettingsSO");
