#pragma once
// IWYU pragma private; include "HMUI\ModalViewBase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ModalViewBase_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::HMUI::ModalViewBase.add_blockerClickedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ModalViewBase::*)(::System::Action*)>(&::HMUI::ModalViewBase::add_blockerClickedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ModalViewBase*>(), { ::i2c::class_of<::HMUI::ModalViewBase*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ModalViewBase.remove_blockerClickedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ModalViewBase::*)(::System::Action*)>(&::HMUI::ModalViewBase::remove_blockerClickedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ModalViewBase*>(), { ::i2c::class_of<::HMUI::ModalViewBase*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ModalViewBase.Show
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ModalViewBase::*)(bool, bool, ::System::Action*)>(&::HMUI::ModalViewBase::Show)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ModalViewBase*>(), { ::i2c::class_of<::HMUI::ModalViewBase*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ModalViewBase.Hide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ModalViewBase::*)(bool, ::System::Action*)>(&::HMUI::ModalViewBase::Hide)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ModalViewBase*>(), { ::i2c::class_of<::HMUI::ModalViewBase*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ModalViewBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ModalViewBase::*)()>(&::HMUI::ModalViewBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588743c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ModalViewBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void HMUI::ModalViewBase::add_blockerClickedEvent(::System::Action* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ModalViewBase*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::ModalViewBase::remove_blockerClickedEvent(::System::Action* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ModalViewBase*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::ModalViewBase::Show(bool animated, bool moveToCenter, ::System::Action* finishedCallback) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ModalViewBase*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animated, moveToCenter, finishedCallback);
}
inline void HMUI::ModalViewBase::Hide(bool animated, ::System::Action* finishedCallback) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ModalViewBase*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animated, finishedCallback);
}
inline void HMUI::ModalViewBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ModalViewBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ModalViewBase* HMUI::ModalViewBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ModalViewBase*>());
}
// Ctor Parameters []
constexpr ::HMUI::ModalViewBase::ModalViewBase() {}
