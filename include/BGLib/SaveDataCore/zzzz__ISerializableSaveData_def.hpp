#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISerializableSaveData)
// Forward declare root types
namespace BGLib::SaveDataCore {
class ISerializableSaveData;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::SaveDataCore::ISerializableSaveData);
// Type: BGLib.SaveDataCore::ISerializableSaveData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGLib::SaveDataCore {
// Is value type: false
// CS Name: ::BGLib.SaveDataCore::ISerializableSaveData*
class CORDL_TYPE ISerializableSaveData {
public:
  // Declarations
  __declspec(property(get = get_isDirty, put = set_isDirty)) bool isDirty;

  /// @brief Method get_isDirty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isDirty();

  /// @brief Method set_isDirty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_isDirty(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "ISerializableSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISerializableSaveData(ISerializableSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISerializableSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISerializableSaveData(ISerializableSaveData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::SaveDataCore
NEED_NO_BOX(::BGLib::SaveDataCore::ISerializableSaveData);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::SaveDataCore::ISerializableSaveData*, "BGLib.SaveDataCore", "ISerializableSaveData");
