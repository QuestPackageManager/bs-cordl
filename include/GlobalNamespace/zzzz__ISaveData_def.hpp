#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ISaveData)
// Forward declare root types
namespace GlobalNamespace {
class ISaveData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ISaveData);
// Type: ::ISaveData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14386))
// CS Name: ::ISaveData*
class CORDL_TYPE ISaveData {
public:
  // Declarations
  /// @brief Method Save, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Save(::StringW key, ::StringW value);

  /// @brief Method Load, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Load(::StringW key, ByRef<::StringW> value);

  /// @brief Method Save, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Save(::StringW key, ::StringW value, ::StringW tempKey, ::StringW backupKey);

  /// @brief Method Load, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Load(::StringW key, ByRef<::StringW> value, ::StringW backupKey);

  /// @brief Method Delete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Delete(::StringW key);

  /// @brief Method HasKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool HasKey(::StringW key);

  // Ctor Parameters [CppParam { name: "", ty: "ISaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISaveData(ISaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISaveData(ISaveData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ISaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISaveData*, "", "ISaveData");
