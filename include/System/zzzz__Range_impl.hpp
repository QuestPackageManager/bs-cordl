#pragma once
// IWYU pragma private; include "System\Range.hpp"
#include "System/zzzz__Index_impl.hpp"
#include "System/zzzz__Range_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Index_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Range.get_Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Index (::System::Range::*)()>(&::System::Range::get_Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c59d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Range>(), { "get_Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Range.get_End
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Index (::System::Range::*)()>(&::System::Range::get_End)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c59d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Range>(), { "get_End", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Range._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Range::*)(::System::Index, ::System::Index)>(&::System::Range::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c59d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Range>(), { ".ctor", {}, { ::i2c::type_of<::System::Index>(), ::i2c::type_of<::System::Index>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Range.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Range::*)(::System::Object*)>(&::System::Range::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c59d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Range>(), { ::i2c::class_of<::System::Range>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Range.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Range::*)(::System::Range)>(&::System::Range::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c59db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Range>(), { "Equals", {}, { ::i2c::type_of<::System::Range>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Range.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Range::*)()>(&::System::Range::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c59ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Range>(), { ::i2c::class_of<::System::Range>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Range.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Range::*)()>(&::System::Range::ToString)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5c59e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Range>(), { ::i2c::class_of<::System::Range>(), 3 }));
    return ___internal_method;
  }
};
inline ::System::Index System::Range::get_Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Range>(), { "get_Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Index>(*this, ___internal_method);
}
inline ::System::Index System::Range::get_End() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Range>(), { "get_End", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Index>(*this, ___internal_method);
}
inline void System::Range::_ctor(::System::Index start, ::System::Index end) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Range>(), { ".ctor", {}, { ::i2c::type_of<::System::Index>(), ::i2c::type_of<::System::Index>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, start, end);
}
inline bool System::Range::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Range>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool System::Range::Equals(::System::Range other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Range>(), { "Equals", {}, { ::i2c::type_of<::System::Range>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t System::Range::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Range>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW System::Range::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Range>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Range>"
constexpr System::Range::operator ::System::IEquatable_1<::System::Range>*() {
  return static_cast<::System::IEquatable_1<::System::Range>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Range>"
constexpr ::System::IEquatable_1<::System::Range>* System::Range::i___System__IEquatable_1___System__Range_() {
  return static_cast<::System::IEquatable_1<::System::Range>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Start_k__BackingField", ty: "::System::Index", modifiers: "", def_value: Some("{}") }, CppParam { name: "_End_k__BackingField", ty: "::System::Index", modifiers:
// "", def_value: Some("{}") }]
constexpr ::System::Range::Range(::System::Index _Start_k__BackingField, ::System::Index _End_k__BackingField) noexcept {
  this->_Start_k__BackingField = _Start_k__BackingField;
  this->_End_k__BackingField = _End_k__BackingField;
}
// Ctor Parameters []
constexpr ::System::Range::Range() {}
