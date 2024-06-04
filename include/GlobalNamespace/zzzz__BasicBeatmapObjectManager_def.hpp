#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicBeatmapObjectManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BasicBeatmapObjectManager)
namespace GlobalNamespace {
class BombNoteController;
}
namespace GlobalNamespace {
class BurstSliderGameNoteController;
}
namespace GlobalNamespace {
class GameNoteController;
}
namespace GlobalNamespace {
template <typename T> class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class __BasicBeatmapObjectManager__InitData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
class __BombNoteController__Pool;
}
namespace GlobalNamespace {
class __BurstSliderGameNoteController__Pool;
}
namespace GlobalNamespace {
class __GameNoteController__Pool;
}
namespace GlobalNamespace {
class __ObstacleController__Pool;
}
namespace GlobalNamespace {
struct __SliderController__LengthType;
}
namespace GlobalNamespace {
class __SliderController__Pool;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicBeatmapObjectManager;
}
namespace GlobalNamespace {
class __BasicBeatmapObjectManager__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BasicBeatmapObjectManager);
MARK_REF_PTR_T(::GlobalNamespace::__BasicBeatmapObjectManager__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BasicBeatmapObjectManager::InitData*
class CORDL_TYPE __BasicBeatmapObjectManager__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cutAngleTolerance, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_cutAngleTolerance, put = __cordl_internal_set_cutAngleTolerance)) float_t cutAngleTolerance;

  /// @brief Field disappearingArrows, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_disappearingArrows, put = __cordl_internal_set_disappearingArrows)) bool disappearingArrows;

  /// @brief Field ghostNotes, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_ghostNotes, put = __cordl_internal_set_ghostNotes)) bool ghostNotes;

  /// @brief Field notesUniformScale, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_notesUniformScale, put = __cordl_internal_set_notesUniformScale)) float_t notesUniformScale;

  static inline ::GlobalNamespace::__BasicBeatmapObjectManager__InitData* New_ctor(bool disappearingArrows, bool ghostNotes, float_t cutAngleTolerance, float_t notesUniformScale);

  constexpr float_t const& __cordl_internal_get_cutAngleTolerance() const;

  constexpr float_t& __cordl_internal_get_cutAngleTolerance();

  constexpr bool const& __cordl_internal_get_disappearingArrows() const;

  constexpr bool& __cordl_internal_get_disappearingArrows();

  constexpr bool const& __cordl_internal_get_ghostNotes() const;

  constexpr bool& __cordl_internal_get_ghostNotes();

  constexpr float_t const& __cordl_internal_get_notesUniformScale() const;

  constexpr float_t& __cordl_internal_get_notesUniformScale();

  constexpr void __cordl_internal_set_cutAngleTolerance(float_t value);

  constexpr void __cordl_internal_set_disappearingArrows(bool value);

  constexpr void __cordl_internal_set_ghostNotes(bool value);

  constexpr void __cordl_internal_set_notesUniformScale(float_t value);

  /// @brief Method .ctor, addr 0x262764c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(bool disappearingArrows, bool ghostNotes, float_t cutAngleTolerance, float_t notesUniformScale);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BasicBeatmapObjectManager__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BasicBeatmapObjectManager__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BasicBeatmapObjectManager__InitData(__BasicBeatmapObjectManager__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BasicBeatmapObjectManager__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BasicBeatmapObjectManager__InitData(__BasicBeatmapObjectManager__InitData const&) = delete;

  /// @brief Field disappearingArrows, offset: 0x10, size: 0x1, def value: None
  bool ___disappearingArrows;

  /// @brief Field ghostNotes, offset: 0x11, size: 0x1, def value: None
  bool ___ghostNotes;

  /// @brief Field cutAngleTolerance, offset: 0x14, size: 0x4, def value: None
  float_t ___cutAngleTolerance;

  /// @brief Field notesUniformScale, offset: 0x18, size: 0x4, def value: None
  float_t ___notesUniformScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BasicBeatmapObjectManager__InitData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasicBeatmapObjectManager__InitData, ___disappearingArrows) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasicBeatmapObjectManager__InitData, ___ghostNotes) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasicBeatmapObjectManager__InitData, ___cutAngleTolerance) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasicBeatmapObjectManager__InitData, ___notesUniformScale) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BasicBeatmapObjectManager
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BasicBeatmapObjectManager*
class CORDL_TYPE BasicBeatmapObjectManager : public ::GlobalNamespace::BeatmapObjectManager {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__BasicBeatmapObjectManager__InitData;

  /// @brief Field _basicGameNotePoolContainer, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__basicGameNotePoolContainer,
                      put = __cordl_internal_set__basicGameNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>* _basicGameNotePoolContainer;

  /// @brief Field _bombNotePoolContainer, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__bombNotePoolContainer,
                      put = __cordl_internal_set__bombNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>* _bombNotePoolContainer;

  /// @brief Field _burstSliderGameNotePoolContainer, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderGameNotePoolContainer, put = __cordl_internal_set__burstSliderGameNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<
      ::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>* _burstSliderGameNotePoolContainer;

  /// @brief Field _burstSliderHeadGameNotePoolContainer, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderHeadGameNotePoolContainer, put = __cordl_internal_set__burstSliderHeadGameNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<
      ::UnityW<::GlobalNamespace::GameNoteController>>* _burstSliderHeadGameNotePoolContainer;

  /// @brief Field _firstBasicNoteTime, offset 0x9c, size 0x8
  __declspec(property(get = __cordl_internal_get__firstBasicNoteTime, put = __cordl_internal_set__firstBasicNoteTime))::System::Nullable_1<float_t> _firstBasicNoteTime;

  /// @brief Field _initData, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__BasicBeatmapObjectManager__InitData* _initData;

  /// @brief Field _obstaclePoolContainer, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__obstaclePoolContainer,
                      put = __cordl_internal_set__obstaclePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>* _obstaclePoolContainer;

  /// @brief Field _sliderNotePoolContainersDictionary, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderNotePoolContainersDictionary, put = __cordl_internal_set__sliderNotePoolContainersDictionary))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::__SliderController__LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::SliderController>>*>* _sliderNotePoolContainersDictionary;

  __declspec(property(get = get_activeObstacleControllers))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* activeObstacleControllers;

  /// @brief Method DespawnInternal, addr 0x2627174, size 0x1e4, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::NoteController* noteController);

  /// @brief Method DespawnInternal, addr 0x2626d88, size 0x58, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method DespawnInternal, addr 0x26275a8, size 0x9c, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController);

  /// @brief Method Init, addr 0x26266f4, size 0x59c, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::__BasicBeatmapObjectManager__InitData* initData, ::GlobalNamespace::__GameNoteController__Pool* basicGameNotePool,
                   ::GlobalNamespace::__GameNoteController__Pool* burstSliderHeadGameNotePool, ::GlobalNamespace::__BurstSliderGameNoteController__Pool* burstSliderGameNotePool,
                   ::GlobalNamespace::__BombNoteController__Pool* bombNotePool, ::GlobalNamespace::__ObstacleController__Pool* obstaclePool, ::GlobalNamespace::__SliderController__Pool* sliderPools);

  static inline ::GlobalNamespace::BasicBeatmapObjectManager* New_ctor();

  /// @brief Method ProcessNoteData, addr 0x2626de0, size 0x394, virtual true, abstract: false, final false
  inline void ProcessNoteData(::GlobalNamespace::NoteData* noteData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation,
                              bool forceIsFirstNoteBehaviour);

  /// @brief Method ProcessObstacleData, addr 0x2626c90, size 0xf8, virtual true, abstract: false, final false
  inline void ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData, float_t rotation);

  /// @brief Method ProcessSliderData, addr 0x2627358, size 0x250, virtual true, abstract: false, final false
  inline void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>*& __cordl_internal_get__basicGameNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>*> const&
  __cordl_internal_get__basicGameNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>*& __cordl_internal_get__bombNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>*> const& __cordl_internal_get__bombNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*& __cordl_internal_get__burstSliderGameNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*> const&
  __cordl_internal_get__burstSliderGameNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>*& __cordl_internal_get__burstSliderHeadGameNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>*> const&
  __cordl_internal_get__burstSliderHeadGameNotePoolContainer() const;

  constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get__firstBasicNoteTime() const;

  constexpr ::System::Nullable_1<float_t>& __cordl_internal_get__firstBasicNoteTime();

  constexpr ::GlobalNamespace::__BasicBeatmapObjectManager__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get__obstaclePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const& __cordl_internal_get__obstaclePoolContainer() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::SliderController>>*>*&
  __cordl_internal_get__sliderNotePoolContainersDictionary();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::SliderController>>*>*> const&
  __cordl_internal_get__sliderNotePoolContainersDictionary() const;

  constexpr void __cordl_internal_set__basicGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>* value);

  constexpr void __cordl_internal_set__bombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>* value);

  constexpr void __cordl_internal_set__burstSliderGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>* value);

  constexpr void __cordl_internal_set__burstSliderHeadGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>* value);

  constexpr void __cordl_internal_set__firstBasicNoteTime(::System::Nullable_1<float_t> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__BasicBeatmapObjectManager__InitData* value);

  constexpr void __cordl_internal_set__obstaclePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  constexpr void __cordl_internal_set__sliderNotePoolContainersDictionary(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::SliderController>>*>* value);

  /// @brief Method .ctor, addr 0x2627644, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeObstacleControllers, addr 0x26266a4, size 0x50, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* get_activeObstacleControllers();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicBeatmapObjectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapObjectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicBeatmapObjectManager(BasicBeatmapObjectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapObjectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicBeatmapObjectManager(BasicBeatmapObjectManager const&) = delete;

  /// @brief Field _firstBasicNoteTime, offset: 0x9c, size: 0x8, def value: None
  ::System::Nullable_1<float_t> ____firstBasicNoteTime;

  /// @brief Field _initData, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::__BasicBeatmapObjectManager__InitData* ____initData;

  /// @brief Field _basicGameNotePoolContainer, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>* ____basicGameNotePoolContainer;

  /// @brief Field _burstSliderHeadGameNotePoolContainer, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>* ____burstSliderHeadGameNotePoolContainer;

  /// @brief Field _burstSliderGameNotePoolContainer, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>* ____burstSliderGameNotePoolContainer;

  /// @brief Field _bombNotePoolContainer, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>* ____bombNotePoolContainer;

  /// @brief Field _obstaclePoolContainer, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>* ____obstaclePoolContainer;

  /// @brief Field _sliderNotePoolContainersDictionary, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::SliderController>>*>*
      ____sliderNotePoolContainersDictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicBeatmapObjectManager, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____firstBasicNoteTime) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____initData) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____basicGameNotePoolContainer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____burstSliderHeadGameNotePoolContainer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____burstSliderGameNotePoolContainer) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____bombNotePoolContainer) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____obstaclePoolContainer) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____sliderNotePoolContainersDictionary) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasicBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicBeatmapObjectManager*, "", "BasicBeatmapObjectManager");
NEED_NO_BOX(::GlobalNamespace::__BasicBeatmapObjectManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BasicBeatmapObjectManager__InitData*, "", "BasicBeatmapObjectManager/InitData");
