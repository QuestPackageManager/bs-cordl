#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\EdgeLookup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0::*)()>(&::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66bb670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0._GetEdgeLookup_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::EdgeLookup (::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0::*)(::UnityEngine::ProBuilder::Edge)>(
    &::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0::_GetEdgeLookup_b__0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x66bba04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0*>(),
                                                                                           { "<GetEdgeLookup>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0::__cordl_internal_get_lookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0::__cordl_internal_get_lookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
constexpr void UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0::__cordl_internal_set_lookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lookup = value;
}
inline void UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::EdgeLookup UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0::_GetEdgeLookup_b__0(::UnityEngine::ProBuilder::Edge x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0*>(),
                                                                                         { "<GetEdgeLookup>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::EdgeLookup>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0* UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0::EdgeLookup___c__DisplayClass16_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeLookup.get_local
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::EdgeLookup::*)()>(&::UnityEngine::ProBuilder::EdgeLookup::get_local)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66bb058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), { "get_local", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeLookup.set_local
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::EdgeLookup::*)(::UnityEngine::ProBuilder::Edge)>(&::UnityEngine::ProBuilder::EdgeLookup::set_local)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66bb060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), { "set_local", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeLookup.get_common
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::EdgeLookup::*)()>(&::UnityEngine::ProBuilder::EdgeLookup::get_common)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66bb068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), { "get_common", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeLookup.set_common
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::EdgeLookup::*)(::UnityEngine::ProBuilder::Edge)>(&::UnityEngine::ProBuilder::EdgeLookup::set_common)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66bb070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), { "set_common", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeLookup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::EdgeLookup::*)(::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge)>(
    &::UnityEngine::ProBuilder::EdgeLookup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66bb078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeLookup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::EdgeLookup::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::ProBuilder::EdgeLookup::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66bb080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeLookup.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::EdgeLookup::*)(::UnityEngine::ProBuilder::EdgeLookup)>(&::UnityEngine::ProBuilder::EdgeLookup::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x66bb098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeLookup.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::EdgeLookup::*)(::System::Object*)>(&::UnityEngine::ProBuilder::EdgeLookup::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x66bb128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), { ::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeLookup.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::EdgeLookup::*)()>(&::UnityEngine::ProBuilder::EdgeLookup::GetHashCode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x66bb1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), { ::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeLookup.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::EdgeLookup)>(&::UnityEngine::ProBuilder::EdgeLookup::op_Equality)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x66bb230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>(), ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeLookup.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::EdgeLookup)>(&::UnityEngine::ProBuilder::EdgeLookup::op_Inequality)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x66bb2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>(), ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeLookup.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::EdgeLookup::*)()>(&::UnityEngine::ProBuilder::EdgeLookup::ToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x66bb3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), { ::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeLookup.GetEdgeLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::ProBuilder::EdgeLookup>* (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*)>(
    &::UnityEngine::ProBuilder::EdgeLookup::GetEdgeLookup)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x66bb560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(),
                                                                                           { "GetEdgeLookup",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeLookup.GetEdgeLookupHashSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<
    ::UnityEngine::ProBuilder::EdgeLookup>* (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*)>(
    &::UnityEngine::ProBuilder::EdgeLookup::GetEdgeLookupHashSet)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x66bb674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(),
                                                                                           { "GetEdgeLookupHashSet",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::EdgeLookup::get_local() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), { "get_local", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::EdgeLookup::set_local(::UnityEngine::ProBuilder::Edge value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), { "set_local", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::EdgeLookup::get_common() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), { "get_common", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::EdgeLookup::set_common(::UnityEngine::ProBuilder::Edge value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), { "set_common", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::EdgeLookup::_ctor(::UnityEngine::ProBuilder::Edge common, ::UnityEngine::ProBuilder::Edge local) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, common, local);
}
inline void UnityEngine::ProBuilder::EdgeLookup::_ctor(int32_t cx, int32_t cy, int32_t x, int32_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cx, cy, x, y);
}
inline bool UnityEngine::ProBuilder::EdgeLookup::Equals(::UnityEngine::ProBuilder::EdgeLookup other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::ProBuilder::EdgeLookup::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::ProBuilder::EdgeLookup::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::EdgeLookup::op_Equality(::UnityEngine::ProBuilder::EdgeLookup a, ::UnityEngine::ProBuilder::EdgeLookup b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>(), ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::ProBuilder::EdgeLookup::op_Inequality(::UnityEngine::ProBuilder::EdgeLookup a, ::UnityEngine::ProBuilder::EdgeLookup b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>(), ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::StringW UnityEngine::ProBuilder::EdgeLookup::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*
UnityEngine::ProBuilder::EdgeLookup::GetEdgeLookup(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                   ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), { "GetEdgeLookup",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(),
                                                                                                     ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*>(nullptr, ___internal_method, edges, lookup);
}
inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*
UnityEngine::ProBuilder::EdgeLookup::GetEdgeLookupHashSet(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                          ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeLookup>(), { "GetEdgeLookupHashSet",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(),
                                                                                                     ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*>(nullptr, ___internal_method, edges, lookup);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::EdgeLookup>"
constexpr UnityEngine::ProBuilder::EdgeLookup::operator ::System::IEquatable_1<::UnityEngine::ProBuilder::EdgeLookup>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::EdgeLookup>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::EdgeLookup>"
constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::EdgeLookup>* UnityEngine::ProBuilder::EdgeLookup::i___System__IEquatable_1___UnityEngine__ProBuilder__EdgeLookup_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::EdgeLookup>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Local", ty: "::UnityEngine::ProBuilder::Edge", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Common", ty: "::UnityEngine::ProBuilder::Edge",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::EdgeLookup::EdgeLookup(::UnityEngine::ProBuilder::Edge m_Local, ::UnityEngine::ProBuilder::Edge m_Common) noexcept {
  this->m_Local = m_Local;
  this->m_Common = m_Common;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::EdgeLookup::EdgeLookup() {}
