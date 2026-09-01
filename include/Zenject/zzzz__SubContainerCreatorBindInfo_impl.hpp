#pragma once
// IWYU pragma private; include "Zenject\SubContainerCreatorBindInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorBindInfo.get_DefaultParentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Zenject::SubContainerCreatorBindInfo::*)()>(&::Zenject::SubContainerCreatorBindInfo::get_DefaultParentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8a454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorBindInfo*>(), { "get_DefaultParentName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorBindInfo.set_DefaultParentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorBindInfo::*)(::StringW)>(&::Zenject::SubContainerCreatorBindInfo::set_DefaultParentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8a45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorBindInfo*>(), { "set_DefaultParentName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorBindInfo.get_CreateKernel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::SubContainerCreatorBindInfo::*)()>(&::Zenject::SubContainerCreatorBindInfo::get_CreateKernel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8a464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorBindInfo*>(), { "get_CreateKernel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorBindInfo.set_CreateKernel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorBindInfo::*)(bool)>(&::Zenject::SubContainerCreatorBindInfo::set_CreateKernel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8a46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorBindInfo*>(), { "set_CreateKernel", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorBindInfo.get_KernelType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::SubContainerCreatorBindInfo::*)()>(&::Zenject::SubContainerCreatorBindInfo::get_KernelType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8a474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorBindInfo*>(), { "get_KernelType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorBindInfo.set_KernelType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorBindInfo::*)(::System::Type*)>(&::Zenject::SubContainerCreatorBindInfo::set_KernelType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8a47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorBindInfo*>(), { "set_KernelType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorBindInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorBindInfo::*)()>(&::Zenject::SubContainerCreatorBindInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8a484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorBindInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::SubContainerCreatorBindInfo::__cordl_internal_get__DefaultParentName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DefaultParentName_k__BackingField;
}
constexpr ::StringW const& Zenject::SubContainerCreatorBindInfo::__cordl_internal_get__DefaultParentName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DefaultParentName_k__BackingField;
}
constexpr void Zenject::SubContainerCreatorBindInfo::__cordl_internal_set__DefaultParentName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DefaultParentName_k__BackingField = value;
}
constexpr bool& Zenject::SubContainerCreatorBindInfo::__cordl_internal_get__CreateKernel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreateKernel_k__BackingField;
}
constexpr bool const& Zenject::SubContainerCreatorBindInfo::__cordl_internal_get__CreateKernel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreateKernel_k__BackingField;
}
constexpr void Zenject::SubContainerCreatorBindInfo::__cordl_internal_set__CreateKernel_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CreateKernel_k__BackingField = value;
}
constexpr ::System::Type*& Zenject::SubContainerCreatorBindInfo::__cordl_internal_get__KernelType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____KernelType_k__BackingField;
}
constexpr ::System::Type* const& Zenject::SubContainerCreatorBindInfo::__cordl_internal_get__KernelType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____KernelType_k__BackingField;
}
constexpr void Zenject::SubContainerCreatorBindInfo::__cordl_internal_set__KernelType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____KernelType_k__BackingField = value;
}
inline ::StringW Zenject::SubContainerCreatorBindInfo::get_DefaultParentName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorBindInfo*>(), { "get_DefaultParentName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Zenject::SubContainerCreatorBindInfo::set_DefaultParentName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorBindInfo*>(), { "set_DefaultParentName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Zenject::SubContainerCreatorBindInfo::get_CreateKernel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorBindInfo*>(), { "get_CreateKernel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Zenject::SubContainerCreatorBindInfo::set_CreateKernel(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorBindInfo*>(), { "set_CreateKernel", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* Zenject::SubContainerCreatorBindInfo::get_KernelType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorBindInfo*>(), { "get_KernelType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Zenject::SubContainerCreatorBindInfo::set_KernelType(::System::Type* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorBindInfo*>(), { "set_KernelType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Zenject::SubContainerCreatorBindInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorBindInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::SubContainerCreatorBindInfo* Zenject::SubContainerCreatorBindInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerCreatorBindInfo*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorBindInfo::SubContainerCreatorBindInfo() {}
