#pragma once
// IWYU pragma private; include "BGLib/SaveDataCore/VersionableSaveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VersionableSaveData)
namespace BGLib::SaveDataCore {
class ISerializableSaveData;
}
// Forward declare root types
namespace BGLib::SaveDataCore {
class VersionableSaveData;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::SaveDataCore::VersionableSaveData);
// Type: BGLib.SaveDataCore::VersionableSaveData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::SaveDataCore {
// Is value type: false
// CS Name: ::BGLib.SaveDataCore::VersionableSaveData*
class CORDL_TYPE VersionableSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _isDirty, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isDirty, put = __cordl_internal_set__isDirty)) bool _isDirty;

  __declspec(property(get = get_isDirty, put = set_isDirty)) bool isDirty;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version))::StringW version;

  /// @brief Convert operator to "::BGLib::SaveDataCore::ISerializableSaveData"
  constexpr operator ::BGLib::SaveDataCore::ISerializableSaveData*() noexcept;

  static inline ::BGLib::SaveDataCore::VersionableSaveData* New_ctor();

  constexpr bool const& __cordl_internal_get__isDirty() const;

  constexpr bool& __cordl_internal_get__isDirty();

  constexpr ::StringW const& __cordl_internal_get_version() const;

  constexpr ::StringW& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__isDirty(bool value);

  constexpr void __cordl_internal_set_version(::StringW value);

  /// @brief Method .ctor, addr 0x10952b0, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isDirty, addr 0x1095298, size 0xc, virtual true, abstract: false, final false
  inline bool get_isDirty();

  /// @brief Convert to "::BGLib::SaveDataCore::ISerializableSaveData"
  constexpr ::BGLib::SaveDataCore::ISerializableSaveData* i___BGLib__SaveDataCore__ISerializableSaveData() noexcept;

  /// @brief Method set_isDirty, addr 0x10952a4, size 0xc, virtual true, abstract: false, final false
  inline void set_isDirty(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VersionableSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VersionableSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VersionableSaveData(VersionableSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VersionableSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VersionableSaveData(VersionableSaveData const&) = delete;

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::StringW ___version;

  /// @brief Field _isDirty, offset: 0x18, size: 0x1, def value: None
  bool ____isDirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::SaveDataCore::VersionableSaveData, 0x20>, "Size mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::VersionableSaveData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::VersionableSaveData, ____isDirty) == 0x18, "Offset mismatch!");

} // namespace BGLib::SaveDataCore
NEED_NO_BOX(::BGLib::SaveDataCore::VersionableSaveData);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::SaveDataCore::VersionableSaveData*, "BGLib.SaveDataCore", "VersionableSaveData");
