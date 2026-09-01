#pragma once
// IWYU pragma private; include "Zenject\TickableManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__TickableManager_def.hpp"
#include "ModestTree/Util/zzzz__ValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__FixedTickablesTaskUpdater_def.hpp"
#include "Zenject/zzzz__IFixedTickable_def.hpp"
#include "Zenject/zzzz__ILateTickable_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__LateTickablesTaskUpdater_def.hpp"
#include "Zenject/zzzz__TickableManager_def.hpp"
#include "Zenject/zzzz__TickablesTaskUpdater_def.hpp"
//  Writing Method size for method: ::Zenject::TickableManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager___c::*)()>(&::Zenject::TickableManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e9a954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager___c._InitFixedTickables_b__17_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::TickableManager___c::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(
    &::Zenject::TickableManager___c::_InitFixedTickables_b__17_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e9a958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(),
                                                             { "<InitFixedTickables>b__17_0", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager___c._InitFixedTickables_b__17_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::TickableManager___c::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(
    &::Zenject::TickableManager___c::_InitFixedTickables_b__17_2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e9a96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(),
                                                             { "<InitFixedTickables>b__17_2", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager___c._InitTickables_b__18_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::TickableManager___c::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(
    &::Zenject::TickableManager___c::_InitTickables_b__18_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e9a980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(), { "<InitTickables>b__18_0", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager___c._InitTickables_b__18_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::TickableManager___c::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(
    &::Zenject::TickableManager___c::_InitTickables_b__18_2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e9a994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(), { "<InitTickables>b__18_2", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager___c._InitLateTickables_b__19_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::TickableManager___c::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(
    &::Zenject::TickableManager___c::_InitLateTickables_b__19_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e9a9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(),
                                                             { "<InitLateTickables>b__19_0", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager___c._InitLateTickables_b__19_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::TickableManager___c::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(
    &::Zenject::TickableManager___c::_InitLateTickables_b__19_2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e9a9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(),
                                                             { "<InitLateTickables>b__19_2", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::TickableManager___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e9a9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::TickableManager___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e9aa14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::TickableManager___c::setStaticF___9(::Zenject::TickableManager___c* value) {
  ::cordl_internals::setStaticField<::Zenject::TickableManager___c*, "<>9", ::Zenject::TickableManager___c*>(std::forward<::Zenject::TickableManager___c*>(value));
}
inline ::Zenject::TickableManager___c* Zenject::TickableManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::TickableManager___c*, "<>9", ::Zenject::TickableManager___c*>();
}
inline void Zenject::TickableManager___c::setStaticF___9__17_0(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>*, "<>9__17_0", ::Zenject::TickableManager___c*>(
      std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>*>(value));
}
inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* Zenject::TickableManager___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>*, "<>9__17_0", ::Zenject::TickableManager___c*>();
}
inline void Zenject::TickableManager___c::setStaticF___9__17_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*, "<>9__17_2", ::Zenject::TickableManager___c*>(
      std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*>(value));
}
inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* Zenject::TickableManager___c::getStaticF___9__17_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*, "<>9__17_2", ::Zenject::TickableManager___c*>();
}
inline void Zenject::TickableManager___c::setStaticF___9__18_0(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>*, "<>9__18_0", ::Zenject::TickableManager___c*>(
      std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>*>(value));
}
inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* Zenject::TickableManager___c::getStaticF___9__18_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>*, "<>9__18_0", ::Zenject::TickableManager___c*>();
}
inline void Zenject::TickableManager___c::setStaticF___9__18_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*, "<>9__18_2", ::Zenject::TickableManager___c*>(
      std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*>(value));
}
inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* Zenject::TickableManager___c::getStaticF___9__18_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*, "<>9__18_2", ::Zenject::TickableManager___c*>();
}
inline void Zenject::TickableManager___c::setStaticF___9__19_0(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>*, "<>9__19_0", ::Zenject::TickableManager___c*>(
      std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>*>(value));
}
inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* Zenject::TickableManager___c::getStaticF___9__19_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>*, "<>9__19_0", ::Zenject::TickableManager___c*>();
}
inline void Zenject::TickableManager___c::setStaticF___9__19_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*, "<>9__19_2", ::Zenject::TickableManager___c*>(
      std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*>(value));
}
inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* Zenject::TickableManager___c::getStaticF___9__19_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*, "<>9__19_2", ::Zenject::TickableManager___c*>();
}
inline void Zenject::TickableManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Type* Zenject::TickableManager___c::_InitFixedTickables_b__17_0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(),
                                                           { "<InitFixedTickables>b__17_0", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, x);
}
inline int32_t Zenject::TickableManager___c::_InitFixedTickables_b__17_2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(),
                                                           { "<InitFixedTickables>b__17_2", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::System::Type* Zenject::TickableManager___c::_InitTickables_b__18_0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(), { "<InitTickables>b__18_0", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, x);
}
inline int32_t Zenject::TickableManager___c::_InitTickables_b__18_2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(), { "<InitTickables>b__18_2", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::System::Type* Zenject::TickableManager___c::_InitLateTickables_b__19_0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(), { "<InitLateTickables>b__19_0", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, x);
}
inline int32_t Zenject::TickableManager___c::_InitLateTickables_b__19_2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(), { "<InitLateTickables>b__19_2", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::TickableManager___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::TickableManager___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::TickableManager___c* Zenject::TickableManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::TickableManager___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::TickableManager___c::TickableManager___c() {}
//  Writing Method size for method: ::Zenject::TickableManager___c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager___c__DisplayClass17_0::*)()>(&::Zenject::TickableManager___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e99674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager___c__DisplayClass17_0._InitFixedTickables_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::TickableManager___c__DisplayClass17_0::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(
    &::Zenject::TickableManager___c__DisplayClass17_0::_InitFixedTickables_b__1)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e9aba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass17_0*>(),
                                                             { "<InitFixedTickables>b__1", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager___c__DisplayClass17_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::TickableManager___c__DisplayClass17_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e9ac38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass17_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager___c__DisplayClass17_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::TickableManager___c__DisplayClass17_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e9ac7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass17_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::IFixedTickable*& Zenject::TickableManager___c__DisplayClass17_0::__cordl_internal_get_tickable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tickable;
}
constexpr ::Zenject::IFixedTickable* const& Zenject::TickableManager___c__DisplayClass17_0::__cordl_internal_get_tickable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tickable;
}
constexpr void Zenject::TickableManager___c__DisplayClass17_0::__cordl_internal_set_tickable(::Zenject::IFixedTickable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tickable = value;
}
inline void Zenject::TickableManager___c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::TickableManager___c__DisplayClass17_0::_InitFixedTickables_b__1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass17_0*>(),
                                                           { "<InitFixedTickables>b__1", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::TickableManager___c__DisplayClass17_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass17_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::TickableManager___c__DisplayClass17_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass17_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::TickableManager___c__DisplayClass17_0* Zenject::TickableManager___c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::TickableManager___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::TickableManager___c__DisplayClass17_0::TickableManager___c__DisplayClass17_0() {}
//  Writing Method size for method: ::Zenject::TickableManager___c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager___c__DisplayClass18_0::*)()>(&::Zenject::TickableManager___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e99678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager___c__DisplayClass18_0._InitTickables_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::TickableManager___c__DisplayClass18_0::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(
    &::Zenject::TickableManager___c__DisplayClass18_0::_InitTickables_b__1)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e9ae10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass18_0*>(),
                                                             { "<InitTickables>b__1", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager___c__DisplayClass18_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::TickableManager___c__DisplayClass18_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e9aea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass18_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager___c__DisplayClass18_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::TickableManager___c__DisplayClass18_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e9aee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass18_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::ITickable*& Zenject::TickableManager___c__DisplayClass18_0::__cordl_internal_get_tickable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tickable;
}
constexpr ::Zenject::ITickable* const& Zenject::TickableManager___c__DisplayClass18_0::__cordl_internal_get_tickable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tickable;
}
constexpr void Zenject::TickableManager___c__DisplayClass18_0::__cordl_internal_set_tickable(::Zenject::ITickable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tickable = value;
}
inline void Zenject::TickableManager___c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::TickableManager___c__DisplayClass18_0::_InitTickables_b__1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass18_0*>(),
                                                           { "<InitTickables>b__1", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::TickableManager___c__DisplayClass18_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass18_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::TickableManager___c__DisplayClass18_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass18_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::TickableManager___c__DisplayClass18_0* Zenject::TickableManager___c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::TickableManager___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::TickableManager___c__DisplayClass18_0::TickableManager___c__DisplayClass18_0() {}
//  Writing Method size for method: ::Zenject::TickableManager___c__DisplayClass19_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager___c__DisplayClass19_0::*)()>(&::Zenject::TickableManager___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e9967c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass19_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager___c__DisplayClass19_0._InitLateTickables_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::TickableManager___c__DisplayClass19_0::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(
    &::Zenject::TickableManager___c__DisplayClass19_0::_InitLateTickables_b__1)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e9b078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass19_0*>(),
                                                             { "<InitLateTickables>b__1", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager___c__DisplayClass19_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::TickableManager___c__DisplayClass19_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e9b108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass19_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager___c__DisplayClass19_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::TickableManager___c__DisplayClass19_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e9b14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass19_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::ILateTickable*& Zenject::TickableManager___c__DisplayClass19_0::__cordl_internal_get_tickable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tickable;
}
constexpr ::Zenject::ILateTickable* const& Zenject::TickableManager___c__DisplayClass19_0::__cordl_internal_get_tickable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tickable;
}
constexpr void Zenject::TickableManager___c__DisplayClass19_0::__cordl_internal_set_tickable(::Zenject::ILateTickable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tickable = value;
}
inline void Zenject::TickableManager___c__DisplayClass19_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass19_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::TickableManager___c__DisplayClass19_0::_InitLateTickables_b__1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass19_0*>(),
                                                           { "<InitLateTickables>b__1", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::TickableManager___c__DisplayClass19_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass19_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::TickableManager___c__DisplayClass19_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager___c__DisplayClass19_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::TickableManager___c__DisplayClass19_0* Zenject::TickableManager___c__DisplayClass19_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::TickableManager___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::TickableManager___c__DisplayClass19_0::TickableManager___c__DisplayClass19_0() {}
//  Writing Method size for method: ::Zenject::TickableManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e97eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.get_Tickables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::ITickable*>* (::Zenject::TickableManager::*)()>(
    &::Zenject::TickableManager::get_Tickables)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e97f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "get_Tickables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.get_IsPaused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::get_IsPaused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e97f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "get_IsPaused", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.set_IsPaused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)(bool)>(&::Zenject::TickableManager::set_IsPaused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e97f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "set_IsPaused", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::Initialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e97f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.InitFixedTickables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::InitFixedTickables)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x6e98734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "InitFixedTickables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.InitTickables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::InitTickables)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x6e97f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "InitTickables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.InitLateTickables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::InitLateTickables)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x6e98ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "InitLateTickables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::ITickable*, int32_t)>(&::Zenject::TickableManager::Add)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e99680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "Add", {}, { ::i2c::type_of<::Zenject::ITickable*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::ITickable*)>(&::Zenject::TickableManager::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e996f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "Add", {}, { ::i2c::type_of<::Zenject::ITickable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.AddLate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::ILateTickable*, int32_t)>(&::Zenject::TickableManager::AddLate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e99700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "AddLate", {}, { ::i2c::type_of<::Zenject::ILateTickable*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.AddLate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::ILateTickable*)>(&::Zenject::TickableManager::AddLate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e99778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "AddLate", {}, { ::i2c::type_of<::Zenject::ILateTickable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.AddFixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::IFixedTickable*, int32_t)>(&::Zenject::TickableManager::AddFixed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e99780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "AddFixed", {}, { ::i2c::type_of<::Zenject::IFixedTickable*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.AddFixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::IFixedTickable*)>(&::Zenject::TickableManager::AddFixed)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e997f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "AddFixed", {}, { ::i2c::type_of<::Zenject::IFixedTickable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::ITickable*)>(&::Zenject::TickableManager::Remove)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e9986c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "Remove", {}, { ::i2c::type_of<::Zenject::ITickable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.RemoveLate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::ILateTickable*)>(&::Zenject::TickableManager::RemoveLate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e998d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "RemoveLate", {}, { ::i2c::type_of<::Zenject::ILateTickable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.RemoveFixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)(::Zenject::IFixedTickable*)>(&::Zenject::TickableManager::RemoveFixed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e99934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "RemoveFixed", {}, { ::i2c::type_of<::Zenject::IFixedTickable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e93664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.FixedUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::FixedUpdate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e937ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "FixedUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TickableManager::*)()>(&::Zenject::TickableManager::LateUpdate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e93728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::TickableManager::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e99998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenFieldSetter0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::Zenject::TickableManager::__zenFieldSetter0)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e999ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenFieldSetter0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenFieldSetter1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::Zenject::TickableManager::__zenFieldSetter1)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e99b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenFieldSetter1", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenFieldSetter2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::Zenject::TickableManager::__zenFieldSetter2)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e99c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenFieldSetter2", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenFieldSetter3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::Zenject::TickableManager::__zenFieldSetter3)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e99d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenFieldSetter3", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenFieldSetter4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::Zenject::TickableManager::__zenFieldSetter4)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e99e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenFieldSetter4", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenFieldSetter5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::Zenject::TickableManager::__zenFieldSetter5)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e99fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenFieldSetter5", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenInjectMethod0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::ArrayW<::System::Object*>)>(&::Zenject::TickableManager::__zenInjectMethod0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e9a0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenInjectMethod0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TickableManager.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::TickableManager::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x7b8;
  constexpr static std::size_t addrs = 0x6e9a148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Zenject::ITickable*>*& Zenject::TickableManager::__cordl_internal_get__tickables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tickables;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::ITickable*>* const& Zenject::TickableManager::__cordl_internal_get__tickables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tickables;
}
constexpr void Zenject::TickableManager::__cordl_internal_set__tickables(::System::Collections::Generic::List_1<::Zenject::ITickable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tickables = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>*& Zenject::TickableManager::__cordl_internal_get__fixedTickables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedTickables;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>* const& Zenject::TickableManager::__cordl_internal_get__fixedTickables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedTickables;
}
constexpr void Zenject::TickableManager::__cordl_internal_set__fixedTickables(::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fixedTickables = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::ILateTickable*>*& Zenject::TickableManager::__cordl_internal_get__lateTickables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lateTickables;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::ILateTickable*>* const& Zenject::TickableManager::__cordl_internal_get__lateTickables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lateTickables;
}
constexpr void Zenject::TickableManager::__cordl_internal_set__lateTickables(::System::Collections::Generic::List_1<::Zenject::ILateTickable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lateTickables = value;
}
constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*& Zenject::TickableManager::__cordl_internal_get__priorities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____priorities;
}
constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* const& Zenject::TickableManager::__cordl_internal_get__priorities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____priorities;
}
constexpr void Zenject::TickableManager::__cordl_internal_set__priorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____priorities = value;
}
constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*& Zenject::TickableManager::__cordl_internal_get__fixedPriorities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedPriorities;
}
constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* const& Zenject::TickableManager::__cordl_internal_get__fixedPriorities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedPriorities;
}
constexpr void Zenject::TickableManager::__cordl_internal_set__fixedPriorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fixedPriorities = value;
}
constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*& Zenject::TickableManager::__cordl_internal_get__latePriorities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latePriorities;
}
constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* const& Zenject::TickableManager::__cordl_internal_get__latePriorities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latePriorities;
}
constexpr void Zenject::TickableManager::__cordl_internal_set__latePriorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____latePriorities = value;
}
constexpr ::Zenject::TickablesTaskUpdater*& Zenject::TickableManager::__cordl_internal_get__updater() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updater;
}
constexpr ::Zenject::TickablesTaskUpdater* const& Zenject::TickableManager::__cordl_internal_get__updater() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updater;
}
constexpr void Zenject::TickableManager::__cordl_internal_set__updater(::Zenject::TickablesTaskUpdater* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updater = value;
}
constexpr ::Zenject::FixedTickablesTaskUpdater*& Zenject::TickableManager::__cordl_internal_get__fixedUpdater() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedUpdater;
}
constexpr ::Zenject::FixedTickablesTaskUpdater* const& Zenject::TickableManager::__cordl_internal_get__fixedUpdater() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedUpdater;
}
constexpr void Zenject::TickableManager::__cordl_internal_set__fixedUpdater(::Zenject::FixedTickablesTaskUpdater* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fixedUpdater = value;
}
constexpr ::Zenject::LateTickablesTaskUpdater*& Zenject::TickableManager::__cordl_internal_get__lateUpdater() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lateUpdater;
}
constexpr ::Zenject::LateTickablesTaskUpdater* const& Zenject::TickableManager::__cordl_internal_get__lateUpdater() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lateUpdater;
}
constexpr void Zenject::TickableManager::__cordl_internal_set__lateUpdater(::Zenject::LateTickablesTaskUpdater* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lateUpdater = value;
}
constexpr bool& Zenject::TickableManager::__cordl_internal_get__isPaused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPaused;
}
constexpr bool const& Zenject::TickableManager::__cordl_internal_get__isPaused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPaused;
}
constexpr void Zenject::TickableManager::__cordl_internal_set__isPaused(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isPaused = value;
}
inline void Zenject::TickableManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::ITickable*>* Zenject::TickableManager::get_Tickables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "get_Tickables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::ITickable*>*>(this, ___internal_method);
}
inline bool Zenject::TickableManager::get_IsPaused() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "get_IsPaused", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Zenject::TickableManager::set_IsPaused(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "set_IsPaused", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Zenject::TickableManager::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::TickableManager::InitFixedTickables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "InitFixedTickables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::TickableManager::InitTickables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "InitTickables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::TickableManager::InitLateTickables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "InitLateTickables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::TickableManager::Add(::Zenject::ITickable* tickable, int32_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "Add", {}, { ::i2c::type_of<::Zenject::ITickable*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tickable, priority);
}
inline void Zenject::TickableManager::Add(::Zenject::ITickable* tickable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "Add", {}, { ::i2c::type_of<::Zenject::ITickable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tickable);
}
inline void Zenject::TickableManager::AddLate(::Zenject::ILateTickable* tickable, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "AddLate", {}, { ::i2c::type_of<::Zenject::ILateTickable*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tickable, priority);
}
inline void Zenject::TickableManager::AddLate(::Zenject::ILateTickable* tickable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "AddLate", {}, { ::i2c::type_of<::Zenject::ILateTickable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tickable);
}
inline void Zenject::TickableManager::AddFixed(::Zenject::IFixedTickable* tickable, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "AddFixed", {}, { ::i2c::type_of<::Zenject::IFixedTickable*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tickable, priority);
}
inline void Zenject::TickableManager::AddFixed(::Zenject::IFixedTickable* tickable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "AddFixed", {}, { ::i2c::type_of<::Zenject::IFixedTickable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tickable);
}
inline void Zenject::TickableManager::Remove(::Zenject::ITickable* tickable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "Remove", {}, { ::i2c::type_of<::Zenject::ITickable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tickable);
}
inline void Zenject::TickableManager::RemoveLate(::Zenject::ILateTickable* tickable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "RemoveLate", {}, { ::i2c::type_of<::Zenject::ILateTickable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tickable);
}
inline void Zenject::TickableManager::RemoveFixed(::Zenject::IFixedTickable* tickable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "RemoveFixed", {}, { ::i2c::type_of<::Zenject::IFixedTickable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tickable);
}
inline void Zenject::TickableManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::TickableManager::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "FixedUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::TickableManager::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::TickableManager::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline void Zenject::TickableManager::__zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenFieldSetter0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
inline void Zenject::TickableManager::__zenFieldSetter1(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenFieldSetter1", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
inline void Zenject::TickableManager::__zenFieldSetter2(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenFieldSetter2", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
inline void Zenject::TickableManager::__zenFieldSetter3(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenFieldSetter3", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
inline void Zenject::TickableManager::__zenFieldSetter4(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenFieldSetter4", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
inline void Zenject::TickableManager::__zenFieldSetter5(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenFieldSetter5", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
inline void Zenject::TickableManager::__zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*> P_1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenInjectMethod0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
inline ::Zenject::InjectTypeInfo* Zenject::TickableManager::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TickableManager*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::TickableManager* Zenject::TickableManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::TickableManager*>());
}
// Ctor Parameters []
constexpr ::Zenject::TickableManager::TickableManager() {}
