#pragma once
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
namespace System {
template <typename T> class IComparable_1;
}
namespace GlobalNamespace {
template <typename T> class __ScoringElement__Pool_1;
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
// SizeInfo { instance_size: 56, native_size: 52, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11038)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11038), inst: 2757 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5322))
// CS Name: ::ScoringElement::Pool`1<T>*
class CORDL_TYPE __ScoringElement__Pool_1 : public ::Zenject::MemoryPool_1<T> {
public:
  // Declarations
  /// @brief Method Reinitialize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Reinitialize(T scoringElement);

  static inline ::GlobalNamespace::__ScoringElement__Pool_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ScoringElement__Pool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScoringElement__Pool_1(__ScoringElement__Pool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScoringElement__Pool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScoringElement__Pool_1(__ScoringElement__Pool_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScoringElement__Pool_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::ScoringElement
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5323))
// CS Name: ::ScoringElement*
class CORDL_TYPE ScoringElement : public ::System::Object {
public:
  // Declarations
  template <typename T> using Pool_1 = ::GlobalNamespace::__ScoringElement__Pool_1<T>;

  /// @brief Field <noteData>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__noteData_k__BackingField, put = __set__noteData_k__BackingField))::GlobalNamespace::NoteData* _noteData_k__BackingField;

  /// @brief Field <multiplier>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__multiplier_k__BackingField, put = __set__multiplier_k__BackingField)) int32_t _multiplier_k__BackingField;

  /// @brief Field <maxMultiplier>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __get__maxMultiplier_k__BackingField, put = __set__maxMultiplier_k__BackingField)) int32_t _maxMultiplier_k__BackingField;

  /// @brief Field <isFinished>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __get__isFinished_k__BackingField, put = __set__isFinished_k__BackingField)) bool _isFinished_k__BackingField;

  __declspec(property(get = get_noteData, put = set_noteData))::GlobalNamespace::NoteData* noteData;

  __declspec(property(get = get_maxPossibleCutScore)) int32_t maxPossibleCutScore;

  __declspec(property(get = get_time)) float_t time;

  __declspec(property(get = get_multiplier, put = set_multiplier)) int32_t multiplier;

  __declspec(property(get = get_maxMultiplier, put = set_maxMultiplier)) int32_t maxMultiplier;

  __declspec(property(get = get_cutScore)) int32_t cutScore;

  __declspec(property(get = get_wouldBeCorrectCutBestPossibleMultiplierEventType))::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType wouldBeCorrectCutBestPossibleMultiplierEventType;

  __declspec(property(get = get_multiplierEventType))::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType multiplierEventType;

  __declspec(property(get = get_isFinished, put = set_isFinished)) bool isFinished;

  __declspec(property(get = get_executionOrder)) int32_t executionOrder;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::ScoringElement*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::ScoringElement*>*() noexcept;

  constexpr ::GlobalNamespace::NoteData*& __get__noteData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteData*> const& __get__noteData_k__BackingField() const;

  constexpr void __set__noteData_k__BackingField(::GlobalNamespace::NoteData* value);

  constexpr int32_t& __get__multiplier_k__BackingField();

  constexpr int32_t const& __get__multiplier_k__BackingField() const;

  constexpr void __set__multiplier_k__BackingField(int32_t value);

  constexpr int32_t& __get__maxMultiplier_k__BackingField();

  constexpr int32_t const& __get__maxMultiplier_k__BackingField() const;

  constexpr void __set__maxMultiplier_k__BackingField(int32_t value);

  constexpr bool& __get__isFinished_k__BackingField();

  constexpr bool const& __get__isFinished_k__BackingField() const;

  constexpr void __set__isFinished_k__BackingField(bool value);

  /// @brief Method get_noteData addr 0x2267ddc size 0x8 virtual false final false
  inline ::GlobalNamespace::NoteData* get_noteData();

  /// @brief Method set_noteData addr 0x2267de4 size 0x8 virtual false final false
  inline void set_noteData(::GlobalNamespace::NoteData* value);

  /// @brief Method get_maxPossibleCutScore addr 0x2267584 size 0x74 virtual false final false
  inline int32_t get_maxPossibleCutScore();

  /// @brief Method get_time addr 0x22674b0 size 0x1c virtual false final false
  inline float_t get_time();

  /// @brief Method get_multiplier addr 0x2267dec size 0x8 virtual false final false
  inline int32_t get_multiplier();

  /// @brief Method set_multiplier addr 0x2267df4 size 0x8 virtual false final false
  inline void set_multiplier(int32_t value);

  /// @brief Method get_maxMultiplier addr 0x2267dfc size 0x8 virtual false final false
  inline int32_t get_maxMultiplier();

  /// @brief Method set_maxMultiplier addr 0x2267e04 size 0x8 virtual false final false
  inline void set_maxMultiplier(int32_t value);

  /// @brief Method get_cutScore addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_cutScore();

  /// @brief Method get_wouldBeCorrectCutBestPossibleMultiplierEventType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType();

  /// @brief Method get_multiplierEventType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType get_multiplierEventType();

  /// @brief Method get_isFinished addr 0x2267e0c size 0x8 virtual false final false
  inline bool get_isFinished();

  /// @brief Method set_isFinished addr 0x2267e14 size 0xc virtual false final false
  inline void set_isFinished(bool value);

  /// @brief Method get_executionOrder addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_executionOrder();

  /// @brief Method CompareTo addr 0x2267e20 size 0x88 virtual true final true
  inline int32_t CompareTo(::GlobalNamespace::ScoringElement* other);

  /// @brief Method SetMultipliers addr 0x2267568 size 0x8 virtual false final false
  inline void SetMultipliers(int32_t multiplier, int32_t maxMultiplier);

  /// @brief Method Reinitialize addr 0x2267ea8 size 0x4 virtual true final false
  inline void Reinitialize();

  static inline ::GlobalNamespace::ScoringElement* New_ctor();

  /// @brief Method .ctor addr 0x2267eac size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ScoringElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScoringElement(ScoringElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScoringElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScoringElement(ScoringElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoringElement();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoringElement, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScoringElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoringElement*, "", "ScoringElement");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__ScoringElement__Pool_1, "", "ScoringElement/Pool`1");
