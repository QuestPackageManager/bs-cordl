#pragma once
// IWYU pragma private; include "Zenject/CachedOpenTypeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__CachedOpenTypeProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__CachedOpenTypeProvider_def.hpp"
#include "Zenject/zzzz__CachedProvider_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::CachedOpenTypeProvider___c::*)()>(&::Zenject::CachedOpenTypeProvider___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e81690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider___c._get_NumInstances_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::CachedOpenTypeProvider___c::*)(::Zenject::CachedProvider*)>(
    &::Zenject::CachedOpenTypeProvider___c::_get_NumInstances_b__8_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e81694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider___c*>(), { "<get_NumInstances>b__8_0", {}, { ::i2c::type_of<::Zenject::CachedProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::CachedOpenTypeProvider___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e81744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::CachedOpenTypeProvider___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e81788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::CachedOpenTypeProvider___c::setStaticF___9(::Zenject::CachedOpenTypeProvider___c* value) {
  ::cordl_internals::setStaticField<::Zenject::CachedOpenTypeProvider___c*, "<>9", ::Zenject::CachedOpenTypeProvider___c*>(std::forward<::Zenject::CachedOpenTypeProvider___c*>(value));
}
inline ::Zenject::CachedOpenTypeProvider___c* Zenject::CachedOpenTypeProvider___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::CachedOpenTypeProvider___c*, "<>9", ::Zenject::CachedOpenTypeProvider___c*>();
}
inline void Zenject::CachedOpenTypeProvider___c::setStaticF___9__8_0(::System::Func_2<::Zenject::CachedProvider*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::CachedProvider*, int32_t>*, "<>9__8_0", ::Zenject::CachedOpenTypeProvider___c*>(
      std::forward<::System::Func_2<::Zenject::CachedProvider*, int32_t>*>(value));
}
inline ::System::Func_2<::Zenject::CachedProvider*, int32_t>* Zenject::CachedOpenTypeProvider___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::CachedProvider*, int32_t>*, "<>9__8_0", ::Zenject::CachedOpenTypeProvider___c*>();
}
inline void Zenject::CachedOpenTypeProvider___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Zenject::CachedOpenTypeProvider___c::_get_NumInstances_b__8_0(::Zenject::CachedProvider* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider___c*>(), { "<get_NumInstances>b__8_0", {}, { ::i2c::type_of<::Zenject::CachedProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::CachedOpenTypeProvider___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::CachedOpenTypeProvider___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::CachedOpenTypeProvider___c* Zenject::CachedOpenTypeProvider___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::CachedOpenTypeProvider___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::CachedOpenTypeProvider___c::CachedOpenTypeProvider___c() {}
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::CachedOpenTypeProvider::*)(::Zenject::IProvider*)>(&::Zenject::CachedOpenTypeProvider::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e80ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::IProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider.get_IsCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::CachedOpenTypeProvider::*)()>(&::Zenject::CachedOpenTypeProvider::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8101c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider*>(), { "get_IsCached", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider.get_TypeVariesBasedOnMemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::CachedOpenTypeProvider::*)()>(&::Zenject::CachedOpenTypeProvider::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e81024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider.get_NumInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::CachedOpenTypeProvider::*)()>(&::Zenject::CachedOpenTypeProvider::get_NumInstances)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6e8104c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider*>(), { "get_NumInstances", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider.ClearCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::CachedOpenTypeProvider::*)()>(&::Zenject::CachedOpenTypeProvider::ClearCache)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e8118c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider*>(), { "ClearCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider.GetInstanceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::CachedOpenTypeProvider::*)(::Zenject::InjectContext*)>(&::Zenject::CachedOpenTypeProvider::GetInstanceType)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6e811e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider.GetAllInstancesWithInjectSplit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::CachedOpenTypeProvider::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*,
                                                                                                   ::by_ref<::System::Action*>, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::Zenject::CachedOpenTypeProvider::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6e81298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider*>(),
                                                             { "GetAllInstancesWithInjectSplit",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::IProvider*& Zenject::CachedOpenTypeProvider::__cordl_internal_get__creator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creator;
}
constexpr ::Zenject::IProvider* const& Zenject::CachedOpenTypeProvider::__cordl_internal_get__creator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creator;
}
constexpr void Zenject::CachedOpenTypeProvider::__cordl_internal_set__creator(::Zenject::IProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____creator = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>*& Zenject::CachedOpenTypeProvider::__cordl_internal_get__providerMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providerMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>* const& Zenject::CachedOpenTypeProvider::__cordl_internal_get__providerMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providerMap;
}
constexpr void Zenject::CachedOpenTypeProvider::__cordl_internal_set__providerMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____providerMap = value;
}
inline void Zenject::CachedOpenTypeProvider::_ctor(::Zenject::IProvider* creator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::IProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, creator);
}
inline bool Zenject::CachedOpenTypeProvider::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider*>(), { "get_IsCached", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Zenject::CachedOpenTypeProvider::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Zenject::CachedOpenTypeProvider::get_NumInstances() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider*>(), { "get_NumInstances", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Zenject::CachedOpenTypeProvider::ClearCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider*>(), { "ClearCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Type* Zenject::CachedOpenTypeProvider::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, context);
}
inline void Zenject::CachedOpenTypeProvider::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                            ::by_ref<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CachedOpenTypeProvider*>(),
                                                           { "GetAllInstancesWithInjectSplit",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, args, injectAction, buffer);
}
inline ::Zenject::CachedOpenTypeProvider* Zenject::CachedOpenTypeProvider::New_ctor(::Zenject::IProvider* creator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::CachedOpenTypeProvider*>(creator));
}
/// @brief Convert operator to "::Zenject::IProvider"
constexpr Zenject::CachedOpenTypeProvider::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IProvider"
constexpr ::Zenject::IProvider* Zenject::CachedOpenTypeProvider::i___Zenject__IProvider() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::CachedOpenTypeProvider::CachedOpenTypeProvider() {}
