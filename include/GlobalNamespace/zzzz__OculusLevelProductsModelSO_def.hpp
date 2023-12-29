#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OculusLevelProductsModelSO)
namespace GlobalNamespace {
class __OculusLevelProductsModelSO__LevelProductData;
}
namespace GlobalNamespace {
class __OculusLevelProductsModelSO__LevelPackProductData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusLevelProductsModelSO;
}
namespace GlobalNamespace {
class __OculusLevelProductsModelSO__LevelPackProductData;
}
namespace GlobalNamespace {
class __OculusLevelProductsModelSO__LevelProductData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusLevelProductsModelSO);
MARK_REF_PTR_T(::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData);
MARK_REF_PTR_T(::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData);
// Type: ::LevelProductData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4627))
// CS Name: ::OculusLevelProductsModelSO::LevelProductData*
class CORDL_TYPE __OculusLevelProductsModelSO__LevelProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _levelId, offset 0x10, size 0x8
  __declspec(property(get = __get__levelId, put = __set__levelId))::StringW _levelId;

  /// @brief Field _sku, offset 0x18, size 0x8
  __declspec(property(get = __get__sku, put = __set__sku))::StringW _sku;

  __declspec(property(get = get_sku))::StringW sku;

  __declspec(property(get = get_levelId))::StringW levelId;

  __declspec(property(get = get_assetFile))::StringW assetFile;

  constexpr ::StringW& __get__levelId();

  constexpr ::StringW const& __get__levelId() const;

  constexpr void __set__levelId(::StringW value);

  constexpr ::StringW& __get__sku();

  constexpr ::StringW const& __get__sku() const;

  constexpr void __set__sku(::StringW value);

  /// @brief Method get_sku addr 0x222d114 size 0x8 virtual false final false
  inline ::StringW get_sku();

  /// @brief Method get_levelId addr 0x222d11c size 0x8 virtual false final false
  inline ::StringW get_levelId();

  /// @brief Method get_assetFile addr 0x222b228 size 0x1c virtual false final false
  inline ::StringW get_assetFile();

  static inline ::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData* New_ctor();

  /// @brief Method .ctor addr 0x222d124 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductsModelSO__LevelProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusLevelProductsModelSO__LevelProductData(__OculusLevelProductsModelSO__LevelProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductsModelSO__LevelProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusLevelProductsModelSO__LevelProductData(__OculusLevelProductsModelSO__LevelProductData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusLevelProductsModelSO__LevelProductData();

public:
  /// @brief Field _levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelId;

  /// @brief Field _sku, offset: 0x18, size: 0x8, def value: None
  ::StringW ____sku;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData, ____levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData, ____sku) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelPackProductData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4628))
// CS Name: ::OculusLevelProductsModelSO::LevelPackProductData*
class CORDL_TYPE __OculusLevelProductsModelSO__LevelPackProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _sku, offset 0x10, size 0x8
  __declspec(property(get = __get__sku, put = __set__sku))::StringW _sku;

  /// @brief Field _levelPackId, offset 0x18, size 0x8
  __declspec(property(get = __get__levelPackId, put = __set__levelPackId))::StringW _levelPackId;

  /// @brief Field _levelProductsData, offset 0x20, size 0x8
  __declspec(property(get = __get__levelProductsData, put = __set__levelProductsData))::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*,
                                                                                               ::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*> _levelProductsData;

  __declspec(property(get = get_sku))::StringW sku;

  __declspec(property(get = get_levelPackId))::StringW levelPackId;

  __declspec(property(get = get_levelProductsData))::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*,
                                                            ::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*> levelProductsData;

  constexpr ::StringW& __get__sku();

  constexpr ::StringW const& __get__sku() const;

  constexpr void __set__sku(::StringW value);

  constexpr ::StringW& __get__levelPackId();

  constexpr ::StringW const& __get__levelPackId() const;

  constexpr void __set__levelPackId(::StringW value);

  constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*>& __get__levelProductsData();

  constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*> const&
  __get__levelProductsData() const;

  constexpr void
  __set__levelProductsData(::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*> value);

  /// @brief Method get_sku addr 0x222d12c size 0x8 virtual false final false
  inline ::StringW get_sku();

  /// @brief Method get_levelPackId addr 0x222d134 size 0x8 virtual false final false
  inline ::StringW get_levelPackId();

  /// @brief Method get_levelProductsData addr 0x222d13c size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*> get_levelProductsData();

  static inline ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData* New_ctor();

  /// @brief Method .ctor addr 0x222d144 size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductsModelSO__LevelPackProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusLevelProductsModelSO__LevelPackProductData(__OculusLevelProductsModelSO__LevelPackProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductsModelSO__LevelPackProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusLevelProductsModelSO__LevelPackProductData(__OculusLevelProductsModelSO__LevelPackProductData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusLevelProductsModelSO__LevelPackProductData();

public:
  /// @brief Field _sku, offset: 0x10, size: 0x8, def value: None
  ::StringW ____sku;

  /// @brief Field _levelPackId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____levelPackId;

  /// @brief Field _levelProductsData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*> ____levelProductsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData, ____sku) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData, ____levelPackId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData, ____levelProductsData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusLevelProductsModelSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4629))
// CS Name: ::OculusLevelProductsModelSO*
class CORDL_TYPE OculusLevelProductsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LevelPackProductData = ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData;

  using LevelProductData = ::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData;

  /// @brief Field _levelPackProductsData, offset 0x18, size 0x8
  __declspec(property(get = __get__levelPackProductsData,
                      put = __set__levelPackProductsData))::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*,
                                                                   ::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*> _levelPackProductsData;

  /// @brief Field _levelIdToProductData, offset 0x20, size 0x8
  __declspec(
      property(get = __get__levelIdToProductData,
               put = __set__levelIdToProductData))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>* _levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset 0x28, size 0x8
  __declspec(property(
      get = __get__levelPackIdToProductData,
      put = __set__levelPackIdToProductData))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>* _levelPackIdToProductData;

  /// @brief Field _assetFileToSku, offset 0x30, size 0x8
  __declspec(property(get = __get__assetFileToSku, put = __set__assetFileToSku))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _assetFileToSku;

  __declspec(property(get = get_levelPackProductsData))::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*,
                                                                ::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*> levelPackProductsData;

  constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*>&
  __get__levelPackProductsData();

  constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*> const&
  __get__levelPackProductsData() const;

  constexpr void __set__levelPackProductsData(
      ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*> value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*& __get__levelIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*> const&
  __get__levelIdToProductData() const;

  constexpr void __set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*& __get__levelPackIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*> const&
  __get__levelPackIdToProductData() const;

  constexpr void __set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __get__assetFileToSku();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __get__assetFileToSku() const;

  constexpr void __set__assetFileToSku(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method get_levelPackProductsData addr 0x222cd10 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*> get_levelPackProductsData();

  /// @brief Method OnEnable addr 0x222cd18 size 0x1dc virtual true final false
  inline void OnEnable();

  /// @brief Method GetLevelProductData addr 0x222b1b0 size 0x78 virtual false final false
  inline ::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData* GetLevelProductData(::StringW levelId);

  /// @brief Method GetLevelPackProductData addr 0x222cef4 size 0x78 virtual false final false
  inline ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData* GetLevelPackProductData(::StringW levelPackId);

  /// @brief Method GetLevelSku addr 0x222cf6c size 0x78 virtual false final false
  inline ::StringW GetLevelSku(::StringW assetFile);

  static inline ::GlobalNamespace::OculusLevelProductsModelSO* New_ctor();

  /// @brief Method .ctor addr 0x222cfe4 size 0x130 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductsModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusLevelProductsModelSO(OculusLevelProductsModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductsModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusLevelProductsModelSO(OculusLevelProductsModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusLevelProductsModelSO();

public:
  /// @brief Field _levelPackProductsData, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*> ____levelPackProductsData;

  /// @brief Field _levelIdToProductData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>* ____levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>* ____levelPackIdToProductData;

  /// @brief Field _assetFileToSku, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____assetFileToSku;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusLevelProductsModelSO, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductsModelSO, ____levelPackProductsData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductsModelSO, ____levelIdToProductData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductsModelSO, ____levelPackIdToProductData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductsModelSO, ____assetFileToSku) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusLevelProductsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusLevelProductsModelSO*, "", "OculusLevelProductsModelSO");
NEED_NO_BOX(::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*, "", "OculusLevelProductsModelSO/LevelPackProductData");
NEED_NO_BOX(::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*, "", "OculusLevelProductsModelSO/LevelProductData");
