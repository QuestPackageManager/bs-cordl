#pragma once
// IWYU pragma private; include "GlobalNamespace/BadCutScoringElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScoreMultiplierCounter_def.hpp"
#include "GlobalNamespace/zzzz__ScoringElement_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BadCutScoringElement)
namespace GlobalNamespace {
class BadCutScoringElement_Pool;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct ScoreMultiplierCounter_MultiplierEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class BadCutScoringElement;
}
namespace GlobalNamespace {
class BadCutScoringElement_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BadCutScoringElement);
MARK_REF_PTR_T(::GlobalNamespace::BadCutScoringElement_Pool);
// Dependencies ScoringElement::Pool`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: BadCutScoringElement/Pool
class CORDL_TYPE BadCutScoringElement_Pool : public ::GlobalNamespace::ScoringElement_Pool_1<::GlobalNamespace::BadCutScoringElement*> {
public:
  // Declarations
  static inline ::GlobalNamespace::BadCutScoringElement_Pool* New_ctor();

  /// @brief Method .ctor, addr 0x5848f78, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BadCutScoringElement_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BadCutScoringElement_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BadCutScoringElement_Pool(BadCutScoringElement_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BadCutScoringElement_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BadCutScoringElement_Pool(BadCutScoringElement_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6267 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BadCutScoringElement_Pool, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ScoreMultiplierCounter::MultiplierEventType, ScoringElement
namespace GlobalNamespace {
// Is value type: false
// CS Name: BadCutScoringElement
class CORDL_TYPE BadCutScoringElement : public ::GlobalNamespace::ScoringElement {
public:
  // Declarations
  using Pool = ::GlobalNamespace::BadCutScoringElement_Pool;

  /// @brief Field _multiplierEventType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplierEventType,
                      put = __cordl_internal_set__multiplierEventType)) ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType _multiplierEventType;

  /// @brief Field _wouldBeCorrectCutBestPossibleMultiplierEventType, offset 0x28, size 0x4
  __declspec(property(
      get = __cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType,
      put = __cordl_internal_set__wouldBeCorrectCutBestPossibleMultiplierEventType)) ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType _wouldBeCorrectCutBestPossibleMultiplierEventType;

  __declspec(property(get = get_cutScore)) int32_t cutScore;

  __declspec(property(get = get_executionOrder)) int32_t executionOrder;

  __declspec(property(get = get_multiplierEventType)) ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType multiplierEventType;

  __declspec(property(get = get_wouldBeCorrectCutBestPossibleMultiplierEventType)) ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType wouldBeCorrectCutBestPossibleMultiplierEventType;

  /// @brief Method Init, addr 0x5848948, size 0x48, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteData* noteData);

  static inline ::GlobalNamespace::BadCutScoringElement* New_ctor();

  constexpr ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType const& __cordl_internal_get__multiplierEventType() const;

  constexpr ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType& __cordl_internal_get__multiplierEventType();

  constexpr ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType const& __cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType() const;

  constexpr ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType& __cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType();

  constexpr void __cordl_internal_set__multiplierEventType(::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType value);

  constexpr void __cordl_internal_set__wouldBeCorrectCutBestPossibleMultiplierEventType(::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType value);

  /// @brief Method .ctor, addr 0x5848f74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cutScore, addr 0x5848f50, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_cutScore();

  /// @brief Method get_executionOrder, addr 0x5848f68, size 0xc, virtual true, abstract: false, final false
  inline int32_t get_executionOrder();

  /// @brief Method get_multiplierEventType, addr 0x5848f60, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType get_multiplierEventType();

  /// @brief Method get_wouldBeCorrectCutBestPossibleMultiplierEventType, addr 0x5848f58, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BadCutScoringElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BadCutScoringElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BadCutScoringElement(BadCutScoringElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BadCutScoringElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BadCutScoringElement(BadCutScoringElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6268 };

  /// @brief Field _multiplierEventType, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType ____multiplierEventType;

  /// @brief Field _wouldBeCorrectCutBestPossibleMultiplierEventType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType ____wouldBeCorrectCutBestPossibleMultiplierEventType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BadCutScoringElement, ____multiplierEventType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BadCutScoringElement, ____wouldBeCorrectCutBestPossibleMultiplierEventType) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BadCutScoringElement, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BadCutScoringElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BadCutScoringElement*, "", "BadCutScoringElement");
NEED_NO_BOX(::GlobalNamespace::BadCutScoringElement_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BadCutScoringElement_Pool*, "", "BadCutScoringElement/Pool");
