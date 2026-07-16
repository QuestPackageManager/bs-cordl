#pragma once
// IWYU pragma private; include "Zenject/MemoryPoolSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PoolExpandMethods_impl.hpp"
#include "Zenject/zzzz__MemoryPoolSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__PoolExpandMethods_def.hpp"
//  Writing Method size for method: ::Zenject::MemoryPoolSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::MemoryPoolSettings::*)()>(&::Zenject::MemoryPoolSettings::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e66120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MemoryPoolSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::MemoryPoolSettings::*)(int32_t, int32_t, ::Zenject::PoolExpandMethods, bool)>(&::Zenject::MemoryPoolSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e6613c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolSettings*>(),
                                                { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Zenject::PoolExpandMethods>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MemoryPoolSettings.get_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::MemoryPoolSettings* (*)()>(&::Zenject::MemoryPoolSettings::get_Default)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e6614c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolSettings*>(), { "get_Default", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MemoryPoolSettings.set_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Zenject::MemoryPoolSettings*)>(&::Zenject::MemoryPoolSettings::set_Default)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e661a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolSettings*>(), { "set_Default", {}, { ::i2c::type_of<::Zenject::MemoryPoolSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MemoryPoolSettings.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Zenject::MemoryPoolSettings::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e66208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolSettings*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MemoryPoolSettings.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::MemoryPoolSettings::__zenCreate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e66334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolSettings*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MemoryPoolSettings.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::MemoryPoolSettings::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e66394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolSettings*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Zenject::MemoryPoolSettings::__cordl_internal_get_InitialSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitialSize;
}
constexpr int32_t const& Zenject::MemoryPoolSettings::__cordl_internal_get_InitialSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitialSize;
}
constexpr void Zenject::MemoryPoolSettings::__cordl_internal_set_InitialSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InitialSize = value;
}
constexpr int32_t& Zenject::MemoryPoolSettings::__cordl_internal_get_MaxSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxSize;
}
constexpr int32_t const& Zenject::MemoryPoolSettings::__cordl_internal_get_MaxSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxSize;
}
constexpr void Zenject::MemoryPoolSettings::__cordl_internal_set_MaxSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaxSize = value;
}
constexpr ::Zenject::PoolExpandMethods& Zenject::MemoryPoolSettings::__cordl_internal_get_ExpandMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpandMethod;
}
constexpr ::Zenject::PoolExpandMethods const& Zenject::MemoryPoolSettings::__cordl_internal_get_ExpandMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpandMethod;
}
constexpr void Zenject::MemoryPoolSettings::__cordl_internal_set_ExpandMethod(::Zenject::PoolExpandMethods value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExpandMethod = value;
}
constexpr bool& Zenject::MemoryPoolSettings::__cordl_internal_get_ShowExpandWarning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShowExpandWarning;
}
constexpr bool const& Zenject::MemoryPoolSettings::__cordl_internal_get_ShowExpandWarning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShowExpandWarning;
}
constexpr void Zenject::MemoryPoolSettings::__cordl_internal_set_ShowExpandWarning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ShowExpandWarning = value;
}
inline void Zenject::MemoryPoolSettings::setStaticF__Default_k__BackingField(::Zenject::MemoryPoolSettings* value) {
  ::cordl_internals::setStaticField<::Zenject::MemoryPoolSettings*, "<Default>k__BackingField", ::Zenject::MemoryPoolSettings*>(std::forward<::Zenject::MemoryPoolSettings*>(value));
}
inline ::Zenject::MemoryPoolSettings* Zenject::MemoryPoolSettings::getStaticF__Default_k__BackingField() {
  return ::cordl_internals::getStaticField<::Zenject::MemoryPoolSettings*, "<Default>k__BackingField", ::Zenject::MemoryPoolSettings*>();
}
inline void Zenject::MemoryPoolSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::MemoryPoolSettings::_ctor(int32_t initialSize, int32_t maxSize, ::Zenject::PoolExpandMethods expandMethod, bool showExpandWarning) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolSettings*>(),
                                              { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Zenject::PoolExpandMethods>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialSize, maxSize, expandMethod, showExpandWarning);
}
inline ::Zenject::MemoryPoolSettings* Zenject::MemoryPoolSettings::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolSettings*>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MemoryPoolSettings*>(nullptr, ___internal_method);
}
inline void Zenject::MemoryPoolSettings::set_Default(::Zenject::MemoryPoolSettings* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolSettings*>(), { "set_Default", {}, { ::i2c::type_of<::Zenject::MemoryPoolSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Zenject::MemoryPoolSettings::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolSettings*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Object* Zenject::MemoryPoolSettings::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolSettings*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::MemoryPoolSettings::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolSettings*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::MemoryPoolSettings* Zenject::MemoryPoolSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::MemoryPoolSettings*>());
}
inline ::Zenject::MemoryPoolSettings* Zenject::MemoryPoolSettings::New_ctor(int32_t initialSize, int32_t maxSize, ::Zenject::PoolExpandMethods expandMethod, bool showExpandWarning) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::MemoryPoolSettings*>(initialSize, maxSize, expandMethod, showExpandWarning));
}
// Ctor Parameters []
constexpr ::Zenject::MemoryPoolSettings::MemoryPoolSettings() {}
