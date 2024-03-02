#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScoreMultiplierCounter_def.hpp"
#include "GlobalNamespace/zzzz__ScoringElement_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GoodCutScoringElement)
namespace GlobalNamespace {
class CutScoreBuffer;
}
namespace GlobalNamespace {
class ICutScoreBufferDidFinishReceiver;
}
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class __GoodCutScoringElement__Pool;
}
namespace GlobalNamespace {
struct __ScoreMultiplierCounter__MultiplierEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class GoodCutScoringElement;
}
namespace GlobalNamespace {
class __GoodCutScoringElement__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GoodCutScoringElement);
MARK_REF_PTR_T(::GlobalNamespace::__GoodCutScoringElement__Pool);
// Type: ::GoodCutScoringElement
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GoodCutScoringElement*
class CORDL_TYPE GoodCutScoringElement : public ::GlobalNamespace::ScoringElement {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__GoodCutScoringElement__Pool;

  /// @brief Field _cutScoreBuffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cutScoreBuffer, put = __cordl_internal_set__cutScoreBuffer))::GlobalNamespace::CutScoreBuffer* _cutScoreBuffer;

  /// @brief Field _multiplierEventType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplierEventType,
                      put = __cordl_internal_set__multiplierEventType))::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType _multiplierEventType;

  /// @brief Field _wouldBeCorrectCutBestPossibleMultiplierEventType, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType,
                      put = __cordl_internal_set__wouldBeCorrectCutBestPossibleMultiplierEventType))::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType
      _wouldBeCorrectCutBestPossibleMultiplierEventType;

  __declspec(property(get = get_cutScore)) int32_t cutScore;

  __declspec(property(get = get_cutScoreBuffer))::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer;

  __declspec(property(get = get_executionOrder)) int32_t executionOrder;

  __declspec(property(get = get_multiplierEventType))::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType multiplierEventType;

  __declspec(property(get = get_wouldBeCorrectCutBestPossibleMultiplierEventType))::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType wouldBeCorrectCutBestPossibleMultiplierEventType;

  /// @brief Convert operator to "::GlobalNamespace::ICutScoreBufferDidFinishReceiver"
  constexpr operator ::GlobalNamespace::ICutScoreBufferDidFinishReceiver*() noexcept;

  /// @brief Method HandleCutScoreBufferDidFinish, addr 0x2495bb8, size 0x24, virtual true, abstract: false, final true
  inline void HandleCutScoreBufferDidFinish(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer);

  /// @brief Method Init, addr 0x2495670, size 0x70, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteCutInfo noteCutInfo);

  static inline ::GlobalNamespace::GoodCutScoringElement* New_ctor();

  /// @brief Method Reinitialize, addr 0x2495ba0, size 0x18, virtual true, abstract: false, final false
  inline void Reinitialize();

  constexpr ::GlobalNamespace::CutScoreBuffer*& __cordl_internal_get__cutScoreBuffer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CutScoreBuffer*> const& __cordl_internal_get__cutScoreBuffer() const;

  constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType const& __cordl_internal_get__multiplierEventType() const;

  constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType& __cordl_internal_get__multiplierEventType();

  constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType const& __cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType() const;

  constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType& __cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType();

  constexpr void __cordl_internal_set__cutScoreBuffer(::GlobalNamespace::CutScoreBuffer* value);

  constexpr void __cordl_internal_set__multiplierEventType(::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType value);

  constexpr void __cordl_internal_set__wouldBeCorrectCutBestPossibleMultiplierEventType(::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType value);

  /// @brief Method .ctor, addr 0x2495bdc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cutScore, addr 0x2495b24, size 0x40, virtual true, abstract: false, final false
  inline int32_t get_cutScore();

  /// @brief Method get_cutScoreBuffer, addr 0x2495b74, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IReadonlyCutScoreBuffer* get_cutScoreBuffer();

  /// @brief Method get_executionOrder, addr 0x2495b7c, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_executionOrder();

  /// @brief Method get_multiplierEventType, addr 0x2495b6c, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType get_multiplierEventType();

  /// @brief Method get_wouldBeCorrectCutBestPossibleMultiplierEventType, addr 0x2495b64, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType();

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

  /// @brief Field _cutScoreBuffer, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::CutScoreBuffer* ____cutScoreBuffer;

  /// @brief Field _multiplierEventType, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType ____multiplierEventType;

  /// @brief Field _wouldBeCorrectCutBestPossibleMultiplierEventType, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType ____wouldBeCorrectCutBestPossibleMultiplierEventType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GoodCutScoringElement, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GoodCutScoringElement, ____cutScoreBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GoodCutScoringElement, ____multiplierEventType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GoodCutScoringElement, ____wouldBeCorrectCutBestPossibleMultiplierEventType) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GoodCutScoringElement::Pool*
class CORDL_TYPE __GoodCutScoringElement__Pool : public ::GlobalNamespace::__ScoringElement__Pool_1<::GlobalNamespace::GoodCutScoringElement*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GoodCutScoringElement__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x2495c40, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GoodCutScoringElement__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GoodCutScoringElement__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GoodCutScoringElement__Pool(__GoodCutScoringElement__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GoodCutScoringElement__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GoodCutScoringElement__Pool(__GoodCutScoringElement__Pool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GoodCutScoringElement__Pool, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GoodCutScoringElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GoodCutScoringElement*, "", "GoodCutScoringElement");
NEED_NO_BOX(::GlobalNamespace::__GoodCutScoringElement__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GoodCutScoringElement__Pool*, "", "GoodCutScoringElement/Pool");
