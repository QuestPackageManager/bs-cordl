#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteDebrisSpawner)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class NoteDebris;
}
namespace GlobalNamespace {
class __NoteDebris__Pool;
}
namespace GlobalNamespace {
struct __NoteData__GameplayType;
}
namespace GlobalNamespace {
class INoteDebrisDidFinishEvent;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct ColorType;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5013))
// CS Name: ::NoteDebrisSpawner*
class CORDL_TYPE NoteDebrisSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _rotation, offset 0x18, size 0x4
  __declspec(property(get = __get__rotation, put = __set__rotation)) float_t _rotation;

  /// @brief Field _cutDirMultiplier, offset 0x1c, size 0x4
  __declspec(property(get = __get__cutDirMultiplier, put = __set__cutDirMultiplier)) float_t _cutDirMultiplier;

  /// @brief Field _fromCenterSpeed, offset 0x20, size 0x4
  __declspec(property(get = __get__fromCenterSpeed, put = __set__fromCenterSpeed)) float_t _fromCenterSpeed;

  /// @brief Field _moveSpeedMultiplier, offset 0x24, size 0x4
  __declspec(property(get = __get__moveSpeedMultiplier, put = __set__moveSpeedMultiplier)) float_t _moveSpeedMultiplier;

  /// @brief Field _normalNotesDebrisPool, offset 0x28, size 0x8
  __declspec(property(get = __get__normalNotesDebrisPool, put = __set__normalNotesDebrisPool))::GlobalNamespace::__NoteDebris__Pool* _normalNotesDebrisPool;

  /// @brief Field _burstSliderHeadNotesDebrisPool, offset 0x30, size 0x8
  __declspec(property(get = __get__burstSliderHeadNotesDebrisPool, put = __set__burstSliderHeadNotesDebrisPool))::GlobalNamespace::__NoteDebris__Pool* _burstSliderHeadNotesDebrisPool;

  /// @brief Field _burstSliderElementNotesDebrisPool, offset 0x38, size 0x8
  __declspec(property(get = __get__burstSliderElementNotesDebrisPool, put = __set__burstSliderElementNotesDebrisPool))::GlobalNamespace::__NoteDebris__Pool* _burstSliderElementNotesDebrisPool;

  /// @brief Field _poolForNoteGameplayType, offset 0x40, size 0x8
  __declspec(property(
      get = __get__poolForNoteGameplayType,
      put = __set__poolForNoteGameplayType))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__GameplayType, ::GlobalNamespace::__NoteDebris__Pool*>* _poolForNoteGameplayType;

  /// @brief Field _poolForNoteDebris, offset 0x48, size 0x8
  __declspec(property(get = __get__poolForNoteDebris,
                      put = __set__poolForNoteDebris))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteDebris*, ::GlobalNamespace::__NoteDebris__Pool*>* _poolForNoteDebris;

  /// @brief Convert operator to "::GlobalNamespace::INoteDebrisDidFinishEvent"
  constexpr operator ::GlobalNamespace::INoteDebrisDidFinishEvent*() noexcept;

  constexpr float_t& __get__rotation();

  constexpr float_t const& __get__rotation() const;

  constexpr void __set__rotation(float_t value);

  constexpr float_t& __get__cutDirMultiplier();

  constexpr float_t const& __get__cutDirMultiplier() const;

  constexpr void __set__cutDirMultiplier(float_t value);

  constexpr float_t& __get__fromCenterSpeed();

  constexpr float_t const& __get__fromCenterSpeed() const;

  constexpr void __set__fromCenterSpeed(float_t value);

  constexpr float_t& __get__moveSpeedMultiplier();

  constexpr float_t const& __get__moveSpeedMultiplier() const;

  constexpr void __set__moveSpeedMultiplier(float_t value);

  constexpr ::GlobalNamespace::__NoteDebris__Pool*& __get__normalNotesDebrisPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteDebris__Pool*> const& __get__normalNotesDebrisPool() const;

  constexpr void __set__normalNotesDebrisPool(::GlobalNamespace::__NoteDebris__Pool* value);

  constexpr ::GlobalNamespace::__NoteDebris__Pool*& __get__burstSliderHeadNotesDebrisPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteDebris__Pool*> const& __get__burstSliderHeadNotesDebrisPool() const;

  constexpr void __set__burstSliderHeadNotesDebrisPool(::GlobalNamespace::__NoteDebris__Pool* value);

  constexpr ::GlobalNamespace::__NoteDebris__Pool*& __get__burstSliderElementNotesDebrisPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteDebris__Pool*> const& __get__burstSliderElementNotesDebrisPool() const;

  constexpr void __set__burstSliderElementNotesDebrisPool(::GlobalNamespace::__NoteDebris__Pool* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__GameplayType, ::GlobalNamespace::__NoteDebris__Pool*>*& __get__poolForNoteGameplayType();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__GameplayType, ::GlobalNamespace::__NoteDebris__Pool*>*> const&
  __get__poolForNoteGameplayType() const;

  constexpr void __set__poolForNoteGameplayType(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__GameplayType, ::GlobalNamespace::__NoteDebris__Pool*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteDebris*, ::GlobalNamespace::__NoteDebris__Pool*>*& __get__poolForNoteDebris();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteDebris*, ::GlobalNamespace::__NoteDebris__Pool*>*> const&
  __get__poolForNoteDebris() const;

  constexpr void __set__poolForNoteDebris(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteDebris*, ::GlobalNamespace::__NoteDebris__Pool*>* value);

  /// @brief Method Start addr 0x226d918 size 0xc4 virtual false final false
  inline void Start();

  /// @brief Method SpawnDebris addr 0x226cdc8 size 0x890 virtual false final false
  inline void SpawnDebris(::GlobalNamespace::__NoteData__GameplayType noteGameplayType, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal, float_t saberSpeed,
                          ::UnityEngine::Vector3 saberDir, ::UnityEngine::Vector3 notePos, ::UnityEngine::Quaternion noteRotation, ::UnityEngine::Vector3 noteScale,
                          ::GlobalNamespace::ColorType colorType, float_t timeToNextColorNote, ::UnityEngine::Vector3 moveVec);

  /// @brief Method HandleNoteDebrisDidFinish addr 0x226dae8 size 0xbc virtual true final true
  inline void HandleNoteDebrisDidFinish(::GlobalNamespace::NoteDebris* noteDebris);

  /// @brief Method SpawnNoteDebris addr 0x226d9dc size 0x10c virtual false final false
  inline void SpawnNoteDebris(::GlobalNamespace::__NoteData__GameplayType noteGameplayType, ByRef<::GlobalNamespace::NoteDebris*> debris0, ByRef<::GlobalNamespace::NoteDebris*> debris1);

  /// @brief Method DespawnNoteDebris addr 0x226dba4 size 0xa4 virtual false final false
  inline void DespawnNoteDebris(::GlobalNamespace::NoteDebris* noteDebris);

  static inline ::GlobalNamespace::NoteDebrisSpawner* New_ctor();

  /// @brief Method .ctor addr 0x226dc48 size 0x88 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteDebrisSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteDebrisSpawner(NoteDebrisSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteDebrisSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteDebrisSpawner(NoteDebrisSpawner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteDebrisSpawner();

public:
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
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteDebris*, ::GlobalNamespace::__NoteDebris__Pool*>* ____poolForNoteDebris;

  /// @brief Field kMinLifeTime offset 0xffffffff size 0x4
  static constexpr float_t kMinLifeTime{ 0.2 };

  /// @brief Field kMaxLifeTime offset 0xffffffff size 0x4
  static constexpr float_t kMaxLifeTime{ 2.0 };

  /// @brief Field kLifeTimeOffset offset 0xffffffff size 0x4
  static constexpr float_t kLifeTimeOffset{ 0.05 };

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
