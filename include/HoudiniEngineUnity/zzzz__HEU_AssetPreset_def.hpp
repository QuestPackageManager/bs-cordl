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
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace HoudiniEngineUnity {
class HEU_VolumeCachePreset;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9607))
// CS Name: ::HoudiniEngineUnity::HEU_AssetPreset*
class CORDL_TYPE HEU_AssetPreset : public ::System::Object {
public:
  // Declarations
  /// @brief Field _identifier, offset 0x10, size 0x8
  __declspec(property(get = __get__identifier, put = __set__identifier))::ArrayW<char16_t, ::Array<char16_t>*> _identifier;

  /// @brief Field _version, offset 0x18, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) int32_t _version;

  /// @brief Field _assetOPName, offset 0x20, size 0x8
  __declspec(property(get = __get__assetOPName, put = __set__assetOPName))::StringW _assetOPName;

  /// @brief Field _parameterPreset, offset 0x28, size 0x8
  __declspec(property(get = __get__parameterPreset, put = __set__parameterPreset))::ArrayW<uint8_t, ::Array<uint8_t>*> _parameterPreset;

  /// @brief Field _curveNames, offset 0x30, size 0x8
  __declspec(property(get = __get__curveNames, put = __set__curveNames))::System::Collections::Generic::List_1<::StringW>* _curveNames;

  /// @brief Field _curvePresets, offset 0x38, size 0x8
  __declspec(property(get = __get__curvePresets, put = __set__curvePresets))::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* _curvePresets;

  /// @brief Field inputPresets, offset 0x40, size 0x8
  __declspec(property(get = __get_inputPresets, put = __set_inputPresets))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* inputPresets;

  /// @brief Field volumeCachePresets, offset 0x48, size 0x8
  __declspec(property(get = __get_volumeCachePresets, put = __set_volumeCachePresets))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* volumeCachePresets;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get__identifier();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get__identifier() const;

  constexpr void __set__identifier(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr int32_t& __get__version();

  constexpr int32_t const& __get__version() const;

  constexpr void __set__version(int32_t value);

  constexpr ::StringW& __get__assetOPName();

  constexpr ::StringW const& __get__assetOPName() const;

  constexpr void __set__assetOPName(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__parameterPreset();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__parameterPreset() const;

  constexpr void __set__parameterPreset(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get__curveNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get__curveNames() const;

  constexpr void __set__curveNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*& __get__curvePresets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __get__curvePresets() const;

  constexpr void __set__curvePresets(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*& __get_inputPresets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*> const& __get_inputPresets() const;

  constexpr void __set_inputPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*& __get_volumeCachePresets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*> const& __get_volumeCachePresets() const;

  constexpr void __set_volumeCachePresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* value);

  static inline ::HoudiniEngineUnity::HEU_AssetPreset* New_ctor();

  /// @brief Method .ctor, addr 0x214e5b0, size 0x148, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetPreset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AssetPreset(HEU_AssetPreset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetPreset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AssetPreset(HEU_AssetPreset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetPreset();

public:
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
