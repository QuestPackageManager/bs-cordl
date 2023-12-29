#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VersionSaveData)
// Forward declare root types
namespace GlobalNamespace {
class VersionSaveData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VersionSaveData);
// Type: ::VersionSaveData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4806))
// CS Name: ::VersionSaveData*
class CORDL_TYPE VersionSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::StringW version;

  constexpr ::StringW& __get_version();

  constexpr ::StringW const& __get_version() const;

  constexpr void __set_version(::StringW value);

  static inline ::GlobalNamespace::VersionSaveData* New_ctor();

  /// @brief Method .ctor addr 0x223c1e8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VersionSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VersionSaveData(VersionSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VersionSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VersionSaveData(VersionSaveData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VersionSaveData();

public:
  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::StringW ___version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VersionSaveData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VersionSaveData, ___version) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VersionSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VersionSaveData*, "", "VersionSaveData");
