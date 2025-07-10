#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteDebrisSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__INoteDebrisDidFinishEvent_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteDebrisSpawner)
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class DeterminismConfig;
}
namespace GlobalNamespace {
struct NoteData_GameplayType;
}
namespace GlobalNamespace {
class NoteDebris_Pool;
}
namespace GlobalNamespace {
class NoteDebris;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Random;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteDebrisSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteDebrisSpawner);
// Dependencies INoteDebrisDidFinishEvent, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteDebrisSpawner
class CORDL_TYPE NoteDebrisSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _burstSliderElementNotesDebrisPool, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderElementNotesDebrisPool,
                      put = __cordl_internal_set__burstSliderElementNotesDebrisPool)) ::GlobalNamespace::NoteDebris_Pool* _burstSliderElementNotesDebrisPool;

  /// @brief Field _burstSliderHeadNotesDebrisPool, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderHeadNotesDebrisPool,
                      put = __cordl_internal_set__burstSliderHeadNotesDebrisPool)) ::GlobalNamespace::NoteDebris_Pool* _burstSliderHeadNotesDebrisPool;

  /// @brief Field _cutDirMultiplier, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__cutDirMultiplier, put = __cordl_internal_set__cutDirMultiplier)) float_t _cutDirMultiplier;

  /// @brief Field _determinismConfig, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__determinismConfig, put = __cordl_internal_set__determinismConfig)) ::GlobalNamespace::DeterminismConfig* _determinismConfig;

  /// @brief Field _fromCenterSpeed, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__fromCenterSpeed, put = __cordl_internal_set__fromCenterSpeed)) float_t _fromCenterSpeed;

  /// @brief Field _moveSpeedMultiplier, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__moveSpeedMultiplier, put = __cordl_internal_set__moveSpeedMultiplier)) float_t _moveSpeedMultiplier;

  /// @brief Field _normalNotesDebrisPool, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__normalNotesDebrisPool, put = __cordl_internal_set__normalNotesDebrisPool)) ::GlobalNamespace::NoteDebris_Pool* _normalNotesDebrisPool;

  /// @brief Field _poolForNoteDebris, offset 0x60, size 0x8
  __declspec(property(
      get = __cordl_internal_get__poolForNoteDebris,
      put = __cordl_internal_set__poolForNoteDebris)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NoteDebris>, ::GlobalNamespace::NoteDebris_Pool*>* _poolForNoteDebris;

  /// @brief Field _poolForNoteGameplayType, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__poolForNoteGameplayType,
                      put = __cordl_internal_set__poolForNoteGameplayType)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteData_GameplayType, ::GlobalNamespace::NoteDebris_Pool*>*
      _poolForNoteGameplayType;

  /// @brief Field _random, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::System::Random* _random;

  /// @brief Field _rotation, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__rotation, put = __cordl_internal_set__rotation)) float_t _rotation;

  /// @brief Convert operator to "::GlobalNamespace::INoteDebrisDidFinishEvent"
  constexpr operator ::GlobalNamespace::INoteDebrisDidFinishEvent*() noexcept;

  /// @brief Method DespawnNoteDebris, addr 0x3b8af98, size 0xa4, virtual false, abstract: false, final false
  inline void DespawnNoteDebris(::GlobalNamespace::NoteDebris* noteDebris);

  /// @brief Method HandleNoteDebrisDidFinish, addr 0x3b8aedc, size 0xbc, virtual true, abstract: false, final true
  inline void HandleNoteDebrisDidFinish(::GlobalNamespace::NoteDebris* noteDebris);

  static inline ::GlobalNamespace::NoteDebrisSpawner* New_ctor();

  /// @brief Method SpawnDebris, addr 0x3b8a0fc, size 0x8dc, virtual false, abstract: false, final false
  inline void SpawnDebris(::GlobalNamespace::NoteData_GameplayType noteGameplayType, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal, float_t saberSpeed,
                          ::UnityEngine::Vector3 saberDir, ::UnityEngine::Vector3 notePos, ::UnityEngine::Quaternion noteRotation, ::UnityEngine::Vector3 noteScale,
                          ::GlobalNamespace::ColorType colorType, float_t timeToNextColorNote, ::UnityEngine::Vector3 moveVec);

  /// @brief Method SpawnNoteDebris, addr 0x3b8add0, size 0x10c, virtual false, abstract: false, final false
  inline void SpawnNoteDebris(::GlobalNamespace::NoteData_GameplayType noteGameplayType, ::ByRef<::GlobalNamespace::NoteDebris*> debris0, ::ByRef<::GlobalNamespace::NoteDebris*> debris1);

  /// @brief Method Start, addr 0x3b8ad04, size 0xcc, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::NoteDebris_Pool* const& __cordl_internal_get__burstSliderElementNotesDebrisPool() const;

  constexpr ::GlobalNamespace::NoteDebris_Pool*& __cordl_internal_get__burstSliderElementNotesDebrisPool();

  constexpr ::GlobalNamespace::NoteDebris_Pool* const& __cordl_internal_get__burstSliderHeadNotesDebrisPool() const;

  constexpr ::GlobalNamespace::NoteDebris_Pool*& __cordl_internal_get__burstSliderHeadNotesDebrisPool();

  constexpr float_t const& __cordl_internal_get__cutDirMultiplier() const;

  constexpr float_t& __cordl_internal_get__cutDirMultiplier();

  constexpr ::GlobalNamespace::DeterminismConfig* const& __cordl_internal_get__determinismConfig() const;

  constexpr ::GlobalNamespace::DeterminismConfig*& __cordl_internal_get__determinismConfig();

  constexpr float_t const& __cordl_internal_get__fromCenterSpeed() const;

  constexpr float_t& __cordl_internal_get__fromCenterSpeed();

  constexpr float_t const& __cordl_internal_get__moveSpeedMultiplier() const;

  constexpr float_t& __cordl_internal_get__moveSpeedMultiplier();

  constexpr ::GlobalNamespace::NoteDebris_Pool* const& __cordl_internal_get__normalNotesDebrisPool() const;

  constexpr ::GlobalNamespace::NoteDebris_Pool*& __cordl_internal_get__normalNotesDebrisPool();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NoteDebris>, ::GlobalNamespace::NoteDebris_Pool*>* const& __cordl_internal_get__poolForNoteDebris() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NoteDebris>, ::GlobalNamespace::NoteDebris_Pool*>*& __cordl_internal_get__poolForNoteDebris();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteData_GameplayType, ::GlobalNamespace::NoteDebris_Pool*>* const& __cordl_internal_get__poolForNoteGameplayType() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteData_GameplayType, ::GlobalNamespace::NoteDebris_Pool*>*& __cordl_internal_get__poolForNoteGameplayType();

  constexpr ::System::Random* const& __cordl_internal_get__random() const;

  constexpr ::System::Random*& __cordl_internal_get__random();

  constexpr float_t const& __cordl_internal_get__rotation() const;

  constexpr float_t& __cordl_internal_get__rotation();

  constexpr void __cordl_internal_set__burstSliderElementNotesDebrisPool(::GlobalNamespace::NoteDebris_Pool* value);

  constexpr void __cordl_internal_set__burstSliderHeadNotesDebrisPool(::GlobalNamespace::NoteDebris_Pool* value);

  constexpr void __cordl_internal_set__cutDirMultiplier(float_t value);

  constexpr void __cordl_internal_set__determinismConfig(::GlobalNamespace::DeterminismConfig* value);

  constexpr void __cordl_internal_set__fromCenterSpeed(float_t value);

  constexpr void __cordl_internal_set__moveSpeedMultiplier(float_t value);

  constexpr void __cordl_internal_set__normalNotesDebrisPool(::GlobalNamespace::NoteDebris_Pool* value);

  constexpr void __cordl_internal_set__poolForNoteDebris(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NoteDebris>, ::GlobalNamespace::NoteDebris_Pool*>* value);

  constexpr void __cordl_internal_set__poolForNoteGameplayType(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteData_GameplayType, ::GlobalNamespace::NoteDebris_Pool*>* value);

  constexpr void __cordl_internal_set__random(::System::Random* value);

  constexpr void __cordl_internal_set__rotation(float_t value);

  /// @brief Method .ctor, addr 0x3b8b03c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::INoteDebrisDidFinishEvent"
  constexpr ::GlobalNamespace::INoteDebrisDidFinishEvent* i___GlobalNamespace__INoteDebrisDidFinishEvent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteDebrisSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteDebrisSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteDebrisSpawner(NoteDebrisSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteDebrisSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteDebrisSpawner(NoteDebrisSpawner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4253 };

  /// @brief Field kLifeTimeOffset offset 0xffffffff size 0x4
  static constexpr float_t kLifeTimeOffset{ static_cast<float_t>(0.05f) };

  /// @brief Field kMaxLifeTime offset 0xffffffff size 0x4
  static constexpr float_t kMaxLifeTime{ static_cast<float_t>(2.0f) };

  /// @brief Field kMinLifeTime offset 0xffffffff size 0x4
  static constexpr float_t kMinLifeTime{ static_cast<float_t>(0.2f) };

  /// @brief Field _rotation, offset: 0x20, size: 0x4, def value: None
  float_t ____rotation;

  /// @brief Field _cutDirMultiplier, offset: 0x24, size: 0x4, def value: None
  float_t ____cutDirMultiplier;

  /// @brief Field _fromCenterSpeed, offset: 0x28, size: 0x4, def value: None
  float_t ____fromCenterSpeed;

  /// @brief Field _moveSpeedMultiplier, offset: 0x2c, size: 0x4, def value: None
  float_t ____moveSpeedMultiplier;

  /// @brief Field _normalNotesDebrisPool, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::NoteDebris_Pool* ____normalNotesDebrisPool;

  /// @brief Field _burstSliderHeadNotesDebrisPool, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::NoteDebris_Pool* ____burstSliderHeadNotesDebrisPool;

  /// @brief Field _burstSliderElementNotesDebrisPool, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::NoteDebris_Pool* ____burstSliderElementNotesDebrisPool;

  /// @brief Field _random, offset: 0x48, size: 0x8, def value: None
  ::System::Random* ____random;

  /// @brief Field _determinismConfig, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::DeterminismConfig* ____determinismConfig;

  /// @brief Field _poolForNoteGameplayType, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteData_GameplayType, ::GlobalNamespace::NoteDebris_Pool*>* ____poolForNoteGameplayType;

  /// @brief Field _poolForNoteDebris, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NoteDebris>, ::GlobalNamespace::NoteDebris_Pool*>* ____poolForNoteDebris;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____rotation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____cutDirMultiplier) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____fromCenterSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____moveSpeedMultiplier) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____normalNotesDebrisPool) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____burstSliderHeadNotesDebrisPool) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____burstSliderElementNotesDebrisPool) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____random) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____determinismConfig) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____poolForNoteGameplayType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____poolForNoteDebris) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteDebrisSpawner, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteDebrisSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDebrisSpawner*, "", "NoteDebrisSpawner");
