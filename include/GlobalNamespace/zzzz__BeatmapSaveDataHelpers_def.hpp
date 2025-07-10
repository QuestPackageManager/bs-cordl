#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapSaveDataHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapSaveDataHelpers)
namespace GlobalNamespace {
class BeatmapSaveDataHelpers_VersionSerializedData;
}
namespace GlobalNamespace {
class BeatmapSaveDataHelpers___c__DisplayClass6_0;
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
class BeatmapSaveDataHelpers_VersionSerializedData;
}
namespace GlobalNamespace {
class BeatmapSaveDataHelpers___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapSaveDataHelpers);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapSaveDataHelpers/VersionSerializedData
class CORDL_TYPE BeatmapSaveDataHelpers_VersionSerializedData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) ::StringW _version;

  __declspec(property(get = get_v)) ::StringW v;

  /// @brief Field version, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::StringW version;

  static inline ::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__version() const;

  constexpr ::StringW& __cordl_internal_get__version();

  constexpr ::StringW const& __cordl_internal_get_version() const;

  constexpr ::StringW& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__version(::StringW value);

  constexpr void __cordl_internal_set_version(::StringW value);

  /// @brief Method .ctor, addr 0x26ff3f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_v, addr 0x26ff1a0, size 0x30, virtual false, abstract: false, final false
  inline ::StringW get_v();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapSaveDataHelpers_VersionSerializedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataHelpers_VersionSerializedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapSaveDataHelpers_VersionSerializedData(BeatmapSaveDataHelpers_VersionSerializedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataHelpers_VersionSerializedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapSaveDataHelpers_VersionSerializedData(BeatmapSaveDataHelpers_VersionSerializedData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13269 };

  /// @brief Field _version, offset: 0x10, size: 0x8, def value: None
  ::StringW ____version;

  /// @brief Field version, offset: 0x18, size: 0x8, def value: None
  ::StringW ___version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData, ____version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData, ___version) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapSaveDataHelpers/<>c__DisplayClass6_0
class CORDL_TYPE BeatmapSaveDataHelpers___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::StringW data;

  static inline ::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0* New_ctor();

  /// @brief Method <GetVersionAsync>b__0, addr 0x26ff400, size 0x58, virtual false, abstract: false, final false
  inline ::System::Version* _GetVersionAsync_b__0();

  constexpr ::StringW const& __cordl_internal_get_data() const;

  constexpr ::StringW& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::StringW value);

  /// @brief Method .ctor, addr 0x26ff2bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapSaveDataHelpers___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataHelpers___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapSaveDataHelpers___c__DisplayClass6_0(BeatmapSaveDataHelpers___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataHelpers___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapSaveDataHelpers___c__DisplayClass6_0(BeatmapSaveDataHelpers___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13270 };

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::StringW ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0, ___data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapSaveDataHelpers
class CORDL_TYPE BeatmapSaveDataHelpers : public ::System::Object {
public:
  // Declarations
  using VersionSerializedData = ::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData;

  using __c__DisplayClass6_0 = ::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0;

  /// @brief Field noVersion, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_noVersion, put = setStaticF_noVersion)) ::System::Version* noVersion;

  /// @brief Field version2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_version2, put = setStaticF_version2)) ::System::Version* version2;

  /// @brief Field version3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_version3, put = setStaticF_version3)) ::System::Version* version3;

  /// @brief Field version4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_version4, put = setStaticF_version4)) ::System::Version* version4;

  /// @brief Method GetVersion, addr 0x26feda8, size 0x21c, virtual false, abstract: false, final false
  static inline ::System::Version* GetVersion(::StringW data);

  /// @brief Method GetVersionAsync, addr 0x26ff1d0, size 0xec, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13271 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapSaveDataHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapSaveDataHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapSaveDataHelpers*, "", "BeatmapSaveDataHelpers");
NEED_NO_BOX(::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData*, "", "BeatmapSaveDataHelpers/VersionSerializedData");
NEED_NO_BOX(::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0*, "", "BeatmapSaveDataHelpers/<>c__DisplayClass6_0");
