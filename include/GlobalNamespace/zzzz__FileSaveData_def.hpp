#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileSaveData)
namespace GlobalNamespace {
class ISaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class FileSaveData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FileSaveData);
// Type: ::FileSaveData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14385))
// CS Name: ::FileSaveData*
class CORDL_TYPE FileSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::ISaveData"
  constexpr operator ::GlobalNamespace::ISaveData*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ISaveData"
  constexpr ::GlobalNamespace::ISaveData* i___GlobalNamespace__ISaveData() noexcept;

  /// @brief Method Save, addr 0x20f498c, size 0x10, virtual true, abstract: false, final true
  inline void Save(::StringW key, ::StringW value);

  /// @brief Method Load, addr 0x20f499c, size 0x80, virtual true, abstract: false, final true
  inline bool Load(::StringW key, ByRef<::StringW> value);

  /// @brief Method Save, addr 0x20f4a1c, size 0x78, virtual true, abstract: false, final true
  inline void Save(::StringW key, ::StringW value, ::StringW tempKey, ::StringW backupKey);

  /// @brief Method Load, addr 0x20f4a94, size 0x168, virtual true, abstract: false, final true
  inline bool Load(::StringW key, ByRef<::StringW> value, ::StringW backupKey);

  /// @brief Method Delete, addr 0x20f4bfc, size 0xc, virtual true, abstract: false, final true
  inline void Delete(::StringW key);

  /// @brief Method HasKey, addr 0x20f4c08, size 0xc, virtual true, abstract: false, final true
  inline bool HasKey(::StringW key);

  static inline ::GlobalNamespace::FileSaveData* New_ctor();

  /// @brief Method .ctor, addr 0x20f4c14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FileSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSaveData(FileSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSaveData(FileSaveData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSaveData();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileSaveData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileSaveData*, "", "FileSaveData");
