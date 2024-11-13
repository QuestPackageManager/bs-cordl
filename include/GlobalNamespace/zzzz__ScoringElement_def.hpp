#pragma once
// IWYU pragma private; include "GlobalNamespace/ScoringElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__MemoryPool_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScoringElement)
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct __ScoreMultiplierCounter__MultiplierEventType;
}
namespace GlobalNamespace {
template <typename T> class __ScoringElement__Pool_1;
}
namespace System {
template <typename T> class IComparable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoringElement;
}
namespace GlobalNamespace {
template <typename T> class __ScoringElement__Pool_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScoringElement);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__ScoringElement__Pool_1);
// Type: ::Pool`1
// SizeInfo { instance_size: 56, native_size: 52, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ScoringElement::Pool`1<T>*
class CORDL_TYPE __ScoringElement__Pool_1 : public ::Zenject::MemoryPool_1<T> {
public:
  // Declarations
  static inline ::GlobalNamespace::__ScoringElement__Pool_1<T>* New_ctor();

  /// @brief Method Reinitialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reinitialize(T scoringElement);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScoringElement__Pool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScoringElement__Pool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScoringElement__Pool_1(__ScoringElement__Pool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScoringElement__Pool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScoringElement__Pool_1(__ScoringElement__Pool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4668 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::ScoringElement
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScoringElement*
class CORDL_TYPE ScoringElement : public ::System::Object {
public:
  // Declarations
  template <typename T> using Pool_1 = ::GlobalNamespace::__ScoringElement__Pool_1<T>;

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

  __declspec(property(get = get_multiplierEventType)) ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType multiplierEventType;

  __declspec(property(get = get_noteData, put = set_noteData)) ::GlobalNamespace::NoteData* noteData;

  __declspec(property(get = get_time)) float_t time;

  __declspec(property(get = get_wouldBeCorrectCutBestPossibleMultiplierEventType)) ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType wouldBeCorrectCutBestPossibleMultiplierEventType;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::ScoringElement*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::ScoringElement*>*() noexcept;

  /// @brief Method CompareTo, addr 0x3b89ab8, size 0x88, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::ScoringElement* other);

  static inline ::GlobalNamespace::ScoringElement* New_ctor();

  /// @brief Method Reinitialize, addr 0x3b89b40, size 0x4, virtual true, abstract: false, final false
  inline void Reinitialize();

  /// @brief Method SetMultipliers, addr 0x3b8929c, size 0x8, virtual false, abstract: false, final false
  inline void SetMultipliers(int32_t multiplier, int32_t maxMultiplier);

  constexpr bool const& __cordl_internal_get__isFinished_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isFinished_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__maxMultiplier_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__maxMultiplier_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__multiplier_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__multiplier_k__BackingField();

  constexpr ::GlobalNamespace::NoteData*& __cordl_internal_get__noteData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteData*> const& __cordl_internal_get__noteData_k__BackingField() const;

  constexpr void __cordl_internal_set__isFinished_k__BackingField(bool value);

  constexpr void __cordl_internal_set__maxMultiplier_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__multiplier_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__noteData_k__BackingField(::GlobalNamespace::NoteData* value);

  /// @brief Method .ctor, addr 0x3b89b44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cutScore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_cutScore();

  /// @brief Method get_executionOrder, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_executionOrder();

  /// @brief Method get_isFinished, addr 0x3b89aa4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isFinished();

  /// @brief Method get_maxMultiplier, addr 0x3b89a94, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxMultiplier();

  /// @brief Method get_maxPossibleCutScore, addr 0x3b892a4, size 0x74, virtual false, abstract: false, final false
  inline int32_t get_maxPossibleCutScore();

  /// @brief Method get_multiplier, addr 0x3b89a84, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_multiplier();

  /// @brief Method get_multiplierEventType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType get_multiplierEventType();

  /// @brief Method get_noteData, addr 0x3b89a74, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteData* get_noteData();

  /// @brief Method get_time, addr 0x3b89280, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method get_wouldBeCorrectCutBestPossibleMultiplierEventType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType();

  /// @brief Convert to "::System::IComparable_1<::GlobalNamespace::ScoringElement*>"
  constexpr ::System::IComparable_1<::GlobalNamespace::ScoringElement*>* i___System__IComparable_1___GlobalNamespace__ScoringElement__() noexcept;

  /// @brief Method set_isFinished, addr 0x3b89aac, size 0xc, virtual false, abstract: false, final false
  inline void set_isFinished(bool value);

  /// @brief Method set_maxMultiplier, addr 0x3b89a9c, size 0x8, virtual false, abstract: false, final false
  inline void set_maxMultiplier(int32_t value);

  /// @brief Method set_multiplier, addr 0x3b89a8c, size 0x8, virtual false, abstract: false, final false
  inline void set_multiplier(int32_t value);

  /// @brief Method set_noteData, addr 0x3b89a7c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field <noteData>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::NoteData* ____noteData_k__BackingField;

  /// @brief Field <multiplier>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____multiplier_k__BackingField;

  /// @brief Field <maxMultiplier>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____maxMultiplier_k__BackingField;

  /// @brief Field <isFinished>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____isFinished_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4669 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoringElement, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoringElement, ____noteData_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoringElement, ____multiplier_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoringElement, ____maxMultiplier_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoringElement, ____isFinished_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScoringElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoringElement*, "", "ScoringElement");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__ScoringElement__Pool_1, "", "ScoringElement/Pool`1");
