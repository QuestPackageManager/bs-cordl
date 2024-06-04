#pragma once
// IWYU pragma private; include "GlobalNamespace/CutScoreBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CutScoreBuffer)
namespace GlobalNamespace {
class ICutScoreBufferDidChangeReceiver;
}
namespace GlobalNamespace {
class ICutScoreBufferDidFinishReceiver;
}
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
}
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidChangeReceiver;
}
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidFinishReceiver;
}
namespace GlobalNamespace {
class ISaberSwingRatingCounter;
}
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class SaberSwingRatingCounter;
}
namespace GlobalNamespace {
class __ScoreModel__NoteScoreDefinition;
}
// Forward declare root types
namespace GlobalNamespace {
class CutScoreBuffer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CutScoreBuffer);
// Type: ::CutScoreBuffer
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CutScoreBuffer*
class CORDL_TYPE CutScoreBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _afterCutScore, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get__afterCutScore, put = __cordl_internal_set__afterCutScore)) int32_t _afterCutScore;

  /// @brief Field _beforeCutScore, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get__beforeCutScore, put = __cordl_internal_set__beforeCutScore)) int32_t _beforeCutScore;

  /// @brief Field _centerDistanceCutScore, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get__centerDistanceCutScore, put = __cordl_internal_set__centerDistanceCutScore)) int32_t _centerDistanceCutScore;

  /// @brief Field _didChangeEvent, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__didChangeEvent,
                      put = __cordl_internal_set__didChangeEvent))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>* _didChangeEvent;

  /// @brief Field _didFinishEvent, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__didFinishEvent,
                      put = __cordl_internal_set__didFinishEvent))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>* _didFinishEvent;

  /// @brief Field _initialized, offset 0xbc, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _isFinished, offset 0xbd, size 0x1
  __declspec(property(get = __cordl_internal_get__isFinished, put = __cordl_internal_set__isFinished)) bool _isFinished;

  /// @brief Field _noteCutInfo, offset 0x18, size 0x90
  __declspec(property(get = __cordl_internal_get__noteCutInfo, put = __cordl_internal_set__noteCutInfo))::GlobalNamespace::NoteCutInfo _noteCutInfo;

  /// @brief Field _noteScoreDefinition, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__noteScoreDefinition, put = __cordl_internal_set__noteScoreDefinition))::GlobalNamespace::__ScoreModel__NoteScoreDefinition* _noteScoreDefinition;

  /// @brief Field _saberSwingRatingCounter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__saberSwingRatingCounter, put = __cordl_internal_set__saberSwingRatingCounter))::GlobalNamespace::SaberSwingRatingCounter* _saberSwingRatingCounter;

  __declspec(property(get = get_afterCutScore)) int32_t afterCutScore;

  __declspec(property(get = get_afterCutSwingRating)) float_t afterCutSwingRating;

  __declspec(property(get = get_beforeCutScore)) int32_t beforeCutScore;

  __declspec(property(get = get_beforeCutSwingRating)) float_t beforeCutSwingRating;

  __declspec(property(get = get_centerDistanceCutScore)) int32_t centerDistanceCutScore;

  __declspec(property(get = get_cutScore)) int32_t cutScore;

  __declspec(property(get = get_executionOrder)) int32_t executionOrder;

  __declspec(property(get = get_isFinished)) bool isFinished;

  __declspec(property(get = get_maxPossibleCutScore)) int32_t maxPossibleCutScore;

  __declspec(property(get = get_noteCutInfo))::GlobalNamespace::NoteCutInfo noteCutInfo;

  __declspec(property(get = get_noteScoreDefinition))::GlobalNamespace::__ScoreModel__NoteScoreDefinition* noteScoreDefinition;

  /// @brief Convert operator to "::GlobalNamespace::IReadonlyCutScoreBuffer"
  constexpr operator ::GlobalNamespace::IReadonlyCutScoreBuffer*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver"
  constexpr operator ::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver"
  constexpr operator ::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*() noexcept;

  /// @brief Method HandleSaberSwingRatingCounterDidChange, addr 0x273e2e0, size 0x1d4, virtual true, abstract: false, final true
  inline void HandleSaberSwingRatingCounterDidChange(::GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter, float_t rating);

  /// @brief Method HandleSaberSwingRatingCounterDidFinish, addr 0x273e4b4, size 0x2b8, virtual true, abstract: false, final true
  inline void HandleSaberSwingRatingCounterDidFinish(::GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter);

  /// @brief Method Init, addr 0x273de74, size 0x264, virtual false, abstract: false, final false
  inline bool Init(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  static inline ::GlobalNamespace::CutScoreBuffer* New_ctor();

  /// @brief Method RefreshScores, addr 0x273e0d8, size 0x208, virtual false, abstract: false, final false
  inline void RefreshScores();

  /// @brief Method RegisterDidChangeReceiver, addr 0x273dd14, size 0x58, virtual true, abstract: false, final true
  inline void RegisterDidChangeReceiver(::GlobalNamespace::ICutScoreBufferDidChangeReceiver* receiver);

  /// @brief Method RegisterDidFinishReceiver, addr 0x273dd6c, size 0x58, virtual true, abstract: false, final true
  inline void RegisterDidFinishReceiver(::GlobalNamespace::ICutScoreBufferDidFinishReceiver* receiver);

  /// @brief Method UnregisterDidChangeReceiver, addr 0x273ddc4, size 0x58, virtual true, abstract: false, final true
  inline void UnregisterDidChangeReceiver(::GlobalNamespace::ICutScoreBufferDidChangeReceiver* receiver);

  /// @brief Method UnregisterDidFinishReceiver, addr 0x273de1c, size 0x58, virtual true, abstract: false, final true
  inline void UnregisterDidFinishReceiver(::GlobalNamespace::ICutScoreBufferDidFinishReceiver* receiver);

  constexpr int32_t const& __cordl_internal_get__afterCutScore() const;

  constexpr int32_t& __cordl_internal_get__afterCutScore();

  constexpr int32_t const& __cordl_internal_get__beforeCutScore() const;

  constexpr int32_t& __cordl_internal_get__beforeCutScore();

  constexpr int32_t const& __cordl_internal_get__centerDistanceCutScore() const;

  constexpr int32_t& __cordl_internal_get__centerDistanceCutScore();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>*& __cordl_internal_get__didChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>*> const& __cordl_internal_get__didChangeEvent() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>*& __cordl_internal_get__didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>*> const& __cordl_internal_get__didFinishEvent() const;

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr bool const& __cordl_internal_get__isFinished() const;

  constexpr bool& __cordl_internal_get__isFinished();

  constexpr ::GlobalNamespace::NoteCutInfo const& __cordl_internal_get__noteCutInfo() const;

  constexpr ::GlobalNamespace::NoteCutInfo& __cordl_internal_get__noteCutInfo();

  constexpr ::GlobalNamespace::__ScoreModel__NoteScoreDefinition*& __cordl_internal_get__noteScoreDefinition();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ScoreModel__NoteScoreDefinition*> const& __cordl_internal_get__noteScoreDefinition() const;

  constexpr ::GlobalNamespace::SaberSwingRatingCounter*& __cordl_internal_get__saberSwingRatingCounter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberSwingRatingCounter*> const& __cordl_internal_get__saberSwingRatingCounter() const;

  constexpr void __cordl_internal_set__afterCutScore(int32_t value);

  constexpr void __cordl_internal_set__beforeCutScore(int32_t value);

  constexpr void __cordl_internal_set__centerDistanceCutScore(int32_t value);

  constexpr void __cordl_internal_set__didChangeEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>* value);

  constexpr void __cordl_internal_set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>* value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__isFinished(bool value);

  constexpr void __cordl_internal_set__noteCutInfo(::GlobalNamespace::NoteCutInfo value);

  constexpr void __cordl_internal_set__noteScoreDefinition(::GlobalNamespace::__ScoreModel__NoteScoreDefinition* value);

  constexpr void __cordl_internal_set__saberSwingRatingCounter(::GlobalNamespace::SaberSwingRatingCounter* value);

  /// @brief Method .ctor, addr 0x273e76c, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_afterCutScore, addr 0x273dcbc, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_afterCutScore();

  /// @brief Method get_afterCutSwingRating, addr 0x273dcf8, size 0x1c, virtual true, abstract: false, final true
  inline float_t get_afterCutSwingRating();

  /// @brief Method get_beforeCutScore, addr 0x273dcac, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_beforeCutScore();

  /// @brief Method get_beforeCutSwingRating, addr 0x273dcdc, size 0x1c, virtual true, abstract: false, final true
  inline float_t get_beforeCutSwingRating();

  /// @brief Method get_centerDistanceCutScore, addr 0x273dcb4, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_centerDistanceCutScore();

  /// @brief Method get_cutScore, addr 0x273dc7c, size 0x30, virtual true, abstract: false, final true
  inline int32_t get_cutScore();

  /// @brief Method get_executionOrder, addr 0x273dc3c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_executionOrder();

  /// @brief Method get_isFinished, addr 0x273dc74, size 0x8, virtual true, abstract: false, final true
  inline bool get_isFinished();

  /// @brief Method get_maxPossibleCutScore, addr 0x273dc58, size 0x1c, virtual true, abstract: false, final true
  inline int32_t get_maxPossibleCutScore();

  /// @brief Method get_noteCutInfo, addr 0x273dccc, size 0x10, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NoteCutInfo get_noteCutInfo();

  /// @brief Method get_noteScoreDefinition, addr 0x273dcc4, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__ScoreModel__NoteScoreDefinition* get_noteScoreDefinition();

  /// @brief Convert to "::GlobalNamespace::IReadonlyCutScoreBuffer"
  constexpr ::GlobalNamespace::IReadonlyCutScoreBuffer* i___GlobalNamespace__IReadonlyCutScoreBuffer() noexcept;

  /// @brief Convert to "::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver"
  constexpr ::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver* i___GlobalNamespace__ISaberSwingRatingCounterDidChangeReceiver() noexcept;

  /// @brief Convert to "::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver"
  constexpr ::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* i___GlobalNamespace__ISaberSwingRatingCounterDidFinishReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CutScoreBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CutScoreBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CutScoreBuffer(CutScoreBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CutScoreBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CutScoreBuffer(CutScoreBuffer const&) = delete;

  /// @brief Field _saberSwingRatingCounter, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::SaberSwingRatingCounter* ____saberSwingRatingCounter;

  /// @brief Field _noteCutInfo, offset: 0x18, size: 0x90, def value: None
  ::GlobalNamespace::NoteCutInfo ____noteCutInfo;

  /// @brief Field _noteScoreDefinition, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::__ScoreModel__NoteScoreDefinition* ____noteScoreDefinition;

  /// @brief Field _afterCutScore, offset: 0xb0, size: 0x4, def value: None
  int32_t ____afterCutScore;

  /// @brief Field _beforeCutScore, offset: 0xb4, size: 0x4, def value: None
  int32_t ____beforeCutScore;

  /// @brief Field _centerDistanceCutScore, offset: 0xb8, size: 0x4, def value: None
  int32_t ____centerDistanceCutScore;

  /// @brief Field _initialized, offset: 0xbc, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _isFinished, offset: 0xbd, size: 0x1, def value: None
  bool ____isFinished;

  /// @brief Field _didFinishEvent, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>* ____didFinishEvent;

  /// @brief Field _didChangeEvent, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>* ____didChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CutScoreBuffer, 0xd0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CutScoreBuffer, ____saberSwingRatingCounter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutScoreBuffer, ____noteCutInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutScoreBuffer, ____noteScoreDefinition) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutScoreBuffer, ____afterCutScore) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutScoreBuffer, ____beforeCutScore) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutScoreBuffer, ____centerDistanceCutScore) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutScoreBuffer, ____initialized) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutScoreBuffer, ____isFinished) == 0xbd, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutScoreBuffer, ____didFinishEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutScoreBuffer, ____didChangeEvent) == 0xc8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CutScoreBuffer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CutScoreBuffer*, "", "CutScoreBuffer");
