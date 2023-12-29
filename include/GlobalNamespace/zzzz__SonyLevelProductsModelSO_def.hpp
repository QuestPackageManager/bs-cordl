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
CORDL_MODULE_EXPORT(SonyLevelProductsModelSO)
namespace GlobalNamespace {
class __SonyLevelProductsModelSO__LevelPackProductData;
}
namespace GlobalNamespace {
class __SonyLevelProductsModelSO__LevelProductData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class IComparable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyLevelProductsModelSO;
}
namespace GlobalNamespace {
class __SonyLevelProductsModelSO__LevelPackProductData;
}
namespace GlobalNamespace {
class __SonyLevelProductsModelSO__LevelProductData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelProductsModelSO);
MARK_REF_PTR_T(::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData);
MARK_REF_PTR_T(::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData);
// Type: ::LevelProductData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4679))
// CS Name: ::SonyLevelProductsModelSO::LevelProductData*
class CORDL_TYPE __SonyLevelProductsModelSO__LevelProductData : public ::System::Object {
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

  /// @brief Method get_entitlementLabel addr 0x222fc60 size 0x8 virtual false final false
  inline ::StringW get_entitlementLabel();

  /// @brief Method get_productLabel addr 0x222fc68 size 0x8 virtual false final false
  inline ::StringW get_productLabel();

  /// @brief Method get_levelId addr 0x222fc70 size 0x8 virtual false final false
  inline ::StringW get_levelId();

  static inline ::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData* New_ctor(::StringW entitlementLabel, ::StringW productLabel, ::StringW levelId);

  /// @brief Method .ctor addr 0x222fc78 size 0x3c virtual false final false
  inline void _ctor(::StringW entitlementLabel, ::StringW productLabel, ::StringW levelId);

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductsModelSO__LevelProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyLevelProductsModelSO__LevelProductData(__SonyLevelProductsModelSO__LevelProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductsModelSO__LevelProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyLevelProductsModelSO__LevelProductData(__SonyLevelProductsModelSO__LevelProductData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyLevelProductsModelSO__LevelProductData();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData, ____entitlementLabel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData, ____productLabel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData, ____levelId) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelPackProductData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4680))
// CS Name: ::SonyLevelProductsModelSO::LevelPackProductData*
class CORDL_TYPE __SonyLevelProductsModelSO__LevelPackProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _productLabel, offset 0x10, size 0x8
  __declspec(property(get = __get__productLabel, put = __set__productLabel))::StringW _productLabel;

  /// @brief Field _packId, offset 0x18, size 0x8
  __declspec(property(get = __get__packId, put = __set__packId))::StringW _packId;

  /// @brief Field _packLevelPriceDiscountMul, offset 0x20, size 0x4
  __declspec(property(get = __get__packLevelPriceDiscountMul, put = __set__packLevelPriceDiscountMul)) float_t _packLevelPriceDiscountMul;

  /// @brief Field _levelProductsData, offset 0x28, size 0x8
  __declspec(property(get = __get__levelProductsData, put = __set__levelProductsData))::ArrayW<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*,
                                                                                               ::Array<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*>*> _levelProductsData;

  /// @brief Field _packIndex, offset 0x30, size 0x4
  __declspec(property(get = __get__packIndex, put = __set__packIndex)) int32_t _packIndex;

  __declspec(property(get = get_productLabel))::StringW productLabel;

  __declspec(property(get = get_levelPackId))::StringW levelPackId;

  __declspec(property(get = get_packLevelPriceDiscountMul)) float_t packLevelPriceDiscountMul;

  __declspec(property(get = get_packIndex)) int32_t packIndex;

  __declspec(property(get = get_levelProductsData))::ArrayW<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*,
                                                            ::Array<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*>*> levelProductsData;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*>*() noexcept;

  constexpr ::StringW& __get__productLabel();

  constexpr ::StringW const& __get__productLabel() const;

  constexpr void __set__productLabel(::StringW value);

  constexpr ::StringW& __get__packId();

  constexpr ::StringW const& __get__packId() const;

  constexpr void __set__packId(::StringW value);

  constexpr float_t& __get__packLevelPriceDiscountMul();

  constexpr float_t const& __get__packLevelPriceDiscountMul() const;

  constexpr void __set__packLevelPriceDiscountMul(float_t value);

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*>*>& __get__levelProductsData();

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*>*> const&
  __get__levelProductsData() const;

  constexpr void __set__levelProductsData(::ArrayW<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*>*> value);

  constexpr int32_t& __get__packIndex();

  constexpr int32_t const& __get__packIndex() const;

  constexpr void __set__packIndex(int32_t value);

  /// @brief Method get_productLabel addr 0x222fcb4 size 0x8 virtual false final false
  inline ::StringW get_productLabel();

  /// @brief Method get_levelPackId addr 0x222fcbc size 0x8 virtual false final false
  inline ::StringW get_levelPackId();

  /// @brief Method get_packLevelPriceDiscountMul addr 0x222fcc4 size 0x8 virtual false final false
  inline float_t get_packLevelPriceDiscountMul();

  /// @brief Method get_packIndex addr 0x222fccc size 0x8 virtual false final false
  inline int32_t get_packIndex();

  /// @brief Method get_levelProductsData addr 0x222fcd4 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*>*> get_levelProductsData();

  static inline ::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*
  New_ctor(::StringW productLabel, ::StringW levelPackId, float_t packLevelPriceDiscountMul,
           ::ArrayW<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*>*> levelProductsData, int32_t packIndex);

  /// @brief Method .ctor addr 0x222fcdc size 0x98 virtual false final false
  inline void _ctor(::StringW productLabel, ::StringW levelPackId, float_t packLevelPriceDiscountMul,
                    ::ArrayW<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*>*> levelProductsData,
                    int32_t packIndex);

  /// @brief Method CompareTo addr 0x222fd74 size 0x20 virtual true final true
  inline int32_t CompareTo(::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData* other);

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductsModelSO__LevelPackProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyLevelProductsModelSO__LevelPackProductData(__SonyLevelProductsModelSO__LevelPackProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductsModelSO__LevelPackProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyLevelProductsModelSO__LevelPackProductData(__SonyLevelProductsModelSO__LevelPackProductData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyLevelProductsModelSO__LevelPackProductData();

public:
  /// @brief Field _productLabel, offset: 0x10, size: 0x8, def value: None
  ::StringW ____productLabel;

  /// @brief Field _packId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____packId;

  /// @brief Field _packLevelPriceDiscountMul, offset: 0x20, size: 0x4, def value: None
  float_t ____packLevelPriceDiscountMul;

  /// @brief Field _levelProductsData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*>*> ____levelProductsData;

  /// @brief Field _packIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ____packIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData, ____productLabel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData, ____packId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData, ____packLevelPriceDiscountMul) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData, ____levelProductsData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData, ____packIndex) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SonyLevelProductsModelSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4681))
// CS Name: ::SonyLevelProductsModelSO*
class CORDL_TYPE SonyLevelProductsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LevelPackProductData = ::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData;

  using LevelProductData = ::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData;

  /// @brief Field _levelPackProductsData, offset 0x18, size 0x8
  __declspec(property(get = __get__levelPackProductsData,
                      put = __set__levelPackProductsData))::ArrayW<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*,
                                                                   ::Array<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*>*> _levelPackProductsData;

  /// @brief Field _levelIdToProductData, offset 0x20, size 0x8
  __declspec(
      property(get = __get__levelIdToProductData,
               put = __set__levelIdToProductData))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*>* _levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset 0x28, size 0x8
  __declspec(property(
      get = __get__levelPackIdToProductData,
      put = __set__levelPackIdToProductData))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*>* _levelPackIdToProductData;

  __declspec(property(get = get_levelPackProductsData))::ArrayW<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*,
                                                                ::Array<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*>*> levelPackProductsData;

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*>*>&
  __get__levelPackProductsData();

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*>*> const&
  __get__levelPackProductsData() const;

  constexpr void
  __set__levelPackProductsData(::ArrayW<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*>*> value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*>*& __get__levelIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*>*> const&
  __get__levelIdToProductData() const;

  constexpr void __set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*>*& __get__levelPackIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*>*> const&
  __get__levelPackIdToProductData() const;

  constexpr void __set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*>* value);

  /// @brief Method get_levelPackProductsData addr 0x222f9fc size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*>*> get_levelPackProductsData();

  /// @brief Method OnEnable addr 0x222fa04 size 0x164 virtual true final false
  inline void OnEnable();

  /// @brief Method SetLevelPackProductsData addr 0x222fb68 size 0x8 virtual false final false
  inline void SetLevelPackProductsData(
      ::ArrayW<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*>*> levelPackProductsData);

  /// @brief Method GetLevelProductData addr 0x222fb70 size 0x78 virtual false final false
  inline ::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData* GetLevelProductData(::StringW levelId);

  /// @brief Method GetLevelPackProductData addr 0x222fbe8 size 0x78 virtual false final false
  inline ::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData* GetLevelPackProductData(::StringW levelPackId);

  static inline ::GlobalNamespace::SonyLevelProductsModelSO* New_ctor();

  /// @brief Method .ctor addr 0x222e07c size 0xec virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductsModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLevelProductsModelSO(SonyLevelProductsModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductsModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLevelProductsModelSO(SonyLevelProductsModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLevelProductsModelSO();

public:
  /// @brief Field _levelPackProductsData, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*>*> ____levelPackProductsData;

  /// @brief Field _levelIdToProductData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*>* ____levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*>* ____levelPackIdToProductData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelProductsModelSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductsModelSO, ____levelPackProductsData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductsModelSO, ____levelIdToProductData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductsModelSO, ____levelPackIdToProductData) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyLevelProductsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelProductsModelSO*, "", "SonyLevelProductsModelSO");
NEED_NO_BOX(::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyLevelProductsModelSO__LevelPackProductData*, "", "SonyLevelProductsModelSO/LevelPackProductData");
NEED_NO_BOX(::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyLevelProductsModelSO__LevelProductData*, "", "SonyLevelProductsModelSO/LevelProductData");
