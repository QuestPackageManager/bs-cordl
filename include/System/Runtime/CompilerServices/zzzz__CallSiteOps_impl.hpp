#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/CallSiteOps.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallSiteOps_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallSiteBinder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallSite_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallSite_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__RuleCache_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::CallSiteOps.SetNotMatched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::CompilerServices::CallSite*)>(&::System::Runtime::CompilerServices::CallSiteOps::SetNotMatched)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fbc028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSiteOps*>(),
                                                                                           { "SetNotMatched", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::CallSite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::CallSiteOps.GetMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::CompilerServices::CallSite*)>(&::System::Runtime::CompilerServices::CallSiteOps::GetMatch)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fbc044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSiteOps*>(),
                                                                                           { "GetMatch", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::CallSite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::CallSiteOps.ClearMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::CompilerServices::CallSite*)>(&::System::Runtime::CompilerServices::CallSiteOps::ClearMatch)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fbc058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSiteOps*>(),
                                                                                           { "ClearMatch", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::CallSite*>() } })));
    return ___internal_method;
  }
};
template <typename T>
inline ::System::Runtime::CompilerServices::CallSite_1<T>* System::Runtime::CompilerServices::CallSiteOps::CreateMatchmaker(::System::Runtime::CompilerServices::CallSite_1<T>* site) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSiteOps*>(),
                                                           { "CreateMatchmaker", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Runtime::CompilerServices::CallSite_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::CallSite_1<T>*>(nullptr, ___internal_method, site);
}
inline bool System::Runtime::CompilerServices::CallSiteOps::SetNotMatched(::System::Runtime::CompilerServices::CallSite* site) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSiteOps*>(),
                                                                                         { "SetNotMatched", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::CallSite*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, site);
}
inline bool System::Runtime::CompilerServices::CallSiteOps::GetMatch(::System::Runtime::CompilerServices::CallSite* site) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSiteOps*>(),
                                                                                         { "GetMatch", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::CallSite*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, site);
}
inline void System::Runtime::CompilerServices::CallSiteOps::ClearMatch(::System::Runtime::CompilerServices::CallSite* site) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSiteOps*>(),
                                                                                         { "ClearMatch", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::CallSite*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, site);
}
template <typename T> inline void System::Runtime::CompilerServices::CallSiteOps::AddRule(::System::Runtime::CompilerServices::CallSite_1<T>* site, T rule) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSiteOps*>(),
                                                           { "AddRule", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Runtime::CompilerServices::CallSite_1<T>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, site, rule);
}
template <typename T> inline void System::Runtime::CompilerServices::CallSiteOps::UpdateRules(::System::Runtime::CompilerServices::CallSite_1<T>* _cordl_this, int32_t matched) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSiteOps*>(),
                                              { "UpdateRules", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Runtime::CompilerServices::CallSite_1<T>*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_this, matched);
}
template <typename T> inline ::ArrayW<T> System::Runtime::CompilerServices::CallSiteOps::GetRules(::System::Runtime::CompilerServices::CallSite_1<T>* site) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSiteOps*>(),
                                                           { "GetRules", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Runtime::CompilerServices::CallSite_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, site);
}
template <typename T>
inline ::System::Runtime::CompilerServices::RuleCache_1<T>* System::Runtime::CompilerServices::CallSiteOps::GetRuleCache(::System::Runtime::CompilerServices::CallSite_1<T>* site) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSiteOps*>(),
                                                           { "GetRuleCache", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Runtime::CompilerServices::CallSite_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::RuleCache_1<T>*>(nullptr, ___internal_method, site);
}
template <typename T> inline void System::Runtime::CompilerServices::CallSiteOps::MoveRule(::System::Runtime::CompilerServices::RuleCache_1<T>* cache, T rule, int32_t i) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSiteOps*>(),
                          { "MoveRule", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Runtime::CompilerServices::RuleCache_1<T>*>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cache, rule, i);
}
template <typename T> inline ::ArrayW<T> System::Runtime::CompilerServices::CallSiteOps::GetCachedRules(::System::Runtime::CompilerServices::RuleCache_1<T>* cache) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSiteOps*>(),
                                                           { "GetCachedRules", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Runtime::CompilerServices::RuleCache_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, cache);
}
template <typename T>
inline T System::Runtime::CompilerServices::CallSiteOps::Bind(::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Runtime::CompilerServices::CallSite_1<T>* site,
                                                              ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSiteOps*>(),
                                                           { "Bind",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::System::Runtime::CompilerServices::CallSiteBinder*>(),
                                                               ::i2c::type_of<::System::Runtime::CompilerServices::CallSite_1<T>*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, binder, site, args);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::CallSiteOps::CallSiteOps() {}
