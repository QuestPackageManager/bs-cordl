#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_AssetPreset)
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
class HEU_AssetPreset;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AssetPreset);
// Type: HoudiniEngineUnity::HEU_AssetPreset
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_AssetPreset*
class CORDL_TYPE HEU_AssetPreset : public ::System::Object {
public:
  // Declarations
  /// @brief Field _assetOPName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__assetOPName, put = __cordl_internal_set__assetOPName))::StringW _assetOPName;

  /// @brief Field _curveNames, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__curveNames, put = __cordl_internal_set__curveNames))::System::Collections::Generic::List_1<::StringW>* _curveNames;

  /// @brief Field _curvePresets, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__curvePresets, put = __cordl_internal_set__curvePresets))::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* _curvePresets;

  /// @brief Field _identifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__identifier, put = __cordl_internal_set__identifier))::ArrayW<char16_t, ::Array<char16_t>*> _identifier;

  /// @brief Field _parameterPreset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__parameterPreset, put = __cordl_internal_set__parameterPreset))::ArrayW<uint8_t, ::Array<uint8_t>*> _parameterPreset;

  /// @brief Field _version, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Field inputPresets, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_inputPresets, put = __cordl_internal_set_inputPresets))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* inputPresets;

  /// @brief Field volumeCachePresets, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_volumeCachePresets,
                      put = __cordl_internal_set_volumeCachePresets))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* volumeCachePresets;

  static inline ::HoudiniEngineUnity::HEU_AssetPreset* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__assetOPName() const;

  constexpr ::StringW& __cordl_internal_get__assetOPName();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__curveNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__curveNames() const;

  constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*& __cordl_internal_get__curvePresets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __cordl_internal_get__curvePresets() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__identifier() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__identifier();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__parameterPreset() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__parameterPreset();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*& __cordl_internal_get_inputPresets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*> const& __cordl_internal_get_inputPresets() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*& __cordl_internal_get_volumeCachePresets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*> const& __cordl_internal_get_volumeCachePresets() const;

  constexpr void __cordl_internal_set__assetOPName(::StringW value);

  constexpr void __cordl_internal_set__curveNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__curvePresets(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* value);

  constexpr void __cordl_internal_set__identifier(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set__parameterPreset(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__version(int32_t value);

  constexpr void __cordl_internal_set_inputPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* value);

  constexpr void __cordl_internal_set_volumeCachePresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* value);

  /// @brief Method .ctor, addr 0x243881c, size 0x148, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetPreset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetPreset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AssetPreset(HEU_AssetPreset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetPreset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AssetPreset(HEU_AssetPreset const&) = delete;

  /// @brief Field _identifier, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____identifier;

  /// @brief Field _version, offset: 0x18, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _assetOPName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____assetOPName;

  /// @brief Field _parameterPreset, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____parameterPreset;

  /// @brief Field _curveNames, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____curveNames;

  /// @brief Field _curvePresets, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* ____curvePresets;

  /// @brief Field inputPresets, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* ___inputPresets;

  /// @brief Field volumeCachePresets, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* ___volumeCachePresets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetPreset, 0x50>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetPreset, ____identifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetPreset, ____version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetPreset, ____assetOPName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetPreset, ____parameterPreset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetPreset, ____curveNames) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetPreset, ____curvePresets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetPreset, ___inputPresets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetPreset, ___volumeCachePresets) == 0x48, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetPreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetPreset*, "HoudiniEngineUnity", "HEU_AssetPreset");
