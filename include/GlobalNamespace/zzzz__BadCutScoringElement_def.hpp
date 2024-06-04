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
class NoteData;
}
namespace GlobalNamespace {
class __BadCutScoringElement__Pool;
}
namespace GlobalNamespace {
struct __ScoreMultiplierCounter__MultiplierEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class BadCutScoringElement;
}
namespace GlobalNamespace {
class __BadCutScoringElement__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BadCutScoringElement);
MARK_REF_PTR_T(::GlobalNamespace::__BadCutScoringElement__Pool);
// Type: ::Pool
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BadCutScoringElement::Pool*
class CORDL_TYPE __BadCutScoringElement__Pool : public ::GlobalNamespace::__ScoringElement__Pool_1<::GlobalNamespace::BadCutScoringElement*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__BadCutScoringElement__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x27406dc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BadCutScoringElement__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BadCutScoringElement__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BadCutScoringElement__Pool(__BadCutScoringElement__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BadCutScoringElement__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BadCutScoringElement__Pool(__BadCutScoringElement__Pool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BadCutScoringElement__Pool, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BadCutScoringElement
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BadCutScoringElement*
class CORDL_TYPE BadCutScoringElement : public ::GlobalNamespace::ScoringElement {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__BadCutScoringElement__Pool;

  /// @brief Field _multiplierEventType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplierEventType,
                      put = __cordl_internal_set__multiplierEventType))::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType _multiplierEventType;

  /// @brief Field _wouldBeCorrectCutBestPossibleMultiplierEventType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType,
                      put = __cordl_internal_set__wouldBeCorrectCutBestPossibleMultiplierEventType))::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType
      _wouldBeCorrectCutBestPossibleMultiplierEventType;

  __declspec(property(get = get_cutScore)) int32_t cutScore;

  __declspec(property(get = get_executionOrder)) int32_t executionOrder;

  __declspec(property(get = get_multiplierEventType))::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType multiplierEventType;

  __declspec(property(get = get_wouldBeCorrectCutBestPossibleMultiplierEventType))::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType wouldBeCorrectCutBestPossibleMultiplierEventType;

  /// @brief Method Init, addr 0x2740108, size 0x4c, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteData* noteData);

  static inline ::GlobalNamespace::BadCutScoringElement* New_ctor();

  constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType const& __cordl_internal_get__multiplierEventType() const;

  constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType& __cordl_internal_get__multiplierEventType();

  constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType const& __cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType() const;

  constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType& __cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType();

  constexpr void __cordl_internal_set__multiplierEventType(::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType value);

  constexpr void __cordl_internal_set__wouldBeCorrectCutBestPossibleMultiplierEventType(::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType value);

  /// @brief Method .ctor, addr 0x27406d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cutScore, addr 0x27406b0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_cutScore();

  /// @brief Method get_executionOrder, addr 0x27406c8, size 0xc, virtual true, abstract: false, final false
  inline int32_t get_executionOrder();

  /// @brief Method get_multiplierEventType, addr 0x27406c0, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType get_multiplierEventType();

  /// @brief Method get_wouldBeCorrectCutBestPossibleMultiplierEventType, addr 0x27406b8, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType();

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

  /// @brief Field _multiplierEventType, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType ____multiplierEventType;

  /// @brief Field _wouldBeCorrectCutBestPossibleMultiplierEventType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType ____wouldBeCorrectCutBestPossibleMultiplierEventType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BadCutScoringElement, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BadCutScoringElement, ____multiplierEventType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BadCutScoringElement, ____wouldBeCorrectCutBestPossibleMultiplierEventType) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BadCutScoringElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BadCutScoringElement*, "", "BadCutScoringElement");
NEED_NO_BOX(::GlobalNamespace::__BadCutScoringElement__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BadCutScoringElement__Pool*, "", "BadCutScoringElement/Pool");
