#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteDebrisSpawner)
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class INoteDebrisDidFinishEvent;
}
namespace GlobalNamespace {
class NoteDebris;
}
namespace GlobalNamespace {
struct __NoteData__GameplayType;
}
namespace GlobalNamespace {
class __NoteDebris__Pool;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
// Type: ::NoteDebrisSpawner
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteDebrisSpawner*
class CORDL_TYPE NoteDebrisSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _burstSliderElementNotesDebrisPool, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderElementNotesDebrisPool,
                      put = __cordl_internal_set__burstSliderElementNotesDebrisPool))::GlobalNamespace::__NoteDebris__Pool* _burstSliderElementNotesDebrisPool;

  /// @brief Field _burstSliderHeadNotesDebrisPool, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderHeadNotesDebrisPool,
                      put = __cordl_internal_set__burstSliderHeadNotesDebrisPool))::GlobalNamespace::__NoteDebris__Pool* _burstSliderHeadNotesDebrisPool;

  /// @brief Field _cutDirMultiplier, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__cutDirMultiplier, put = __cordl_internal_set__cutDirMultiplier)) float_t _cutDirMultiplier;

  /// @brief Field _fromCenterSpeed, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__fromCenterSpeed, put = __cordl_internal_set__fromCenterSpeed)) float_t _fromCenterSpeed;

  /// @brief Field _moveSpeedMultiplier, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__moveSpeedMultiplier, put = __cordl_internal_set__moveSpeedMultiplier)) float_t _moveSpeedMultiplier;

  /// @brief Field _normalNotesDebrisPool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__normalNotesDebrisPool, put = __cordl_internal_set__normalNotesDebrisPool))::GlobalNamespace::__NoteDebris__Pool* _normalNotesDebrisPool;

  /// @brief Field _poolForNoteDebris, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get__poolForNoteDebris,
      put = __cordl_internal_set__poolForNoteDebris))::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NoteDebris>, ::GlobalNamespace::__NoteDebris__Pool*>* _poolForNoteDebris;

  /// @brief Field _poolForNoteGameplayType, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__poolForNoteGameplayType,
                      put = __cordl_internal_set__poolForNoteGameplayType))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__GameplayType,
                                                                                                                        ::GlobalNamespace::__NoteDebris__Pool*>* _poolForNoteGameplayType;

  /// @brief Field _rotation, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__rotation, put = __cordl_internal_set__rotation)) float_t _rotation;

  /// @brief Convert operator to "::GlobalNamespace::INoteDebrisDidFinishEvent"
  constexpr operator ::GlobalNamespace::INoteDebrisDidFinishEvent*() noexcept;

  /// @brief Method DespawnNoteDebris, addr 0x25c5470, size 0xa4, virtual false, abstract: false, final false
  inline void DespawnNoteDebris(::GlobalNamespace::NoteDebris* noteDebris);

  /// @brief Method HandleNoteDebrisDidFinish, addr 0x25c53b4, size 0xbc, virtual true, abstract: false, final true
  inline void HandleNoteDebrisDidFinish(::GlobalNamespace::NoteDebris* noteDebris);

  static inline ::GlobalNamespace::NoteDebrisSpawner* New_ctor();

  /// @brief Method SpawnDebris, addr 0x25c4620, size 0x890, virtual false, abstract: false, final false
  inline void SpawnDebris(::GlobalNamespace::__NoteData__GameplayType noteGameplayType, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal, float_t saberSpeed,
                          ::UnityEngine::Vector3 saberDir, ::UnityEngine::Vector3 notePos, ::UnityEngine::Quaternion noteRotation, ::UnityEngine::Vector3 noteScale,
                          ::GlobalNamespace::ColorType colorType, float_t timeToNextColorNote, ::UnityEngine::Vector3 moveVec);

  /// @brief Method SpawnNoteDebris, addr 0x25c52a8, size 0x10c, virtual false, abstract: false, final false
  inline void SpawnNoteDebris(::GlobalNamespace::__NoteData__GameplayType noteGameplayType, ByRef<::GlobalNamespace::NoteDebris*> debris0, ByRef<::GlobalNamespace::NoteDebris*> debris1);

  /// @brief Method Start, addr 0x25c51e4, size 0xc4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::__NoteDebris__Pool*& __cordl_internal_get__burstSliderElementNotesDebrisPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteDebris__Pool*> const& __cordl_internal_get__burstSliderElementNotesDebrisPool() const;

  constexpr ::GlobalNamespace::__NoteDebris__Pool*& __cordl_internal_get__burstSliderHeadNotesDebrisPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteDebris__Pool*> const& __cordl_internal_get__burstSliderHeadNotesDebrisPool() const;

  constexpr float_t const& __cordl_internal_get__cutDirMultiplier() const;

  constexpr float_t& __cordl_internal_get__cutDirMultiplier();

  constexpr float_t const& __cordl_internal_get__fromCenterSpeed() const;

  constexpr float_t& __cordl_internal_get__fromCenterSpeed();

  constexpr float_t const& __cordl_internal_get__moveSpeedMultiplier() const;

  constexpr float_t& __cordl_internal_get__moveSpeedMultiplier();

  constexpr ::GlobalNamespace::__NoteDebris__Pool*& __cordl_internal_get__normalNotesDebrisPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteDebris__Pool*> const& __cordl_internal_get__normalNotesDebrisPool() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NoteDebris>, ::GlobalNamespace::__NoteDebris__Pool*>*& __cordl_internal_get__poolForNoteDebris();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NoteDebris>, ::GlobalNamespace::__NoteDebris__Pool*>*> const&
  __cordl_internal_get__poolForNoteDebris() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__GameplayType, ::GlobalNamespace::__NoteDebris__Pool*>*& __cordl_internal_get__poolForNoteGameplayType();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__GameplayType, ::GlobalNamespace::__NoteDebris__Pool*>*> const&
  __cordl_internal_get__poolForNoteGameplayType() const;

  constexpr float_t const& __cordl_internal_get__rotation() const;

  constexpr float_t& __cordl_internal_get__rotation();

  constexpr void __cordl_internal_set__burstSliderElementNotesDebrisPool(::GlobalNamespace::__NoteDebris__Pool* value);

  constexpr void __cordl_internal_set__burstSliderHeadNotesDebrisPool(::GlobalNamespace::__NoteDebris__Pool* value);

  constexpr void __cordl_internal_set__cutDirMultiplier(float_t value);

  constexpr void __cordl_internal_set__fromCenterSpeed(float_t value);

  constexpr void __cordl_internal_set__moveSpeedMultiplier(float_t value);

  constexpr void __cordl_internal_set__normalNotesDebrisPool(::GlobalNamespace::__NoteDebris__Pool* value);

  constexpr void __cordl_internal_set__poolForNoteDebris(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NoteDebris>, ::GlobalNamespace::__NoteDebris__Pool*>* value);

  constexpr void
  __cordl_internal_set__poolForNoteGameplayType(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__GameplayType, ::GlobalNamespace::__NoteDebris__Pool*>* value);

  constexpr void __cordl_internal_set__rotation(float_t value);

  /// @brief Method .ctor, addr 0x25c5514, size 0x88, virtual false, abstract: false, final false
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

  /// @brief Field _rotation, offset: 0x18, size: 0x4, def value: None
  float_t ____rotation;

  /// @brief Field _cutDirMultiplier, offset: 0x1c, size: 0x4, def value: None
  float_t ____cutDirMultiplier;

  /// @brief Field _fromCenterSpeed, offset: 0x20, size: 0x4, def value: None
  float_t ____fromCenterSpeed;

  /// @brief Field _moveSpeedMultiplier, offset: 0x24, size: 0x4, def value: None
  float_t ____moveSpeedMultiplier;

  /// @brief Field _normalNotesDebrisPool, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__NoteDebris__Pool* ____normalNotesDebrisPool;

  /// @brief Field _burstSliderHeadNotesDebrisPool, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__NoteDebris__Pool* ____burstSliderHeadNotesDebrisPool;

  /// @brief Field _burstSliderElementNotesDebrisPool, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__NoteDebris__Pool* ____burstSliderElementNotesDebrisPool;

  /// @brief Field _poolForNoteGameplayType, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__GameplayType, ::GlobalNamespace::__NoteDebris__Pool*>* ____poolForNoteGameplayType;

  /// @brief Field _poolForNoteDebris, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NoteDebris>, ::GlobalNamespace::__NoteDebris__Pool*>* ____poolForNoteDebris;

  /// @brief Field kLifeTimeOffset offset 0xffffffff size 0x4
  static constexpr float_t kLifeTimeOffset{ 0.05 };

  /// @brief Field kMaxLifeTime offset 0xffffffff size 0x4
  static constexpr float_t kMaxLifeTime{ 2.0 };

  /// @brief Field kMinLifeTime offset 0xffffffff size 0x4
  static constexpr float_t kMinLifeTime{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteDebrisSpawner, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____rotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____cutDirMultiplier) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____fromCenterSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____moveSpeedMultiplier) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____normalNotesDebrisPool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____burstSliderHeadNotesDebrisPool) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____burstSliderElementNotesDebrisPool) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____poolForNoteGameplayType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisSpawner, ____poolForNoteDebris) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteDebrisSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDebrisSpawner*, "", "NoteDebrisSpawner");
