#pragma once
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
class __ScoreModel__NoteScoreDefinition;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class ICutScoreBufferDidFinishReceiver;
}
namespace GlobalNamespace {
class ICutScoreBufferDidChangeReceiver;
}
namespace GlobalNamespace {
class ISaberSwingRatingCounter;
}
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidFinishReceiver;
}
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidChangeReceiver;
}
namespace GlobalNamespace {
class SaberSwingRatingCounter;
}
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(15170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5410))
// CS Name: ::CutScoreBuffer*
class CORDL_TYPE CutScoreBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _saberSwingRatingCounter, offset 0x10, size 0x8
  __declspec(property(get = __get__saberSwingRatingCounter, put = __set__saberSwingRatingCounter))::GlobalNamespace::SaberSwingRatingCounter* _saberSwingRatingCounter;

  /// @brief Field _noteCutInfo, offset 0x18, size 0x90
  __declspec(property(get = __get__noteCutInfo, put = __set__noteCutInfo))::GlobalNamespace::NoteCutInfo _noteCutInfo;

  /// @brief Field _noteScoreDefinition, offset 0xa8, size 0x8
  __declspec(property(get = __get__noteScoreDefinition, put = __set__noteScoreDefinition))::GlobalNamespace::__ScoreModel__NoteScoreDefinition* _noteScoreDefinition;

  /// @brief Field _afterCutScore, offset 0xb0, size 0x4
  __declspec(property(get = __get__afterCutScore, put = __set__afterCutScore)) int32_t _afterCutScore;

  /// @brief Field _beforeCutScore, offset 0xb4, size 0x4
  __declspec(property(get = __get__beforeCutScore, put = __set__beforeCutScore)) int32_t _beforeCutScore;

  /// @brief Field _centerDistanceCutScore, offset 0xb8, size 0x4
  __declspec(property(get = __get__centerDistanceCutScore, put = __set__centerDistanceCutScore)) int32_t _centerDistanceCutScore;

  /// @brief Field _initialized, offset 0xbc, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  /// @brief Field _isFinished, offset 0xbd, size 0x1
  __declspec(property(get = __get__isFinished, put = __set__isFinished)) bool _isFinished;

  /// @brief Field _didFinishEvent, offset 0xc0, size 0x8
  __declspec(property(get = __get__didFinishEvent, put = __set__didFinishEvent))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>* _didFinishEvent;

  /// @brief Field _didChangeEvent, offset 0xc8, size 0x8
  __declspec(property(get = __get__didChangeEvent, put = __set__didChangeEvent))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>* _didChangeEvent;

  __declspec(property(get = get_executionOrder)) int32_t executionOrder;

  __declspec(property(get = get_maxPossibleCutScore)) int32_t maxPossibleCutScore;

  __declspec(property(get = get_isFinished)) bool isFinished;

  __declspec(property(get = get_cutScore)) int32_t cutScore;

  __declspec(property(get = get_beforeCutScore)) int32_t beforeCutScore;

  __declspec(property(get = get_centerDistanceCutScore)) int32_t centerDistanceCutScore;

  __declspec(property(get = get_afterCutScore)) int32_t afterCutScore;

  __declspec(property(get = get_noteScoreDefinition))::GlobalNamespace::__ScoreModel__NoteScoreDefinition* noteScoreDefinition;

  __declspec(property(get = get_noteCutInfo))::GlobalNamespace::NoteCutInfo noteCutInfo;

  __declspec(property(get = get_beforeCutSwingRating)) float_t beforeCutSwingRating;

  __declspec(property(get = get_afterCutSwingRating)) float_t afterCutSwingRating;

  /// @brief Convert operator to "::GlobalNamespace::IReadonlyCutScoreBuffer"
  constexpr operator ::GlobalNamespace::IReadonlyCutScoreBuffer*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver"
  constexpr operator ::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver"
  constexpr operator ::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*() noexcept;

  constexpr ::GlobalNamespace::SaberSwingRatingCounter*& __get__saberSwingRatingCounter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberSwingRatingCounter*> const& __get__saberSwingRatingCounter() const;

  constexpr void __set__saberSwingRatingCounter(::GlobalNamespace::SaberSwingRatingCounter* value);

  constexpr ::GlobalNamespace::NoteCutInfo& __get__noteCutInfo();

  constexpr ::GlobalNamespace::NoteCutInfo const& __get__noteCutInfo() const;

  constexpr void __set__noteCutInfo(::GlobalNamespace::NoteCutInfo value);

  constexpr ::GlobalNamespace::__ScoreModel__NoteScoreDefinition*& __get__noteScoreDefinition();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ScoreModel__NoteScoreDefinition*> const& __get__noteScoreDefinition() const;

  constexpr void __set__noteScoreDefinition(::GlobalNamespace::__ScoreModel__NoteScoreDefinition* value);

  constexpr int32_t& __get__afterCutScore();

  constexpr int32_t const& __get__afterCutScore() const;

  constexpr void __set__afterCutScore(int32_t value);

  constexpr int32_t& __get__beforeCutScore();

  constexpr int32_t const& __get__beforeCutScore() const;

  constexpr void __set__beforeCutScore(int32_t value);

  constexpr int32_t& __get__centerDistanceCutScore();

  constexpr int32_t const& __get__centerDistanceCutScore() const;

  constexpr void __set__centerDistanceCutScore(int32_t value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  constexpr bool& __get__isFinished();

  constexpr bool const& __get__isFinished() const;

  constexpr void __set__isFinished(bool value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>*& __get__didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>*> const& __get__didFinishEvent() const;

  constexpr void __set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>* value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>*& __get__didChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>*> const& __get__didChangeEvent() const;

  constexpr void __set__didChangeEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>* value);

  /// @brief Method get_executionOrder addr 0x2121294 size 0x1c virtual false final false
  inline int32_t get_executionOrder();

  /// @brief Method get_maxPossibleCutScore addr 0x21212b0 size 0x1c virtual true final true
  inline int32_t get_maxPossibleCutScore();

  /// @brief Method get_isFinished addr 0x21212cc size 0x8 virtual true final true
  inline bool get_isFinished();

  /// @brief Method get_cutScore addr 0x21212d4 size 0x30 virtual true final true
  inline int32_t get_cutScore();

  /// @brief Method get_beforeCutScore addr 0x2121304 size 0x8 virtual true final true
  inline int32_t get_beforeCutScore();

  /// @brief Method get_centerDistanceCutScore addr 0x212130c size 0x8 virtual true final true
  inline int32_t get_centerDistanceCutScore();

  /// @brief Method get_afterCutScore addr 0x2121314 size 0x8 virtual true final true
  inline int32_t get_afterCutScore();

  /// @brief Method get_noteScoreDefinition addr 0x212131c size 0x8 virtual true final true
  inline ::GlobalNamespace::__ScoreModel__NoteScoreDefinition* get_noteScoreDefinition();

  /// @brief Method get_noteCutInfo addr 0x2121324 size 0x10 virtual true final true
  inline ::GlobalNamespace::NoteCutInfo get_noteCutInfo();

  /// @brief Method get_beforeCutSwingRating addr 0x2121334 size 0x1c virtual true final true
  inline float_t get_beforeCutSwingRating();

  /// @brief Method get_afterCutSwingRating addr 0x2121350 size 0x1c virtual true final true
  inline float_t get_afterCutSwingRating();

  /// @brief Method RegisterDidChangeReceiver addr 0x212136c size 0x58 virtual true final true
  inline void RegisterDidChangeReceiver(::GlobalNamespace::ICutScoreBufferDidChangeReceiver* receiver);

  /// @brief Method RegisterDidFinishReceiver addr 0x21213c4 size 0x58 virtual true final true
  inline void RegisterDidFinishReceiver(::GlobalNamespace::ICutScoreBufferDidFinishReceiver* receiver);

  /// @brief Method UnregisterDidChangeReceiver addr 0x212141c size 0x58 virtual true final true
  inline void UnregisterDidChangeReceiver(::GlobalNamespace::ICutScoreBufferDidChangeReceiver* receiver);

  /// @brief Method UnregisterDidFinishReceiver addr 0x2121474 size 0x58 virtual true final true
  inline void UnregisterDidFinishReceiver(::GlobalNamespace::ICutScoreBufferDidFinishReceiver* receiver);

  /// @brief Method Init addr 0x21214cc size 0x264 virtual false final false
  inline bool Init(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method RefreshScores addr 0x2121730 size 0x208 virtual false final false
  inline void RefreshScores();

  /// @brief Method HandleSaberSwingRatingCounterDidChange addr 0x2121938 size 0x1d4 virtual true final true
  inline void HandleSaberSwingRatingCounterDidChange(::GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter, float_t rating);

  /// @brief Method HandleSaberSwingRatingCounterDidFinish addr 0x2121b0c size 0x2b8 virtual true final true
  inline void HandleSaberSwingRatingCounterDidFinish(::GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter);

  static inline ::GlobalNamespace::CutScoreBuffer* New_ctor();

  /// @brief Method .ctor addr 0x2121dc4 size 0xf0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CutScoreBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CutScoreBuffer(CutScoreBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CutScoreBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CutScoreBuffer(CutScoreBuffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CutScoreBuffer();

public:
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
