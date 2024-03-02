#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QuickPlaySetupData)
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuickPlaySetupData);
MARK_REF_PTR_T(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride);
MARK_REF_PTR_T(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack);
MARK_REF_PTR_T(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName);
MARK_REF_PTR_T(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack);
// Type: ::LocalizedCustomPackName
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName*
class CORDL_TYPE __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName : public ::System::Object {
public:
  // Declarations
  /// @brief Field language, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_language, put = __cordl_internal_set_language))::StringW language;

  /// @brief Field packName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_packName, put = __cordl_internal_set_packName))::StringW packName;

  static inline ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_language() const;

  constexpr ::StringW& __cordl_internal_get_language();

  constexpr ::StringW const& __cordl_internal_get_packName() const;

  constexpr ::StringW& __cordl_internal_get_packName();

  constexpr void __cordl_internal_set_language(::StringW value);

  constexpr void __cordl_internal_set_packName(::StringW value);

  /// @brief Method .ctor, addr 0x12d7260, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName(__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName(__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName const&) = delete;

  /// @brief Field language, offset: 0x10, size: 0x8, def value: None
  ::StringW ___language;

  /// @brief Field packName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___packName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName, ___language) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName, ___packName) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LocalizedCustomPack
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*
class CORDL_TYPE __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack : public ::System::Object {
public:
  // Declarations
  /// @brief Field localizedNames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_localizedNames,
                      put = __cordl_internal_set_localizedNames))::ArrayW<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*,
                                                                          ::Array<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*>*> localizedNames;

  /// @brief Field order, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_order, put = __cordl_internal_set_order)) int32_t order;

  /// @brief Field packIds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_packIds, put = __cordl_internal_set_packIds))::System::Collections::Generic::List_1<::StringW>* packIds;

  /// @brief Field serializedName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_serializedName, put = __cordl_internal_set_serializedName))::StringW serializedName;

  static inline ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*,
                     ::Array<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*>*> const&
  __cordl_internal_get_localizedNames() const;

  constexpr ::ArrayW<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*,
                     ::Array<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*>*>&
  __cordl_internal_get_localizedNames();

  constexpr int32_t const& __cordl_internal_get_order() const;

  constexpr int32_t& __cordl_internal_get_order();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_packIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_packIds() const;

  constexpr ::StringW const& __cordl_internal_get_serializedName() const;

  constexpr ::StringW& __cordl_internal_get_serializedName();

  constexpr void __cordl_internal_set_localizedNames(::ArrayW<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*,
                                                              ::Array<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*>*>
                                                         value);

  constexpr void __cordl_internal_set_order(int32_t value);

  constexpr void __cordl_internal_set_packIds(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_serializedName(::StringW value);

  /// @brief Method .ctor, addr 0x12d7268, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack(__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack(__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack const&) = delete;

  /// @brief Field serializedName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___serializedName;

  /// @brief Field order, offset: 0x18, size: 0x4, def value: None
  int32_t ___order;

  /// @brief Field localizedNames, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*,
           ::Array<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*>*>
      ___localizedNames;

  /// @brief Field packIds, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___packIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack, ___serializedName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack, ___order) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack, ___localizedNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack, ___packIds) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PredefinedPack
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::QuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack*
class CORDL_TYPE __QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack : public ::System::Object {
public:
  // Declarations
  /// @brief Field order, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_order, put = __cordl_internal_set_order)) int32_t order;

  /// @brief Field packId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_packId, put = __cordl_internal_set_packId))::StringW packId;

  static inline ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack* New_ctor();

  constexpr int32_t const& __cordl_internal_get_order() const;

  constexpr int32_t& __cordl_internal_get_order();

  constexpr ::StringW const& __cordl_internal_get_packId() const;

  constexpr ::StringW& __cordl_internal_get_packId();

  constexpr void __cordl_internal_set_order(int32_t value);

  constexpr void __cordl_internal_set_packId(::StringW value);

  /// @brief Method .ctor, addr 0x12d72e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack(__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack(__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack const&) = delete;

  /// @brief Field order, offset: 0x10, size: 0x4, def value: None
  int32_t ___order;

  /// @brief Field packId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___packId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack, ___order) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack, ___packId) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::QuickPlaySongPacksOverride
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::QuickPlaySetupData::QuickPlaySongPacksOverride*
class CORDL_TYPE __QuickPlaySetupData__QuickPlaySongPacksOverride : public ::System::Object {
public:
  // Declarations
  using LocalizedCustomPack = ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack;

  using LocalizedCustomPackName = ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName;

  using PredefinedPack = ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack;

  /// @brief Field localizedCustomPacks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_localizedCustomPacks, put = __cordl_internal_set_localizedCustomPacks))::System::Collections::Generic::List_1<
      ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*>* localizedCustomPacks;

  /// @brief Field predefinedPackIds, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_predefinedPackIds,
      put = __cordl_internal_set_predefinedPackIds))::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack*>* predefinedPackIds;

  static inline ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*>*& __cordl_internal_get_localizedCustomPacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*>*> const&
  __cordl_internal_get_localizedCustomPacks() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack*>*& __cordl_internal_get_predefinedPackIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack*>*> const&
  __cordl_internal_get_predefinedPackIds() const;

  constexpr void __cordl_internal_set_localizedCustomPacks(::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*>* value);

  constexpr void __cordl_internal_set_predefinedPackIds(::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack*>* value);

  /// @brief Method .ctor, addr 0x12d71a0, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuickPlaySetupData__QuickPlaySongPacksOverride();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupData__QuickPlaySongPacksOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __QuickPlaySetupData__QuickPlaySongPacksOverride(__QuickPlaySetupData__QuickPlaySongPacksOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupData__QuickPlaySongPacksOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __QuickPlaySetupData__QuickPlaySongPacksOverride(__QuickPlaySetupData__QuickPlaySongPacksOverride const&) = delete;

  /// @brief Field predefinedPackIds, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack*>* ___predefinedPackIds;

  /// @brief Field localizedCustomPacks, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*>* ___localizedCustomPacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride, ___predefinedPackIds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride, ___localizedCustomPacks) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::QuickPlaySetupData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::QuickPlaySetupData*
class CORDL_TYPE QuickPlaySetupData : public ::System::Object {
public:
  // Declarations
  using QuickPlaySongPacksOverride = ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride;

  __declspec(property(get = get_hasOverride)) bool hasOverride;

  /// @brief Field quickPlayAvailablePacksOverride, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_quickPlayAvailablePacksOverride,
                      put = __cordl_internal_set_quickPlayAvailablePacksOverride))::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride* quickPlayAvailablePacksOverride;

  static inline ::GlobalNamespace::QuickPlaySetupData* New_ctor();

  constexpr ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride*& __cordl_internal_get_quickPlayAvailablePacksOverride();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride*> const& __cordl_internal_get_quickPlayAvailablePacksOverride() const;

  constexpr void __cordl_internal_set_quickPlayAvailablePacksOverride(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride* value);

  /// @brief Method .ctor, addr 0x12d7198, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hasOverride, addr 0x12d7110, size 0x88, virtual false, abstract: false, final false
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

  /// @brief Field quickPlayAvailablePacksOverride, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride* ___quickPlayAvailablePacksOverride;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuickPlaySetupData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySetupData, ___quickPlayAvailablePacksOverride) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuickPlaySetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySetupData*, "", "QuickPlaySetupData");
NEED_NO_BOX(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride*, "", "QuickPlaySetupData/QuickPlaySongPacksOverride");
NEED_NO_BOX(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*, "", "QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack");
NEED_NO_BOX(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*, "", "QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName");
NEED_NO_BOX(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack*, "", "QuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack");
