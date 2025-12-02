#pragma once
// IWYU pragma private; include "GlobalNamespace/QuickPlaySetupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QuickPlaySetupData)
namespace GlobalNamespace {
class QuickPlaySetupData_QuickPlaySongPacksOverride;
}
namespace GlobalNamespace {
class QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName;
}
namespace GlobalNamespace {
class QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack;
}
namespace GlobalNamespace {
class QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace GlobalNamespace {
class QuickPlaySetupData_QuickPlaySongPacksOverride;
}
namespace GlobalNamespace {
class QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack;
}
namespace GlobalNamespace {
class QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName;
}
namespace GlobalNamespace {
class QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuickPlaySetupData);
MARK_REF_PTR_T(::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride);
MARK_REF_PTR_T(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack);
MARK_REF_PTR_T(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName);
MARK_REF_PTR_T(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName
class CORDL_TYPE QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName : public ::System::Object {
public:
  // Declarations
  /// @brief Field language, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_language, put = __cordl_internal_set_language)) ::StringW language;

  /// @brief Field packName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_packName, put = __cordl_internal_set_packName)) ::StringW packName;

  static inline ::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_language() const;

  constexpr ::StringW& __cordl_internal_get_language();

  constexpr ::StringW const& __cordl_internal_get_packName() const;

  constexpr ::StringW& __cordl_internal_get_packName();

  constexpr void __cordl_internal_set_language(::StringW value);

  constexpr void __cordl_internal_set_packName(::StringW value);

  /// @brief Method .ctor, addr 0x360990c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName(QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName(QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15036 };

  /// @brief Field language, offset: 0x10, size: 0x8, def value: None
  ::StringW ___language;

  /// @brief Field packName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___packName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName, ___language) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName, ___packName) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack
class CORDL_TYPE QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack : public ::System::Object {
public:
  // Declarations
  /// @brief Field localizedNames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_localizedNames,
                      put = __cordl_internal_set_localizedNames)) ::ArrayW<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*,
                                                                           ::Array<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*>*>
      localizedNames;

  /// @brief Field order, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_order, put = __cordl_internal_set_order)) int32_t order;

  /// @brief Field packIds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_packIds, put = __cordl_internal_set_packIds)) ::System::Collections::Generic::List_1<::StringW>* packIds;

  /// @brief Field serializedName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_serializedName, put = __cordl_internal_set_serializedName)) ::StringW serializedName;

  static inline ::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*,
                     ::Array<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*>*> const&
  __cordl_internal_get_localizedNames() const;

  constexpr ::ArrayW<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*,
                     ::Array<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*>*>&
  __cordl_internal_get_localizedNames();

  constexpr int32_t const& __cordl_internal_get_order() const;

  constexpr int32_t& __cordl_internal_get_order();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_packIds() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_packIds();

  constexpr ::StringW const& __cordl_internal_get_serializedName() const;

  constexpr ::StringW& __cordl_internal_get_serializedName();

  constexpr void __cordl_internal_set_localizedNames(::ArrayW<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*,
                                                              ::Array<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*>*>
                                                         value);

  constexpr void __cordl_internal_set_order(int32_t value);

  constexpr void __cordl_internal_set_packIds(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_serializedName(::StringW value);

  /// @brief Method .ctor, addr 0x3609910, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack(QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack(QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15037 };

  /// @brief Field serializedName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___serializedName;

  /// @brief Field order, offset: 0x18, size: 0x4, def value: None
  int32_t ___order;

  /// @brief Field localizedNames, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*,
           ::Array<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*>*>
      ___localizedNames;

  /// @brief Field packIds, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___packIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack, ___serializedName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack, ___order) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack, ___localizedNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack, ___packIds) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: QuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack
class CORDL_TYPE QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack : public ::System::Object {
public:
  // Declarations
  /// @brief Field order, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_order, put = __cordl_internal_set_order)) int32_t order;

  /// @brief Field packId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_packId, put = __cordl_internal_set_packId)) ::StringW packId;

  static inline ::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack* New_ctor();

  constexpr int32_t const& __cordl_internal_get_order() const;

  constexpr int32_t& __cordl_internal_get_order();

  constexpr ::StringW const& __cordl_internal_get_packId() const;

  constexpr ::StringW& __cordl_internal_get_packId();

  constexpr void __cordl_internal_set_order(int32_t value);

  constexpr void __cordl_internal_set_packId(::StringW value);

  /// @brief Method .ctor, addr 0x3609984, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack(QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack(QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15038 };

  /// @brief Field order, offset: 0x10, size: 0x4, def value: None
  int32_t ___order;

  /// @brief Field packId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___packId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack, ___order) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack, ___packId) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: QuickPlaySetupData/QuickPlaySongPacksOverride
class CORDL_TYPE QuickPlaySetupData_QuickPlaySongPacksOverride : public ::System::Object {
public:
  // Declarations
  using LocalizedCustomPack = ::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack;

  using LocalizedCustomPackName = ::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName;

  using PredefinedPack = ::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack;

  /// @brief Field localizedCustomPacks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_localizedCustomPacks,
                      put = __cordl_internal_set_localizedCustomPacks)) ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*>*
      localizedCustomPacks;

  /// @brief Field predefinedPackIds, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_predefinedPackIds,
      put = __cordl_internal_set_predefinedPackIds)) ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*>* predefinedPackIds;

  static inline ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*>* const& __cordl_internal_get_localizedCustomPacks() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*>*& __cordl_internal_get_localizedCustomPacks();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*>* const& __cordl_internal_get_predefinedPackIds() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*>*& __cordl_internal_get_predefinedPackIds();

  constexpr void __cordl_internal_set_localizedCustomPacks(::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*>* value);

  constexpr void __cordl_internal_set_predefinedPackIds(::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*>* value);

  /// @brief Method .ctor, addr 0x3609850, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuickPlaySetupData_QuickPlaySongPacksOverride();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupData_QuickPlaySongPacksOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuickPlaySetupData_QuickPlaySongPacksOverride(QuickPlaySetupData_QuickPlaySongPacksOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupData_QuickPlaySongPacksOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuickPlaySetupData_QuickPlaySongPacksOverride(QuickPlaySetupData_QuickPlaySongPacksOverride const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15039 };

  /// @brief Field predefinedPackIds, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*>* ___predefinedPackIds;

  /// @brief Field localizedCustomPacks, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*>* ___localizedCustomPacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride, ___predefinedPackIds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride, ___localizedCustomPacks) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: QuickPlaySetupData
class CORDL_TYPE QuickPlaySetupData : public ::System::Object {
public:
  // Declarations
  using QuickPlaySongPacksOverride = ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride;

  __declspec(property(get = get_hasOverride)) bool hasOverride;

  /// @brief Field quickPlayAvailablePacksOverride, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_quickPlayAvailablePacksOverride,
                      put = __cordl_internal_set_quickPlayAvailablePacksOverride)) ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride* quickPlayAvailablePacksOverride;

  static inline ::GlobalNamespace::QuickPlaySetupData* New_ctor();

  constexpr ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride* const& __cordl_internal_get_quickPlayAvailablePacksOverride() const;

  constexpr ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride*& __cordl_internal_get_quickPlayAvailablePacksOverride();

  constexpr void __cordl_internal_set_quickPlayAvailablePacksOverride(::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride* value);

  /// @brief Method .ctor, addr 0x360984c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hasOverride, addr 0x36097b4, size 0x98, virtual false, abstract: false, final false
  inline bool get_hasOverride();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuickPlaySetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuickPlaySetupData(QuickPlaySetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuickPlaySetupData(QuickPlaySetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15040 };

  /// @brief Field quickPlayAvailablePacksOverride, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride* ___quickPlayAvailablePacksOverride;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuickPlaySetupData, ___quickPlayAvailablePacksOverride) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuickPlaySetupData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuickPlaySetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySetupData*, "", "QuickPlaySetupData");
NEED_NO_BOX(::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride*, "", "QuickPlaySetupData/QuickPlaySongPacksOverride");
NEED_NO_BOX(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*, "", "QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack");
NEED_NO_BOX(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*, "", "QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName");
NEED_NO_BOX(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*, "", "QuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack");
