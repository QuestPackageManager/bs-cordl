#pragma once
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
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
class BombNoteController;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class __SliderController__Pool;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class __BurstSliderGameNoteController__Pool;
}
namespace GlobalNamespace {
class __GameNoteController__Pool;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class __BasicBeatmapObjectManager__InitData;
}
namespace GlobalNamespace {
class __ObstacleController__Pool;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
class __BombNoteController__Pool;
}
namespace GlobalNamespace {
struct __SliderController__LengthType;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
class GameNoteController;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class BurstSliderGameNoteController;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
template <typename T> class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class NoteData;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4702))
// CS Name: ::BasicBeatmapObjectManager::InitData*
class CORDL_TYPE __BasicBeatmapObjectManager__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field disappearingArrows, offset 0x10, size 0x1
  __declspec(property(get = __get_disappearingArrows, put = __set_disappearingArrows)) bool disappearingArrows;

  /// @brief Field ghostNotes, offset 0x11, size 0x1
  __declspec(property(get = __get_ghostNotes, put = __set_ghostNotes)) bool ghostNotes;

  /// @brief Field cutAngleTolerance, offset 0x14, size 0x4
  __declspec(property(get = __get_cutAngleTolerance, put = __set_cutAngleTolerance)) float_t cutAngleTolerance;

  /// @brief Field notesUniformScale, offset 0x18, size 0x4
  __declspec(property(get = __get_notesUniformScale, put = __set_notesUniformScale)) float_t notesUniformScale;

  constexpr bool& __get_disappearingArrows();

  constexpr bool const& __get_disappearingArrows() const;

  constexpr void __set_disappearingArrows(bool value);

  constexpr bool& __get_ghostNotes();

  constexpr bool const& __get_ghostNotes() const;

  constexpr void __set_ghostNotes(bool value);

  constexpr float_t& __get_cutAngleTolerance();

  constexpr float_t const& __get_cutAngleTolerance() const;

  constexpr void __set_cutAngleTolerance(float_t value);

  constexpr float_t& __get_notesUniformScale();

  constexpr float_t const& __get_notesUniformScale() const;

  constexpr void __set_notesUniformScale(float_t value);

  static inline ::GlobalNamespace::__BasicBeatmapObjectManager__InitData* New_ctor(bool disappearingArrows, bool ghostNotes, float_t cutAngleTolerance, float_t notesUniformScale);

  /// @brief Method .ctor addr 0x2379a48 size 0x44 virtual false final false
  inline void _ctor(bool disappearingArrows, bool ghostNotes, float_t cutAngleTolerance, float_t notesUniformScale);

  // Ctor Parameters [CppParam { name: "", ty: "__BasicBeatmapObjectManager__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BasicBeatmapObjectManager__InitData(__BasicBeatmapObjectManager__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BasicBeatmapObjectManager__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BasicBeatmapObjectManager__InitData(__BasicBeatmapObjectManager__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BasicBeatmapObjectManager__InitData();

public:
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

} // namespace GlobalNamespace
// Type: ::BasicBeatmapObjectManager
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4716)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 391 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2448))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4703)) CS Name: ::BasicBeatmapObjectManager*
class CORDL_TYPE BasicBeatmapObjectManager : public ::GlobalNamespace::BeatmapObjectManager {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__BasicBeatmapObjectManager__InitData;

  /// @brief Field _firstBasicNoteTime, offset 0x94, size 0x8
  __declspec(property(get = __get__firstBasicNoteTime, put = __set__firstBasicNoteTime))::System::Nullable_1<float_t> _firstBasicNoteTime;

  /// @brief Field _initData, offset 0xa0, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__BasicBeatmapObjectManager__InitData* _initData;

  /// @brief Field _basicGameNotePoolContainer, offset 0xa8, size 0x8
  __declspec(property(get = __get__basicGameNotePoolContainer,
                      put = __set__basicGameNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>* _basicGameNotePoolContainer;

  /// @brief Field _burstSliderHeadGameNotePoolContainer, offset 0xb0, size 0x8
  __declspec(property(get = __get__burstSliderHeadGameNotePoolContainer,
                      put = __set__burstSliderHeadGameNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>* _burstSliderHeadGameNotePoolContainer;

  /// @brief Field _burstSliderGameNotePoolContainer, offset 0xb8, size 0x8
  __declspec(property(get = __get__burstSliderGameNotePoolContainer,
                      put = __set__burstSliderGameNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>* _burstSliderGameNotePoolContainer;

  /// @brief Field _burstSliderFillPoolContainer, offset 0xc0, size 0x8
  __declspec(property(get = __get__burstSliderFillPoolContainer,
                      put = __set__burstSliderFillPoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>* _burstSliderFillPoolContainer;

  /// @brief Field _bombNotePoolContainer, offset 0xc8, size 0x8
  __declspec(property(get = __get__bombNotePoolContainer, put = __set__bombNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>* _bombNotePoolContainer;

  /// @brief Field _obstaclePoolContainer, offset 0xd0, size 0x8
  __declspec(property(get = __get__obstaclePoolContainer, put = __set__obstaclePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>* _obstaclePoolContainer;

  /// @brief Field _sliderNotePoolContainersDictionary, offset 0xd8, size 0x8
  __declspec(property(get = __get__sliderNotePoolContainersDictionary, put = __set__sliderNotePoolContainersDictionary))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::__SliderController__LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::SliderController*>*>* _sliderNotePoolContainersDictionary;

  __declspec(property(get = get_activeObstacleControllers))::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* activeObstacleControllers;

  constexpr ::System::Nullable_1<float_t>& __get__firstBasicNoteTime();

  constexpr ::System::Nullable_1<float_t> const& __get__firstBasicNoteTime() const;

  constexpr void __set__firstBasicNoteTime(::System::Nullable_1<float_t> value);

  constexpr ::GlobalNamespace::__BasicBeatmapObjectManager__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__BasicBeatmapObjectManager__InitData* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*& __get__basicGameNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*> const& __get__basicGameNotePoolContainer() const;

  constexpr void __set__basicGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*& __get__burstSliderHeadGameNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*> const& __get__burstSliderHeadGameNotePoolContainer() const;

  constexpr void __set__burstSliderHeadGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*& __get__burstSliderGameNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*> const& __get__burstSliderGameNotePoolContainer() const;

  constexpr void __set__burstSliderGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*& __get__burstSliderFillPoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*> const& __get__burstSliderFillPoolContainer() const;

  constexpr void __set__burstSliderFillPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*& __get__bombNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*> const& __get__bombNotePoolContainer() const;

  constexpr void __set__bombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*& __get__obstaclePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*> const& __get__obstaclePoolContainer() const;

  constexpr void __set__obstaclePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::SliderController*>*>*&
  __get__sliderNotePoolContainersDictionary();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::SliderController*>*>*> const&
  __get__sliderNotePoolContainersDictionary() const;

  constexpr void __set__sliderNotePoolContainersDictionary(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::SliderController*>*>* value);

  /// @brief Method get_activeObstacleControllers addr 0x2377964 size 0x50 virtual true final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* get_activeObstacleControllers();

  /// @brief Method Init addr 0x23779b4 size 0x5c0 virtual false final false
  inline void Init(::GlobalNamespace::__BasicBeatmapObjectManager__InitData* initData, ::GlobalNamespace::__GameNoteController__Pool* basicGameNotePool,
                   ::GlobalNamespace::__GameNoteController__Pool* burstSliderHeadGameNotePool, ::GlobalNamespace::__BurstSliderGameNoteController__Pool* burstSliderGameNotePool,
                   ::GlobalNamespace::__BurstSliderGameNoteController__Pool* burstSliderFillPool, ::GlobalNamespace::__BombNoteController__Pool* bombNotePool,
                   ::GlobalNamespace::__ObstacleController__Pool* obstaclePool, ::GlobalNamespace::__SliderController__Pool* sliderPools);

  /// @brief Method ProcessObstacleData addr 0x2377f74 size 0xf4 virtual true final false
  inline void ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData, float_t rotation);

  /// @brief Method DespawnInternal addr 0x2378200 size 0x58 virtual true final false
  inline void DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method ProcessNoteData addr 0x2378258 size 0x3f0 virtual true final false
  inline void ProcessNoteData(::GlobalNamespace::NoteData* noteData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation,
                              bool forceIsFirstNoteBehaviour);

  /// @brief Method DespawnInternal addr 0x2378e2c size 0x1f4 virtual true final false
  inline void DespawnInternal(::GlobalNamespace::NoteController* noteController);

  /// @brief Method ProcessSliderData addr 0x2379020 size 0x244 virtual true final false
  inline void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation);

  /// @brief Method DespawnInternal addr 0x237992c size 0x9c virtual true final false
  inline void DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController);

  static inline ::GlobalNamespace::BasicBeatmapObjectManager* New_ctor();

  /// @brief Method .ctor addr 0x23799c8 size 0x4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapObjectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicBeatmapObjectManager(BasicBeatmapObjectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapObjectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicBeatmapObjectManager(BasicBeatmapObjectManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicBeatmapObjectManager();

public:
  /// @brief Field _firstBasicNoteTime, offset: 0x94, size: 0x8, def value: None
  ::System::Nullable_1<float_t> ____firstBasicNoteTime;

  /// @brief Field _initData, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::__BasicBeatmapObjectManager__InitData* ____initData;

  /// @brief Field _basicGameNotePoolContainer, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>* ____basicGameNotePoolContainer;

  /// @brief Field _burstSliderHeadGameNotePoolContainer, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>* ____burstSliderHeadGameNotePoolContainer;

  /// @brief Field _burstSliderGameNotePoolContainer, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>* ____burstSliderGameNotePoolContainer;

  /// @brief Field _burstSliderFillPoolContainer, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>* ____burstSliderFillPoolContainer;

  /// @brief Field _bombNotePoolContainer, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>* ____bombNotePoolContainer;

  /// @brief Field _obstaclePoolContainer, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>* ____obstaclePoolContainer;

  /// @brief Field _sliderNotePoolContainersDictionary, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::SliderController*>*>*
      ____sliderNotePoolContainersDictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicBeatmapObjectManager, 0xe0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasicBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicBeatmapObjectManager*, "", "BasicBeatmapObjectManager");
NEED_NO_BOX(::GlobalNamespace::__BasicBeatmapObjectManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BasicBeatmapObjectManager__InitData*, "", "BasicBeatmapObjectManager/InitData");
