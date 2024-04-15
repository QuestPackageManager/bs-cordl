#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MockPlayerAvatarType_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayerMovementType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlayerSettings)
namespace GlobalNamespace {
struct MockPlayerAvatarType;
}
namespace GlobalNamespace {
struct MockPlayerMovementType;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerSettings);
// Type: ::MockPlayerSettings
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MockPlayerSettings*
class CORDL_TYPE MockPlayerSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field _aiCubeHitChance, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__aiCubeHitChance, put = __cordl_internal_set__aiCubeHitChance)) float_t _aiCubeHitChance;

  /// @brief Field _autoConnect, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__autoConnect, put = __cordl_internal_set__autoConnect)) bool _autoConnect;

  /// @brief Field _avatarType, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__avatarType, put = __cordl_internal_set__avatarType))::GlobalNamespace::MockPlayerAvatarType _avatarType;

  /// @brief Field _inactiveByDefault, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__inactiveByDefault, put = __cordl_internal_set__inactiveByDefault)) bool _inactiveByDefault;

  /// @brief Field _latency, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__latency, put = __cordl_internal_set__latency)) int64_t _latency;

  /// @brief Field _leftHanded, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get__leftHanded, put = __cordl_internal_set__leftHanded)) bool _leftHanded;

  /// @brief Field _movementType, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__movementType, put = __cordl_internal_set__movementType))::GlobalNamespace::MockPlayerMovementType _movementType;

  /// @brief Field _obstaclesColor, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get__obstaclesColor, put = __cordl_internal_set__obstaclesColor))::UnityEngine::Color _obstaclesColor;

  /// @brief Field _platformUserId, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__platformUserId, put = __cordl_internal_set__platformUserId)) uint64_t _platformUserId;

  /// @brief Field _recodingFile, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__recodingFile, put = __cordl_internal_set__recodingFile))::StringW _recodingFile;

  /// @brief Field _saberAColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__saberAColor, put = __cordl_internal_set__saberAColor))::UnityEngine::Color _saberAColor;

  /// @brief Field _saberBColor, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__saberBColor, put = __cordl_internal_set__saberBColor))::UnityEngine::Color _saberBColor;

  /// @brief Field _sortIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__sortIndex, put = __cordl_internal_set__sortIndex)) int32_t _sortIndex;

  /// @brief Field _userId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__userId, put = __cordl_internal_set__userId))::StringW _userId;

  /// @brief Field _userName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__userName, put = __cordl_internal_set__userName))::StringW _userName;

  __declspec(property(get = get_aiCubeHitChance, put = set_aiCubeHitChance)) float_t aiCubeHitChance;

  __declspec(property(get = get_autoConnect, put = set_autoConnect)) bool autoConnect;

  __declspec(property(get = get_avatarType, put = set_avatarType))::GlobalNamespace::MockPlayerAvatarType avatarType;

  __declspec(property(get = get_inactiveByDefault, put = set_inactiveByDefault)) bool inactiveByDefault;

  __declspec(property(get = get_latency, put = set_latency)) int64_t latency;

  __declspec(property(get = get_leftHanded, put = set_leftHanded)) bool leftHanded;

  __declspec(property(get = get_movementType, put = set_movementType))::GlobalNamespace::MockPlayerMovementType movementType;

  __declspec(property(get = get_obstaclesColor, put = set_obstaclesColor))::UnityEngine::Color obstaclesColor;

  __declspec(property(get = get_platformUserId, put = set_platformUserId)) uint64_t platformUserId;

  __declspec(property(get = get_recodingFile, put = set_recodingFile))::StringW recodingFile;

  __declspec(property(get = get_saberAColor, put = set_saberAColor))::UnityEngine::Color saberAColor;

  __declspec(property(get = get_saberBColor, put = set_saberBColor))::UnityEngine::Color saberBColor;

  __declspec(property(get = get_sortIndex, put = set_sortIndex)) int32_t sortIndex;

  __declspec(property(get = get_userId, put = set_userId))::StringW userId;

  __declspec(property(get = get_userName, put = set_userName))::StringW userName;

  static inline ::GlobalNamespace::MockPlayerSettings* New_ctor();

  constexpr float_t const& __cordl_internal_get__aiCubeHitChance() const;

  constexpr float_t& __cordl_internal_get__aiCubeHitChance();

  constexpr bool const& __cordl_internal_get__autoConnect() const;

  constexpr bool& __cordl_internal_get__autoConnect();

  constexpr ::GlobalNamespace::MockPlayerAvatarType const& __cordl_internal_get__avatarType() const;

  constexpr ::GlobalNamespace::MockPlayerAvatarType& __cordl_internal_get__avatarType();

  constexpr bool const& __cordl_internal_get__inactiveByDefault() const;

  constexpr bool& __cordl_internal_get__inactiveByDefault();

  constexpr int64_t const& __cordl_internal_get__latency() const;

  constexpr int64_t& __cordl_internal_get__latency();

  constexpr bool const& __cordl_internal_get__leftHanded() const;

  constexpr bool& __cordl_internal_get__leftHanded();

  constexpr ::GlobalNamespace::MockPlayerMovementType const& __cordl_internal_get__movementType() const;

  constexpr ::GlobalNamespace::MockPlayerMovementType& __cordl_internal_get__movementType();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__obstaclesColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__obstaclesColor();

  constexpr uint64_t const& __cordl_internal_get__platformUserId() const;

  constexpr uint64_t& __cordl_internal_get__platformUserId();

  constexpr ::StringW const& __cordl_internal_get__recodingFile() const;

  constexpr ::StringW& __cordl_internal_get__recodingFile();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__saberAColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__saberAColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__saberBColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__saberBColor();

  constexpr int32_t const& __cordl_internal_get__sortIndex() const;

  constexpr int32_t& __cordl_internal_get__sortIndex();

  constexpr ::StringW const& __cordl_internal_get__userId() const;

  constexpr ::StringW& __cordl_internal_get__userId();

  constexpr ::StringW const& __cordl_internal_get__userName() const;

  constexpr ::StringW& __cordl_internal_get__userName();

  constexpr void __cordl_internal_set__aiCubeHitChance(float_t value);

  constexpr void __cordl_internal_set__autoConnect(bool value);

  constexpr void __cordl_internal_set__avatarType(::GlobalNamespace::MockPlayerAvatarType value);

  constexpr void __cordl_internal_set__inactiveByDefault(bool value);

  constexpr void __cordl_internal_set__latency(int64_t value);

  constexpr void __cordl_internal_set__leftHanded(bool value);

  constexpr void __cordl_internal_set__movementType(::GlobalNamespace::MockPlayerMovementType value);

  constexpr void __cordl_internal_set__obstaclesColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__platformUserId(uint64_t value);

  constexpr void __cordl_internal_set__recodingFile(::StringW value);

  constexpr void __cordl_internal_set__saberAColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__saberBColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__sortIndex(int32_t value);

  constexpr void __cordl_internal_set__userId(::StringW value);

  constexpr void __cordl_internal_set__userName(::StringW value);

  /// @brief Method .ctor, addr 0x2605238, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_aiCubeHitChance, addr 0x26051cc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_aiCubeHitChance();

  /// @brief Method get_autoConnect, addr 0x2605164, size 0x8, virtual false, abstract: false, final false
  inline bool get_autoConnect();

  /// @brief Method get_avatarType, addr 0x260519c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MockPlayerAvatarType get_avatarType();

  /// @brief Method get_inactiveByDefault, addr 0x2605178, size 0x8, virtual false, abstract: false, final false
  inline bool get_inactiveByDefault();

  /// @brief Method get_latency, addr 0x2605154, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_latency();

  /// @brief Method get_leftHanded, addr 0x26051dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_leftHanded();

  /// @brief Method get_movementType, addr 0x260518c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MockPlayerMovementType get_movementType();

  /// @brief Method get_obstaclesColor, addr 0x2605220, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_obstaclesColor();

  /// @brief Method get_platformUserId, addr 0x26051ac, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_platformUserId();

  /// @brief Method get_recodingFile, addr 0x26051bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_recodingFile();

  /// @brief Method get_saberAColor, addr 0x26051f0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_saberAColor();

  /// @brief Method get_saberBColor, addr 0x2605208, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_saberBColor();

  /// @brief Method get_sortIndex, addr 0x2605144, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_sortIndex();

  /// @brief Method get_userId, addr 0x2605134, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x2605124, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_userName();

  /// @brief Method set_aiCubeHitChance, addr 0x26051d4, size 0x8, virtual false, abstract: false, final false
  inline void set_aiCubeHitChance(float_t value);

  /// @brief Method set_autoConnect, addr 0x260516c, size 0xc, virtual false, abstract: false, final false
  inline void set_autoConnect(bool value);

  /// @brief Method set_avatarType, addr 0x26051a4, size 0x8, virtual false, abstract: false, final false
  inline void set_avatarType(::GlobalNamespace::MockPlayerAvatarType value);

  /// @brief Method set_inactiveByDefault, addr 0x2605180, size 0xc, virtual false, abstract: false, final false
  inline void set_inactiveByDefault(bool value);

  /// @brief Method set_latency, addr 0x260515c, size 0x8, virtual false, abstract: false, final false
  inline void set_latency(int64_t value);

  /// @brief Method set_leftHanded, addr 0x26051e4, size 0xc, virtual false, abstract: false, final false
  inline void set_leftHanded(bool value);

  /// @brief Method set_movementType, addr 0x2605194, size 0x8, virtual false, abstract: false, final false
  inline void set_movementType(::GlobalNamespace::MockPlayerMovementType value);

  /// @brief Method set_obstaclesColor, addr 0x260522c, size 0xc, virtual false, abstract: false, final false
  inline void set_obstaclesColor(::UnityEngine::Color value);

  /// @brief Method set_platformUserId, addr 0x26051b4, size 0x8, virtual false, abstract: false, final false
  inline void set_platformUserId(uint64_t value);

  /// @brief Method set_recodingFile, addr 0x26051c4, size 0x8, virtual false, abstract: false, final false
  inline void set_recodingFile(::StringW value);

  /// @brief Method set_saberAColor, addr 0x26051fc, size 0xc, virtual false, abstract: false, final false
  inline void set_saberAColor(::UnityEngine::Color value);

  /// @brief Method set_saberBColor, addr 0x2605214, size 0xc, virtual false, abstract: false, final false
  inline void set_saberBColor(::UnityEngine::Color value);

  /// @brief Method set_sortIndex, addr 0x260514c, size 0x8, virtual false, abstract: false, final false
  inline void set_sortIndex(int32_t value);

  /// @brief Method set_userId, addr 0x260513c, size 0x8, virtual false, abstract: false, final false
  inline void set_userId(::StringW value);

  /// @brief Method set_userName, addr 0x260512c, size 0x8, virtual false, abstract: false, final false
  inline void set_userName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerSettings(MockPlayerSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerSettings(MockPlayerSettings const&) = delete;

  /// @brief Field _userName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____userName;

  /// @brief Field _userId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _sortIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ____sortIndex;

  /// @brief Field _latency, offset: 0x28, size: 0x8, def value: None
  int64_t ____latency;

  /// @brief Field _autoConnect, offset: 0x30, size: 0x1, def value: None
  bool ____autoConnect;

  /// @brief Field _inactiveByDefault, offset: 0x31, size: 0x1, def value: None
  bool ____inactiveByDefault;

  /// @brief Field _movementType, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::MockPlayerMovementType ____movementType;

  /// @brief Field _avatarType, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::MockPlayerAvatarType ____avatarType;

  /// @brief Field _platformUserId, offset: 0x40, size: 0x8, def value: None
  uint64_t ____platformUserId;

  /// @brief Field _recodingFile, offset: 0x48, size: 0x8, def value: None
  ::StringW ____recodingFile;

  /// @brief Field _aiCubeHitChance, offset: 0x50, size: 0x4, def value: None
  float_t ____aiCubeHitChance;

  /// @brief Field _leftHanded, offset: 0x54, size: 0x1, def value: None
  bool ____leftHanded;

  /// @brief Field _saberAColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ____saberAColor;

  /// @brief Field _saberBColor, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ____saberBColor;

  /// @brief Field _obstaclesColor, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Color ____obstaclesColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerSettings, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____userName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____sortIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____latency) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____autoConnect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____inactiveByDefault) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____movementType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____avatarType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____platformUserId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____recodingFile) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____aiCubeHitChance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____leftHanded) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____saberAColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____saberBColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____obstaclesColor) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerSettings*, "", "MockPlayerSettings");
