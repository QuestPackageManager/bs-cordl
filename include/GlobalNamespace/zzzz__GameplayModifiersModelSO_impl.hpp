#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayModifiersModelSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x370a90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x370b484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter::*)(::GlobalNamespace::GameplayModifiers*, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x370b498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x370b4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(), 15 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter::Invoke(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers);
}
inline ::System::IAsyncResult* GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter::BeginInvoke(::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, gameplayModifiers, callback, object);
}
inline bool GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter::New_ctor(::System::Object* object,
                                                                                                                                                              ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter::GameplayModifiersModelSO_GameplayModifierBoolGetter() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersModelSO___c::*)()>(&::GlobalNamespace::GameplayModifiersModelSO___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x370b530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO___c._OnEnable_b__21_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO___c::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x370b534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                           { "<OnEnable>b__21_0", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO___c._OnEnable_b__21_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO___c::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x370b550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                           { "<OnEnable>b__21_1", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO___c._OnEnable_b__21_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO___c::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x370b564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                           { "<OnEnable>b__21_2", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO___c._OnEnable_b__21_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO___c::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x370b578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                           { "<OnEnable>b__21_3", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO___c._OnEnable_b__21_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO___c::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_4)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x370b594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                           { "<OnEnable>b__21_4", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO___c._OnEnable_b__21_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO___c::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_5)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x370b5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                           { "<OnEnable>b__21_5", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO___c._OnEnable_b__21_6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO___c::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_6)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x370b5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                           { "<OnEnable>b__21_6", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO___c._OnEnable_b__21_7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO___c::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_7)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x370b5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                           { "<OnEnable>b__21_7", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO___c._OnEnable_b__21_8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO___c::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_8)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x370b5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                           { "<OnEnable>b__21_8", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO___c._OnEnable_b__21_9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO___c::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_9)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x370b600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                           { "<OnEnable>b__21_9", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO___c._OnEnable_b__21_10
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO___c::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_10)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x370b61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                           { "<OnEnable>b__21_10", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO___c._OnEnable_b__21_11
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO___c::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_11)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x370b638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                           { "<OnEnable>b__21_11", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO___c._OnEnable_b__21_12
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO___c::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_12)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x370b64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                           { "<OnEnable>b__21_12", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO___c._OnEnable_b__21_13
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO___c::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_13)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x370b660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                           { "<OnEnable>b__21_13", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO___c._OnEnable_b__21_14
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO___c::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_14)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x370b674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                           { "<OnEnable>b__21_14", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO___c._OnEnable_b__21_15
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO___c::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_15)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x370b688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                           { "<OnEnable>b__21_15", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayModifiersModelSO___c::setStaticF___9(::GlobalNamespace::GameplayModifiersModelSO___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersModelSO___c*, "<>9", ::GlobalNamespace::GameplayModifiersModelSO___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersModelSO___c*>(value));
}
inline ::GlobalNamespace::GameplayModifiersModelSO___c* GlobalNamespace::GameplayModifiersModelSO___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersModelSO___c*, "<>9", ::GlobalNamespace::GameplayModifiersModelSO___c*>();
}
inline void GlobalNamespace::GameplayModifiersModelSO___c::setStaticF___9__21_0(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_0", ::GlobalNamespace::GameplayModifiersModelSO___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(value));
}
inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* GlobalNamespace::GameplayModifiersModelSO___c::getStaticF___9__21_0() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_0", ::GlobalNamespace::GameplayModifiersModelSO___c*>();
}
inline void GlobalNamespace::GameplayModifiersModelSO___c::setStaticF___9__21_1(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_1", ::GlobalNamespace::GameplayModifiersModelSO___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(value));
}
inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* GlobalNamespace::GameplayModifiersModelSO___c::getStaticF___9__21_1() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_1", ::GlobalNamespace::GameplayModifiersModelSO___c*>();
}
inline void GlobalNamespace::GameplayModifiersModelSO___c::setStaticF___9__21_2(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_2", ::GlobalNamespace::GameplayModifiersModelSO___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(value));
}
inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* GlobalNamespace::GameplayModifiersModelSO___c::getStaticF___9__21_2() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_2", ::GlobalNamespace::GameplayModifiersModelSO___c*>();
}
inline void GlobalNamespace::GameplayModifiersModelSO___c::setStaticF___9__21_3(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_3", ::GlobalNamespace::GameplayModifiersModelSO___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(value));
}
inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* GlobalNamespace::GameplayModifiersModelSO___c::getStaticF___9__21_3() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_3", ::GlobalNamespace::GameplayModifiersModelSO___c*>();
}
inline void GlobalNamespace::GameplayModifiersModelSO___c::setStaticF___9__21_4(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_4", ::GlobalNamespace::GameplayModifiersModelSO___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(value));
}
inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* GlobalNamespace::GameplayModifiersModelSO___c::getStaticF___9__21_4() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_4", ::GlobalNamespace::GameplayModifiersModelSO___c*>();
}
inline void GlobalNamespace::GameplayModifiersModelSO___c::setStaticF___9__21_5(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_5", ::GlobalNamespace::GameplayModifiersModelSO___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(value));
}
inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* GlobalNamespace::GameplayModifiersModelSO___c::getStaticF___9__21_5() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_5", ::GlobalNamespace::GameplayModifiersModelSO___c*>();
}
inline void GlobalNamespace::GameplayModifiersModelSO___c::setStaticF___9__21_6(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_6", ::GlobalNamespace::GameplayModifiersModelSO___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(value));
}
inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* GlobalNamespace::GameplayModifiersModelSO___c::getStaticF___9__21_6() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_6", ::GlobalNamespace::GameplayModifiersModelSO___c*>();
}
inline void GlobalNamespace::GameplayModifiersModelSO___c::setStaticF___9__21_7(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_7", ::GlobalNamespace::GameplayModifiersModelSO___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(value));
}
inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* GlobalNamespace::GameplayModifiersModelSO___c::getStaticF___9__21_7() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_7", ::GlobalNamespace::GameplayModifiersModelSO___c*>();
}
inline void GlobalNamespace::GameplayModifiersModelSO___c::setStaticF___9__21_8(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_8", ::GlobalNamespace::GameplayModifiersModelSO___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(value));
}
inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* GlobalNamespace::GameplayModifiersModelSO___c::getStaticF___9__21_8() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_8", ::GlobalNamespace::GameplayModifiersModelSO___c*>();
}
inline void GlobalNamespace::GameplayModifiersModelSO___c::setStaticF___9__21_9(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_9", ::GlobalNamespace::GameplayModifiersModelSO___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(value));
}
inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* GlobalNamespace::GameplayModifiersModelSO___c::getStaticF___9__21_9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_9", ::GlobalNamespace::GameplayModifiersModelSO___c*>();
}
inline void GlobalNamespace::GameplayModifiersModelSO___c::setStaticF___9__21_10(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_10", ::GlobalNamespace::GameplayModifiersModelSO___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(value));
}
inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* GlobalNamespace::GameplayModifiersModelSO___c::getStaticF___9__21_10() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_10", ::GlobalNamespace::GameplayModifiersModelSO___c*>();
}
inline void GlobalNamespace::GameplayModifiersModelSO___c::setStaticF___9__21_11(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_11", ::GlobalNamespace::GameplayModifiersModelSO___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(value));
}
inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* GlobalNamespace::GameplayModifiersModelSO___c::getStaticF___9__21_11() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_11", ::GlobalNamespace::GameplayModifiersModelSO___c*>();
}
inline void GlobalNamespace::GameplayModifiersModelSO___c::setStaticF___9__21_12(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_12", ::GlobalNamespace::GameplayModifiersModelSO___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(value));
}
inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* GlobalNamespace::GameplayModifiersModelSO___c::getStaticF___9__21_12() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_12", ::GlobalNamespace::GameplayModifiersModelSO___c*>();
}
inline void GlobalNamespace::GameplayModifiersModelSO___c::setStaticF___9__21_13(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_13", ::GlobalNamespace::GameplayModifiersModelSO___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(value));
}
inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* GlobalNamespace::GameplayModifiersModelSO___c::getStaticF___9__21_13() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_13", ::GlobalNamespace::GameplayModifiersModelSO___c*>();
}
inline void GlobalNamespace::GameplayModifiersModelSO___c::setStaticF___9__21_14(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_14", ::GlobalNamespace::GameplayModifiersModelSO___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(value));
}
inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* GlobalNamespace::GameplayModifiersModelSO___c::getStaticF___9__21_14() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_14", ::GlobalNamespace::GameplayModifiersModelSO___c*>();
}
inline void GlobalNamespace::GameplayModifiersModelSO___c::setStaticF___9__21_15(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_15", ::GlobalNamespace::GameplayModifiersModelSO___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>(value));
}
inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* GlobalNamespace::GameplayModifiersModelSO___c::getStaticF___9__21_15() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "<>9__21_15", ::GlobalNamespace::GameplayModifiersModelSO___c*>();
}
inline void GlobalNamespace::GameplayModifiersModelSO___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_0(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(), { "<OnEnable>b__21_0", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers);
}
inline bool GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_1(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(), { "<OnEnable>b__21_1", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers);
}
inline bool GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_2(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(), { "<OnEnable>b__21_2", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers);
}
inline bool GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_3(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(), { "<OnEnable>b__21_3", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers);
}
inline bool GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_4(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(), { "<OnEnable>b__21_4", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers);
}
inline bool GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_5(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(), { "<OnEnable>b__21_5", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers);
}
inline bool GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_6(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(), { "<OnEnable>b__21_6", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers);
}
inline bool GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_7(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(), { "<OnEnable>b__21_7", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers);
}
inline bool GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_8(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(), { "<OnEnable>b__21_8", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers);
}
inline bool GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_9(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(), { "<OnEnable>b__21_9", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers);
}
inline bool GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_10(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                         { "<OnEnable>b__21_10", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers);
}
inline bool GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_11(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                         { "<OnEnable>b__21_11", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers);
}
inline bool GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_12(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                         { "<OnEnable>b__21_12", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers);
}
inline bool GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_13(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                         { "<OnEnable>b__21_13", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers);
}
inline bool GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_14(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                         { "<OnEnable>b__21_14", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers);
}
inline bool GlobalNamespace::GameplayModifiersModelSO___c::_OnEnable_b__21_15(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO___c*>(),
                                                                                         { "<OnEnable>b__21_15", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers);
}
inline ::GlobalNamespace::GameplayModifiersModelSO___c* GlobalNamespace::GameplayModifiersModelSO___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayModifiersModelSO___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiersModelSO___c::GameplayModifiersModelSO___c() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO.get_gameplayModifierGetters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>* (
        ::GlobalNamespace::GameplayModifiersModelSO::*)()>(&::GlobalNamespace::GameplayModifiersModelSO::get_gameplayModifierGetters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3709df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(), { "get_gameplayModifierGetters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersModelSO::*)()>(&::GlobalNamespace::GameplayModifiersModelSO::OnEnable)> {
  constexpr static std::size_t size = 0xb10;
  constexpr static std::size_t addrs = 0x3709dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(), { ::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO.CreateGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::GameplayModifiersModelSO::*)(::System::Func_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, bool>*)>(
        &::GlobalNamespace::GameplayModifiersModelSO::CreateGameplayModifiers)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x370aa50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
                                                             { "CreateGameplayModifiers", {}, { ::i2c::type_of<::System::Func_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO.GetModifierBoolValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersModelSO::*)(::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::GameplayModifierParamsSO*)>(
    &::GlobalNamespace::GameplayModifiersModelSO::GetModifierBoolValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x370ad48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
                                         { "GetModifierBoolValue", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierParamsSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO.CreateModifierParamsList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* (
    ::GlobalNamespace::GameplayModifiersModelSO::*)(::GlobalNamespace::GameplayModifiers*)>(&::GlobalNamespace::GameplayModifiersModelSO::CreateModifierParamsList)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x370adf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
                                                                                           { "CreateModifierParamsList", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO.GetTotalMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GameplayModifiersModelSO::*)(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*, float_t)>(&::GlobalNamespace::GameplayModifiersModelSO::GetTotalMultiplier)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x370b0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
            { "GetTotalMultiplier", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO.MaxModifiedScoreForMaxMultipliedScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<int32_t (::GlobalNamespace::GameplayModifiersModelSO::*)(int32_t, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*, float_t)>(
        &::GlobalNamespace::GameplayModifiersModelSO::MaxModifiedScoreForMaxMultipliedScore)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x370b28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
                                                { "MaxModifiedScoreForMaxMultipliedScore",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*>(),
                                                    ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO.MaxModifiedScoreForMaxMultipliedScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameplayModifiersModelSO::*)(
    int32_t, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*, ::GlobalNamespace::GameplayModifiersModelSO*, float_t)>(
    &::GlobalNamespace::GameplayModifiersModelSO::MaxModifiedScoreForMaxMultipliedScore)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x370b320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
                                                { "MaxModifiedScoreForMaxMultipliedScore",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*>(),
                                                    ::i2c::type_of<::GlobalNamespace::GameplayModifiersModelSO*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO.GetModifiedScoreForGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<int32_t (::GlobalNamespace::GameplayModifiersModelSO::*)(int32_t, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*, float_t)>(
        &::GlobalNamespace::GameplayModifiersModelSO::GetModifiedScoreForGameplayModifiers)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x370b290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
                                                { "GetModifiedScoreForGameplayModifiers",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*>(),
                                                    ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO.GetGameplayModifierParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameplayModifierParamsSO> (::GlobalNamespace::GameplayModifiersModelSO::*)(::GlobalNamespace::GameplayModifierMask)>(
    &::GlobalNamespace::GameplayModifiersModelSO::GetGameplayModifierParams)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x370b324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
                                                                                           { "GetGameplayModifierParams", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO.GetSongSpeedFromValueGetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayModifiers_SongSpeed (::GlobalNamespace::GameplayModifiersModelSO::*)(
    ::System::Func_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, bool>*)>(&::GlobalNamespace::GameplayModifiersModelSO::GetSongSpeedFromValueGetter)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x370acc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
                                                { "GetSongSpeedFromValueGetter", {}, { ::i2c::type_of<::System::Func_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersModelSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersModelSO::*)()>(&::GlobalNamespace::GameplayModifiersModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370b47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__batteryEnergy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____batteryEnergy;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__batteryEnergy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____batteryEnergy;
}
constexpr void GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_set__batteryEnergy(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____batteryEnergy = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__instaFail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instaFail;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__instaFail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instaFail;
}
constexpr void GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_set__instaFail(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instaFail = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__noObstacles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noObstacles;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__noObstacles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noObstacles;
}
constexpr void GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_set__noObstacles(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noObstacles = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__noBombs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noBombs;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__noBombs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noBombs;
}
constexpr void GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_set__noBombs(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noBombs = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__fastNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fastNotes;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__fastNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fastNotes;
}
constexpr void GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_set__fastNotes(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fastNotes = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__strictAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strictAngles;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__strictAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strictAngles;
}
constexpr void GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_set__strictAngles(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____strictAngles = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__disappearingArrows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearingArrows;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__disappearingArrows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearingArrows;
}
constexpr void GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_set__disappearingArrows(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearingArrows = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__fasterSong() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fasterSong;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__fasterSong() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fasterSong;
}
constexpr void GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_set__fasterSong(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fasterSong = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__slowerSong() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slowerSong;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__slowerSong() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slowerSong;
}
constexpr void GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_set__slowerSong(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____slowerSong = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__noArrows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noArrows;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__noArrows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noArrows;
}
constexpr void GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_set__noArrows(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noArrows = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__ghostNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ghostNotes;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__ghostNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ghostNotes;
}
constexpr void GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_set__ghostNotes(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ghostNotes = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__noFailOn0Energy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noFailOn0Energy;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__noFailOn0Energy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noFailOn0Energy;
}
constexpr void GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_set__noFailOn0Energy(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noFailOn0Energy = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__superFastSong() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____superFastSong;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__superFastSong() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____superFastSong;
}
constexpr void GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_set__superFastSong(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____superFastSong = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__proMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proMode;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__proMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proMode;
}
constexpr void GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_set__proMode(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____proMode = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__zenMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zenMode;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__zenMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zenMode;
}
constexpr void GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_set__zenMode(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zenMode = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__smallCubes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallCubes;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__smallCubes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallCubes;
}
constexpr void GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_set__smallCubes(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smallCubes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>*&
GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__gameplayModifierGetters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifierGetters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>* const&
GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_get__gameplayModifierGetters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifierGetters;
}
constexpr void GlobalNamespace::GameplayModifiersModelSO::__cordl_internal_set__gameplayModifierGetters(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifierGetters = value;
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>*
GlobalNamespace::GameplayModifiersModelSO::get_gameplayModifierGetters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(), { "get_gameplayModifierGetters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>*>(
      this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifiersModelSO::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifiers*
GlobalNamespace::GameplayModifiersModelSO::CreateGameplayModifiers(::System::Func_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, bool>* valueGetter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
                                                           { "CreateGameplayModifiers", {}, { ::i2c::type_of<::System::Func_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*>(this, ___internal_method, valueGetter);
}
inline bool GlobalNamespace::GameplayModifiersModelSO::GetModifierBoolValue(::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                            ::GlobalNamespace::GameplayModifierParamsSO* gameplayModifierParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
                                       { "GetModifierBoolValue", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierParamsSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifiers, gameplayModifierParams);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*
GlobalNamespace::GameplayModifiersModelSO::CreateModifierParamsList(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
                                                                                         { "CreateModifierParamsList", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*>(this, ___internal_method, gameplayModifiers);
}
inline float_t GlobalNamespace::GameplayModifiersModelSO::GetTotalMultiplier(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* modifierParams,
                                                                             float_t energy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
                       { "GetTotalMultiplier", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, modifierParams, energy);
}
inline int32_t GlobalNamespace::GameplayModifiersModelSO::MaxModifiedScoreForMaxMultipliedScore(
    int32_t maxMultipliedScore, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* modifierParams, float_t energy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
                                              { "MaxModifiedScoreForMaxMultipliedScore",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*>(),
                                                  ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, maxMultipliedScore, modifierParams, energy);
}
inline int32_t
GlobalNamespace::GameplayModifiersModelSO::MaxModifiedScoreForMaxMultipliedScore(int32_t maxMultipliedScore,
                                                                                 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* modifierParams,
                                                                                 ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel, float_t energy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
                                              { "MaxModifiedScoreForMaxMultipliedScore",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*>(),
                                                  ::i2c::type_of<::GlobalNamespace::GameplayModifiersModelSO*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, maxMultipliedScore, modifierParams, gameplayModifiersModel, energy);
}
inline int32_t GlobalNamespace::GameplayModifiersModelSO::GetModifiedScoreForGameplayModifiers(
    int32_t multipliedScore, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* modifierParams, float_t energy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
                                              { "GetModifiedScoreForGameplayModifiers",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*>(),
                                                  ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, multipliedScore, modifierParams, energy);
}
inline ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> GlobalNamespace::GameplayModifiersModelSO::GetGameplayModifierParams(::GlobalNamespace::GameplayModifierMask modifier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
                                                                                         { "GetGameplayModifierParams", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>(this, ___internal_method, modifier);
}
inline ::GlobalNamespace::GameplayModifiers_SongSpeed
GlobalNamespace::GameplayModifiersModelSO::GetSongSpeedFromValueGetter(::System::Func_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, bool>* valueGetter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(),
                                              { "GetSongSpeedFromValueGetter", {}, { ::i2c::type_of<::System::Func_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers_SongSpeed>(this, ___internal_method, valueGetter);
}
inline void GlobalNamespace::GameplayModifiersModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersModelSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifiersModelSO* GlobalNamespace::GameplayModifiersModelSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayModifiersModelSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiersModelSO::GameplayModifiersModelSO() {}
