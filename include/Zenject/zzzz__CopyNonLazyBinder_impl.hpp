#pragma once
// IWYU pragma private; include "Zenject/CopyNonLazyBinder.hpp"
#include "Zenject/zzzz__NonLazyBinder_impl.hpp"
#include "Zenject/zzzz__CopyNonLazyBinder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindingInheritanceMethods_def.hpp"
#include "Zenject/zzzz__NonLazyBinder_def.hpp"
//  Writing Method size for method: ::Zenject::CopyNonLazyBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::CopyNonLazyBinder::*)(::Zenject::BindInfo*)>(&::Zenject::CopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e47a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CopyNonLazyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CopyNonLazyBinder.AddSecondaryCopyBindInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::CopyNonLazyBinder::*)(::Zenject::BindInfo*)>(&::Zenject::CopyNonLazyBinder::AddSecondaryCopyBindInfo)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6e4bad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CopyNonLazyBinder*>(), { "AddSecondaryCopyBindInfo", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CopyNonLazyBinder.CopyIntoAllSubContainers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NonLazyBinder* (::Zenject::CopyNonLazyBinder::*)()>(&::Zenject::CopyNonLazyBinder::CopyIntoAllSubContainers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e46678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CopyNonLazyBinder*>(), { "CopyIntoAllSubContainers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CopyNonLazyBinder.CopyIntoDirectSubContainers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NonLazyBinder* (::Zenject::CopyNonLazyBinder::*)()>(&::Zenject::CopyNonLazyBinder::CopyIntoDirectSubContainers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e4bcec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CopyNonLazyBinder*>(), { "CopyIntoDirectSubContainers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CopyNonLazyBinder.MoveIntoAllSubContainers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NonLazyBinder* (::Zenject::CopyNonLazyBinder::*)()>(&::Zenject::CopyNonLazyBinder::MoveIntoAllSubContainers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e4bd08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CopyNonLazyBinder*>(), { "MoveIntoAllSubContainers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CopyNonLazyBinder.MoveIntoDirectSubContainers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NonLazyBinder* (::Zenject::CopyNonLazyBinder::*)()>(&::Zenject::CopyNonLazyBinder::MoveIntoDirectSubContainers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e4bd24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CopyNonLazyBinder*>(), { "MoveIntoDirectSubContainers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CopyNonLazyBinder.SetInheritanceMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::CopyNonLazyBinder::*)(::Zenject::BindingInheritanceMethods)>(&::Zenject::CopyNonLazyBinder::SetInheritanceMethod)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6e4bbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CopyNonLazyBinder*>(), { "SetInheritanceMethod", {}, { ::i2c::type_of<::Zenject::BindingInheritanceMethods>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Zenject::BindInfo*>*& Zenject::CopyNonLazyBinder::__cordl_internal_get__secondaryBindInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryBindInfos;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::BindInfo*>* const& Zenject::CopyNonLazyBinder::__cordl_internal_get__secondaryBindInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryBindInfos;
}
constexpr void Zenject::CopyNonLazyBinder::__cordl_internal_set__secondaryBindInfos(::System::Collections::Generic::List_1<::Zenject::BindInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____secondaryBindInfos = value;
}
inline void Zenject::CopyNonLazyBinder::_ctor(::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CopyNonLazyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo);
}
inline void Zenject::CopyNonLazyBinder::AddSecondaryCopyBindInfo(::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CopyNonLazyBinder*>(), { "AddSecondaryCopyBindInfo", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo);
}
inline ::Zenject::NonLazyBinder* Zenject::CopyNonLazyBinder::CopyIntoAllSubContainers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CopyNonLazyBinder*>(), { "CopyIntoAllSubContainers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::NonLazyBinder* Zenject::CopyNonLazyBinder::CopyIntoDirectSubContainers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CopyNonLazyBinder*>(), { "CopyIntoDirectSubContainers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::NonLazyBinder* Zenject::CopyNonLazyBinder::MoveIntoAllSubContainers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CopyNonLazyBinder*>(), { "MoveIntoAllSubContainers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::NonLazyBinder* Zenject::CopyNonLazyBinder::MoveIntoDirectSubContainers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CopyNonLazyBinder*>(), { "MoveIntoDirectSubContainers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NonLazyBinder*>(this, ___internal_method);
}
inline void Zenject::CopyNonLazyBinder::SetInheritanceMethod(::Zenject::BindingInheritanceMethods method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::CopyNonLazyBinder*>(), { "SetInheritanceMethod", {}, { ::i2c::type_of<::Zenject::BindingInheritanceMethods>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::CopyNonLazyBinder::New_ctor(::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::CopyNonLazyBinder*>(bindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::CopyNonLazyBinder::CopyNonLazyBinder() {}
