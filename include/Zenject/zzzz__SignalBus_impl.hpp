#pragma once
// IWYU pragma private; include "Zenject\SignalBus.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SignalBus_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__ILateDisposable_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SignalBus_def.hpp"
#include "Zenject/zzzz__SignalDeclaration_def.hpp"
#include "Zenject/zzzz__SignalMissingHandlerResponses_def.hpp"
#include "Zenject/zzzz__SignalSubscriptionId_def.hpp"
#include "Zenject/zzzz__SignalSubscription_def.hpp"
#include "Zenject/zzzz__ZenjectSettings_def.hpp"
//  Writing Method size for method: ::Zenject::SignalBus___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus___c::*)()>(&::Zenject::SignalBus___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e49820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus___c.__ctor_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::BindingId (::Zenject::SignalBus___c::*)(::Zenject::SignalDeclaration*)>(&::Zenject::SignalBus___c::__ctor_b__7_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e49824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c*>(), { "<.ctor>b__7_0", {}, { ::i2c::type_of<::Zenject::SignalDeclaration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus___c.__ctor_b__7_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::SignalDeclaration* (::Zenject::SignalBus___c::*)(::Zenject::SignalDeclaration*)>(&::Zenject::SignalBus___c::__ctor_b__7_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e49838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c*>(), { "<.ctor>b__7_1", {}, { ::i2c::type_of<::Zenject::SignalDeclaration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus___c._LateDispose_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Zenject::SignalBus___c::*)(::Zenject::SignalSubscription*)>(&::Zenject::SignalBus___c::_LateDispose_b__12_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e49840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c*>(), { "<LateDispose>b__12_0", {}, { ::i2c::type_of<::Zenject::SignalSubscription*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SignalBus___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e49870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SignalBus___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e498b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::SignalBus___c::setStaticF___9(::Zenject::SignalBus___c* value) {
  ::cordl_internals::setStaticField<::Zenject::SignalBus___c*, "<>9", ::Zenject::SignalBus___c*>(std::forward<::Zenject::SignalBus___c*>(value));
}
inline ::Zenject::SignalBus___c* Zenject::SignalBus___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::SignalBus___c*, "<>9", ::Zenject::SignalBus___c*>();
}
inline void Zenject::SignalBus___c::setStaticF___9__7_0(::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::BindingId>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::BindingId>*, "<>9__7_0", ::Zenject::SignalBus___c*>(
      std::forward<::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::BindingId>*>(value));
}
inline ::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::BindingId>* Zenject::SignalBus___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::BindingId>*, "<>9__7_0", ::Zenject::SignalBus___c*>();
}
inline void Zenject::SignalBus___c::setStaticF___9__7_1(::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::SignalDeclaration*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::SignalDeclaration*>*, "<>9__7_1", ::Zenject::SignalBus___c*>(
      std::forward<::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::SignalDeclaration*>*>(value));
}
inline ::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::SignalDeclaration*>* Zenject::SignalBus___c::getStaticF___9__7_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::SignalDeclaration*>*, "<>9__7_1", ::Zenject::SignalBus___c*>();
}
inline void Zenject::SignalBus___c::setStaticF___9__12_0(::System::Func_2<::Zenject::SignalSubscription*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::SignalSubscription*, ::StringW>*, "<>9__12_0", ::Zenject::SignalBus___c*>(
      std::forward<::System::Func_2<::Zenject::SignalSubscription*, ::StringW>*>(value));
}
inline ::System::Func_2<::Zenject::SignalSubscription*, ::StringW>* Zenject::SignalBus___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::SignalSubscription*, ::StringW>*, "<>9__12_0", ::Zenject::SignalBus___c*>();
}
inline void Zenject::SignalBus___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::BindingId Zenject::SignalBus___c::__ctor_b__7_0(::Zenject::SignalDeclaration* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c*>(), { "<.ctor>b__7_0", {}, { ::i2c::type_of<::Zenject::SignalDeclaration*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindingId>(this, ___internal_method, x);
}
inline ::Zenject::SignalDeclaration* Zenject::SignalBus___c::__ctor_b__7_1(::Zenject::SignalDeclaration* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c*>(), { "<.ctor>b__7_1", {}, { ::i2c::type_of<::Zenject::SignalDeclaration*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalDeclaration*>(this, ___internal_method, x);
}
inline ::StringW Zenject::SignalBus___c::_LateDispose_b__12_0(::Zenject::SignalSubscription* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c*>(), { "<LateDispose>b__12_0", {}, { ::i2c::type_of<::Zenject::SignalSubscription*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::SignalBus___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SignalBus___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SignalBus___c* Zenject::SignalBus___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SignalBus___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::SignalBus___c::SignalBus___c() {}
template <typename TSignal> constexpr ::System::Action*& Zenject::SignalBus___c__DisplayClass25_0_1<TSignal>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TSignal> constexpr ::System::Action* const& Zenject::SignalBus___c__DisplayClass25_0_1<TSignal>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TSignal> constexpr void Zenject::SignalBus___c__DisplayClass25_0_1<TSignal>::__cordl_internal_set_callback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename TSignal> inline void Zenject::SignalBus___c__DisplayClass25_0_1<TSignal>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c__DisplayClass25_0_1<TSignal>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TSignal> inline void Zenject::SignalBus___c__DisplayClass25_0_1<TSignal>::_SubscribeId_b__0(::System::Object* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c__DisplayClass25_0_1<TSignal>*>(), { "<SubscribeId>b__0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
template <typename TSignal> inline ::System::Object* Zenject::SignalBus___c__DisplayClass25_0_1<TSignal>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c__DisplayClass25_0_1<TSignal>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TSignal> inline ::Zenject::InjectTypeInfo* Zenject::SignalBus___c__DisplayClass25_0_1<TSignal>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c__DisplayClass25_0_1<TSignal>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TSignal> inline ::Zenject::SignalBus___c__DisplayClass25_0_1<TSignal>* Zenject::SignalBus___c__DisplayClass25_0_1<TSignal>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SignalBus___c__DisplayClass25_0_1<TSignal>*>());
}
// Ctor Parameters []
template <typename TSignal> constexpr ::Zenject::SignalBus___c__DisplayClass25_0_1<TSignal>::SignalBus___c__DisplayClass25_0_1() {}
template <typename TSignal> constexpr ::System::Action_1<TSignal>*& Zenject::SignalBus___c__DisplayClass27_0_1<TSignal>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TSignal> constexpr ::System::Action_1<TSignal>* const& Zenject::SignalBus___c__DisplayClass27_0_1<TSignal>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TSignal> constexpr void Zenject::SignalBus___c__DisplayClass27_0_1<TSignal>::__cordl_internal_set_callback(::System::Action_1<TSignal>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename TSignal> inline void Zenject::SignalBus___c__DisplayClass27_0_1<TSignal>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c__DisplayClass27_0_1<TSignal>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TSignal> inline void Zenject::SignalBus___c__DisplayClass27_0_1<TSignal>::_SubscribeId_b__0(::System::Object* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c__DisplayClass27_0_1<TSignal>*>(), { "<SubscribeId>b__0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
template <typename TSignal> inline ::System::Object* Zenject::SignalBus___c__DisplayClass27_0_1<TSignal>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c__DisplayClass27_0_1<TSignal>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TSignal> inline ::Zenject::InjectTypeInfo* Zenject::SignalBus___c__DisplayClass27_0_1<TSignal>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus___c__DisplayClass27_0_1<TSignal>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TSignal> inline ::Zenject::SignalBus___c__DisplayClass27_0_1<TSignal>* Zenject::SignalBus___c__DisplayClass27_0_1<TSignal>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SignalBus___c__DisplayClass27_0_1<TSignal>*>());
}
// Ctor Parameters []
template <typename TSignal> constexpr ::Zenject::SignalBus___c__DisplayClass27_0_1<TSignal>::SignalBus___c__DisplayClass27_0_1() {}
//  Writing Method size for method: ::Zenject::SignalBus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Zenject::SignalBus::*)(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*, ::Zenject::SignalBus*, ::Zenject::ZenjectSettings*,
                                               ::Zenject::SignalSubscription_Pool*, ::Zenject::SignalDeclaration_Factory*, ::Zenject::DiContainer*)>(&::Zenject::SignalBus::_ctor)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x6e4815c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*>(), ::i2c::type_of<::Zenject::SignalBus*>(),
                                                                 ::i2c::type_of<::Zenject::ZenjectSettings*>(), ::i2c::type_of<::Zenject::SignalSubscription_Pool*>(),
                                                                 ::i2c::type_of<::Zenject::SignalDeclaration_Factory*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.get_ParentBus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::SignalBus* (::Zenject::SignalBus::*)()>(&::Zenject::SignalBus::get_ParentBus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e48410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "get_ParentBus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.get_NumSubscribers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::SignalBus::*)()>(&::Zenject::SignalBus::get_NumSubscribers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e48418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "get_NumSubscribers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.LateDispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)()>(&::Zenject::SignalBus::LateDispose)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x6e48470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "LateDispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.FireId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::System::Object*, ::System::Object*)>(&::Zenject::SignalBus::FireId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e48878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "FireId", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.Fire
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::System::Object*)>(&::Zenject::SignalBus::Fire)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e488cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "Fire", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.TryFireId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::System::Object*, ::System::Object*)>(&::Zenject::SignalBus::TryFireId)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e488d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "TryFireId", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.TryFire
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::System::Object*)>(&::Zenject::SignalBus::TryFire)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e48934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "TryFire", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.SubscribeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::System::Type*, ::System::Object*, ::System::Action_1<::System::Object*>*)>(
    &::Zenject::SignalBus::SubscribeId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e44f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                         { "SubscribeId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.Subscribe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::System::Type*, ::System::Action_1<::System::Object*>*)>(&::Zenject::SignalBus::Subscribe)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e48964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "Subscribe", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.UnsubscribeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::System::Type*, ::System::Object*, ::System::Action*)>(&::Zenject::SignalBus::UnsubscribeId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e48984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                                { "UnsubscribeId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.Unsubscribe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::System::Type*, ::System::Action*)>(&::Zenject::SignalBus::Unsubscribe)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e489cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "Unsubscribe", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.UnsubscribeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::System::Type*, ::System::Object*, ::System::Action_1<::System::Object*>*)>(
    &::Zenject::SignalBus::UnsubscribeId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e45240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                            { "UnsubscribeId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.Unsubscribe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::System::Type*, ::System::Action_1<::System::Object*>*)>(&::Zenject::SignalBus::Unsubscribe)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e489f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "Unsubscribe", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.TryUnsubscribeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::System::Type*, ::System::Object*, ::System::Action*)>(&::Zenject::SignalBus::TryUnsubscribeId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e48a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                                { "TryUnsubscribeId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.TryUnsubscribe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::System::Type*, ::System::Action*)>(&::Zenject::SignalBus::TryUnsubscribe)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e48a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "TryUnsubscribe", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.TryUnsubscribeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::System::Type*, ::System::Object*, ::System::Action_1<::System::Object*>*)>(
    &::Zenject::SignalBus::TryUnsubscribeId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e48a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                            { "TryUnsubscribeId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.TryUnsubscribe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::System::Type*, ::System::Action_1<::System::Object*>*)>(&::Zenject::SignalBus::TryUnsubscribe)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e48a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "TryUnsubscribe", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.UnsubscribeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::System::Type*, ::System::Object*, ::System::Object*, bool)>(&::Zenject::SignalBus::UnsubscribeInternal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e489a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                            { "UnsubscribeInternal", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.UnsubscribeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::Zenject::BindingId, ::System::Object*, bool)>(&::Zenject::SignalBus::UnsubscribeInternal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e48aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                                             { "UnsubscribeInternal", {}, { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.UnsubscribeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::Zenject::SignalSubscriptionId, bool)>(&::Zenject::SignalBus::UnsubscribeInternal)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6e48ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "UnsubscribeInternal", {}, { ::i2c::type_of<::Zenject::SignalSubscriptionId>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.SubscribeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::System::Type*, ::System::Object*, ::System::Object*, ::System::Action_1<::System::Object*>*)>(
    &::Zenject::SignalBus::SubscribeInternal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e48940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "SubscribeInternal",
                                                                                            {},
                                                                                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(),
                                                                                              ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.SubscribeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::Zenject::BindingId, ::System::Object*, ::System::Action_1<::System::Object*>*)>(
    &::Zenject::SignalBus::SubscribeInternal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e48bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                            { "SubscribeInternal", {}, { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.SubscribeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::Zenject::SignalSubscriptionId, ::System::Action_1<::System::Object*>*)>(
    &::Zenject::SignalBus::SubscribeInternal)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6e48c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                                { "SubscribeInternal", {}, { ::i2c::type_of<::Zenject::SignalSubscriptionId>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.DeclareSignal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBus::*)(::System::Type*, ::System::Object*, ::System::Nullable_1<::Zenject::SignalMissingHandlerResponses>,
                                                                                      ::System::Nullable_1<bool>, ::System::Nullable_1<int32_t>)>(&::Zenject::SignalBus::DeclareSignal)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6e48ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                         { "DeclareSignal",
                                           {},
                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Nullable_1<::Zenject::SignalMissingHandlerResponses>>(),
                                             ::i2c::type_of<::System::Nullable_1<bool>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.GetDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::SignalDeclaration* (::Zenject::SignalBus::*)(::System::Type*, ::System::Object*, bool)>(&::Zenject::SignalBus::GetDeclaration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e488c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "GetDeclaration", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.GetDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::SignalDeclaration* (::Zenject::SignalBus::*)(::Zenject::BindingId, bool)>(&::Zenject::SignalBus::GetDeclaration)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6e48d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "GetDeclaration", {}, { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SignalBus::__zenCreate)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x6e49040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBus.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SignalBus::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x6e492dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::SignalSubscription_Pool*& Zenject::SignalBus::__cordl_internal_get__subscriptionPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subscriptionPool;
}
constexpr ::Zenject::SignalSubscription_Pool* const& Zenject::SignalBus::__cordl_internal_get__subscriptionPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subscriptionPool;
}
constexpr void Zenject::SignalBus::__cordl_internal_set__subscriptionPool(::Zenject::SignalSubscription_Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subscriptionPool = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::Zenject::SignalDeclaration*>*& Zenject::SignalBus::__cordl_internal_get__localDeclarationMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localDeclarationMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::Zenject::SignalDeclaration*>* const& Zenject::SignalBus::__cordl_internal_get__localDeclarationMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localDeclarationMap;
}
constexpr void Zenject::SignalBus::__cordl_internal_set__localDeclarationMap(::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::Zenject::SignalDeclaration*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localDeclarationMap = value;
}
constexpr ::Zenject::SignalBus*& Zenject::SignalBus::__cordl_internal_get__parentBus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentBus;
}
constexpr ::Zenject::SignalBus* const& Zenject::SignalBus::__cordl_internal_get__parentBus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentBus;
}
constexpr void Zenject::SignalBus::__cordl_internal_set__parentBus(::Zenject::SignalBus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentBus = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::SignalSubscriptionId, ::Zenject::SignalSubscription*>*& Zenject::SignalBus::__cordl_internal_get__subscriptionMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subscriptionMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::SignalSubscriptionId, ::Zenject::SignalSubscription*>* const& Zenject::SignalBus::__cordl_internal_get__subscriptionMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subscriptionMap;
}
constexpr void Zenject::SignalBus::__cordl_internal_set__subscriptionMap(::System::Collections::Generic::Dictionary_2<::Zenject::SignalSubscriptionId, ::Zenject::SignalSubscription*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subscriptionMap = value;
}
constexpr ::Zenject::ZenjectSettings_SignalSettings*& Zenject::SignalBus::__cordl_internal_get__settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr ::Zenject::ZenjectSettings_SignalSettings* const& Zenject::SignalBus::__cordl_internal_get__settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr void Zenject::SignalBus::__cordl_internal_set__settings(::Zenject::ZenjectSettings_SignalSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settings = value;
}
constexpr ::Zenject::SignalDeclaration_Factory*& Zenject::SignalBus::__cordl_internal_get__signalDeclarationFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signalDeclarationFactory;
}
constexpr ::Zenject::SignalDeclaration_Factory* const& Zenject::SignalBus::__cordl_internal_get__signalDeclarationFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signalDeclarationFactory;
}
constexpr void Zenject::SignalBus::__cordl_internal_set__signalDeclarationFactory(::Zenject::SignalDeclaration_Factory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____signalDeclarationFactory = value;
}
constexpr ::Zenject::DiContainer*& Zenject::SignalBus::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& Zenject::SignalBus::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void Zenject::SignalBus::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
inline void Zenject::SignalBus::_ctor(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* signalDeclarations, ::Zenject::SignalBus* parentBus,
                                      ::Zenject::ZenjectSettings* zenjectSettings, ::Zenject::SignalSubscription_Pool* subscriptionPool, ::Zenject::SignalDeclaration_Factory* signalDeclarationFactory,
                                      ::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*>(), ::i2c::type_of<::Zenject::SignalBus*>(),
                                                               ::i2c::type_of<::Zenject::ZenjectSettings*>(), ::i2c::type_of<::Zenject::SignalSubscription_Pool*>(),
                                                               ::i2c::type_of<::Zenject::SignalDeclaration_Factory*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalDeclarations, parentBus, zenjectSettings, subscriptionPool, signalDeclarationFactory, container);
}
inline ::Zenject::SignalBus* Zenject::SignalBus::get_ParentBus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "get_ParentBus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalBus*>(this, ___internal_method);
}
inline int32_t Zenject::SignalBus::get_NumSubscribers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "get_NumSubscribers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Zenject::SignalBus::LateDispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "LateDispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TSignal> inline void Zenject::SignalBus::FireId(::System::Object* identifier, TSignal signal) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "FireId", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<TSignal>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier, signal);
}
template <typename TSignal> inline void Zenject::SignalBus::Fire(TSignal signal) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "Fire", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<TSignal>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal);
}
template <typename TSignal> inline void Zenject::SignalBus::FireId(::System::Object* identifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "FireId", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier);
}
template <typename TSignal> inline void Zenject::SignalBus::Fire() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "Fire", { ::i2c::class_of<TSignal>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::SignalBus::FireId(::System::Object* identifier, ::System::Object* signal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "FireId", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier, signal);
}
inline void Zenject::SignalBus::Fire(::System::Object* signal) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "Fire", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal);
}
template <typename TSignal> inline void Zenject::SignalBus::TryFireId(::System::Object* identifier, TSignal signal) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "TryFireId", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<TSignal>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier, signal);
}
template <typename TSignal> inline void Zenject::SignalBus::TryFire(TSignal signal) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "TryFire", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<TSignal>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal);
}
template <typename TSignal> inline void Zenject::SignalBus::TryFireId(::System::Object* identifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "TryFireId", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier);
}
template <typename TSignal> inline void Zenject::SignalBus::TryFire() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "TryFire", { ::i2c::class_of<TSignal>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::SignalBus::TryFireId(::System::Object* identifier, ::System::Object* signal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "TryFireId", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier, signal);
}
inline void Zenject::SignalBus::TryFire(::System::Object* signal) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "TryFire", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal);
}
template <typename TSignal> inline void Zenject::SignalBus::SubscribeId(::System::Object* identifier, ::System::Action* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "SubscribeId", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier, callback);
}
template <typename TSignal> inline void Zenject::SignalBus::Subscribe(::System::Action* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "Subscribe", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::System::Action*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
template <typename TSignal> inline void Zenject::SignalBus::SubscribeId(::System::Object* identifier, ::System::Action_1<TSignal>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                              { "SubscribeId", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_1<TSignal>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier, callback);
}
template <typename TSignal> inline void Zenject::SignalBus::Subscribe(::System::Action_1<TSignal>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "Subscribe", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::System::Action_1<TSignal>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Zenject::SignalBus::SubscribeId(::System::Type* signalType, ::System::Object* identifier, ::System::Action_1<::System::Object*>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                       { "SubscribeId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalType, identifier, callback);
}
inline void Zenject::SignalBus::Subscribe(::System::Type* signalType, ::System::Action_1<::System::Object*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "Subscribe", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalType, callback);
}
template <typename TSignal> inline void Zenject::SignalBus::UnsubscribeId(::System::Object* identifier, ::System::Action* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                                           { "UnsubscribeId", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier, callback);
}
template <typename TSignal> inline void Zenject::SignalBus::Unsubscribe(::System::Action* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "Unsubscribe", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::System::Action*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Zenject::SignalBus::UnsubscribeId(::System::Type* signalType, ::System::Object* identifier, ::System::Action* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                                           { "UnsubscribeId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalType, identifier, callback);
}
inline void Zenject::SignalBus::Unsubscribe(::System::Type* signalType, ::System::Action* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "Unsubscribe", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalType, callback);
}
inline void Zenject::SignalBus::UnsubscribeId(::System::Type* signalType, ::System::Object* identifier, ::System::Action_1<::System::Object*>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                       { "UnsubscribeId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalType, identifier, callback);
}
inline void Zenject::SignalBus::Unsubscribe(::System::Type* signalType, ::System::Action_1<::System::Object*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "Unsubscribe", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalType, callback);
}
template <typename TSignal> inline void Zenject::SignalBus::UnsubscribeId(::System::Object* identifier, ::System::Action_1<TSignal>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                              { "UnsubscribeId", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_1<TSignal>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier, callback);
}
template <typename TSignal> inline void Zenject::SignalBus::Unsubscribe(::System::Action_1<TSignal>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "Unsubscribe", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::System::Action_1<TSignal>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
template <typename TSignal> inline void Zenject::SignalBus::TryUnsubscribeId(::System::Object* identifier, ::System::Action* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                                           { "TryUnsubscribeId", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier, callback);
}
template <typename TSignal> inline void Zenject::SignalBus::TryUnsubscribe(::System::Action* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "TryUnsubscribe", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::System::Action*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Zenject::SignalBus::TryUnsubscribeId(::System::Type* signalType, ::System::Object* identifier, ::System::Action* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                              { "TryUnsubscribeId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalType, identifier, callback);
}
inline void Zenject::SignalBus::TryUnsubscribe(::System::Type* signalType, ::System::Action* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "TryUnsubscribe", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalType, callback);
}
inline void Zenject::SignalBus::TryUnsubscribeId(::System::Type* signalType, ::System::Object* identifier, ::System::Action_1<::System::Object*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                          { "TryUnsubscribeId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalType, identifier, callback);
}
inline void Zenject::SignalBus::TryUnsubscribe(::System::Type* signalType, ::System::Action_1<::System::Object*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "TryUnsubscribe", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalType, callback);
}
template <typename TSignal> inline void Zenject::SignalBus::TryUnsubscribeId(::System::Object* identifier, ::System::Action_1<TSignal>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                              { "TryUnsubscribeId", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_1<TSignal>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier, callback);
}
template <typename TSignal> inline void Zenject::SignalBus::TryUnsubscribe(::System::Action_1<TSignal>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "TryUnsubscribe", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::System::Action_1<TSignal>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Zenject::SignalBus::UnsubscribeInternal(::System::Type* signalType, ::System::Object* identifier, ::System::Object* token, bool throwIfMissing) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                          { "UnsubscribeInternal", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalType, identifier, token, throwIfMissing);
}
inline void Zenject::SignalBus::UnsubscribeInternal(::Zenject::BindingId signalId, ::System::Object* token, bool throwIfMissing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                                           { "UnsubscribeInternal", {}, { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalId, token, throwIfMissing);
}
inline void Zenject::SignalBus::UnsubscribeInternal(::Zenject::SignalSubscriptionId id, bool throwIfMissing) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "UnsubscribeInternal", {}, { ::i2c::type_of<::Zenject::SignalSubscriptionId>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, throwIfMissing);
}
inline void Zenject::SignalBus::SubscribeInternal(::System::Type* signalType, ::System::Object* identifier, ::System::Object* token, ::System::Action_1<::System::Object*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "SubscribeInternal",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(),
                                                                                            ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalType, identifier, token, callback);
}
inline void Zenject::SignalBus::SubscribeInternal(::Zenject::BindingId signalId, ::System::Object* token, ::System::Action_1<::System::Object*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                          { "SubscribeInternal", {}, { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalId, token, callback);
}
inline void Zenject::SignalBus::SubscribeInternal(::Zenject::SignalSubscriptionId id, ::System::Action_1<::System::Object*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                              { "SubscribeInternal", {}, { ::i2c::type_of<::Zenject::SignalSubscriptionId>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, callback);
}
template <typename T>
inline void Zenject::SignalBus::DeclareSignal(::System::Object* identifier, ::System::Nullable_1<::Zenject::SignalMissingHandlerResponses> missingHandlerResponse,
                                              ::System::Nullable_1<bool> forceAsync, ::System::Nullable_1<int32_t> asyncTickPriority) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "DeclareSignal",
                                                                      { ::i2c::class_of<T>() },
                                                                      { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Nullable_1<::Zenject::SignalMissingHandlerResponses>>(),
                                                                        ::i2c::type_of<::System::Nullable_1<bool>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier, missingHandlerResponse, forceAsync, asyncTickPriority);
}
inline void Zenject::SignalBus::DeclareSignal(::System::Type* signalType, ::System::Object* identifier, ::System::Nullable_1<::Zenject::SignalMissingHandlerResponses> missingHandlerResponse,
                                              ::System::Nullable_1<bool> forceAsync, ::System::Nullable_1<int32_t> asyncTickPriority) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(),
                                       { "DeclareSignal",
                                         {},
                                         { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Nullable_1<::Zenject::SignalMissingHandlerResponses>>(),
                                           ::i2c::type_of<::System::Nullable_1<bool>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalType, identifier, missingHandlerResponse, forceAsync, asyncTickPriority);
}
inline ::Zenject::SignalDeclaration* Zenject::SignalBus::GetDeclaration(::System::Type* signalType, ::System::Object* identifier, bool requireDeclaration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "GetDeclaration", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalDeclaration*>(this, ___internal_method, signalType, identifier, requireDeclaration);
}
inline ::Zenject::SignalDeclaration* Zenject::SignalBus::GetDeclaration(::Zenject::BindingId signalId, bool requireDeclaration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "GetDeclaration", {}, { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalDeclaration*>(this, ___internal_method, signalId, requireDeclaration);
}
inline ::System::Object* Zenject::SignalBus::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SignalBus::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBus*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SignalBus* Zenject::SignalBus::New_ctor(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* signalDeclarations, ::Zenject::SignalBus* parentBus,
                                                          ::Zenject::ZenjectSettings* zenjectSettings, ::Zenject::SignalSubscription_Pool* subscriptionPool,
                                                          ::Zenject::SignalDeclaration_Factory* signalDeclarationFactory, ::Zenject::DiContainer* container) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SignalBus*>(signalDeclarations, parentBus, zenjectSettings, subscriptionPool, signalDeclarationFactory, container));
}
/// @brief Convert operator to "::Zenject::ILateDisposable"
constexpr Zenject::SignalBus::operator ::Zenject::ILateDisposable*() noexcept {
  return static_cast<::Zenject::ILateDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ILateDisposable"
constexpr ::Zenject::ILateDisposable* Zenject::SignalBus::i___Zenject__ILateDisposable() noexcept {
  return static_cast<::Zenject::ILateDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::SignalBus::SignalBus() {}
