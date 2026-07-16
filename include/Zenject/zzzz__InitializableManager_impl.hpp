#pragma once
// IWYU pragma private; include "Zenject/InitializableManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__InitializableManager_def.hpp"
#include "ModestTree/Util/zzzz__ValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "Zenject/zzzz__InitializableManager_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::InitializableManager_InitializableInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InitializableManager_InitializableInfo::*)(::Zenject::IInitializable*, int32_t)>(
    &::Zenject::InitializableManager_InitializableInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e8edcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager_InitializableInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Zenject::IInitializable*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InitializableManager_InitializableInfo.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::InitializableManager_InitializableInfo::__zenCreate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6e8f6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager_InitializableInfo*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InitializableManager_InitializableInfo.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::InitializableManager_InitializableInfo::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x6e8f7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager_InitializableInfo*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::IInitializable*& Zenject::InitializableManager_InitializableInfo::__cordl_internal_get_Initializable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Initializable;
}
constexpr ::Zenject::IInitializable* const& Zenject::InitializableManager_InitializableInfo::__cordl_internal_get_Initializable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Initializable;
}
constexpr void Zenject::InitializableManager_InitializableInfo::__cordl_internal_set_Initializable(::Zenject::IInitializable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Initializable = value;
}
constexpr int32_t& Zenject::InitializableManager_InitializableInfo::__cordl_internal_get_Priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Priority;
}
constexpr int32_t const& Zenject::InitializableManager_InitializableInfo::__cordl_internal_get_Priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Priority;
}
constexpr void Zenject::InitializableManager_InitializableInfo::__cordl_internal_set_Priority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Priority = value;
}
inline void Zenject::InitializableManager_InitializableInfo::_ctor(::Zenject::IInitializable* initializable, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager_InitializableInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Zenject::IInitializable*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initializable, priority);
}
inline ::System::Object* Zenject::InitializableManager_InitializableInfo::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager_InitializableInfo*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::InitializableManager_InitializableInfo::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager_InitializableInfo*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::InitializableManager_InitializableInfo* Zenject::InitializableManager_InitializableInfo::New_ctor(::Zenject::IInitializable* initializable, int32_t priority) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::InitializableManager_InitializableInfo*>(initializable, priority));
}
// Ctor Parameters []
constexpr ::Zenject::InitializableManager_InitializableInfo::InitializableManager_InitializableInfo() {}
//  Writing Method size for method: ::Zenject::InitializableManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InitializableManager___c::*)()>(&::Zenject::InitializableManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8fad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InitializableManager___c.__ctor_b__2_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::InitializableManager___c::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(
    &::Zenject::InitializableManager___c::__ctor_b__2_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e8fad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c*>(),
                                                                                           { "<.ctor>b__2_1", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InitializableManager___c._Initialize_b__5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::InitializableManager___c::*)(::Zenject::InitializableManager_InitializableInfo*)>(
    &::Zenject::InitializableManager___c::_Initialize_b__5_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e8fae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c*>(),
                                                                                           { "<Initialize>b__5_0", {}, { ::i2c::type_of<::Zenject::InitializableManager_InitializableInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InitializableManager___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::InitializableManager___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8fafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InitializableManager___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::InitializableManager___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e8fb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::InitializableManager___c::setStaticF___9(::Zenject::InitializableManager___c* value) {
  ::cordl_internals::setStaticField<::Zenject::InitializableManager___c*, "<>9", ::Zenject::InitializableManager___c*>(std::forward<::Zenject::InitializableManager___c*>(value));
}
inline ::Zenject::InitializableManager___c* Zenject::InitializableManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::InitializableManager___c*, "<>9", ::Zenject::InitializableManager___c*>();
}
inline void Zenject::InitializableManager___c::setStaticF___9__2_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*, "<>9__2_1", ::Zenject::InitializableManager___c*>(
      std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*>(value));
}
inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* Zenject::InitializableManager___c::getStaticF___9__2_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*, "<>9__2_1", ::Zenject::InitializableManager___c*>();
}
inline void Zenject::InitializableManager___c::setStaticF___9__5_0(::System::Func_2<::Zenject::InitializableManager_InitializableInfo*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::InitializableManager_InitializableInfo*, int32_t>*, "<>9__5_0", ::Zenject::InitializableManager___c*>(
      std::forward<::System::Func_2<::Zenject::InitializableManager_InitializableInfo*, int32_t>*>(value));
}
inline ::System::Func_2<::Zenject::InitializableManager_InitializableInfo*, int32_t>* Zenject::InitializableManager___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::InitializableManager_InitializableInfo*, int32_t>*, "<>9__5_0", ::Zenject::InitializableManager___c*>();
}
inline void Zenject::InitializableManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Zenject::InitializableManager___c::__ctor_b__2_1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c*>(),
                                                                                         { "<.ctor>b__2_1", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline int32_t Zenject::InitializableManager___c::_Initialize_b__5_0(::Zenject::InitializableManager_InitializableInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c*>(),
                                                                                         { "<Initialize>b__5_0", {}, { ::i2c::type_of<::Zenject::InitializableManager_InitializableInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::InitializableManager___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::InitializableManager___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::InitializableManager___c* Zenject::InitializableManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::InitializableManager___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::InitializableManager___c::InitializableManager___c() {}
//  Writing Method size for method: ::Zenject::InitializableManager___c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InitializableManager___c__DisplayClass2_0::*)()>(&::Zenject::InitializableManager___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8edc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InitializableManager___c__DisplayClass2_0.__ctor_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::InitializableManager___c__DisplayClass2_0::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(
    &::Zenject::InitializableManager___c__DisplayClass2_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8fcd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c__DisplayClass2_0*>(),
                                                                                           { "<.ctor>b__0", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InitializableManager___c__DisplayClass2_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::InitializableManager___c__DisplayClass2_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8fd64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c__DisplayClass2_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InitializableManager___c__DisplayClass2_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::InitializableManager___c__DisplayClass2_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e8fda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c__DisplayClass2_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::IInitializable*& Zenject::InitializableManager___c__DisplayClass2_0::__cordl_internal_get_initializable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initializable;
}
constexpr ::Zenject::IInitializable* const& Zenject::InitializableManager___c__DisplayClass2_0::__cordl_internal_get_initializable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initializable;
}
constexpr void Zenject::InitializableManager___c__DisplayClass2_0::__cordl_internal_set_initializable(::Zenject::IInitializable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initializable = value;
}
inline void Zenject::InitializableManager___c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::InitializableManager___c__DisplayClass2_0::__ctor_b__0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c__DisplayClass2_0*>(),
                                                                                         { "<.ctor>b__0", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::InitializableManager___c__DisplayClass2_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c__DisplayClass2_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::InitializableManager___c__DisplayClass2_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager___c__DisplayClass2_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::InitializableManager___c__DisplayClass2_0* Zenject::InitializableManager___c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::InitializableManager___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::InitializableManager___c__DisplayClass2_0::InitializableManager___c__DisplayClass2_0() {}
//  Writing Method size for method: ::Zenject::InitializableManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InitializableManager::*)(::System::Collections::Generic::List_1<::Zenject::IInitializable*>*,
                                                                                                 ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*)>(
    &::Zenject::InitializableManager::_ctor)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x6e8e9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::IInitializable*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InitializableManager.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InitializableManager::*)(::Zenject::IInitializable*)>(&::Zenject::InitializableManager::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8edd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager*>(), { "Add", {}, { ::i2c::type_of<::Zenject::IInitializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InitializableManager.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InitializableManager::*)(::Zenject::IInitializable*, int32_t)>(&::Zenject::InitializableManager::Add)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6e8ede0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager*>(), { "Add", {}, { ::i2c::type_of<::Zenject::IInitializable*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InitializableManager.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InitializableManager::*)()>(&::Zenject::InitializableManager::Initialize)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x6e8eed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InitializableManager.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::InitializableManager::__zenCreate)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e8f2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InitializableManager.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::InitializableManager::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x6e8f3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Zenject::InitializableManager_InitializableInfo*>*& Zenject::InitializableManager::__cordl_internal_get__initializables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializables;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::InitializableManager_InitializableInfo*>* const& Zenject::InitializableManager::__cordl_internal_get__initializables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializables;
}
constexpr void Zenject::InitializableManager::__cordl_internal_set__initializables(::System::Collections::Generic::List_1<::Zenject::InitializableManager_InitializableInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initializables = value;
}
constexpr bool& Zenject::InitializableManager::__cordl_internal_get__hasInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasInitialized;
}
constexpr bool const& Zenject::InitializableManager::__cordl_internal_get__hasInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasInitialized;
}
constexpr void Zenject::InitializableManager::__cordl_internal_set__hasInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasInitialized = value;
}
inline void Zenject::InitializableManager::_ctor(::System::Collections::Generic::List_1<::Zenject::IInitializable*>* initializables,
                                                 ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::IInitializable*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initializables, priorities);
}
inline void Zenject::InitializableManager::Add(::Zenject::IInitializable* initializable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager*>(), { "Add", {}, { ::i2c::type_of<::Zenject::IInitializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initializable);
}
inline void Zenject::InitializableManager::Add(::Zenject::IInitializable* initializable, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager*>(), { "Add", {}, { ::i2c::type_of<::Zenject::IInitializable*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initializable, priority);
}
inline void Zenject::InitializableManager::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::InitializableManager::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::InitializableManager::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InitializableManager*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::InitializableManager* Zenject::InitializableManager::New_ctor(::System::Collections::Generic::List_1<::Zenject::IInitializable*>* initializables,
                                                                                ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::InitializableManager*>(initializables, priorities));
}
// Ctor Parameters []
constexpr ::Zenject::InitializableManager::InitializableManager() {}
