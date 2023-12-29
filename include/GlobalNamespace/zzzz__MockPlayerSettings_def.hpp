#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MockPlayerMovementType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlayerSettings)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct MockPlayerMovementType;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerSettings);
// Type: ::MockPlayerSettings
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10178)), TypeDefinitionIndex(TypeDefinitionIndex(5288)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5289))
// CS Name: ::MockPlayerSettings*
class CORDL_TYPE MockPlayerSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field _userName, offset 0x10, size 0x8
  __declspec(property(get = __get__userName, put = __set__userName))::StringW _userName;

  /// @brief Field _userId, offset 0x18, size 0x8
  __declspec(property(get = __get__userId, put = __set__userId))::StringW _userId;

  /// @brief Field _sortIndex, offset 0x20, size 0x4
  __declspec(property(get = __get__sortIndex, put = __set__sortIndex)) int32_t _sortIndex;

  /// @brief Field _latency, offset 0x24, size 0x4
  __declspec(property(get = __get__latency, put = __set__latency)) float_t _latency;

  /// @brief Field _autoConnect, offset 0x28, size 0x1
  __declspec(property(get = __get__autoConnect, put = __set__autoConnect)) bool _autoConnect;

  /// @brief Field _inactiveByDefault, offset 0x29, size 0x1
  __declspec(property(get = __get__inactiveByDefault, put = __set__inactiveByDefault)) bool _inactiveByDefault;

  /// @brief Field _movementType, offset 0x2c, size 0x4
  __declspec(property(get = __get__movementType, put = __set__movementType))::GlobalNamespace::MockPlayerMovementType _movementType;

  /// @brief Field _recodingFile, offset 0x30, size 0x8
  __declspec(property(get = __get__recodingFile, put = __set__recodingFile))::StringW _recodingFile;

  /// @brief Field _aiCubeHitChance, offset 0x38, size 0x4
  __declspec(property(get = __get__aiCubeHitChance, put = __set__aiCubeHitChance)) float_t _aiCubeHitChance;

  /// @brief Field _leftHanded, offset 0x3c, size 0x1
  __declspec(property(get = __get__leftHanded, put = __set__leftHanded)) bool _leftHanded;

  /// @brief Field _saberAColor, offset 0x40, size 0x10
  __declspec(property(get = __get__saberAColor, put = __set__saberAColor))::UnityEngine::Color _saberAColor;

  /// @brief Field _saberBColor, offset 0x50, size 0x10
  __declspec(property(get = __get__saberBColor, put = __set__saberBColor))::UnityEngine::Color _saberBColor;

  /// @brief Field _obstaclesColor, offset 0x60, size 0x10
  __declspec(property(get = __get__obstaclesColor, put = __set__obstaclesColor))::UnityEngine::Color _obstaclesColor;

  __declspec(property(get = get_userName, put = set_userName))::StringW userName;

  __declspec(property(get = get_userId, put = set_userId))::StringW userId;

  __declspec(property(get = get_sortIndex, put = set_sortIndex)) int32_t sortIndex;

  __declspec(property(get = get_latency, put = set_latency)) float_t latency;

  __declspec(property(get = get_autoConnect, put = set_autoConnect)) bool autoConnect;

  __declspec(property(get = get_inactiveByDefault, put = set_inactiveByDefault)) bool inactiveByDefault;

  __declspec(property(get = get_movementType, put = set_movementType))::GlobalNamespace::MockPlayerMovementType movementType;

  __declspec(property(get = get_recodingFile, put = set_recodingFile))::StringW recodingFile;

  __declspec(property(get = get_aiCubeHitChance, put = set_aiCubeHitChance)) float_t aiCubeHitChance;

  __declspec(property(get = get_leftHanded, put = set_leftHanded)) bool leftHanded;

  __declspec(property(get = get_saberAColor, put = set_saberAColor))::UnityEngine::Color saberAColor;

  __declspec(property(get = get_saberBColor, put = set_saberBColor))::UnityEngine::Color saberBColor;

  __declspec(property(get = get_obstaclesColor, put = set_obstaclesColor))::UnityEngine::Color obstaclesColor;

  constexpr ::StringW& __get__userName();

  constexpr ::StringW const& __get__userName() const;

  constexpr void __set__userName(::StringW value);

  constexpr ::StringW& __get__userId();

  constexpr ::StringW const& __get__userId() const;

  constexpr void __set__userId(::StringW value);

  constexpr int32_t& __get__sortIndex();

  constexpr int32_t const& __get__sortIndex() const;

  constexpr void __set__sortIndex(int32_t value);

  constexpr float_t& __get__latency();

  constexpr float_t const& __get__latency() const;

  constexpr void __set__latency(float_t value);

  constexpr bool& __get__autoConnect();

  constexpr bool const& __get__autoConnect() const;

  constexpr void __set__autoConnect(bool value);

  constexpr bool& __get__inactiveByDefault();

  constexpr bool const& __get__inactiveByDefault() const;

  constexpr void __set__inactiveByDefault(bool value);

  constexpr ::GlobalNamespace::MockPlayerMovementType& __get__movementType();

  constexpr ::GlobalNamespace::MockPlayerMovementType const& __get__movementType() const;

  constexpr void __set__movementType(::GlobalNamespace::MockPlayerMovementType value);

  constexpr ::StringW& __get__recodingFile();

  constexpr ::StringW const& __get__recodingFile() const;

  constexpr void __set__recodingFile(::StringW value);

  constexpr float_t& __get__aiCubeHitChance();

  constexpr float_t const& __get__aiCubeHitChance() const;

  constexpr void __set__aiCubeHitChance(float_t value);

  constexpr bool& __get__leftHanded();

  constexpr bool const& __get__leftHanded() const;

  constexpr void __set__leftHanded(bool value);

  constexpr ::UnityEngine::Color& __get__saberAColor();

  constexpr ::UnityEngine::Color const& __get__saberAColor() const;

  constexpr void __set__saberAColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__saberBColor();

  constexpr ::UnityEngine::Color const& __get__saberBColor() const;

  constexpr void __set__saberBColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__obstaclesColor();

  constexpr ::UnityEngine::Color const& __get__obstaclesColor() const;

  constexpr void __set__obstaclesColor(::UnityEngine::Color value);

  /// @brief Method get_userName addr 0x21034f8 size 0x8 virtual false final false
  inline ::StringW get_userName();

  /// @brief Method set_userName addr 0x2103500 size 0x8 virtual false final false
  inline void set_userName(::StringW value);

  /// @brief Method get_userId addr 0x2103508 size 0x8 virtual false final false
  inline ::StringW get_userId();

  /// @brief Method set_userId addr 0x2103510 size 0x8 virtual false final false
  inline void set_userId(::StringW value);

  /// @brief Method get_sortIndex addr 0x2103518 size 0x8 virtual false final false
  inline int32_t get_sortIndex();

  /// @brief Method set_sortIndex addr 0x2103520 size 0x8 virtual false final false
  inline void set_sortIndex(int32_t value);

  /// @brief Method get_latency addr 0x2103528 size 0x8 virtual false final false
  inline float_t get_latency();

  /// @brief Method set_latency addr 0x2103530 size 0x8 virtual false final false
  inline void set_latency(float_t value);

  /// @brief Method get_autoConnect addr 0x2103538 size 0x8 virtual false final false
  inline bool get_autoConnect();

  /// @brief Method set_autoConnect addr 0x2103540 size 0xc virtual false final false
  inline void set_autoConnect(bool value);

  /// @brief Method get_inactiveByDefault addr 0x210354c size 0x8 virtual false final false
  inline bool get_inactiveByDefault();

  /// @brief Method set_inactiveByDefault addr 0x2103554 size 0xc virtual false final false
  inline void set_inactiveByDefault(bool value);

  /// @brief Method get_movementType addr 0x2103560 size 0x8 virtual false final false
  inline ::GlobalNamespace::MockPlayerMovementType get_movementType();

  /// @brief Method set_movementType addr 0x2103568 size 0x8 virtual false final false
  inline void set_movementType(::GlobalNamespace::MockPlayerMovementType value);

  /// @brief Method get_recodingFile addr 0x2103570 size 0x8 virtual false final false
  inline ::StringW get_recodingFile();

  /// @brief Method set_recodingFile addr 0x2103578 size 0x8 virtual false final false
  inline void set_recodingFile(::StringW value);

  /// @brief Method get_aiCubeHitChance addr 0x2103580 size 0x8 virtual false final false
  inline float_t get_aiCubeHitChance();

  /// @brief Method set_aiCubeHitChance addr 0x2103588 size 0x8 virtual false final false
  inline void set_aiCubeHitChance(float_t value);

  /// @brief Method get_leftHanded addr 0x2103590 size 0x8 virtual false final false
  inline bool get_leftHanded();

  /// @brief Method set_leftHanded addr 0x2103598 size 0xc virtual false final false
  inline void set_leftHanded(bool value);

  /// @brief Method get_saberAColor addr 0x21035a4 size 0xc virtual false final false
  inline ::UnityEngine::Color get_saberAColor();

  /// @brief Method set_saberAColor addr 0x21035b0 size 0xc virtual false final false
  inline void set_saberAColor(::UnityEngine::Color value);

  /// @brief Method get_saberBColor addr 0x21035bc size 0xc virtual false final false
  inline ::UnityEngine::Color get_saberBColor();

  /// @brief Method set_saberBColor addr 0x21035c8 size 0xc virtual false final false
  inline void set_saberBColor(::UnityEngine::Color value);

  /// @brief Method get_obstaclesColor addr 0x21035d4 size 0xc virtual false final false
  inline ::UnityEngine::Color get_obstaclesColor();

  /// @brief Method set_obstaclesColor addr 0x21035e0 size 0xc virtual false final false
  inline void set_obstaclesColor(::UnityEngine::Color value);

  static inline ::GlobalNamespace::MockPlayerSettings* New_ctor();

  /// @brief Method .ctor addr 0x21035ec size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerSettings(MockPlayerSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerSettings(MockPlayerSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerSettings();

public:
  /// @brief Field _userName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____userName;

  /// @brief Field _userId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _sortIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ____sortIndex;

  /// @brief Field _latency, offset: 0x24, size: 0x4, def value: None
  float_t ____latency;

  /// @brief Field _autoConnect, offset: 0x28, size: 0x1, def value: None
  bool ____autoConnect;

  /// @brief Field _inactiveByDefault, offset: 0x29, size: 0x1, def value: None
  bool ____inactiveByDefault;

  /// @brief Field _movementType, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::MockPlayerMovementType ____movementType;

  /// @brief Field _recodingFile, offset: 0x30, size: 0x8, def value: None
  ::StringW ____recodingFile;

  /// @brief Field _aiCubeHitChance, offset: 0x38, size: 0x4, def value: None
  float_t ____aiCubeHitChance;

  /// @brief Field _leftHanded, offset: 0x3c, size: 0x1, def value: None
  bool ____leftHanded;

  /// @brief Field _saberAColor, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ____saberAColor;

  /// @brief Field _saberBColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____saberBColor;

  /// @brief Field _obstaclesColor, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ____obstaclesColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerSettings, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____userName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____sortIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____latency) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____autoConnect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____inactiveByDefault) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____movementType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____recodingFile) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____aiCubeHitChance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____leftHanded) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____saberAColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____saberBColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerSettings, ____obstaclesColor) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerSettings*, "", "MockPlayerSettings");
