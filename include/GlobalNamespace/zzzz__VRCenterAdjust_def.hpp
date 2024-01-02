#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VRCenterAdjust)
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class Vector3SO;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class FloatSO;
}
// Forward declare root types
namespace GlobalNamespace {
class VRCenterAdjust;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRCenterAdjust);
// Type: ::VRCenterAdjust
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5999))
// CS Name: ::VRCenterAdjust*
class CORDL_TYPE VRCenterAdjust : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _roomCenter, offset 0x18, size 0x8
  __declspec(property(get = __get__roomCenter, put = __set__roomCenter))::GlobalNamespace::Vector3SO* _roomCenter;

  /// @brief Field _roomRotation, offset 0x20, size 0x8
  __declspec(property(get = __get__roomRotation, put = __set__roomRotation))::GlobalNamespace::FloatSO* _roomRotation;

  /// @brief Field _mainSettingsModel, offset 0x28, size 0x8
  __declspec(property(get = __get__mainSettingsModel, put = __set__mainSettingsModel))::GlobalNamespace::MainSettingsModelSO* _mainSettingsModel;

  /// @brief Field _savedata, offset 0x30, size 0x8
  __declspec(property(get = __get__savedata, put = __set__savedata))::GlobalNamespace::ISaveData* _savedata;

  constexpr ::GlobalNamespace::Vector3SO*& __get__roomCenter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& __get__roomCenter() const;

  constexpr void __set__roomCenter(::GlobalNamespace::Vector3SO* value);

  constexpr ::GlobalNamespace::FloatSO*& __get__roomRotation();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get__roomRotation() const;

  constexpr void __set__roomRotation(::GlobalNamespace::FloatSO* value);

  constexpr ::GlobalNamespace::MainSettingsModelSO*& __get__mainSettingsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& __get__mainSettingsModel() const;

  constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value);

  constexpr ::GlobalNamespace::ISaveData*& __get__savedata();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& __get__savedata() const;

  constexpr void __set__savedata(::GlobalNamespace::ISaveData* value);

  /// @brief Method Awake, addr 0x2314828, size 0xc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Start, addr 0x2314834, size 0x150, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnEnable, addr 0x2314a08, size 0x108, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2314b10, size 0x108, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method HandleRoomCenterDidChange, addr 0x2314c18, size 0x70, virtual false, abstract: false, final false
  inline void HandleRoomCenterDidChange();

  /// @brief Method HandleRoomRotationDidChange, addr 0x2314c88, size 0x7c, virtual false, abstract: false, final false
  inline void HandleRoomRotationDidChange();

  /// @brief Method Update, addr 0x2314d04, size 0x2c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method ResetRoom, addr 0x2314984, size 0x84, virtual false, abstract: false, final false
  inline void ResetRoom();

  static inline ::GlobalNamespace::VRCenterAdjust* New_ctor();

  /// @brief Method .ctor, addr 0x2314d30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VRCenterAdjust", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRCenterAdjust(VRCenterAdjust&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRCenterAdjust", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRCenterAdjust(VRCenterAdjust const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRCenterAdjust();

public:
  /// @brief Field _roomCenter, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::Vector3SO* ____roomCenter;

  /// @brief Field _roomRotation, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ____roomRotation;

  /// @brief Field _mainSettingsModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsModelSO* ____mainSettingsModel;

  /// @brief Field _savedata, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ISaveData* ____savedata;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRCenterAdjust, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VRCenterAdjust, ____roomCenter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRCenterAdjust, ____roomRotation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRCenterAdjust, ____mainSettingsModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRCenterAdjust, ____savedata) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRCenterAdjust);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRCenterAdjust*, "", "VRCenterAdjust");
