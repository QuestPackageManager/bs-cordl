#pragma once
// IWYU pragma private; include "Zenject\PoolableManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PoolableManager_def.hpp"
#include "ModestTree/Util/zzzz__ValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IPoolable_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__PoolableManager_def.hpp"
//  Writing Method size for method: ::Zenject::PoolableManager_PoolableInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PoolableManager_PoolableInfo::*)(::Zenject::IPoolable*, int32_t)>(&::Zenject::PoolableManager_PoolableInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e95c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager_PoolableInfo>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::IPoolable*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Zenject::PoolableManager_PoolableInfo::_ctor(::Zenject::IPoolable* poolable, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager_PoolableInfo>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::IPoolable*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, poolable, priority);
}
// Ctor Parameters [CppParam { name: "Poolable", ty: "::Zenject::IPoolable*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Priority", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }]
constexpr ::Zenject::PoolableManager_PoolableInfo::PoolableManager_PoolableInfo(::Zenject::IPoolable* Poolable, int32_t Priority) noexcept {
  this->Poolable = Poolable;
  this->Priority = Priority;
}
// Ctor Parameters []
constexpr ::Zenject::PoolableManager_PoolableInfo::PoolableManager_PoolableInfo() {}
//  Writing Method size for method: ::Zenject::PoolableManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PoolableManager___c::*)()>(&::Zenject::PoolableManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e962c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager___c.__ctor_b__2_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::PoolableManager___c::*)(::Zenject::PoolableManager_PoolableInfo)>(&::Zenject::PoolableManager___c::__ctor_b__2_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e962cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c*>(), { "<.ctor>b__2_1", {}, { ::i2c::type_of<::Zenject::PoolableManager_PoolableInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager___c.__ctor_b__2_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IPoolable* (::Zenject::PoolableManager___c::*)(::Zenject::PoolableManager_PoolableInfo)>(
    &::Zenject::PoolableManager___c::__ctor_b__2_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e962d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c*>(), { "<.ctor>b__2_2", {}, { ::i2c::type_of<::Zenject::PoolableManager_PoolableInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager___c._CreatePoolableInfo_b__3_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Zenject::PoolableManager___c::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(
    &::Zenject::PoolableManager___c::_CreatePoolableInfo_b__3_1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e962dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c*>(),
                                                             { "<CreatePoolableInfo>b__3_1", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::PoolableManager___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e96330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::PoolableManager___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e96374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::PoolableManager___c::setStaticF___9(::Zenject::PoolableManager___c* value) {
  ::cordl_internals::setStaticField<::Zenject::PoolableManager___c*, "<>9", ::Zenject::PoolableManager___c*>(std::forward<::Zenject::PoolableManager___c*>(value));
}
inline ::Zenject::PoolableManager___c* Zenject::PoolableManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::PoolableManager___c*, "<>9", ::Zenject::PoolableManager___c*>();
}
inline void Zenject::PoolableManager___c::setStaticF___9__2_1(::System::Func_2<::Zenject::PoolableManager_PoolableInfo, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::PoolableManager_PoolableInfo, int32_t>*, "<>9__2_1", ::Zenject::PoolableManager___c*>(
      std::forward<::System::Func_2<::Zenject::PoolableManager_PoolableInfo, int32_t>*>(value));
}
inline ::System::Func_2<::Zenject::PoolableManager_PoolableInfo, int32_t>* Zenject::PoolableManager___c::getStaticF___9__2_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::PoolableManager_PoolableInfo, int32_t>*, "<>9__2_1", ::Zenject::PoolableManager___c*>();
}
inline void Zenject::PoolableManager___c::setStaticF___9__2_2(::System::Func_2<::Zenject::PoolableManager_PoolableInfo, ::Zenject::IPoolable*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::PoolableManager_PoolableInfo, ::Zenject::IPoolable*>*, "<>9__2_2", ::Zenject::PoolableManager___c*>(
      std::forward<::System::Func_2<::Zenject::PoolableManager_PoolableInfo, ::Zenject::IPoolable*>*>(value));
}
inline ::System::Func_2<::Zenject::PoolableManager_PoolableInfo, ::Zenject::IPoolable*>* Zenject::PoolableManager___c::getStaticF___9__2_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::PoolableManager_PoolableInfo, ::Zenject::IPoolable*>*, "<>9__2_2", ::Zenject::PoolableManager___c*>();
}
inline void Zenject::PoolableManager___c::setStaticF___9__3_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>*, "<>9__3_1", ::Zenject::PoolableManager___c*>(
      std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>*>(value));
}
inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* Zenject::PoolableManager___c::getStaticF___9__3_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>*, "<>9__3_1", ::Zenject::PoolableManager___c*>();
}
inline void Zenject::PoolableManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Zenject::PoolableManager___c::__ctor_b__2_1(::Zenject::PoolableManager_PoolableInfo x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c*>(), { "<.ctor>b__2_1", {}, { ::i2c::type_of<::Zenject::PoolableManager_PoolableInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::Zenject::IPoolable* Zenject::PoolableManager___c::__ctor_b__2_2(::Zenject::PoolableManager_PoolableInfo x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c*>(), { "<.ctor>b__2_2", {}, { ::i2c::type_of<::Zenject::PoolableManager_PoolableInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IPoolable*>(this, ___internal_method, x);
}
inline ::System::Nullable_1<int32_t> Zenject::PoolableManager___c::_CreatePoolableInfo_b__3_1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c*>(), { "<CreatePoolableInfo>b__3_1", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::PoolableManager___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::PoolableManager___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::PoolableManager___c* Zenject::PoolableManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PoolableManager___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::PoolableManager___c::PoolableManager___c() {}
//  Writing Method size for method: ::Zenject::PoolableManager___c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PoolableManager___c__DisplayClass2_0::*)()>(&::Zenject::PoolableManager___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e959fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager___c__DisplayClass2_0.__ctor_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::PoolableManager_PoolableInfo (::Zenject::PoolableManager___c__DisplayClass2_0::*)(::Zenject::IPoolable*)>(
    &::Zenject::PoolableManager___c__DisplayClass2_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e96508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c__DisplayClass2_0*>(), { "<.ctor>b__0", {}, { ::i2c::type_of<::Zenject::IPoolable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager___c__DisplayClass2_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::PoolableManager___c__DisplayClass2_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e96520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c__DisplayClass2_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager___c__DisplayClass2_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::PoolableManager___c__DisplayClass2_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e96564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c__DisplayClass2_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::PoolableManager*& Zenject::PoolableManager___c__DisplayClass2_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::PoolableManager* const& Zenject::PoolableManager___c__DisplayClass2_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::PoolableManager___c__DisplayClass2_0::__cordl_internal_set___4__this(::Zenject::PoolableManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*& Zenject::PoolableManager___c__DisplayClass2_0::__cordl_internal_get_priorities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorities;
}
constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* const&
Zenject::PoolableManager___c__DisplayClass2_0::__cordl_internal_get_priorities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorities;
}
constexpr void
Zenject::PoolableManager___c__DisplayClass2_0::__cordl_internal_set_priorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priorities = value;
}
inline void Zenject::PoolableManager___c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::PoolableManager_PoolableInfo Zenject::PoolableManager___c__DisplayClass2_0::__ctor_b__0(::Zenject::IPoolable* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c__DisplayClass2_0*>(), { "<.ctor>b__0", {}, { ::i2c::type_of<::Zenject::IPoolable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::PoolableManager_PoolableInfo>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::PoolableManager___c__DisplayClass2_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c__DisplayClass2_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::PoolableManager___c__DisplayClass2_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c__DisplayClass2_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::PoolableManager___c__DisplayClass2_0* Zenject::PoolableManager___c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PoolableManager___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::PoolableManager___c__DisplayClass2_0::PoolableManager___c__DisplayClass2_0() {}
//  Writing Method size for method: ::Zenject::PoolableManager___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PoolableManager___c__DisplayClass3_0::*)()>(&::Zenject::PoolableManager___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e95c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager___c__DisplayClass3_0._CreatePoolableInfo_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::PoolableManager___c__DisplayClass3_0::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(
    &::Zenject::PoolableManager___c__DisplayClass3_0::_CreatePoolableInfo_b__0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e966f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c__DisplayClass3_0*>(),
                                                             { "<CreatePoolableInfo>b__0", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager___c__DisplayClass3_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::PoolableManager___c__DisplayClass3_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e96788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c__DisplayClass3_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager___c__DisplayClass3_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::PoolableManager___c__DisplayClass3_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e967cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c__DisplayClass3_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::IPoolable*& Zenject::PoolableManager___c__DisplayClass3_0::__cordl_internal_get_poolable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poolable;
}
constexpr ::Zenject::IPoolable* const& Zenject::PoolableManager___c__DisplayClass3_0::__cordl_internal_get_poolable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poolable;
}
constexpr void Zenject::PoolableManager___c__DisplayClass3_0::__cordl_internal_set_poolable(::Zenject::IPoolable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___poolable = value;
}
inline void Zenject::PoolableManager___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::PoolableManager___c__DisplayClass3_0::_CreatePoolableInfo_b__0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c__DisplayClass3_0*>(),
                                                           { "<CreatePoolableInfo>b__0", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::PoolableManager___c__DisplayClass3_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c__DisplayClass3_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::PoolableManager___c__DisplayClass3_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager___c__DisplayClass3_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::PoolableManager___c__DisplayClass3_0* Zenject::PoolableManager___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PoolableManager___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::PoolableManager___c__DisplayClass3_0::PoolableManager___c__DisplayClass3_0() {}
//  Writing Method size for method: ::Zenject::PoolableManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PoolableManager::*)(::System::Collections::Generic::List_1<::Zenject::IPoolable*>*,
                                                                                            ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*)>(
    &::Zenject::PoolableManager::_ctor)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x6e95754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::IPoolable*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager.CreatePoolableInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::PoolableManager_PoolableInfo (::Zenject::PoolableManager::*)(
    ::Zenject::IPoolable*, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*)>(&::Zenject::PoolableManager::CreatePoolableInfo)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6e95a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager*>(),
                            { "CreatePoolableInfo",
                              {},
                              { ::i2c::type_of<::Zenject::IPoolable*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager.TriggerOnSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PoolableManager::*)()>(&::Zenject::PoolableManager::TriggerOnSpawned)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e95c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager*>(), { "TriggerOnSpawned", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager.TriggerOnDespawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PoolableManager::*)()>(&::Zenject::PoolableManager::TriggerOnDespawned)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6e95d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager*>(), { "TriggerOnDespawned", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::PoolableManager::__zenCreate)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e95e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::PoolableManager::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x6e95f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Zenject::IPoolable*>*& Zenject::PoolableManager::__cordl_internal_get__poolables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poolables;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::IPoolable*>* const& Zenject::PoolableManager::__cordl_internal_get__poolables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poolables;
}
constexpr void Zenject::PoolableManager::__cordl_internal_set__poolables(::System::Collections::Generic::List_1<::Zenject::IPoolable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____poolables = value;
}
constexpr bool& Zenject::PoolableManager::__cordl_internal_get__isSpawned() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSpawned;
}
constexpr bool const& Zenject::PoolableManager::__cordl_internal_get__isSpawned() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSpawned;
}
constexpr void Zenject::PoolableManager::__cordl_internal_set__isSpawned(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isSpawned = value;
}
inline void Zenject::PoolableManager::_ctor(::System::Collections::Generic::List_1<::Zenject::IPoolable*>* poolables,
                                            ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::IPoolable*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poolables, priorities);
}
inline ::Zenject::PoolableManager_PoolableInfo
Zenject::PoolableManager::CreatePoolableInfo(::Zenject::IPoolable* poolable, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager*>(),
                          { "CreatePoolableInfo",
                            {},
                            { ::i2c::type_of<::Zenject::IPoolable*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::PoolableManager_PoolableInfo>(this, ___internal_method, poolable, priorities);
}
inline void Zenject::PoolableManager::TriggerOnSpawned() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager*>(), { "TriggerOnSpawned", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::PoolableManager::TriggerOnDespawned() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager*>(), { "TriggerOnDespawned", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::PoolableManager::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::PoolableManager::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableManager*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::PoolableManager* Zenject::PoolableManager::New_ctor(::System::Collections::Generic::List_1<::Zenject::IPoolable*>* poolables,
                                                                      ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PoolableManager*>(poolables, priorities));
}
// Ctor Parameters []
constexpr ::Zenject::PoolableManager::PoolableManager() {}
