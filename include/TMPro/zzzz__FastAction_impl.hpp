#pragma once
// IWYU pragma private; include "TMPro/FastAction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__FastAction_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::TMPro::FastAction.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::FastAction::*)(::System::Action*)>(&::TMPro::FastAction::Add)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6931cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::FastAction*>(), { "Add", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::FastAction.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::FastAction::*)(::System::Action*)>(&::TMPro::FastAction::Remove)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6931df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::FastAction*>(), { "Remove", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::FastAction.Call
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::FastAction::*)()>(&::TMPro::FastAction::Call)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6931ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::FastAction*>(), { "Call", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::FastAction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::FastAction::*)()>(&::TMPro::FastAction::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6931f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::FastAction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action*>*& TMPro::FastAction::__cordl_internal_get_delegates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegates;
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action*>* const& TMPro::FastAction::__cordl_internal_get_delegates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegates;
}
constexpr void TMPro::FastAction::__cordl_internal_set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delegates = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>*& TMPro::FastAction::__cordl_internal_get_lookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* const&
TMPro::FastAction::__cordl_internal_get_lookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
constexpr void
TMPro::FastAction::__cordl_internal_set_lookup(::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lookup = value;
}
inline void TMPro::FastAction::Add(::System::Action* rhs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::FastAction*>(), { "Add", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rhs);
}
inline void TMPro::FastAction::Remove(::System::Action* rhs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::FastAction*>(), { "Remove", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rhs);
}
inline void TMPro::FastAction::Call() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::FastAction*>(), { "Call", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::FastAction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::FastAction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::FastAction* TMPro::FastAction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::FastAction*>());
}
// Ctor Parameters []
constexpr ::TMPro::FastAction::FastAction() {}
