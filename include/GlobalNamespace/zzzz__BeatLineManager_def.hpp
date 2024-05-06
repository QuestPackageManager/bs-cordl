#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatLineManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatLineManager)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatLine;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class __BeatLine__Pool;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatLineManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatLineManager);
// Type: ::BeatLineManager
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatLineManager*
class CORDL_TYPE BeatLineManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _activeBeatLines, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__activeBeatLines,
                      put = __cordl_internal_set__activeBeatLines))::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector4, ::UnityW<::GlobalNamespace::BeatLine>>* _activeBeatLines;

  /// @brief Field _audioTimeSyncController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController,
                      put = __cordl_internal_set__audioTimeSyncController))::UnityW<::GlobalNamespace::AudioTimeSyncController> _audioTimeSyncController;

  /// @brief Field _beatLinePool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatLinePool, put = __cordl_internal_set__beatLinePool))::GlobalNamespace::__BeatLine__Pool* _beatLinePool;

  /// @brief Field _beatmapObjectManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _isMidRotationValid, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__isMidRotationValid, put = __cordl_internal_set__isMidRotationValid)) bool _isMidRotationValid;

  /// @brief Field _linesYPosition, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__linesYPosition, put = __cordl_internal_set__linesYPosition)) float_t _linesYPosition;

  /// @brief Field _midRotation, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__midRotation, put = __cordl_internal_set__midRotation)) float_t _midRotation;

  /// @brief Field _removeBeatLineKeyList, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__removeBeatLineKeyList,
                      put = __cordl_internal_set__removeBeatLineKeyList))::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _removeBeatLineKeyList;

  /// @brief Field _rotationRange, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationRange, put = __cordl_internal_set__rotationRange)) float_t _rotationRange;

  __declspec(property(get = get_isMidRotationValid)) bool isMidRotationValid;

  __declspec(property(get = get_midRotation)) float_t midRotation;

  __declspec(property(get = get_rotationRange)) float_t rotationRange;

  /// @brief Method HandleNoteWasSpawned, addr 0x260e7d0, size 0x1a0, virtual false, abstract: false, final false
  inline void HandleNoteWasSpawned(::GlobalNamespace::NoteController* noteController);

  static inline ::GlobalNamespace::BeatLineManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x260e218, size 0x8c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x260e18c, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x260e2a4, size 0x52c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector4, ::UnityW<::GlobalNamespace::BeatLine>>*& __cordl_internal_get__activeBeatLines();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector4, ::UnityW<::GlobalNamespace::BeatLine>>*> const&
  __cordl_internal_get__activeBeatLines() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::GlobalNamespace::__BeatLine__Pool*& __cordl_internal_get__beatLinePool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatLine__Pool*> const& __cordl_internal_get__beatLinePool() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr bool const& __cordl_internal_get__isMidRotationValid() const;

  constexpr bool& __cordl_internal_get__isMidRotationValid();

  constexpr float_t const& __cordl_internal_get__linesYPosition() const;

  constexpr float_t& __cordl_internal_get__linesYPosition();

  constexpr float_t const& __cordl_internal_get__midRotation() const;

  constexpr float_t& __cordl_internal_get__midRotation();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get__removeBeatLineKeyList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> const& __cordl_internal_get__removeBeatLineKeyList() const;

  constexpr float_t const& __cordl_internal_get__rotationRange() const;

  constexpr float_t& __cordl_internal_get__rotationRange();

  constexpr void __cordl_internal_set__activeBeatLines(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector4, ::UnityW<::GlobalNamespace::BeatLine>>* value);

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__beatLinePool(::GlobalNamespace::__BeatLine__Pool* value);

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__isMidRotationValid(bool value);

  constexpr void __cordl_internal_set__linesYPosition(float_t value);

  constexpr void __cordl_internal_set__midRotation(float_t value);

  constexpr void __cordl_internal_set__removeBeatLineKeyList(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  constexpr void __cordl_internal_set__rotationRange(float_t value);

  /// @brief Method .ctor, addr 0x260e970, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isMidRotationValid, addr 0x260e174, size 0x8, virtual false, abstract: false, final false
  inline bool get_isMidRotationValid();

  /// @brief Method get_midRotation, addr 0x260e17c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_midRotation();

  /// @brief Method get_rotationRange, addr 0x260e184, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rotationRange();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatLineManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatLineManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatLineManager(BeatLineManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatLineManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatLineManager(BeatLineManager const&) = delete;

  /// @brief Field _linesYPosition, offset: 0x18, size: 0x4, def value: None
  float_t ____linesYPosition;

  /// @brief Field _beatmapObjectManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _beatLinePool, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__BeatLine__Pool* ____beatLinePool;

  /// @brief Field _audioTimeSyncController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _activeBeatLines, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector4, ::UnityW<::GlobalNamespace::BeatLine>>* ____activeBeatLines;

  /// @brief Field _removeBeatLineKeyList, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* ____removeBeatLineKeyList;

  /// @brief Field _isMidRotationValid, offset: 0x48, size: 0x1, def value: None
  bool ____isMidRotationValid;

  /// @brief Field _midRotation, offset: 0x4c, size: 0x4, def value: None
  float_t ____midRotation;

  /// @brief Field _rotationRange, offset: 0x50, size: 0x4, def value: None
  float_t ____rotationRange;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatLineManager, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLineManager, ____linesYPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLineManager, ____beatmapObjectManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLineManager, ____beatLinePool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLineManager, ____audioTimeSyncController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLineManager, ____activeBeatLines) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLineManager, ____removeBeatLineKeyList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLineManager, ____isMidRotationValid) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLineManager, ____midRotation) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLineManager, ____rotationRange) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatLineManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatLineManager*, "", "BeatLineManager");
