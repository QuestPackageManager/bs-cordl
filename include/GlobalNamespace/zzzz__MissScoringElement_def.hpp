#pragma once
// IWYU pragma private; include "GlobalNamespace/MissScoringElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScoreMultiplierCounter_def.hpp"
#include "GlobalNamespace/zzzz__ScoringElement_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MissScoringElement)
namespace GlobalNamespace {
class MissScoringElement_Pool;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct ScoreMultiplierCounter_MultiplierEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class MissScoringElement;
}
namespace GlobalNamespace {
class MissScoringElement_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissScoringElement);
MARK_REF_PTR_T(::GlobalNamespace::MissScoringElement_Pool);
// Dependencies ScoringElement::Pool`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissScoringElement/Pool
class CORDL_TYPE MissScoringElement_Pool : public ::GlobalNamespace::ScoringElement_Pool_1<::GlobalNamespace::MissScoringElement*> {
public:
  // Declarations
  static inline ::GlobalNamespace::MissScoringElement_Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3bef9d0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissScoringElement_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissScoringElement_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissScoringElement_Pool(MissScoringElement_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissScoringElement_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissScoringElement_Pool(MissScoringElement_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4690 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissScoringElement_Pool, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ScoreMultiplierCounter::MultiplierEventType, ScoringElement
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissScoringElement
class CORDL_TYPE MissScoringElement : public ::GlobalNamespace::ScoringElement {
public:
  // Declarations
  using Pool = ::GlobalNamespace::MissScoringElement_Pool;

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

  /// @brief Method Init, addr 0x3bef4fc, size 0x4c, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteData* noteData);

  static inline ::GlobalNamespace::MissScoringElement* New_ctor();

  constexpr ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType const& __cordl_internal_get__multiplierEventType() const;

  constexpr ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType& __cordl_internal_get__multiplierEventType();

  constexpr ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType const& __cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType() const;

  constexpr ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType& __cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType();

  constexpr void __cordl_internal_set__multiplierEventType(::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType value);

  constexpr void __cordl_internal_set__wouldBeCorrectCutBestPossibleMultiplierEventType(::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType value);

  /// @brief Method .ctor, addr 0x3bef9c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cutScore, addr 0x3bef9a4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_cutScore();

  /// @brief Method get_executionOrder, addr 0x3bef9bc, size 0xc, virtual true, abstract: false, final false
  inline int32_t get_executionOrder();

  /// @brief Method get_multiplierEventType, addr 0x3bef9b4, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType get_multiplierEventType();

  /// @brief Method get_wouldBeCorrectCutBestPossibleMultiplierEventType, addr 0x3bef9ac, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissScoringElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissScoringElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissScoringElement(MissScoringElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissScoringElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissScoringElement(MissScoringElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4691 };

  /// @brief Field _multiplierEventType, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType ____multiplierEventType;

  /// @brief Field _wouldBeCorrectCutBestPossibleMultiplierEventType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType ____wouldBeCorrectCutBestPossibleMultiplierEventType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissScoringElement, ____multiplierEventType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissScoringElement, ____wouldBeCorrectCutBestPossibleMultiplierEventType) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissScoringElement, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissScoringElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissScoringElement*, "", "MissScoringElement");
NEED_NO_BOX(::GlobalNamespace::MissScoringElement_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissScoringElement_Pool*, "", "MissScoringElement/Pool");
