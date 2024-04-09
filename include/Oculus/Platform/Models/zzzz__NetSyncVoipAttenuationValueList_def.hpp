#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetSyncVoipAttenuationValueList)
namespace Oculus::Platform::Models {
class NetSyncVoipAttenuationValue;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class NetSyncVoipAttenuationValueList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::NetSyncVoipAttenuationValueList);
// Type: Oculus.Platform.Models::NetSyncVoipAttenuationValueList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::NetSyncVoipAttenuationValueList*
class CORDL_TYPE NetSyncVoipAttenuationValueList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::NetSyncVoipAttenuationValue*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* New_ctor(void* a);

  /// @brief Method .ctor, addr 0x29de390, size 0x23c, virtual false, abstract: false, final false
  inline void _ctor(void* a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetSyncVoipAttenuationValueList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetSyncVoipAttenuationValueList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetSyncVoipAttenuationValueList(NetSyncVoipAttenuationValueList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetSyncVoipAttenuationValueList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetSyncVoipAttenuationValueList(NetSyncVoipAttenuationValueList const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::NetSyncVoipAttenuationValueList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::NetSyncVoipAttenuationValueList*, "Oculus.Platform.Models", "NetSyncVoipAttenuationValueList");
