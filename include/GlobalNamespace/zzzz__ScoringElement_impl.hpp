#pragma once
// IWYU pragma private; include "GlobalNamespace\ScoringElement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__ScoringElement_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__ScoreMultiplierCounter_def.hpp"
#include "GlobalNamespace/zzzz__ScoringElement_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
template <typename T> inline void GlobalNamespace::ScoringElement_Pool_1<T>::Reinitialize(T scoringElement) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ScoringElement_Pool_1<T>*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scoringElement);
}
template <typename T> inline void GlobalNamespace::ScoringElement_Pool_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement_Pool_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::ScoringElement_Pool_1<T>* GlobalNamespace::ScoringElement_Pool_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScoringElement_Pool_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::ScoringElement_Pool_1<T>::ScoringElement_Pool_1() {}
//  Writing Method size for method: ::GlobalNamespace::ScoringElement.get_noteData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteData* (::GlobalNamespace::ScoringElement::*)()>(&::GlobalNamespace::ScoringElement::get_noteData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f64e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "get_noteData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoringElement.set_noteData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoringElement::*)(::GlobalNamespace::NoteData*)>(&::GlobalNamespace::ScoringElement::set_noteData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f64e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "set_noteData", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoringElement.get_maxPossibleCutScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ScoringElement::*)()>(&::GlobalNamespace::ScoringElement::get_maxPossibleCutScore)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59f5488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "get_maxPossibleCutScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoringElement.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ScoringElement::*)()>(&::GlobalNamespace::ScoringElement::get_time)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59f5468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "get_time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoringElement.get_multiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ScoringElement::*)()>(&::GlobalNamespace::ScoringElement::get_multiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f64f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "get_multiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoringElement.set_multiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoringElement::*)(int32_t)>(&::GlobalNamespace::ScoringElement::set_multiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f64f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "set_multiplier", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoringElement.get_maxMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ScoringElement::*)()>(&::GlobalNamespace::ScoringElement::get_maxMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f6500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "get_maxMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoringElement.set_maxMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoringElement::*)(int32_t)>(&::GlobalNamespace::ScoringElement::set_maxMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f6508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "set_maxMultiplier", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoringElement.get_cutScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ScoringElement::*)()>(&::GlobalNamespace::ScoringElement::get_cutScore)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { ::i2c::class_of<::GlobalNamespace::ScoringElement*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoringElement.get_wouldBeCorrectCutBestPossibleMultiplierEventType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType (::GlobalNamespace::ScoringElement::*)()>(
    &::GlobalNamespace::ScoringElement::get_wouldBeCorrectCutBestPossibleMultiplierEventType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { ::i2c::class_of<::GlobalNamespace::ScoringElement*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoringElement.get_multiplierEventType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType (::GlobalNamespace::ScoringElement::*)()>(
    &::GlobalNamespace::ScoringElement::get_multiplierEventType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { ::i2c::class_of<::GlobalNamespace::ScoringElement*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoringElement.get_isFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ScoringElement::*)()>(&::GlobalNamespace::ScoringElement::get_isFinished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f6510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "get_isFinished", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoringElement.set_isFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoringElement::*)(bool)>(&::GlobalNamespace::ScoringElement::set_isFinished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f6518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "set_isFinished", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoringElement.get_executionOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ScoringElement::*)()>(&::GlobalNamespace::ScoringElement::get_executionOrder)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { ::i2c::class_of<::GlobalNamespace::ScoringElement*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoringElement.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ScoringElement::*)(::GlobalNamespace::ScoringElement*)>(&::GlobalNamespace::ScoringElement::CompareTo)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x59f6520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "CompareTo", {}, { ::i2c::type_of<::GlobalNamespace::ScoringElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoringElement.SetMultipliers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoringElement::*)(int32_t, int32_t)>(&::GlobalNamespace::ScoringElement::SetMultipliers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f5480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "SetMultipliers", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoringElement.Reinitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoringElement::*)()>(&::GlobalNamespace::ScoringElement::Reinitialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f65d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { ::i2c::class_of<::GlobalNamespace::ScoringElement*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoringElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoringElement::*)()>(&::GlobalNamespace::ScoringElement::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f65d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NoteData*& GlobalNamespace::ScoringElement::__cordl_internal_get__noteData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteData_k__BackingField;
}
constexpr ::GlobalNamespace::NoteData* const& GlobalNamespace::ScoringElement::__cordl_internal_get__noteData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteData_k__BackingField;
}
constexpr void GlobalNamespace::ScoringElement::__cordl_internal_set__noteData_k__BackingField(::GlobalNamespace::NoteData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteData_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::ScoringElement::__cordl_internal_get__multiplier_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplier_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::ScoringElement::__cordl_internal_get__multiplier_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplier_k__BackingField;
}
constexpr void GlobalNamespace::ScoringElement::__cordl_internal_set__multiplier_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplier_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::ScoringElement::__cordl_internal_get__maxMultiplier_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxMultiplier_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::ScoringElement::__cordl_internal_get__maxMultiplier_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxMultiplier_k__BackingField;
}
constexpr void GlobalNamespace::ScoringElement::__cordl_internal_set__maxMultiplier_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxMultiplier_k__BackingField = value;
}
constexpr bool& GlobalNamespace::ScoringElement::__cordl_internal_get__isFinished_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFinished_k__BackingField;
}
constexpr bool const& GlobalNamespace::ScoringElement::__cordl_internal_get__isFinished_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFinished_k__BackingField;
}
constexpr void GlobalNamespace::ScoringElement::__cordl_internal_set__isFinished_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isFinished_k__BackingField = value;
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::ScoringElement::get_noteData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "get_noteData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*>(this, ___internal_method);
}
inline void GlobalNamespace::ScoringElement::set_noteData(::GlobalNamespace::NoteData* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "set_noteData", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::ScoringElement::get_maxPossibleCutScore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "get_maxPossibleCutScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::ScoringElement::get_time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ScoringElement::get_multiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "get_multiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ScoringElement::set_multiplier(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "set_multiplier", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::ScoringElement::get_maxMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "get_maxMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ScoringElement::set_maxMultiplier(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "set_maxMultiplier", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::ScoringElement::get_cutScore() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ScoringElement*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType GlobalNamespace::ScoringElement::get_wouldBeCorrectCutBestPossibleMultiplierEventType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ScoringElement*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType>(this, ___internal_method);
}
inline ::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType GlobalNamespace::ScoringElement::get_multiplierEventType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ScoringElement*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ScoreMultiplierCounter_MultiplierEventType>(this, ___internal_method);
}
inline bool GlobalNamespace::ScoringElement::get_isFinished() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "get_isFinished", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ScoringElement::set_isFinished(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "set_isFinished", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::ScoringElement::get_executionOrder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ScoringElement*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ScoringElement::CompareTo(::GlobalNamespace::ScoringElement* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "CompareTo", {}, { ::i2c::type_of<::GlobalNamespace::ScoringElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline void GlobalNamespace::ScoringElement::SetMultipliers(int32_t multiplier, int32_t maxMultiplier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { "SetMultipliers", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplier, maxMultiplier);
}
inline void GlobalNamespace::ScoringElement::Reinitialize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ScoringElement*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScoringElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoringElement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScoringElement* GlobalNamespace::ScoringElement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScoringElement*>());
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::ScoringElement*>"
constexpr GlobalNamespace::ScoringElement::operator ::System::IComparable_1<::GlobalNamespace::ScoringElement*>*() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::ScoringElement*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::ScoringElement*>"
constexpr ::System::IComparable_1<::GlobalNamespace::ScoringElement*>* GlobalNamespace::ScoringElement::i___System__IComparable_1___GlobalNamespace__ScoringElement__() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::ScoringElement*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoringElement::ScoringElement() {}
