#pragma once
// IWYU pragma private; include "GlobalNamespace/ScoringElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__MemoryPool_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScoringElement)
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct ScoreMultiplierCounter_MultiplierEventType;
}
namespace GlobalNamespace {
template <typename T> class ScoringElement_Pool_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoringElement;
}
namespace GlobalNamespace {
template <typename T> class ScoringElement_Pool_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScoringElement);
MARK_GEN_REF_PTR_T(::GlobalNamespace::ScoringElement_Pool_1);
// Dependencies Zenject.MemoryPool`1<TValue>
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ScoringElement/Pool`1<T>
class CORDL_TYPE ScoringElement_Pool_1 : public ::Zenject::MemoryPool_1<T> {
public:
  // Declarations
  static inline ::GlobalNamespace::ScoringElement_Pool_1<T>* New_ctor();

  /// @brief Method Reinitialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reinitialize(T scoringElement);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoringElement_Pool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScoringElement_Pool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScoringElement_Pool_1(ScoringElement_Pool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScoringElement_Pool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScoringElement_Pool_1(ScoringElement_Pool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4680 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.IComparable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScoringElement
class CORDL_TYPE ScoringElement : public ::System::Object {
public:
  // Declarations
  template <typename T> using Pool_1 = ::GlobalNamespace::ScoringElement_Pool_1<T>;

  /// @brief Field <isFinished>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isFinished_k__BackingField, put = __cordl_internal_set__isFinished_k__BackingField)) bool _isFinished_k__BackingField;

  /// @brief Field <maxMultiplier>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxMultiplier_k__BackingField, put = __cordl_internal_set__maxMultiplier_k__BackingField)) int32_t _maxMultiplier_k__BackingField;

  /// @brief Field <multiplier>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplier_k__BackingField, put = __cordl_internal_set__multiplier_k__BackingField)) int32_t _multiplier_k__BackingField;

  /// @brief Field <noteData>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__noteData_k__BackingField, put = __cordl_internal_set__noteData_k__BackingField)) ::GlobalNamespace::NoteData* _noteData_k__BackingField;

  __declspec(property(get = get_cutScore)) int32_t cutScore;

  __declspec(property(get = get_executionOrder)) int32_t executionOrder;

  __declspec(property(get = get_isFinished, put = set_isFinished)) bool isFinished;

  __declspec(property(get = get_maxMultiplier, put = set_maxMultiplier)) int32_t maxMultiplier;

  __declspec(property(get = get_maxPossibleCutScore)) int32_t maxPossibleCutScore;

  __declspec(property(get = get_multiplier, put = set_multiplier)) int32_t multiplier;

  __declspec(property(get = get_multiplierEventType)) ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType multiplierEventType;

  __declspec(property(get = get_noteData, put = set_noteData)) ::GlobalNamespace::NoteData* noteData;

  __declspec(property(get = get_time)) float_t time;

  __declspec(property(get = get_wouldBeCorrectCutBestPossibleMultiplierEventType)) ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType wouldBeCorrectCutBestPossibleMultiplierEventType;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::ScoringElement*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::ScoringElement*>*() noexcept;

  /// @brief Method CompareTo, addr 0x3beb2d0, size 0x88, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::ScoringElement* other);

  static inline ::GlobalNamespace::ScoringElement* New_ctor();

  /// @brief Method Reinitialize, addr 0x3beb358, size 0x4, virtual true, abstract: false, final false
  inline void Reinitialize();

  /// @brief Method SetMultipliers, addr 0x3beaab4, size 0x8, virtual false, abstract: false, final false
  inline void SetMultipliers(int32_t multiplier, int32_t maxMultiplier);

  constexpr bool const& __cordl_internal_get__isFinished_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isFinished_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__maxMultiplier_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__maxMultiplier_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__multiplier_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__multiplier_k__BackingField();

  constexpr ::GlobalNamespace::NoteData* const& __cordl_internal_get__noteData_k__BackingField() const;

  constexpr ::GlobalNamespace::NoteData*& __cordl_internal_get__noteData_k__BackingField();

  constexpr void __cordl_internal_set__isFinished_k__BackingField(bool value);

  constexpr void __cordl_internal_set__maxMultiplier_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__multiplier_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__noteData_k__BackingField(::GlobalNamespace::NoteData* value);

  /// @brief Method .ctor, addr 0x3beb35c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cutScore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_cutScore();

  /// @brief Method get_executionOrder, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_executionOrder();

  /// @brief Method get_isFinished, addr 0x3beb2bc, size 0x8, virtual false, abstract: false, final false
  inline bool get_isFinished();

  /// @brief Method get_maxMultiplier, addr 0x3beb2ac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxMultiplier();

  /// @brief Method get_maxPossibleCutScore, addr 0x3beaabc, size 0x74, virtual false, abstract: false, final false
  inline int32_t get_maxPossibleCutScore();

  /// @brief Method get_multiplier, addr 0x3beb29c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_multiplier();

  /// @brief Method get_multiplierEventType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType get_multiplierEventType();

  /// @brief Method get_noteData, addr 0x3beb28c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteData* get_noteData();

  /// @brief Method get_time, addr 0x3beaa98, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method get_wouldBeCorrectCutBestPossibleMultiplierEventType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType();

  /// @brief Convert to "::System::IComparable_1<::GlobalNamespace::ScoringElement*>"
  constexpr ::System::IComparable_1<::GlobalNamespace::ScoringElement*>* i___System__IComparable_1___GlobalNamespace__ScoringElement__() noexcept;

  /// @brief Method set_isFinished, addr 0x3beb2c4, size 0xc, virtual false, abstract: false, final false
  inline void set_isFinished(bool value);

  /// @brief Method set_maxMultiplier, addr 0x3beb2b4, size 0x8, virtual false, abstract: false, final false
  inline void set_maxMultiplier(int32_t value);

  /// @brief Method set_multiplier, addr 0x3beb2a4, size 0x8, virtual false, abstract: false, final false
  inline void set_multiplier(int32_t value);

  /// @brief Method set_noteData, addr 0x3beb294, size 0x8, virtual false, abstract: false, final false
  inline void set_noteData(::GlobalNamespace::NoteData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoringElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScoringElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScoringElement(ScoringElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScoringElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScoringElement(ScoringElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4681 };

  /// @brief Field <noteData>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::NoteData* ____noteData_k__BackingField;

  /// @brief Field <multiplier>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____multiplier_k__BackingField;

  /// @brief Field <maxMultiplier>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____maxMultiplier_k__BackingField;

  /// @brief Field <isFinished>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____isFinished_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScoringElement, ____noteData_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoringElement, ____multiplier_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoringElement, ____maxMultiplier_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoringElement, ____isFinished_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoringElement, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScoringElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoringElement*, "", "ScoringElement");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ScoringElement_Pool_1, "", "ScoringElement/Pool`1");
