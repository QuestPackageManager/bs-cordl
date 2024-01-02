#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NoSaveData)
namespace GlobalNamespace {
class ISaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class NoSaveData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoSaveData);
// Type: ::NoSaveData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14387))
// CS Name: ::NoSaveData*
class CORDL_TYPE NoSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::ISaveData"
  constexpr operator ::GlobalNamespace::ISaveData*() noexcept;

  /// @brief Method Save, addr 0x20f4c1c, size 0x4, virtual true, abstract: false, final true
  inline void Save(::StringW key, ::StringW value);

  /// @brief Method Load, addr 0x20f4c20, size 0xc, virtual true, abstract: false, final true
  inline bool Load(::StringW key, ByRef<::StringW> value);

  /// @brief Method Save, addr 0x20f4c2c, size 0x4, virtual true, abstract: false, final true
  inline void Save(::StringW key, ::StringW value, ::StringW tempKey, ::StringW backupKey);

  /// @brief Method Load, addr 0x20f4c30, size 0xc, virtual true, abstract: false, final true
  inline bool Load(::StringW key, ByRef<::StringW> value, ::StringW backupKey);

  /// @brief Method Delete, addr 0x20f4c3c, size 0x4, virtual true, abstract: false, final true
  inline void Delete(::StringW key);

  /// @brief Method HasKey, addr 0x20f4c40, size 0x8, virtual true, abstract: false, final true
  inline bool HasKey(::StringW key);

  static inline ::GlobalNamespace::NoSaveData* New_ctor();

  /// @brief Method .ctor, addr 0x20f4c48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoSaveData(NoSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoSaveData(NoSaveData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoSaveData();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoSaveData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoSaveData*, "", "NoSaveData");
