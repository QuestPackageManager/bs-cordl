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
class __SteamLevelProductsModelSO__LevelPackRedirectionData;
}
namespace GlobalNamespace {
class __SteamLevelProductsModelSO__LevelProductData;
}
namespace GlobalNamespace {
class __SteamLevelProductsModelSO__LevelPackProductData;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamLevelProductsModelSO;
}
namespace GlobalNamespace {
class __SteamLevelProductsModelSO__LevelPackProductData;
}
namespace GlobalNamespace {
class __SteamLevelProductsModelSO__LevelPackRedirectionData;
}
namespace GlobalNamespace {
class __SteamLevelProductsModelSO__LevelProductData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SteamLevelProductsModelSO);
MARK_REF_PTR_T(::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData);
MARK_REF_PTR_T(::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData);
MARK_REF_PTR_T(::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData);
// Type: ::LevelProductData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4546))
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

  /// @brief Method get_appId addr 0x236805c size 0x8 virtual false final false
  inline uint32_t get_appId();

  /// @brief Method get_levelId addr 0x2368064 size 0x8 virtual false final false
  inline ::StringW get_levelId();

  static inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData* New_ctor();

  /// @brief Method .ctor addr 0x236806c size 0x8 virtual false final false
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

} // namespace GlobalNamespace
// Type: ::LevelPackProductData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4547))
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

  /// @brief Method get_bundleId addr 0x2368074 size 0x8 virtual false final false
  inline uint32_t get_bundleId();

  /// @brief Method get_levelPackId addr 0x236807c size 0x8 virtual false final false
  inline ::StringW get_levelPackId();

  /// @brief Method get_levelProductsData addr 0x2368084 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*> get_levelProductsData();

  static inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData* New_ctor();

  /// @brief Method .ctor addr 0x236808c size 0x8 virtual false final false
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

} // namespace GlobalNamespace
// Type: ::LevelPackRedirectionData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4548))
// CS Name: ::SteamLevelProductsModelSO::LevelPackRedirectionData*
class CORDL_TYPE __SteamLevelProductsModelSO__LevelPackRedirectionData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _targetLevelPackId, offset 0x10, size 0x8
  __declspec(property(get = __get__targetLevelPackId, put = __set__targetLevelPackId))::StringW _targetLevelPackId;

  /// @brief Field _shouldOwnLevelPackId, offset 0x18, size 0x8
  __declspec(property(get = __get__shouldOwnLevelPackId, put = __set__shouldOwnLevelPackId))::StringW _shouldOwnLevelPackId;

  /// @brief Field _redirectedBundleId, offset 0x20, size 0x4
  __declspec(property(get = __get__redirectedBundleId, put = __set__redirectedBundleId)) uint32_t _redirectedBundleId;

  /// @brief Field _validUntilDate, offset 0x28, size 0x8
  __declspec(property(get = __get__validUntilDate, put = __set__validUntilDate))::StringW _validUntilDate;

  __declspec(property(get = get_targetLevelPackId))::StringW targetLevelPackId;

  __declspec(property(get = get_shouldOwnLevelPackId))::StringW shouldOwnLevelPackId;

  __declspec(property(get = get_redirectedBundleId)) uint32_t redirectedBundleId;

  __declspec(property(get = get_validUntilDate))::StringW validUntilDate;

  constexpr ::StringW& __get__targetLevelPackId();

  constexpr ::StringW const& __get__targetLevelPackId() const;

  constexpr void __set__targetLevelPackId(::StringW value);

  constexpr ::StringW& __get__shouldOwnLevelPackId();

  constexpr ::StringW const& __get__shouldOwnLevelPackId() const;

  constexpr void __set__shouldOwnLevelPackId(::StringW value);

  constexpr uint32_t& __get__redirectedBundleId();

  constexpr uint32_t const& __get__redirectedBundleId() const;

  constexpr void __set__redirectedBundleId(uint32_t value);

  constexpr ::StringW& __get__validUntilDate();

  constexpr ::StringW const& __get__validUntilDate() const;

  constexpr void __set__validUntilDate(::StringW value);

  /// @brief Method get_targetLevelPackId addr 0x2368094 size 0x8 virtual false final false
  inline ::StringW get_targetLevelPackId();

  /// @brief Method get_shouldOwnLevelPackId addr 0x236809c size 0x8 virtual false final false
  inline ::StringW get_shouldOwnLevelPackId();

  /// @brief Method get_redirectedBundleId addr 0x23680a4 size 0x8 virtual false final false
  inline uint32_t get_redirectedBundleId();

  /// @brief Method get_validUntilDate addr 0x23680ac size 0x8 virtual false final false
  inline ::StringW get_validUntilDate();

  static inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData* New_ctor();

  /// @brief Method .ctor addr 0x23680b4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SteamLevelProductsModelSO__LevelPackRedirectionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SteamLevelProductsModelSO__LevelPackRedirectionData(__SteamLevelProductsModelSO__LevelPackRedirectionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SteamLevelProductsModelSO__LevelPackRedirectionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SteamLevelProductsModelSO__LevelPackRedirectionData(__SteamLevelProductsModelSO__LevelPackRedirectionData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SteamLevelProductsModelSO__LevelPackRedirectionData();

public:
  /// @brief Field _targetLevelPackId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____targetLevelPackId;

  /// @brief Field _shouldOwnLevelPackId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____shouldOwnLevelPackId;

  /// @brief Field _redirectedBundleId, offset: 0x20, size: 0x4, def value: None
  uint32_t ____redirectedBundleId;

  /// @brief Field _validUntilDate, offset: 0x28, size: 0x8, def value: None
  ::StringW ____validUntilDate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SteamLevelProductsModelSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4549))
// CS Name: ::SteamLevelProductsModelSO*
class CORDL_TYPE SteamLevelProductsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LevelPackRedirectionData = ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData;

  using LevelPackProductData = ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData;

  using LevelProductData = ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData;

  /// @brief Field _levelPackProductsData, offset 0x18, size 0x8
  __declspec(property(get = __get__levelPackProductsData,
                      put = __set__levelPackProductsData))::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*,
                                                                   ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> _levelPackProductsData;

  /// @brief Field _levelPackRedirectionData, offset 0x20, size 0x8
  __declspec(property(get = __get__levelPackRedirectionData,
                      put = __set__levelPackRedirectionData))::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*,
                                                                      ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*> _levelPackRedirectionData;

  __declspec(property(get = get_levelPackProductsData))::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*,
                                                                ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> levelPackProductsData;

  __declspec(property(get = get_levelPackRedirectionData))::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*,
                                                                   ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*> levelPackRedirectionData;

  constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*>&
  __get__levelPackProductsData();

  constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> const&
  __get__levelPackProductsData() const;

  constexpr void
  __set__levelPackProductsData(::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*>&
  __get__levelPackRedirectionData();

  constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*> const&
  __get__levelPackRedirectionData() const;

  constexpr void __set__levelPackRedirectionData(
      ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*> value);

  /// @brief Method get_levelPackProductsData addr 0x2368044 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> get_levelPackProductsData();

  /// @brief Method get_levelPackRedirectionData addr 0x236804c size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*>
  get_levelPackRedirectionData();

  static inline ::GlobalNamespace::SteamLevelProductsModelSO* New_ctor();

  /// @brief Method .ctor addr 0x2368054 size 0x8 virtual false final false
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

  /// @brief Field _levelPackRedirectionData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*> ____levelPackRedirectionData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamLevelProductsModelSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SteamLevelProductsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamLevelProductsModelSO*, "", "SteamLevelProductsModelSO");
NEED_NO_BOX(::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, "", "SteamLevelProductsModelSO/LevelPackProductData");
NEED_NO_BOX(::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*, "", "SteamLevelProductsModelSO/LevelPackRedirectionData");
NEED_NO_BOX(::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, "", "SteamLevelProductsModelSO/LevelProductData");
