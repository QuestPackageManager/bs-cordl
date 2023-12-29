#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamLevelProductsModelSO)
namespace GlobalNamespace {
class __SteamLevelProductsModelSO__LevelPackProductData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class __SteamLevelProductsModelSO__LevelProductData;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamLevelProductsModelSO;
}
namespace GlobalNamespace {
class __SteamLevelProductsModelSO__LevelPackProductData;
}
namespace GlobalNamespace {
class __SteamLevelProductsModelSO__LevelProductData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SteamLevelProductsModelSO);
MARK_REF_PTR_T(::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData);
MARK_REF_PTR_T(::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData);
// Type: ::LevelProductData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4634))
// CS Name: ::SteamLevelProductsModelSO::LevelProductData*
class CORDL_TYPE __SteamLevelProductsModelSO__LevelProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _appId, offset 0x10, size 0x4
  __declspec(property(get = __get__appId, put = __set__appId)) uint32_t _appId;

  /// @brief Field _levelId, offset 0x18, size 0x8
  __declspec(property(get = __get__levelId, put = __set__levelId))::StringW _levelId;

  __declspec(property(get = get_appId)) uint32_t appId;

  __declspec(property(get = get_levelId))::StringW levelId;

  constexpr uint32_t& __get__appId();

  constexpr uint32_t const& __get__appId() const;

  constexpr void __set__appId(uint32_t value);

  constexpr ::StringW& __get__levelId();

  constexpr ::StringW const& __get__levelId() const;

  constexpr void __set__levelId(::StringW value);

  /// @brief Method get_appId addr 0x222dc7c size 0x8 virtual false final false
  inline uint32_t get_appId();

  /// @brief Method get_levelId addr 0x222dc84 size 0x8 virtual false final false
  inline ::StringW get_levelId();

  static inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData* New_ctor();

  /// @brief Method .ctor addr 0x222dc8c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SteamLevelProductsModelSO__LevelProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SteamLevelProductsModelSO__LevelProductData(__SteamLevelProductsModelSO__LevelProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SteamLevelProductsModelSO__LevelProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SteamLevelProductsModelSO__LevelProductData(__SteamLevelProductsModelSO__LevelProductData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SteamLevelProductsModelSO__LevelProductData();

public:
  /// @brief Field _appId, offset: 0x10, size: 0x4, def value: None
  uint32_t ____appId;

  /// @brief Field _levelId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____levelId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData, ____appId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData, ____levelId) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelPackProductData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4635))
// CS Name: ::SteamLevelProductsModelSO::LevelPackProductData*
class CORDL_TYPE __SteamLevelProductsModelSO__LevelPackProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bundleId, offset 0x10, size 0x4
  __declspec(property(get = __get__bundleId, put = __set__bundleId)) uint32_t _bundleId;

  /// @brief Field _levelPackId, offset 0x18, size 0x8
  __declspec(property(get = __get__levelPackId, put = __set__levelPackId))::StringW _levelPackId;

  /// @brief Field _levelProductsData, offset 0x20, size 0x8
  __declspec(property(get = __get__levelProductsData, put = __set__levelProductsData))::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*,
                                                                                               ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*> _levelProductsData;

  __declspec(property(get = get_bundleId)) uint32_t bundleId;

  __declspec(property(get = get_levelPackId))::StringW levelPackId;

  __declspec(property(get = get_levelProductsData))::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*,
                                                            ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*> levelProductsData;

  constexpr uint32_t& __get__bundleId();

  constexpr uint32_t const& __get__bundleId() const;

  constexpr void __set__bundleId(uint32_t value);

  constexpr ::StringW& __get__levelPackId();

  constexpr ::StringW const& __get__levelPackId() const;

  constexpr void __set__levelPackId(::StringW value);

  constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*>& __get__levelProductsData();

  constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*> const&
  __get__levelProductsData() const;

  constexpr void
  __set__levelProductsData(::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*> value);

  /// @brief Method get_bundleId addr 0x222dc94 size 0x8 virtual false final false
  inline uint32_t get_bundleId();

  /// @brief Method get_levelPackId addr 0x222dc9c size 0x8 virtual false final false
  inline ::StringW get_levelPackId();

  /// @brief Method get_levelProductsData addr 0x222dca4 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*> get_levelProductsData();

  static inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData* New_ctor();

  /// @brief Method .ctor addr 0x222dcac size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SteamLevelProductsModelSO__LevelPackProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SteamLevelProductsModelSO__LevelPackProductData(__SteamLevelProductsModelSO__LevelPackProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SteamLevelProductsModelSO__LevelPackProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SteamLevelProductsModelSO__LevelPackProductData(__SteamLevelProductsModelSO__LevelPackProductData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SteamLevelProductsModelSO__LevelPackProductData();

public:
  /// @brief Field _bundleId, offset: 0x10, size: 0x4, def value: None
  uint32_t ____bundleId;

  /// @brief Field _levelPackId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____levelPackId;

  /// @brief Field _levelProductsData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*> ____levelProductsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData, ____bundleId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData, ____levelPackId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData, ____levelProductsData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SteamLevelProductsModelSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4636))
// CS Name: ::SteamLevelProductsModelSO*
class CORDL_TYPE SteamLevelProductsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LevelPackProductData = ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData;

  using LevelProductData = ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData;

  /// @brief Field _levelPackProductsData, offset 0x18, size 0x8
  __declspec(property(get = __get__levelPackProductsData,
                      put = __set__levelPackProductsData))::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*,
                                                                   ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> _levelPackProductsData;

  /// @brief Field _levelIdToProductData, offset 0x20, size 0x8
  __declspec(
      property(get = __get__levelIdToProductData,
               put = __set__levelIdToProductData))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>* _levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset 0x28, size 0x8
  __declspec(property(
      get = __get__levelPackIdToProductData,
      put = __set__levelPackIdToProductData))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>* _levelPackIdToProductData;

  __declspec(property(get = get_levelPackProductsData))::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*,
                                                                ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> levelPackProductsData;

  constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*>&
  __get__levelPackProductsData();

  constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> const&
  __get__levelPackProductsData() const;

  constexpr void
  __set__levelPackProductsData(::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*& __get__levelIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*> const&
  __get__levelIdToProductData() const;

  constexpr void __set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*& __get__levelPackIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> const&
  __get__levelPackIdToProductData() const;

  constexpr void __set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>* value);

  /// @brief Method get_levelPackProductsData addr 0x222d934 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> get_levelPackProductsData();

  /// @brief Method OnEnable addr 0x222d93c size 0x164 virtual true final false
  inline void OnEnable();

  /// @brief Method GetLevelProductData addr 0x222daa0 size 0x78 virtual false final false
  inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData* GetLevelProductData(::StringW levelId);

  /// @brief Method GetLevelPackProductData addr 0x222db18 size 0x78 virtual false final false
  inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData* GetLevelPackProductData(::StringW levelPackId);

  static inline ::GlobalNamespace::SteamLevelProductsModelSO* New_ctor();

  /// @brief Method .ctor addr 0x222db90 size 0xec virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductsModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SteamLevelProductsModelSO(SteamLevelProductsModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductsModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SteamLevelProductsModelSO(SteamLevelProductsModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamLevelProductsModelSO();

public:
  /// @brief Field _levelPackProductsData, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> ____levelPackProductsData;

  /// @brief Field _levelIdToProductData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>* ____levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>* ____levelPackIdToProductData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamLevelProductsModelSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductsModelSO, ____levelPackProductsData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductsModelSO, ____levelIdToProductData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductsModelSO, ____levelPackIdToProductData) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SteamLevelProductsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamLevelProductsModelSO*, "", "SteamLevelProductsModelSO");
NEED_NO_BOX(::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, "", "SteamLevelProductsModelSO/LevelPackProductData");
NEED_NO_BOX(::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, "", "SteamLevelProductsModelSO/LevelProductData");
