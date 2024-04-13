#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_RecookPreset)
namespace HoudiniEngineUnity {
class HEU_InputPreset;
}
namespace HoudiniEngineUnity {
class HEU_VolumeCachePreset;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_RecookPreset;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_RecookPreset);
// Type: HoudiniEngineUnity::HEU_RecookPreset
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_RecookPreset*
class CORDL_TYPE HEU_RecookPreset : public ::System::Object {
public:
  // Declarations
  /// @brief Field _inputPresets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__inputPresets, put = __cordl_internal_set__inputPresets))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* _inputPresets;

  /// @brief Field _volumeCachePresets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__volumeCachePresets,
                      put = __cordl_internal_set__volumeCachePresets))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* _volumeCachePresets;

  static inline ::HoudiniEngineUnity::HEU_RecookPreset* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*& __cordl_internal_get__inputPresets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*> const& __cordl_internal_get__inputPresets() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*& __cordl_internal_get__volumeCachePresets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*> const& __cordl_internal_get__volumeCachePresets() const;

  constexpr void __cordl_internal_set__inputPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* value);

  constexpr void __cordl_internal_set__volumeCachePresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* value);

  /// @brief Method .ctor, addr 0x2438b58, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_RecookPreset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_RecookPreset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_RecookPreset(HEU_RecookPreset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_RecookPreset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_RecookPreset(HEU_RecookPreset const&) = delete;

  /// @brief Field _volumeCachePresets, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* ____volumeCachePresets;

  /// @brief Field _inputPresets, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* ____inputPresets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_RecookPreset, 0x20>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_RecookPreset, ____volumeCachePresets) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_RecookPreset, ____inputPresets) == 0x18, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_RecookPreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_RecookPreset*, "HoudiniEngineUnity", "HEU_RecookPreset");
