#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapSaveDataHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapSaveDataHelpers)
namespace GlobalNamespace {
class __BeatmapSaveDataHelpers__VersionSerializedData;
}
namespace GlobalNamespace {
class __BeatmapSaveDataHelpers____c__DisplayClass6_0;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Version;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapSaveDataHelpers;
}
namespace GlobalNamespace {
class __BeatmapSaveDataHelpers__VersionSerializedData;
}
namespace GlobalNamespace {
class __BeatmapSaveDataHelpers____c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapSaveDataHelpers);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapSaveDataHelpers____c__DisplayClass6_0);
// Type: ::VersionSerializedData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapSaveDataHelpers::VersionSerializedData*
class CORDL_TYPE __BeatmapSaveDataHelpers__VersionSerializedData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version))::StringW _version;

  __declspec(property(get = get_v))::StringW v;

  /// @brief Field version, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version))::StringW version;

  static inline ::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__version() const;

  constexpr ::StringW& __cordl_internal_get__version();

  constexpr ::StringW const& __cordl_internal_get_version() const;

  constexpr ::StringW& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__version(::StringW value);

  constexpr void __cordl_internal_set_version(::StringW value);

  /// @brief Method .ctor, addr 0x1501930, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_v, addr 0x15016d0, size 0x30, virtual false, abstract: false, final false
  inline ::StringW get_v();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveDataHelpers__VersionSerializedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveDataHelpers__VersionSerializedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveDataHelpers__VersionSerializedData(__BeatmapSaveDataHelpers__VersionSerializedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveDataHelpers__VersionSerializedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveDataHelpers__VersionSerializedData(__BeatmapSaveDataHelpers__VersionSerializedData const&) = delete;

  /// @brief Field _version, offset: 0x10, size: 0x8, def value: None
  ::StringW ____version;

  /// @brief Field version, offset: 0x18, size: 0x8, def value: None
  ::StringW ___version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData, ____version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData, ___version) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapSaveDataHelpers::<>c__DisplayClass6_0*
class CORDL_TYPE __BeatmapSaveDataHelpers____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::StringW data;

  static inline ::GlobalNamespace::__BeatmapSaveDataHelpers____c__DisplayClass6_0* New_ctor();

  /// @brief Method <GetVersionAsync>b__0, addr 0x1501938, size 0x58, virtual false, abstract: false, final false
  inline ::System::Version* _GetVersionAsync_b__0();

  constexpr ::StringW const& __cordl_internal_get_data() const;

  constexpr ::StringW& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::StringW value);

  /// @brief Method .ctor, addr 0x15017f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveDataHelpers____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveDataHelpers____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveDataHelpers____c__DisplayClass6_0(__BeatmapSaveDataHelpers____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveDataHelpers____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveDataHelpers____c__DisplayClass6_0(__BeatmapSaveDataHelpers____c__DisplayClass6_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::StringW ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapSaveDataHelpers____c__DisplayClass6_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapSaveDataHelpers____c__DisplayClass6_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapSaveDataHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapSaveDataHelpers*
class CORDL_TYPE BeatmapSaveDataHelpers : public ::System::Object {
public:
  // Declarations
  using VersionSerializedData = ::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData;

  using __c__DisplayClass6_0 = ::GlobalNamespace::__BeatmapSaveDataHelpers____c__DisplayClass6_0;

  /// @brief Field noVersion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_noVersion, put = setStaticF_noVersion))::System::Version* noVersion;

  /// @brief Field version2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version2, put = setStaticF_version2))::System::Version* version2;

  /// @brief Field version3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version3, put = setStaticF_version3))::System::Version* version3;

  /// @brief Field version4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version4, put = setStaticF_version4))::System::Version* version4;

  /// @brief Method GetVersion, addr 0x15012cc, size 0x228, virtual false, abstract: false, final false
  static inline ::System::Version* GetVersion(::StringW data);

  /// @brief Method GetVersionAsync, addr 0x1501700, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::System::Version*>* GetVersionAsync(::StringW data);

  static inline ::System::Version* getStaticF_noVersion();

  static inline ::System::Version* getStaticF_version2();

  static inline ::System::Version* getStaticF_version3();

  static inline ::System::Version* getStaticF_version4();

  static inline void setStaticF_noVersion(::System::Version* value);

  static inline void setStaticF_version2(::System::Version* value);

  static inline void setStaticF_version3(::System::Version* value);

  static inline void setStaticF_version4(::System::Version* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapSaveDataHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapSaveDataHelpers(BeatmapSaveDataHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapSaveDataHelpers(BeatmapSaveDataHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapSaveDataHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapSaveDataHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapSaveDataHelpers*, "", "BeatmapSaveDataHelpers");
NEED_NO_BOX(::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData*, "", "BeatmapSaveDataHelpers/VersionSerializedData");
NEED_NO_BOX(::GlobalNamespace::__BeatmapSaveDataHelpers____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapSaveDataHelpers____c__DisplayClass6_0*, "", "BeatmapSaveDataHelpers/<>c__DisplayClass6_0");
