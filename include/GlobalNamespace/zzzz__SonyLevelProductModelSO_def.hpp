#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SonyLevelProductModelSO)
namespace GlobalNamespace {
class __SonyLevelProductModelSO__LevelPackRedirectionData;
}
namespace GlobalNamespace {
class __SonyLevelProductModelSO__LevelProductData;
}
namespace GlobalNamespace {
class __SonyLevelProductModelSO__LevelPackProductData;
}
namespace System {
template <typename T> class IComparable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyLevelProductModelSO;
}
namespace GlobalNamespace {
class __SonyLevelProductModelSO__LevelPackProductData;
}
namespace GlobalNamespace {
class __SonyLevelProductModelSO__LevelPackRedirectionData;
}
namespace GlobalNamespace {
class __SonyLevelProductModelSO__LevelProductData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelProductModelSO);
MARK_REF_PTR_T(::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData);
MARK_REF_PTR_T(::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData);
MARK_REF_PTR_T(::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData);
// Type: ::LevelProductData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4588))
// CS Name: ::SonyLevelProductModelSO::LevelProductData*
class CORDL_TYPE __SonyLevelProductModelSO__LevelProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _entitlementLabel, offset 0x10, size 0x8
  __declspec(property(get = __get__entitlementLabel, put = __set__entitlementLabel))::StringW _entitlementLabel;

  /// @brief Field _productLabel, offset 0x18, size 0x8
  __declspec(property(get = __get__productLabel, put = __set__productLabel))::StringW _productLabel;

  /// @brief Field _levelId, offset 0x20, size 0x8
  __declspec(property(get = __get__levelId, put = __set__levelId))::StringW _levelId;

  __declspec(property(get = get_entitlementLabel))::StringW entitlementLabel;

  __declspec(property(get = get_productLabel))::StringW productLabel;

  __declspec(property(get = get_levelId))::StringW levelId;

  constexpr ::StringW& __get__entitlementLabel();

  constexpr ::StringW const& __get__entitlementLabel() const;

  constexpr void __set__entitlementLabel(::StringW value);

  constexpr ::StringW& __get__productLabel();

  constexpr ::StringW const& __get__productLabel() const;

  constexpr void __set__productLabel(::StringW value);

  constexpr ::StringW& __get__levelId();

  constexpr ::StringW const& __get__levelId() const;

  constexpr void __set__levelId(::StringW value);

  /// @brief Method get_entitlementLabel addr 0x2369a8c size 0x8 virtual false final false
  inline ::StringW get_entitlementLabel();

  /// @brief Method get_productLabel addr 0x2369a94 size 0x8 virtual false final false
  inline ::StringW get_productLabel();

  /// @brief Method get_levelId addr 0x2369a9c size 0x8 virtual false final false
  inline ::StringW get_levelId();

  static inline ::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData* New_ctor(::StringW entitlementLabel, ::StringW productLabel, ::StringW levelId);

  /// @brief Method .ctor addr 0x2369aa4 size 0x3c virtual false final false
  inline void _ctor(::StringW entitlementLabel, ::StringW productLabel, ::StringW levelId);

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductModelSO__LevelProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyLevelProductModelSO__LevelProductData(__SonyLevelProductModelSO__LevelProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductModelSO__LevelProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyLevelProductModelSO__LevelProductData(__SonyLevelProductModelSO__LevelProductData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyLevelProductModelSO__LevelProductData();

public:
  /// @brief Field _entitlementLabel, offset: 0x10, size: 0x8, def value: None
  ::StringW ____entitlementLabel;

  /// @brief Field _productLabel, offset: 0x18, size: 0x8, def value: None
  ::StringW ____productLabel;

  /// @brief Field _levelId, offset: 0x20, size: 0x8, def value: None
  ::StringW ____levelId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelPackProductData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4589))
// CS Name: ::SonyLevelProductModelSO::LevelPackProductData*
class CORDL_TYPE __SonyLevelProductModelSO__LevelPackProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _productLabel, offset 0x10, size 0x8
  __declspec(property(get = __get__productLabel, put = __set__productLabel))::StringW _productLabel;

  /// @brief Field _packId, offset 0x18, size 0x8
  __declspec(property(get = __get__packId, put = __set__packId))::StringW _packId;

  /// @brief Field _packLevelPriceDiscountMul, offset 0x20, size 0x4
  __declspec(property(get = __get__packLevelPriceDiscountMul, put = __set__packLevelPriceDiscountMul)) float_t _packLevelPriceDiscountMul;

  /// @brief Field _levelProductsData, offset 0x28, size 0x8
  __declspec(property(get = __get__levelProductsData, put = __set__levelProductsData))::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*,
                                                                                               ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*> _levelProductsData;

  /// @brief Field _packIndex, offset 0x30, size 0x4
  __declspec(property(get = __get__packIndex, put = __set__packIndex)) int32_t _packIndex;

  __declspec(property(get = get_productLabel))::StringW productLabel;

  __declspec(property(get = get_levelPackId))::StringW levelPackId;

  __declspec(property(get = get_packLevelPriceDiscountMul)) float_t packLevelPriceDiscountMul;

  __declspec(property(get = get_packIndex)) int32_t packIndex;

  __declspec(property(get = get_levelProductsData))::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*,
                                                            ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*> levelProductsData;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*() noexcept;

  constexpr ::StringW& __get__productLabel();

  constexpr ::StringW const& __get__productLabel() const;

  constexpr void __set__productLabel(::StringW value);

  constexpr ::StringW& __get__packId();

  constexpr ::StringW const& __get__packId() const;

  constexpr void __set__packId(::StringW value);

  constexpr float_t& __get__packLevelPriceDiscountMul();

  constexpr float_t const& __get__packLevelPriceDiscountMul() const;

  constexpr void __set__packLevelPriceDiscountMul(float_t value);

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*>& __get__levelProductsData();

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*> const&
  __get__levelProductsData() const;

  constexpr void __set__levelProductsData(::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*> value);

  constexpr int32_t& __get__packIndex();

  constexpr int32_t const& __get__packIndex() const;

  constexpr void __set__packIndex(int32_t value);

  /// @brief Method get_productLabel addr 0x2369ae0 size 0x8 virtual false final false
  inline ::StringW get_productLabel();

  /// @brief Method get_levelPackId addr 0x2369ae8 size 0x8 virtual false final false
  inline ::StringW get_levelPackId();

  /// @brief Method get_packLevelPriceDiscountMul addr 0x2369af0 size 0x8 virtual false final false
  inline float_t get_packLevelPriceDiscountMul();

  /// @brief Method get_packIndex addr 0x2369af8 size 0x8 virtual false final false
  inline int32_t get_packIndex();

  /// @brief Method get_levelProductsData addr 0x2369b00 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*> get_levelProductsData();

  static inline ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*
  New_ctor(::StringW productLabel, ::StringW levelPackId, float_t packLevelPriceDiscountMul,
           ::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*> levelProductsData, int32_t packIndex);

  /// @brief Method .ctor addr 0x2369b08 size 0x98 virtual false final false
  inline void _ctor(::StringW productLabel, ::StringW levelPackId, float_t packLevelPriceDiscountMul,
                    ::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*> levelProductsData,
                    int32_t packIndex);

  /// @brief Method CompareTo addr 0x2369ba0 size 0x20 virtual true final true
  inline int32_t CompareTo(::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData* other);

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductModelSO__LevelPackProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyLevelProductModelSO__LevelPackProductData(__SonyLevelProductModelSO__LevelPackProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductModelSO__LevelPackProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyLevelProductModelSO__LevelPackProductData(__SonyLevelProductModelSO__LevelPackProductData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyLevelProductModelSO__LevelPackProductData();

public:
  /// @brief Field _productLabel, offset: 0x10, size: 0x8, def value: None
  ::StringW ____productLabel;

  /// @brief Field _packId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____packId;

  /// @brief Field _packLevelPriceDiscountMul, offset: 0x20, size: 0x4, def value: None
  float_t ____packLevelPriceDiscountMul;

  /// @brief Field _levelProductsData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*> ____levelProductsData;

  /// @brief Field _packIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ____packIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelPackRedirectionData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4590))
// CS Name: ::SonyLevelProductModelSO::LevelPackRedirectionData*
class CORDL_TYPE __SonyLevelProductModelSO__LevelPackRedirectionData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _targetLevelPackId, offset 0x10, size 0x8
  __declspec(property(get = __get__targetLevelPackId, put = __set__targetLevelPackId))::StringW _targetLevelPackId;

  /// @brief Field _shouldOwnLevelPackId, offset 0x18, size 0x8
  __declspec(property(get = __get__shouldOwnLevelPackId, put = __set__shouldOwnLevelPackId))::StringW _shouldOwnLevelPackId;

  /// @brief Field _redirectedProductLabel, offset 0x20, size 0x8
  __declspec(property(get = __get__redirectedProductLabel, put = __set__redirectedProductLabel))::StringW _redirectedProductLabel;

  /// @brief Field _validUntilDate, offset 0x28, size 0x8
  __declspec(property(get = __get__validUntilDate, put = __set__validUntilDate))::StringW _validUntilDate;

  __declspec(property(get = get_targetLevelPackId))::StringW targetLevelPackId;

  __declspec(property(get = get_shouldOwnLevelPackId))::StringW shouldOwnLevelPackId;

  __declspec(property(get = get_redirectedProductLabel))::StringW redirectedProductLabel;

  __declspec(property(get = get_validUntilDate))::StringW validUntilDate;

  constexpr ::StringW& __get__targetLevelPackId();

  constexpr ::StringW const& __get__targetLevelPackId() const;

  constexpr void __set__targetLevelPackId(::StringW value);

  constexpr ::StringW& __get__shouldOwnLevelPackId();

  constexpr ::StringW const& __get__shouldOwnLevelPackId() const;

  constexpr void __set__shouldOwnLevelPackId(::StringW value);

  constexpr ::StringW& __get__redirectedProductLabel();

  constexpr ::StringW const& __get__redirectedProductLabel() const;

  constexpr void __set__redirectedProductLabel(::StringW value);

  constexpr ::StringW& __get__validUntilDate();

  constexpr ::StringW const& __get__validUntilDate() const;

  constexpr void __set__validUntilDate(::StringW value);

  /// @brief Method get_targetLevelPackId addr 0x2369bc0 size 0x8 virtual false final false
  inline ::StringW get_targetLevelPackId();

  /// @brief Method get_shouldOwnLevelPackId addr 0x2369bc8 size 0x8 virtual false final false
  inline ::StringW get_shouldOwnLevelPackId();

  /// @brief Method get_redirectedProductLabel addr 0x2369bd0 size 0x8 virtual false final false
  inline ::StringW get_redirectedProductLabel();

  /// @brief Method get_validUntilDate addr 0x2369bd8 size 0x8 virtual false final false
  inline ::StringW get_validUntilDate();

  static inline ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData* New_ctor();

  /// @brief Method .ctor addr 0x2369be0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductModelSO__LevelPackRedirectionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyLevelProductModelSO__LevelPackRedirectionData(__SonyLevelProductModelSO__LevelPackRedirectionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductModelSO__LevelPackRedirectionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyLevelProductModelSO__LevelPackRedirectionData(__SonyLevelProductModelSO__LevelPackRedirectionData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyLevelProductModelSO__LevelPackRedirectionData();

public:
  /// @brief Field _targetLevelPackId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____targetLevelPackId;

  /// @brief Field _shouldOwnLevelPackId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____shouldOwnLevelPackId;

  /// @brief Field _redirectedProductLabel, offset: 0x20, size: 0x8, def value: None
  ::StringW ____redirectedProductLabel;

  /// @brief Field _validUntilDate, offset: 0x28, size: 0x8, def value: None
  ::StringW ____validUntilDate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SonyLevelProductModelSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4591))
// CS Name: ::SonyLevelProductModelSO*
class CORDL_TYPE SonyLevelProductModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LevelPackRedirectionData = ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData;

  using LevelPackProductData = ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData;

  using LevelProductData = ::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData;

  /// @brief Field _levelPackProductsData, offset 0x18, size 0x8
  __declspec(property(get = __get__levelPackProductsData,
                      put = __set__levelPackProductsData))::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*,
                                                                   ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*> _levelPackProductsData;

  /// @brief Field _levelPackRedirectionData, offset 0x20, size 0x8
  __declspec(property(get = __get__levelPackRedirectionData,
                      put = __set__levelPackRedirectionData))::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*,
                                                                      ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>*> _levelPackRedirectionData;

  __declspec(property(get = get_levelPackProductsData))::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*,
                                                                ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*> levelPackProductsData;

  __declspec(property(get = get_levelPackRedirectionData))::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*,
                                                                   ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>*> levelPackRedirectionData;

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*>&
  __get__levelPackProductsData();

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*> const&
  __get__levelPackProductsData() const;

  constexpr void
  __set__levelPackProductsData(::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>*>&
  __get__levelPackRedirectionData();

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>*> const&
  __get__levelPackRedirectionData() const;

  constexpr void __set__levelPackRedirectionData(
      ::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>*> value);

  /// @brief Method get_levelPackProductsData addr 0x2369a7c size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*> get_levelPackProductsData();

  /// @brief Method get_levelPackRedirectionData addr 0x2369a84 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>*>
  get_levelPackRedirectionData();

  static inline ::GlobalNamespace::SonyLevelProductModelSO* New_ctor();

  /// @brief Method .ctor addr 0x2368198 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLevelProductModelSO(SonyLevelProductModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLevelProductModelSO(SonyLevelProductModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLevelProductModelSO();

public:
  /// @brief Field _levelPackProductsData, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*> ____levelPackProductsData;

  /// @brief Field _levelPackRedirectionData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>*> ____levelPackRedirectionData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelProductModelSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyLevelProductModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelProductModelSO*, "", "SonyLevelProductModelSO");
NEED_NO_BOX(::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*, "", "SonyLevelProductModelSO/LevelPackProductData");
NEED_NO_BOX(::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*, "", "SonyLevelProductModelSO/LevelPackRedirectionData");
NEED_NO_BOX(::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*, "", "SonyLevelProductModelSO/LevelProductData");
