#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapSaveDataHelpers)
namespace GlobalNamespace {
class __BeatmapSaveDataHelpers__VersionSerializedData;
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
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapSaveDataHelpers);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData);
// Type: ::VersionSerializedData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14774))
// CS Name: ::BeatmapSaveDataHelpers::VersionSerializedData*
class CORDL_TYPE __BeatmapSaveDataHelpers__VersionSerializedData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version))::StringW _version;

  /// @brief Field version, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version))::StringW version;

  __declspec(property(get = get_v))::StringW v;

  constexpr ::StringW& __cordl_internal_get__version();

  constexpr ::StringW const& __cordl_internal_get__version() const;

  constexpr void __cordl_internal_set__version(::StringW value);

  constexpr ::StringW& __cordl_internal_get_version();

  constexpr ::StringW const& __cordl_internal_get_version() const;

  constexpr void __cordl_internal_set_version(::StringW value);

  /// @brief Method get_v, addr 0xe05124, size 0x30, virtual false, abstract: false, final false
  inline ::StringW get_v();

  static inline ::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData* New_ctor();

  /// @brief Method .ctor, addr 0xe05154, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveDataHelpers__VersionSerializedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapSaveDataHelpers__VersionSerializedData(__BeatmapSaveDataHelpers__VersionSerializedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapSaveDataHelpers__VersionSerializedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapSaveDataHelpers__VersionSerializedData(__BeatmapSaveDataHelpers__VersionSerializedData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapSaveDataHelpers__VersionSerializedData();

public:
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
// Type: ::BeatmapSaveDataHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14775))
// CS Name: ::BeatmapSaveDataHelpers*
class CORDL_TYPE BeatmapSaveDataHelpers : public ::System::Object {
public:
  // Declarations
  using VersionSerializedData = ::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData;

  /// @brief Method GetVersion, addr 0xe05078, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Version* GetVersion(::StringW data);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapSaveDataHelpers(BeatmapSaveDataHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapSaveDataHelpers(BeatmapSaveDataHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapSaveDataHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapSaveDataHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapSaveDataHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapSaveDataHelpers*, "", "BeatmapSaveDataHelpers");
NEED_NO_BOX(::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData*, "", "BeatmapSaveDataHelpers/VersionSerializedData");
