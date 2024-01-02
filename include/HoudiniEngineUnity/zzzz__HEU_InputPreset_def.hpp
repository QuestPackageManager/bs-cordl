#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_InputPreset)
namespace HoudiniEngineUnity {
class HEU_InputObjectPreset;
}
namespace HoudiniEngineUnity {
class HEU_InputAssetPreset;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputPreset;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputPreset);
// Type: HoudiniEngineUnity::HEU_InputPreset
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9642))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9608))
// CS Name: ::HoudiniEngineUnity::HEU_InputPreset*
class CORDL_TYPE HEU_InputPreset : public ::System::Object {
public:
  // Declarations
  /// @brief Field _inputObjectType, offset 0x10, size 0x4
  __declspec(property(get = __get__inputObjectType, put = __set__inputObjectType))::HoudiniEngineUnity::__HEU_InputNode__InputObjectType _inputObjectType;

  /// @brief Field _inputObjectPresets, offset 0x18, size 0x8
  __declspec(property(get = __get__inputObjectPresets, put = __set__inputObjectPresets))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectPreset*>* _inputObjectPresets;

  /// @brief Field _inputAssetName, offset 0x20, size 0x8
  __declspec(property(get = __get__inputAssetName, put = __set__inputAssetName))::StringW _inputAssetName;

  /// @brief Field _inputIndex, offset 0x28, size 0x4
  __declspec(property(get = __get__inputIndex, put = __set__inputIndex)) int32_t _inputIndex;

  /// @brief Field _inputName, offset 0x30, size 0x8
  __declspec(property(get = __get__inputName, put = __set__inputName))::StringW _inputName;

  /// @brief Field _keepWorldTransform, offset 0x38, size 0x1
  __declspec(property(get = __get__keepWorldTransform, put = __set__keepWorldTransform)) bool _keepWorldTransform;

  /// @brief Field _packGeometryBeforeMerging, offset 0x39, size 0x1
  __declspec(property(get = __get__packGeometryBeforeMerging, put = __set__packGeometryBeforeMerging)) bool _packGeometryBeforeMerging;

  /// @brief Field _inputAssetPresets, offset 0x40, size 0x8
  __declspec(property(get = __get__inputAssetPresets, put = __set__inputAssetPresets))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputAssetPreset*>* _inputAssetPresets;

  constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType& __get__inputObjectType();

  constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType const& __get__inputObjectType() const;

  constexpr void __set__inputObjectType(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectPreset*>*& __get__inputObjectPresets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectPreset*>*> const& __get__inputObjectPresets() const;

  constexpr void __set__inputObjectPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectPreset*>* value);

  constexpr ::StringW& __get__inputAssetName();

  constexpr ::StringW const& __get__inputAssetName() const;

  constexpr void __set__inputAssetName(::StringW value);

  constexpr int32_t& __get__inputIndex();

  constexpr int32_t const& __get__inputIndex() const;

  constexpr void __set__inputIndex(int32_t value);

  constexpr ::StringW& __get__inputName();

  constexpr ::StringW const& __get__inputName() const;

  constexpr void __set__inputName(::StringW value);

  constexpr bool& __get__keepWorldTransform();

  constexpr bool const& __get__keepWorldTransform() const;

  constexpr void __set__keepWorldTransform(bool value);

  constexpr bool& __get__packGeometryBeforeMerging();

  constexpr bool const& __get__packGeometryBeforeMerging() const;

  constexpr void __set__packGeometryBeforeMerging(bool value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputAssetPreset*>*& __get__inputAssetPresets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputAssetPreset*>*> const& __get__inputAssetPresets() const;

  constexpr void __set__inputAssetPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputAssetPreset*>* value);

  static inline ::HoudiniEngineUnity::HEU_InputPreset* New_ctor();

  /// @brief Method .ctor, addr 0x214e6f8, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputPreset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputPreset(HEU_InputPreset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputPreset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputPreset(HEU_InputPreset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputPreset();

public:
  /// @brief Field _inputObjectType, offset: 0x10, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType ____inputObjectType;

  /// @brief Field _inputObjectPresets, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectPreset*>* ____inputObjectPresets;

  /// @brief Field _inputAssetName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____inputAssetName;

  /// @brief Field _inputIndex, offset: 0x28, size: 0x4, def value: None
  int32_t ____inputIndex;

  /// @brief Field _inputName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____inputName;

  /// @brief Field _keepWorldTransform, offset: 0x38, size: 0x1, def value: None
  bool ____keepWorldTransform;

  /// @brief Field _packGeometryBeforeMerging, offset: 0x39, size: 0x1, def value: None
  bool ____packGeometryBeforeMerging;

  /// @brief Field _inputAssetPresets, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputAssetPreset*>* ____inputAssetPresets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputPreset, 0x48>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputPreset, ____inputObjectType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputPreset, ____inputObjectPresets) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputPreset, ____inputAssetName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputPreset, ____inputIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputPreset, ____inputName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputPreset, ____keepWorldTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputPreset, ____packGeometryBeforeMerging) == 0x39, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputPreset, ____inputAssetPresets) == 0x40, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputPreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputPreset*, "HoudiniEngineUnity", "HEU_InputPreset");
