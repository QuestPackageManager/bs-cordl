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
class HEU_InputAssetPreset;
}
namespace HoudiniEngineUnity {
class HEU_InputObjectPreset;
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
// CS Name: ::HoudiniEngineUnity::HEU_InputPreset*
class CORDL_TYPE HEU_InputPreset : public ::System::Object {
public:
  // Declarations
  /// @brief Field _inputAssetName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__inputAssetName, put = __cordl_internal_set__inputAssetName))::StringW _inputAssetName;

  /// @brief Field _inputAssetPresets, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__inputAssetPresets,
                      put = __cordl_internal_set__inputAssetPresets))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputAssetPreset*>* _inputAssetPresets;

  /// @brief Field _inputIndex, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__inputIndex, put = __cordl_internal_set__inputIndex)) int32_t _inputIndex;

  /// @brief Field _inputName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__inputName, put = __cordl_internal_set__inputName))::StringW _inputName;

  /// @brief Field _inputObjectPresets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__inputObjectPresets,
                      put = __cordl_internal_set__inputObjectPresets))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectPreset*>* _inputObjectPresets;

  /// @brief Field _inputObjectType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__inputObjectType, put = __cordl_internal_set__inputObjectType))::HoudiniEngineUnity::__HEU_InputNode__InputObjectType _inputObjectType;

  /// @brief Field _keepWorldTransform, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__keepWorldTransform, put = __cordl_internal_set__keepWorldTransform)) bool _keepWorldTransform;

  /// @brief Field _packGeometryBeforeMerging, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__packGeometryBeforeMerging, put = __cordl_internal_set__packGeometryBeforeMerging)) bool _packGeometryBeforeMerging;

  static inline ::HoudiniEngineUnity::HEU_InputPreset* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__inputAssetName() const;

  constexpr ::StringW& __cordl_internal_get__inputAssetName();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputAssetPreset*>*& __cordl_internal_get__inputAssetPresets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputAssetPreset*>*> const& __cordl_internal_get__inputAssetPresets() const;

  constexpr int32_t const& __cordl_internal_get__inputIndex() const;

  constexpr int32_t& __cordl_internal_get__inputIndex();

  constexpr ::StringW const& __cordl_internal_get__inputName() const;

  constexpr ::StringW& __cordl_internal_get__inputName();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectPreset*>*& __cordl_internal_get__inputObjectPresets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectPreset*>*> const& __cordl_internal_get__inputObjectPresets() const;

  constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType const& __cordl_internal_get__inputObjectType() const;

  constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType& __cordl_internal_get__inputObjectType();

  constexpr bool const& __cordl_internal_get__keepWorldTransform() const;

  constexpr bool& __cordl_internal_get__keepWorldTransform();

  constexpr bool const& __cordl_internal_get__packGeometryBeforeMerging() const;

  constexpr bool& __cordl_internal_get__packGeometryBeforeMerging();

  constexpr void __cordl_internal_set__inputAssetName(::StringW value);

  constexpr void __cordl_internal_set__inputAssetPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputAssetPreset*>* value);

  constexpr void __cordl_internal_set__inputIndex(int32_t value);

  constexpr void __cordl_internal_set__inputName(::StringW value);

  constexpr void __cordl_internal_set__inputObjectPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectPreset*>* value);

  constexpr void __cordl_internal_set__inputObjectType(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType value);

  constexpr void __cordl_internal_set__keepWorldTransform(bool value);

  constexpr void __cordl_internal_set__packGeometryBeforeMerging(bool value);

  /// @brief Method .ctor, addr 0x25325f0, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputPreset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputPreset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputPreset(HEU_InputPreset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputPreset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputPreset(HEU_InputPreset const&) = delete;

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
