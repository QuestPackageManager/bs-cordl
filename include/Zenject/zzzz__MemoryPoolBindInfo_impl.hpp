#pragma once
// IWYU pragma private; include "Zenject/MemoryPoolBindInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PoolExpandMethods_impl.hpp"
#include "Zenject/zzzz__MemoryPoolBindInfo_def.hpp"
#include "Zenject/zzzz__PoolExpandMethods_def.hpp"
//  Writing Method size for method: ::Zenject::MemoryPoolBindInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::MemoryPoolBindInfo::*)()>(&::Zenject::MemoryPoolBindInfo::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e5d640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MemoryPoolBindInfo.get_ShowExpandWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::MemoryPoolBindInfo::*)()>(&::Zenject::MemoryPoolBindInfo::get_ShowExpandWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5d658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { "get_ShowExpandWarning", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MemoryPoolBindInfo.set_ShowExpandWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::MemoryPoolBindInfo::*)(bool)>(&::Zenject::MemoryPoolBindInfo::set_ShowExpandWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5d660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { "set_ShowExpandWarning", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MemoryPoolBindInfo.get_ExpandMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::PoolExpandMethods (::Zenject::MemoryPoolBindInfo::*)()>(&::Zenject::MemoryPoolBindInfo::get_ExpandMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5d668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { "get_ExpandMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MemoryPoolBindInfo.set_ExpandMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::MemoryPoolBindInfo::*)(::Zenject::PoolExpandMethods)>(&::Zenject::MemoryPoolBindInfo::set_ExpandMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5d670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { "set_ExpandMethod", {}, { ::i2c::type_of<::Zenject::PoolExpandMethods>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MemoryPoolBindInfo.get_InitialSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::MemoryPoolBindInfo::*)()>(&::Zenject::MemoryPoolBindInfo::get_InitialSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5d678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { "get_InitialSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MemoryPoolBindInfo.set_InitialSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::MemoryPoolBindInfo::*)(int32_t)>(&::Zenject::MemoryPoolBindInfo::set_InitialSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5d680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { "set_InitialSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MemoryPoolBindInfo.get_MaxSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::MemoryPoolBindInfo::*)()>(&::Zenject::MemoryPoolBindInfo::get_MaxSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5d688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { "get_MaxSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MemoryPoolBindInfo.set_MaxSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::MemoryPoolBindInfo::*)(int32_t)>(&::Zenject::MemoryPoolBindInfo::set_MaxSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5d690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { "set_MaxSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr bool& Zenject::MemoryPoolBindInfo::__cordl_internal_get__ShowExpandWarning_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ShowExpandWarning_k__BackingField;
}
constexpr bool const& Zenject::MemoryPoolBindInfo::__cordl_internal_get__ShowExpandWarning_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ShowExpandWarning_k__BackingField;
}
constexpr void Zenject::MemoryPoolBindInfo::__cordl_internal_set__ShowExpandWarning_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ShowExpandWarning_k__BackingField = value;
}
constexpr ::Zenject::PoolExpandMethods& Zenject::MemoryPoolBindInfo::__cordl_internal_get__ExpandMethod_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExpandMethod_k__BackingField;
}
constexpr ::Zenject::PoolExpandMethods const& Zenject::MemoryPoolBindInfo::__cordl_internal_get__ExpandMethod_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExpandMethod_k__BackingField;
}
constexpr void Zenject::MemoryPoolBindInfo::__cordl_internal_set__ExpandMethod_k__BackingField(::Zenject::PoolExpandMethods value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ExpandMethod_k__BackingField = value;
}
constexpr int32_t& Zenject::MemoryPoolBindInfo::__cordl_internal_get__InitialSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InitialSize_k__BackingField;
}
constexpr int32_t const& Zenject::MemoryPoolBindInfo::__cordl_internal_get__InitialSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InitialSize_k__BackingField;
}
constexpr void Zenject::MemoryPoolBindInfo::__cordl_internal_set__InitialSize_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InitialSize_k__BackingField = value;
}
constexpr int32_t& Zenject::MemoryPoolBindInfo::__cordl_internal_get__MaxSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxSize_k__BackingField;
}
constexpr int32_t const& Zenject::MemoryPoolBindInfo::__cordl_internal_get__MaxSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxSize_k__BackingField;
}
constexpr void Zenject::MemoryPoolBindInfo::__cordl_internal_set__MaxSize_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxSize_k__BackingField = value;
}
inline void Zenject::MemoryPoolBindInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::MemoryPoolBindInfo::get_ShowExpandWarning() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { "get_ShowExpandWarning", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Zenject::MemoryPoolBindInfo::set_ShowExpandWarning(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { "set_ShowExpandWarning", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Zenject::PoolExpandMethods Zenject::MemoryPoolBindInfo::get_ExpandMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { "get_ExpandMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::PoolExpandMethods>(this, ___internal_method);
}
inline void Zenject::MemoryPoolBindInfo::set_ExpandMethod(::Zenject::PoolExpandMethods value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { "set_ExpandMethod", {}, { ::i2c::type_of<::Zenject::PoolExpandMethods>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Zenject::MemoryPoolBindInfo::get_InitialSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { "get_InitialSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Zenject::MemoryPoolBindInfo::set_InitialSize(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { "set_InitialSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Zenject::MemoryPoolBindInfo::get_MaxSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { "get_MaxSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Zenject::MemoryPoolBindInfo::set_MaxSize(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindInfo*>(), { "set_MaxSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Zenject::MemoryPoolBindInfo* Zenject::MemoryPoolBindInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::MemoryPoolBindInfo*>());
}
// Ctor Parameters []
constexpr ::Zenject::MemoryPoolBindInfo::MemoryPoolBindInfo() {}
