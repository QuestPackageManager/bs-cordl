#pragma once
// IWYU pragma private; include "GlobalNamespace/GoodCutScoringElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ICutScoreBufferDidFinishReceiver_def.hpp"
#include "GlobalNamespace/zzzz__ScoreMultiplierCounter_def.hpp"
#include "GlobalNamespace/zzzz__ScoringElement_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GoodCutScoringElement)
namespace GlobalNamespace {
class CutScoreBuffer;
}
namespace GlobalNamespace {
class GoodCutScoringElement_Pool;
}
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
struct ScoreMultiplierCounter_MultiplierEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class GoodCutScoringElement;
}
namespace GlobalNamespace {
class GoodCutScoringElement_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GoodCutScoringElement);
MARK_REF_PTR_T(::GlobalNamespace::GoodCutScoringElement_Pool);
// Dependencies ScoringElement::Pool`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GoodCutScoringElement/Pool
class CORDL_TYPE GoodCutScoringElement_Pool : public ::GlobalNamespace::ScoringElement_Pool_1<::GlobalNamespace::GoodCutScoringElement*> {
public:
  // Declarations
  static inline ::GlobalNamespace::GoodCutScoringElement_Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3bfce84, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GoodCutScoringElement_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GoodCutScoringElement_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GoodCutScoringElement_Pool(GoodCutScoringElement_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GoodCutScoringElement_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GoodCutScoringElement_Pool(GoodCutScoringElement_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4686 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GoodCutScoringElement_Pool, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ICutScoreBufferDidFinishReceiver, ScoreMultiplierCounter::MultiplierEventType, ScoringElement
namespace GlobalNamespace {
// Is value type: false
// CS Name: GoodCutScoringElement
class CORDL_TYPE GoodCutScoringElement : public ::GlobalNamespace::ScoringElement {
public:
  // Declarations
  using Pool = ::GlobalNamespace::GoodCutScoringElement_Pool;

  /// @brief Field _cutScoreBuffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cutScoreBuffer, put = __cordl_internal_set__cutScoreBuffer)) ::GlobalNamespace::CutScoreBuffer* _cutScoreBuffer;

  /// @brief Field _multiplierEventType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplierEventType,
                      put = __cordl_internal_set__multiplierEventType)) ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType _multiplierEventType;

  /// @brief Field _wouldBeCorrectCutBestPossibleMultiplierEventType, offset 0x34, size 0x4
  __declspec(property(
      get = __cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType,
      put = __cordl_internal_set__wouldBeCorrectCutBestPossibleMultiplierEventType)) ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType _wouldBeCorrectCutBestPossibleMultiplierEventType;

  __declspec(property(get = get_cutScore)) int32_t cutScore;

  __declspec(property(get = get_cutScoreBuffer)) ::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer;

  __declspec(property(get = get_executionOrder)) int32_t executionOrder;

  __declspec(property(get = get_multiplierEventType)) ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType multiplierEventType;

  __declspec(property(get = get_wouldBeCorrectCutBestPossibleMultiplierEventType)) ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType wouldBeCorrectCutBestPossibleMultiplierEventType;

  /// @brief Convert operator to "::GlobalNamespace::ICutScoreBufferDidFinishReceiver"
  constexpr operator ::GlobalNamespace::ICutScoreBufferDidFinishReceiver*() noexcept;

  /// @brief Method HandleCutScoreBufferDidFinish, addr 0x3bfce04, size 0x24, virtual true, abstract: false, final true
  inline void HandleCutScoreBufferDidFinish(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer);

  /// @brief Method Init, addr 0x3bfc8d0, size 0x70, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteCutInfo noteCutInfo);

  static inline ::GlobalNamespace::GoodCutScoringElement* New_ctor();

  /// @brief Method Reinitialize, addr 0x3bfcdec, size 0x18, virtual true, abstract: false, final false
  inline void Reinitialize();

  constexpr ::GlobalNamespace::CutScoreBuffer* const& __cordl_internal_get__cutScoreBuffer() const;

  constexpr ::GlobalNamespace::CutScoreBuffer*& __cordl_internal_get__cutScoreBuffer();

  constexpr ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType const& __cordl_internal_get__multiplierEventType() const;

  constexpr ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType& __cordl_internal_get__multiplierEventType();

  constexpr ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType const& __cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType() const;

  constexpr ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType& __cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType();

  constexpr void __cordl_internal_set__cutScoreBuffer(::GlobalNamespace::CutScoreBuffer* value);

  constexpr void __cordl_internal_set__multiplierEventType(::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType value);

  constexpr void __cordl_internal_set__wouldBeCorrectCutBestPossibleMultiplierEventType(::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType value);

  /// @brief Method .ctor, addr 0x3bfce28, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cutScore, addr 0x3bfcd70, size 0x40, virtual true, abstract: false, final false
  inline int32_t get_cutScore();

  /// @brief Method get_cutScoreBuffer, addr 0x3bfcdc0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IReadonlyCutScoreBuffer* get_cutScoreBuffer();

  /// @brief Method get_executionOrder, addr 0x3bfcdc8, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_executionOrder();

  /// @brief Method get_multiplierEventType, addr 0x3bfcdb8, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType get_multiplierEventType();

  /// @brief Method get_wouldBeCorrectCutBestPossibleMultiplierEventType, addr 0x3bfcdb0, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType();

  /// @brief Convert to "::GlobalNamespace::ICutScoreBufferDidFinishReceiver"
  constexpr ::GlobalNamespace::ICutScoreBufferDidFinishReceiver* i___GlobalNamespace__ICutScoreBufferDidFinishReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GoodCutScoringElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GoodCutScoringElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GoodCutScoringElement(GoodCutScoringElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GoodCutScoringElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GoodCutScoringElement(GoodCutScoringElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4687 };

  /// @brief Field _cutScoreBuffer, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::CutScoreBuffer* ____cutScoreBuffer;

  /// @brief Field _multiplierEventType, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType ____multiplierEventType;

  /// @brief Field _wouldBeCorrectCutBestPossibleMultiplierEventType, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType ____wouldBeCorrectCutBestPossibleMultiplierEventType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GoodCutScoringElement, ____cutScoreBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GoodCutScoringElement, ____multiplierEventType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GoodCutScoringElement, ____wouldBeCorrectCutBestPossibleMultiplierEventType) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GoodCutScoringElement, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GoodCutScoringElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GoodCutScoringElement*, "", "GoodCutScoringElement");
NEED_NO_BOX(::GlobalNamespace::GoodCutScoringElement_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GoodCutScoringElement_Pool*, "", "GoodCutScoringElement/Pool");
