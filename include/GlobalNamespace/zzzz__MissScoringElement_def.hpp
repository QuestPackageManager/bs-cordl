#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScoreMultiplierCounter_def.hpp"
#include "GlobalNamespace/zzzz__ScoringElement_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MissScoringElement)
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class __MissScoringElement__Pool;
}
namespace GlobalNamespace {
struct __ScoreMultiplierCounter__MultiplierEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class MissScoringElement;
}
namespace GlobalNamespace {
class __MissScoringElement__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissScoringElement);
MARK_REF_PTR_T(::GlobalNamespace::__MissScoringElement__Pool);
// Type: ::MissScoringElement
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4661)), TypeDefinitionIndex(TypeDefinitionIndex(11121))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4667))
// CS Name: ::MissScoringElement*
class CORDL_TYPE MissScoringElement : public ::GlobalNamespace::ScoringElement {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__MissScoringElement__Pool;

  /// @brief Field _multiplierEventType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplierEventType,
                      put = __cordl_internal_set__multiplierEventType))::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType _multiplierEventType;

  /// @brief Field _wouldBeCorrectCutBestPossibleMultiplierEventType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType,
                      put = __cordl_internal_set__wouldBeCorrectCutBestPossibleMultiplierEventType))::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType
      _wouldBeCorrectCutBestPossibleMultiplierEventType;

  __declspec(property(get = get_cutScore)) int32_t cutScore;

  __declspec(property(get = get_wouldBeCorrectCutBestPossibleMultiplierEventType))::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType wouldBeCorrectCutBestPossibleMultiplierEventType;

  __declspec(property(get = get_multiplierEventType))::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType multiplierEventType;

  __declspec(property(get = get_executionOrder)) int32_t executionOrder;

  constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType& __cordl_internal_get__multiplierEventType();

  constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType const& __cordl_internal_get__multiplierEventType() const;

  constexpr void __cordl_internal_set__multiplierEventType(::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType value);

  constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType& __cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType();

  constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType const& __cordl_internal_get__wouldBeCorrectCutBestPossibleMultiplierEventType() const;

  constexpr void __cordl_internal_set__wouldBeCorrectCutBestPossibleMultiplierEventType(::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType value);

  /// @brief Method get_cutScore, addr 0x23c6db4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_cutScore();

  /// @brief Method get_wouldBeCorrectCutBestPossibleMultiplierEventType, addr 0x23c6dbc, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType();

  /// @brief Method get_multiplierEventType, addr 0x23c6dc4, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType get_multiplierEventType();

  /// @brief Method get_executionOrder, addr 0x23c6dcc, size 0xc, virtual true, abstract: false, final false
  inline int32_t get_executionOrder();

  /// @brief Method Init, addr 0x23c68f0, size 0x4c, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteData* noteData);

  static inline ::GlobalNamespace::MissScoringElement* New_ctor();

  /// @brief Method .ctor, addr 0x23c6dd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissScoringElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissScoringElement(MissScoringElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissScoringElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissScoringElement(MissScoringElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissScoringElement();

public:
  /// @brief Field _multiplierEventType, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType ____multiplierEventType;

  /// @brief Field _wouldBeCorrectCutBestPossibleMultiplierEventType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType ____wouldBeCorrectCutBestPossibleMultiplierEventType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissScoringElement, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissScoringElement, ____multiplierEventType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissScoringElement, ____wouldBeCorrectCutBestPossibleMultiplierEventType) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4660)), TypeDefinitionIndex(TypeDefinitionIndex(4667)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4660), inst: 2788
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(4666)) CS Name: ::MissScoringElement::Pool*
class CORDL_TYPE __MissScoringElement__Pool : public ::GlobalNamespace::__ScoringElement__Pool_1<::GlobalNamespace::MissScoringElement*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MissScoringElement__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x23c6de0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MissScoringElement__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissScoringElement__Pool(__MissScoringElement__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissScoringElement__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissScoringElement__Pool(__MissScoringElement__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissScoringElement__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissScoringElement__Pool, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissScoringElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissScoringElement*, "", "MissScoringElement");
NEED_NO_BOX(::GlobalNamespace::__MissScoringElement__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissScoringElement__Pool*, "", "MissScoringElement/Pool");
