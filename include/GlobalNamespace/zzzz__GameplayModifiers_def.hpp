#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayModifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayModifiers)
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace GlobalNamespace {
struct GameplayModifiers_EnabledObstacleType;
}
namespace GlobalNamespace {
struct GameplayModifiers_EnergyType;
}
namespace GlobalNamespace {
struct GameplayModifiers_SongSpeed;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameplayModifiers_EnabledObstacleType;
}
namespace GlobalNamespace {
struct GameplayModifiers_EnergyType;
}
namespace GlobalNamespace {
struct GameplayModifiers_SongSpeed;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameplayModifiers_EnabledObstacleType);
MARK_VAL_T(::GlobalNamespace::GameplayModifiers_EnergyType);
MARK_VAL_T(::GlobalNamespace::GameplayModifiers_SongSpeed);
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifiers);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameplayModifiers/EnabledObstacleType
struct CORDL_TYPE GameplayModifiers_EnabledObstacleType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameplayModifiers_EnabledObstacleType_Unwrapped
  enum struct __GameplayModifiers_EnabledObstacleType_Unwrapped : int32_t {
    __E_All = static_cast<int32_t>(0x0),
    __E_FullHeightOnly = static_cast<int32_t>(0x1),
    __E_NoObstacles = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameplayModifiers_EnabledObstacleType_Unwrapped() const noexcept {
    return static_cast<__GameplayModifiers_EnabledObstacleType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiers_EnabledObstacleType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameplayModifiers_EnabledObstacleType(int32_t value__) noexcept;

  /// @brief Field All value: I32(0)
  static ::GlobalNamespace::GameplayModifiers_EnabledObstacleType const All;

  /// @brief Field FullHeightOnly value: I32(1)
  static ::GlobalNamespace::GameplayModifiers_EnabledObstacleType const FullHeightOnly;

  /// @brief Field NoObstacles value: I32(2)
  static ::GlobalNamespace::GameplayModifiers_EnabledObstacleType const NoObstacles;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16976 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayModifiers_EnabledObstacleType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiers_EnabledObstacleType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameplayModifiers/EnergyType
struct CORDL_TYPE GameplayModifiers_EnergyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameplayModifiers_EnergyType_Unwrapped
  enum struct __GameplayModifiers_EnergyType_Unwrapped : int32_t {
    __E_Bar = static_cast<int32_t>(0x0),
    __E_Battery = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameplayModifiers_EnergyType_Unwrapped() const noexcept {
    return static_cast<__GameplayModifiers_EnergyType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiers_EnergyType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameplayModifiers_EnergyType(int32_t value__) noexcept;

  /// @brief Field Bar value: I32(0)
  static ::GlobalNamespace::GameplayModifiers_EnergyType const Bar;

  /// @brief Field Battery value: I32(1)
  static ::GlobalNamespace::GameplayModifiers_EnergyType const Battery;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16977 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayModifiers_EnergyType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiers_EnergyType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameplayModifiers/SongSpeed
struct CORDL_TYPE GameplayModifiers_SongSpeed {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameplayModifiers_SongSpeed_Unwrapped
  enum struct __GameplayModifiers_SongSpeed_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Faster = static_cast<int32_t>(0x1),
    __E_Slower = static_cast<int32_t>(0x2),
    __E_SuperFast = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameplayModifiers_SongSpeed_Unwrapped() const noexcept {
    return static_cast<__GameplayModifiers_SongSpeed_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiers_SongSpeed();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameplayModifiers_SongSpeed(int32_t value__) noexcept;

  /// @brief Field Faster value: I32(1)
  static ::GlobalNamespace::GameplayModifiers_SongSpeed const Faster;

  /// @brief Field Normal value: I32(0)
  static ::GlobalNamespace::GameplayModifiers_SongSpeed const Normal;

  /// @brief Field Slower value: I32(2)
  static ::GlobalNamespace::GameplayModifiers_SongSpeed const Slower;

  /// @brief Field SuperFast value: I32(3)
  static ::GlobalNamespace::GameplayModifiers_SongSpeed const SuperFast;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16978 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayModifiers_SongSpeed, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiers_SongSpeed, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies GameplayModifiers::EnabledObstacleType, GameplayModifiers::EnergyType, GameplayModifiers::SongSpeed, LiteNetLib.Utils.INetImmutableSerializable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayModifiers
class CORDL_TYPE GameplayModifiers : public ::System::Object {
public:
  // Declarations
  using EnabledObstacleType = ::GlobalNamespace::GameplayModifiers_EnabledObstacleType;

  using EnergyType = ::GlobalNamespace::GameplayModifiers_EnergyType;

  using SongSpeed = ::GlobalNamespace::GameplayModifiers_SongSpeed;

  /// @brief Field _disappearingArrows, offset 0x1e, size 0x1
  __declspec(property(get = __cordl_internal_get__disappearingArrows, put = __cordl_internal_set__disappearingArrows)) bool _disappearingArrows;

  /// @brief Field _enabledObstacleType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__enabledObstacleType, put = __cordl_internal_set__enabledObstacleType)) ::GlobalNamespace::GameplayModifiers_EnabledObstacleType _enabledObstacleType;

  /// @brief Field _energyType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__energyType, put = __cordl_internal_set__energyType)) ::GlobalNamespace::GameplayModifiers_EnergyType _energyType;

  /// @brief Field _failOnSaberClash, offset 0x16, size 0x1
  __declspec(property(get = __cordl_internal_get__failOnSaberClash, put = __cordl_internal_set__failOnSaberClash)) bool _failOnSaberClash;

  /// @brief Field _fastNotes, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__fastNotes, put = __cordl_internal_set__fastNotes)) bool _fastNotes;

  /// @brief Field _ghostNotes, offset 0x1f, size 0x1
  __declspec(property(get = __cordl_internal_get__ghostNotes, put = __cordl_internal_set__ghostNotes)) bool _ghostNotes;

  /// @brief Field _instaFail, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get__instaFail, put = __cordl_internal_set__instaFail)) bool _instaFail;

  /// @brief Field _noArrows, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__noArrows, put = __cordl_internal_set__noArrows)) bool _noArrows;

  /// @brief Field _noBombs, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__noBombs, put = __cordl_internal_set__noBombs)) bool _noBombs;

  /// @brief Field _noFailOn0Energy, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get__noFailOn0Energy, put = __cordl_internal_set__noFailOn0Energy)) bool _noFailOn0Energy;

  /// @brief Field _proMode, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__proMode, put = __cordl_internal_set__proMode)) bool _proMode;

  /// @brief Field _smallCubes, offset 0x2b, size 0x1
  __declspec(property(get = __cordl_internal_get__smallCubes, put = __cordl_internal_set__smallCubes)) bool _smallCubes;

  /// @brief Field _songSpeed, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__songSpeed, put = __cordl_internal_set__songSpeed)) ::GlobalNamespace::GameplayModifiers_SongSpeed _songSpeed;

  /// @brief Field _strictAngles, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get__strictAngles, put = __cordl_internal_set__strictAngles)) bool _strictAngles;

  /// @brief Field _zenMode, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get__zenMode, put = __cordl_internal_set__zenMode)) bool _zenMode;

  __declspec(property(get = get_cutAngleTolerance)) float_t cutAngleTolerance;

  __declspec(property(get = get_disappearingArrows)) bool disappearingArrows;

  __declspec(property(get = get_enabledObstacleType)) ::GlobalNamespace::GameplayModifiers_EnabledObstacleType enabledObstacleType;

  __declspec(property(get = get_energyType)) ::GlobalNamespace::GameplayModifiers_EnergyType energyType;

  __declspec(property(get = get_failOnSaberClash)) bool failOnSaberClash;

  __declspec(property(get = get_fastNotes)) bool fastNotes;

  __declspec(property(get = get_ghostNotes)) bool ghostNotes;

  __declspec(property(get = get_instaFail)) bool instaFail;

  __declspec(property(get = get_noArrows)) bool noArrows;

  __declspec(property(get = get_noBombs)) bool noBombs;

  __declspec(property(get = get_noFailOn0Energy)) bool noFailOn0Energy;

  /// @brief Field noModifiers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_noModifiers, put = setStaticF_noModifiers)) ::GlobalNamespace::GameplayModifiers* noModifiers;

  __declspec(property(get = get_notesUniformScale)) float_t notesUniformScale;

  __declspec(property(get = get_proMode)) bool proMode;

  __declspec(property(get = get_smallCubes)) bool smallCubes;

  __declspec(property(get = get_songSpeed)) ::GlobalNamespace::GameplayModifiers_SongSpeed songSpeed;

  __declspec(property(get = get_songSpeedMul)) float_t songSpeedMul;

  __declspec(property(get = get_strictAngles)) bool strictAngles;

  __declspec(property(get = get_zenMode)) bool zenMode;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayModifiers*>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayModifiers*>*() noexcept;

  /// @brief Method AreValuesEqual, addr 0x271ed58, size 0x10c, virtual false, abstract: false, final false
  inline bool AreValuesEqual(::GlobalNamespace::GameplayModifiers* other);

  /// @brief Method CopyWith, addr 0x271e79c, size 0x308, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* CopyWith(::System::Nullable_1<::GlobalNamespace::GameplayModifiers_EnergyType> energyType, ::System::Nullable_1<bool> noFailOn0Energy,
                                                        ::System::Nullable_1<bool> instaFail, ::System::Nullable_1<bool> failOnSaberClash,
                                                        ::System::Nullable_1<::GlobalNamespace::GameplayModifiers_EnabledObstacleType> enabledObstacleType, ::System::Nullable_1<bool> noBombs,
                                                        ::System::Nullable_1<bool> fastNotes, ::System::Nullable_1<bool> strictAngles, ::System::Nullable_1<bool> disappearingArrows,
                                                        ::System::Nullable_1<::GlobalNamespace::GameplayModifiers_SongSpeed> songSpeed, ::System::Nullable_1<bool> noArrows,
                                                        ::System::Nullable_1<bool> ghostNotes, ::System::Nullable_1<bool> proMode, ::System::Nullable_1<bool> zenMode,
                                                        ::System::Nullable_1<bool> smallCubes);

  /// @brief Method CreateFromSerializedData, addr 0x271ec20, size 0x134, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::GameplayModifiers* CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method FromGameplayModifierMask, addr 0x271ed54, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::GameplayModifiers* FromGameplayModifierMask(::GlobalNamespace::GameplayModifierMask mask);

  /// @brief Method IsWithoutModifiers, addr 0x271eaa4, size 0x88, virtual false, abstract: false, final false
  inline bool IsWithoutModifiers();

  /// @brief Method LiteNetLib.Utils.INetImmutableSerializable<GameplayModifiers>.CreateFromSerializedData, addr 0x271ebcc, size 0x54, virtual true, abstract: false, final true
  inline ::GlobalNamespace::GameplayModifiers* LiteNetLib_Utils_INetImmutableSerializable_GameplayModifiers__CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  static inline ::GlobalNamespace::GameplayModifiers* New_ctor();

  static inline ::GlobalNamespace::GameplayModifiers* New_ctor(::GlobalNamespace::GameplayModifiers_EnergyType energyType, bool noFailOn0Energy, bool instaFail, bool failOnSaberClash,
                                                               ::GlobalNamespace::GameplayModifiers_EnabledObstacleType enabledObstacleType, bool noBombs, bool fastNotes, bool strictAngles,
                                                               bool disappearingArrows, ::GlobalNamespace::GameplayModifiers_SongSpeed songSpeed, bool noArrows, bool ghostNotes, bool proMode,
                                                               bool zenMode, bool smallCubes);

  /// @brief Method Serialize, addr 0x271eb2c, size 0xa0, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr bool const& __cordl_internal_get__disappearingArrows() const;

  constexpr bool& __cordl_internal_get__disappearingArrows();

  constexpr ::GlobalNamespace::GameplayModifiers_EnabledObstacleType const& __cordl_internal_get__enabledObstacleType() const;

  constexpr ::GlobalNamespace::GameplayModifiers_EnabledObstacleType& __cordl_internal_get__enabledObstacleType();

  constexpr ::GlobalNamespace::GameplayModifiers_EnergyType const& __cordl_internal_get__energyType() const;

  constexpr ::GlobalNamespace::GameplayModifiers_EnergyType& __cordl_internal_get__energyType();

  constexpr bool const& __cordl_internal_get__failOnSaberClash() const;

  constexpr bool& __cordl_internal_get__failOnSaberClash();

  constexpr bool const& __cordl_internal_get__fastNotes() const;

  constexpr bool& __cordl_internal_get__fastNotes();

  constexpr bool const& __cordl_internal_get__ghostNotes() const;

  constexpr bool& __cordl_internal_get__ghostNotes();

  constexpr bool const& __cordl_internal_get__instaFail() const;

  constexpr bool& __cordl_internal_get__instaFail();

  constexpr bool const& __cordl_internal_get__noArrows() const;

  constexpr bool& __cordl_internal_get__noArrows();

  constexpr bool const& __cordl_internal_get__noBombs() const;

  constexpr bool& __cordl_internal_get__noBombs();

  constexpr bool const& __cordl_internal_get__noFailOn0Energy() const;

  constexpr bool& __cordl_internal_get__noFailOn0Energy();

  constexpr bool const& __cordl_internal_get__proMode() const;

  constexpr bool& __cordl_internal_get__proMode();

  constexpr bool const& __cordl_internal_get__smallCubes() const;

  constexpr bool& __cordl_internal_get__smallCubes();

  constexpr ::GlobalNamespace::GameplayModifiers_SongSpeed const& __cordl_internal_get__songSpeed() const;

  constexpr ::GlobalNamespace::GameplayModifiers_SongSpeed& __cordl_internal_get__songSpeed();

  constexpr bool const& __cordl_internal_get__strictAngles() const;

  constexpr bool& __cordl_internal_get__strictAngles();

  constexpr bool const& __cordl_internal_get__zenMode() const;

  constexpr bool& __cordl_internal_get__zenMode();

  constexpr void __cordl_internal_set__disappearingArrows(bool value);

  constexpr void __cordl_internal_set__enabledObstacleType(::GlobalNamespace::GameplayModifiers_EnabledObstacleType value);

  constexpr void __cordl_internal_set__energyType(::GlobalNamespace::GameplayModifiers_EnergyType value);

  constexpr void __cordl_internal_set__failOnSaberClash(bool value);

  constexpr void __cordl_internal_set__fastNotes(bool value);

  constexpr void __cordl_internal_set__ghostNotes(bool value);

  constexpr void __cordl_internal_set__instaFail(bool value);

  constexpr void __cordl_internal_set__noArrows(bool value);

  constexpr void __cordl_internal_set__noBombs(bool value);

  constexpr void __cordl_internal_set__noFailOn0Energy(bool value);

  constexpr void __cordl_internal_set__proMode(bool value);

  constexpr void __cordl_internal_set__smallCubes(bool value);

  constexpr void __cordl_internal_set__songSpeed(::GlobalNamespace::GameplayModifiers_SongSpeed value);

  constexpr void __cordl_internal_set__strictAngles(bool value);

  constexpr void __cordl_internal_set__zenMode(bool value);

  /// @brief Method .ctor, addr 0x271e770, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x271e4ec, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::GameplayModifiers_EnergyType energyType, bool noFailOn0Energy, bool instaFail, bool failOnSaberClash,
                    ::GlobalNamespace::GameplayModifiers_EnabledObstacleType enabledObstacleType, bool noBombs, bool fastNotes, bool strictAngles, bool disappearingArrows,
                    ::GlobalNamespace::GameplayModifiers_SongSpeed songSpeed, bool noArrows, bool ghostNotes, bool proMode, bool zenMode, bool smallCubes);

  static inline ::GlobalNamespace::GameplayModifiers* getStaticF_noModifiers();

  /// @brief Method get_cutAngleTolerance, addr 0x271e738, size 0x20, virtual false, abstract: false, final false
  inline float_t get_cutAngleTolerance();

  /// @brief Method get_disappearingArrows, addr 0x271e6d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_disappearingArrows();

  /// @brief Method get_enabledObstacleType, addr 0x271e6bc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers_EnabledObstacleType get_enabledObstacleType();

  /// @brief Method get_energyType, addr 0x271e69c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers_EnergyType get_energyType();

  /// @brief Method get_failOnSaberClash, addr 0x271e6b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_failOnSaberClash();

  /// @brief Method get_fastNotes, addr 0x271e6c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_fastNotes();

  /// @brief Method get_ghostNotes, addr 0x271e6dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_ghostNotes();

  /// @brief Method get_instaFail, addr 0x271e6ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_instaFail();

  /// @brief Method get_noArrows, addr 0x271e6f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_noArrows();

  /// @brief Method get_noBombs, addr 0x271e6e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_noBombs();

  /// @brief Method get_noFailOn0Energy, addr 0x271e6a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_noFailOn0Energy();

  /// @brief Method get_notesUniformScale, addr 0x271e758, size 0x18, virtual false, abstract: false, final false
  inline float_t get_notesUniformScale();

  /// @brief Method get_proMode, addr 0x271e6fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_proMode();

  /// @brief Method get_smallCubes, addr 0x271e70c, size 0x8, virtual false, abstract: false, final false
  inline bool get_smallCubes();

  /// @brief Method get_songSpeed, addr 0x271e6ec, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers_SongSpeed get_songSpeed();

  /// @brief Method get_songSpeedMul, addr 0x271e714, size 0x24, virtual false, abstract: false, final false
  inline float_t get_songSpeedMul();

  /// @brief Method get_strictAngles, addr 0x271e6cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_strictAngles();

  /// @brief Method get_zenMode, addr 0x271e704, size 0x8, virtual false, abstract: false, final false
  inline bool get_zenMode();

  /// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayModifiers*>"
  constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayModifiers*>*
  i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__GameplayModifiers__() noexcept;

  static inline void setStaticF_noModifiers(::GlobalNamespace::GameplayModifiers* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifiers(GameplayModifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifiers(GameplayModifiers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16979 };

  /// @brief Field _energyType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::GameplayModifiers_EnergyType ____energyType;

  /// @brief Field _noFailOn0Energy, offset: 0x14, size: 0x1, def value: None
  bool ____noFailOn0Energy;

  /// @brief Field _instaFail, offset: 0x15, size: 0x1, def value: None
  bool ____instaFail;

  /// @brief Field _failOnSaberClash, offset: 0x16, size: 0x1, def value: None
  bool ____failOnSaberClash;

  /// @brief Field _enabledObstacleType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::GameplayModifiers_EnabledObstacleType ____enabledObstacleType;

  /// @brief Field _fastNotes, offset: 0x1c, size: 0x1, def value: None
  bool ____fastNotes;

  /// @brief Field _strictAngles, offset: 0x1d, size: 0x1, def value: None
  bool ____strictAngles;

  /// @brief Field _disappearingArrows, offset: 0x1e, size: 0x1, def value: None
  bool ____disappearingArrows;

  /// @brief Field _ghostNotes, offset: 0x1f, size: 0x1, def value: None
  bool ____ghostNotes;

  /// @brief Field _noBombs, offset: 0x20, size: 0x1, def value: None
  bool ____noBombs;

  /// @brief Field _songSpeed, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::GameplayModifiers_SongSpeed ____songSpeed;

  /// @brief Field _noArrows, offset: 0x28, size: 0x1, def value: None
  bool ____noArrows;

  /// @brief Field _proMode, offset: 0x29, size: 0x1, def value: None
  bool ____proMode;

  /// @brief Field _zenMode, offset: 0x2a, size: 0x1, def value: None
  bool ____zenMode;

  /// @brief Field _smallCubes, offset: 0x2b, size: 0x1, def value: None
  bool ____smallCubes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayModifiers, ____energyType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiers, ____noFailOn0Energy) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiers, ____instaFail) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiers, ____failOnSaberClash) == 0x16, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiers, ____enabledObstacleType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiers, ____fastNotes) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiers, ____strictAngles) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiers, ____disappearingArrows) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiers, ____ghostNotes) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiers, ____noBombs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiers, ____songSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiers, ____noArrows) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiers, ____proMode) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiers, ____zenMode) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiers, ____smallCubes) == 0x2b, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiers, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiers_EnabledObstacleType, "", "GameplayModifiers/EnabledObstacleType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiers_EnergyType, "", "GameplayModifiers/EnergyType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiers_SongSpeed, "", "GameplayModifiers/SongSpeed");
NEED_NO_BOX(::GlobalNamespace::GameplayModifiers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiers*, "", "GameplayModifiers");
