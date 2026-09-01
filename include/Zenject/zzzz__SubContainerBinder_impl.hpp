#pragma once
// IWYU pragma private; include "Zenject\SubContainerBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SubContainerBinder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__IBindingFinalizer_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__SubContainerBinder_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "Zenject/zzzz__WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerBinder___c__DisplayClass10_0::*)()>(&::Zenject::SubContainerBinder___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e5d1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass10_0._ByInstaller_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::SubContainerBinder___c__DisplayClass10_0::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerBinder___c__DisplayClass10_0::_ByInstaller_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e5e0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass10_0*>(), { "<ByInstaller>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass10_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerBinder___c__DisplayClass10_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e5e158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass10_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass10_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerBinder___c__DisplayClass10_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e5e19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass10_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerCreatorBindInfo*& Zenject::SubContainerBinder___c__DisplayClass10_0::__cordl_internal_get_subContainerBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subContainerBindInfo;
}
constexpr ::Zenject::SubContainerCreatorBindInfo* const& Zenject::SubContainerBinder___c__DisplayClass10_0::__cordl_internal_get_subContainerBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subContainerBindInfo;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass10_0::__cordl_internal_set_subContainerBindInfo(::Zenject::SubContainerCreatorBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subContainerBindInfo = value;
}
constexpr ::System::Type*& Zenject::SubContainerBinder___c__DisplayClass10_0::__cordl_internal_get_installerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
constexpr ::System::Type* const& Zenject::SubContainerBinder___c__DisplayClass10_0::__cordl_internal_get_installerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass10_0::__cordl_internal_set_installerType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___installerType = value;
}
inline void Zenject::SubContainerBinder___c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::SubContainerBinder___c__DisplayClass10_0::_ByInstaller_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass10_0*>(), { "<ByInstaller>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::SubContainerBinder___c__DisplayClass10_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass10_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerBinder___c__DisplayClass10_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass10_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerBinder___c__DisplayClass10_0* Zenject::SubContainerBinder___c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerBinder___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerBinder___c__DisplayClass10_0::SubContainerBinder___c__DisplayClass10_0() {}
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass11_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerBinder___c__DisplayClass11_0::*)()>(&::Zenject::SubContainerBinder___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e5d334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass11_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass11_0._ByMethod_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::SubContainerBinder___c__DisplayClass11_0::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerBinder___c__DisplayClass11_0::_ByMethod_b__0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e5e330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass11_0*>(), { "<ByMethod>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass11_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerBinder___c__DisplayClass11_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e5e3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass11_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass11_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerBinder___c__DisplayClass11_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e5e3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass11_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerCreatorBindInfo*& Zenject::SubContainerBinder___c__DisplayClass11_0::__cordl_internal_get_subContainerBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subContainerBindInfo;
}
constexpr ::Zenject::SubContainerCreatorBindInfo* const& Zenject::SubContainerBinder___c__DisplayClass11_0::__cordl_internal_get_subContainerBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subContainerBindInfo;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass11_0::__cordl_internal_set_subContainerBindInfo(::Zenject::SubContainerCreatorBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subContainerBindInfo = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::SubContainerBinder___c__DisplayClass11_0::__cordl_internal_get_installerMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& Zenject::SubContainerBinder___c__DisplayClass11_0::__cordl_internal_get_installerMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass11_0::__cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___installerMethod = value;
}
inline void Zenject::SubContainerBinder___c__DisplayClass11_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass11_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::SubContainerBinder___c__DisplayClass11_0::_ByMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass11_0*>(), { "<ByMethod>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::SubContainerBinder___c__DisplayClass11_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass11_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerBinder___c__DisplayClass11_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass11_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerBinder___c__DisplayClass11_0* Zenject::SubContainerBinder___c__DisplayClass11_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerBinder___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerBinder___c__DisplayClass11_0::SubContainerBinder___c__DisplayClass11_0() {}
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerBinder___c__DisplayClass12_0::*)()>(&::Zenject::SubContainerBinder___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e5d494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass12_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass12_0._ByNewGameObjectMethod_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::SubContainerBinder___c__DisplayClass12_0::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerBinder___c__DisplayClass12_0::_ByNewGameObjectMethod_b__0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e5e57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass12_0*>(),
                                                                                           { "<ByNewGameObjectMethod>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass12_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerBinder___c__DisplayClass12_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e5e5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass12_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass12_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerBinder___c__DisplayClass12_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e5e634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass12_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::SubContainerBinder___c__DisplayClass12_0::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::SubContainerBinder___c__DisplayClass12_0::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass12_0::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjectInfo = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::SubContainerBinder___c__DisplayClass12_0::__cordl_internal_get_installerMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& Zenject::SubContainerBinder___c__DisplayClass12_0::__cordl_internal_get_installerMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass12_0::__cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___installerMethod = value;
}
inline void Zenject::SubContainerBinder___c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass12_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::SubContainerBinder___c__DisplayClass12_0::_ByNewGameObjectMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass12_0*>(), { "<ByNewGameObjectMethod>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::SubContainerBinder___c__DisplayClass12_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass12_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerBinder___c__DisplayClass12_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass12_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerBinder___c__DisplayClass12_0* Zenject::SubContainerBinder___c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerBinder___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerBinder___c__DisplayClass12_0::SubContainerBinder___c__DisplayClass12_0() {}
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerBinder___c__DisplayClass13_0::*)()>(&::Zenject::SubContainerBinder___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e5d618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass13_0._ByNewPrefabMethod_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::SubContainerBinder___c__DisplayClass13_0::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerBinder___c__DisplayClass13_0::_ByNewPrefabMethod_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e5e7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass13_0*>(), { "<ByNewPrefabMethod>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass13_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerBinder___c__DisplayClass13_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e5e874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass13_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass13_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerBinder___c__DisplayClass13_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e5e8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass13_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Zenject::SubContainerBinder___c__DisplayClass13_0::__cordl_internal_get_prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::Object> const& Zenject::SubContainerBinder___c__DisplayClass13_0::__cordl_internal_get_prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass13_0::__cordl_internal_set_prefab(::UnityW<::UnityEngine::Object> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefab = value;
}
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::SubContainerBinder___c__DisplayClass13_0::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::SubContainerBinder___c__DisplayClass13_0::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass13_0::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjectInfo = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::SubContainerBinder___c__DisplayClass13_0::__cordl_internal_get_installerMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& Zenject::SubContainerBinder___c__DisplayClass13_0::__cordl_internal_get_installerMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass13_0::__cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___installerMethod = value;
}
inline void Zenject::SubContainerBinder___c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::SubContainerBinder___c__DisplayClass13_0::_ByNewPrefabMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass13_0*>(), { "<ByNewPrefabMethod>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::SubContainerBinder___c__DisplayClass13_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass13_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerBinder___c__DisplayClass13_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass13_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerBinder___c__DisplayClass13_0* Zenject::SubContainerBinder___c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerBinder___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerBinder___c__DisplayClass13_0::SubContainerBinder___c__DisplayClass13_0() {}
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass15_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerBinder___c__DisplayClass15_0::*)()>(&::Zenject::SubContainerBinder___c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e5d864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass15_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass15_0._ByNewGameObjectInstaller_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::SubContainerBinder___c__DisplayClass15_0::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerBinder___c__DisplayClass15_0::_ByNewGameObjectInstaller_b__0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e5ea4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass15_0*>(),
                                                                                           { "<ByNewGameObjectInstaller>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass15_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerBinder___c__DisplayClass15_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e5eae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass15_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass15_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerBinder___c__DisplayClass15_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e5eb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass15_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::SubContainerBinder___c__DisplayClass15_0::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::SubContainerBinder___c__DisplayClass15_0::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass15_0::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjectInfo = value;
}
constexpr ::System::Type*& Zenject::SubContainerBinder___c__DisplayClass15_0::__cordl_internal_get_installerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
constexpr ::System::Type* const& Zenject::SubContainerBinder___c__DisplayClass15_0::__cordl_internal_get_installerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass15_0::__cordl_internal_set_installerType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___installerType = value;
}
constexpr ::Zenject::SubContainerBinder*& Zenject::SubContainerBinder___c__DisplayClass15_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::SubContainerBinder* const& Zenject::SubContainerBinder___c__DisplayClass15_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass15_0::__cordl_internal_set___4__this(::Zenject::SubContainerBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void Zenject::SubContainerBinder___c__DisplayClass15_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass15_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::SubContainerBinder___c__DisplayClass15_0::_ByNewGameObjectInstaller_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass15_0*>(),
                                                                                         { "<ByNewGameObjectInstaller>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::SubContainerBinder___c__DisplayClass15_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass15_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerBinder___c__DisplayClass15_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass15_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerBinder___c__DisplayClass15_0* Zenject::SubContainerBinder___c__DisplayClass15_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerBinder___c__DisplayClass15_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerBinder___c__DisplayClass15_0::SubContainerBinder___c__DisplayClass15_0() {}
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerBinder___c__DisplayClass17_0::*)()>(&::Zenject::SubContainerBinder___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e5da44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass17_0._ByNewPrefabInstaller_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::SubContainerBinder___c__DisplayClass17_0::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerBinder___c__DisplayClass17_0::_ByNewPrefabInstaller_b__0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6e5ecb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass17_0*>(),
                                                                                           { "<ByNewPrefabInstaller>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass17_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerBinder___c__DisplayClass17_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e5ed90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass17_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass17_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerBinder___c__DisplayClass17_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e5edd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass17_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Zenject::SubContainerBinder___c__DisplayClass17_0::__cordl_internal_get_prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::Object> const& Zenject::SubContainerBinder___c__DisplayClass17_0::__cordl_internal_get_prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass17_0::__cordl_internal_set_prefab(::UnityW<::UnityEngine::Object> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefab = value;
}
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::SubContainerBinder___c__DisplayClass17_0::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::SubContainerBinder___c__DisplayClass17_0::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass17_0::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjectInfo = value;
}
constexpr ::System::Type*& Zenject::SubContainerBinder___c__DisplayClass17_0::__cordl_internal_get_installerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
constexpr ::System::Type* const& Zenject::SubContainerBinder___c__DisplayClass17_0::__cordl_internal_get_installerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass17_0::__cordl_internal_set_installerType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___installerType = value;
}
constexpr ::Zenject::SubContainerBinder*& Zenject::SubContainerBinder___c__DisplayClass17_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::SubContainerBinder* const& Zenject::SubContainerBinder___c__DisplayClass17_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass17_0::__cordl_internal_set___4__this(::Zenject::SubContainerBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void Zenject::SubContainerBinder___c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::SubContainerBinder___c__DisplayClass17_0::_ByNewPrefabInstaller_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass17_0*>(), { "<ByNewPrefabInstaller>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::SubContainerBinder___c__DisplayClass17_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass17_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerBinder___c__DisplayClass17_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass17_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerBinder___c__DisplayClass17_0* Zenject::SubContainerBinder___c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerBinder___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerBinder___c__DisplayClass17_0::SubContainerBinder___c__DisplayClass17_0() {}
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerBinder___c__DisplayClass18_0::*)()>(&::Zenject::SubContainerBinder___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e5dbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass18_0._ByNewPrefabResourceMethod_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::SubContainerBinder___c__DisplayClass18_0::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerBinder___c__DisplayClass18_0::_ByNewPrefabResourceMethod_b__0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e5ef68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass18_0*>(),
                                                                                           { "<ByNewPrefabResourceMethod>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass18_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerBinder___c__DisplayClass18_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e5f008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass18_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass18_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerBinder___c__DisplayClass18_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e5f04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass18_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::SubContainerBinder___c__DisplayClass18_0::__cordl_internal_get_resourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
constexpr ::StringW const& Zenject::SubContainerBinder___c__DisplayClass18_0::__cordl_internal_get_resourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass18_0::__cordl_internal_set_resourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resourcePath = value;
}
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::SubContainerBinder___c__DisplayClass18_0::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::SubContainerBinder___c__DisplayClass18_0::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass18_0::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjectInfo = value;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::SubContainerBinder___c__DisplayClass18_0::__cordl_internal_get_installerMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& Zenject::SubContainerBinder___c__DisplayClass18_0::__cordl_internal_get_installerMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerMethod;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass18_0::__cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___installerMethod = value;
}
inline void Zenject::SubContainerBinder___c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::SubContainerBinder___c__DisplayClass18_0::_ByNewPrefabResourceMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass18_0*>(),
                                                                                         { "<ByNewPrefabResourceMethod>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::SubContainerBinder___c__DisplayClass18_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass18_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerBinder___c__DisplayClass18_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass18_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerBinder___c__DisplayClass18_0* Zenject::SubContainerBinder___c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerBinder___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerBinder___c__DisplayClass18_0::SubContainerBinder___c__DisplayClass18_0() {}
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass20_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerBinder___c__DisplayClass20_0::*)()>(&::Zenject::SubContainerBinder___c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e5de04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass20_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass20_0._ByNewPrefabResourceInstaller_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::SubContainerBinder___c__DisplayClass20_0::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerBinder___c__DisplayClass20_0::_ByNewPrefabResourceInstaller_b__0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e5f1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass20_0*>(),
                                                                                           { "<ByNewPrefabResourceInstaller>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass20_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerBinder___c__DisplayClass20_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e5f2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass20_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass20_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerBinder___c__DisplayClass20_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e5f2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass20_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::SubContainerBinder___c__DisplayClass20_0::__cordl_internal_get_resourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
constexpr ::StringW const& Zenject::SubContainerBinder___c__DisplayClass20_0::__cordl_internal_get_resourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass20_0::__cordl_internal_set_resourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resourcePath = value;
}
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::SubContainerBinder___c__DisplayClass20_0::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::SubContainerBinder___c__DisplayClass20_0::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass20_0::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjectInfo = value;
}
constexpr ::System::Type*& Zenject::SubContainerBinder___c__DisplayClass20_0::__cordl_internal_get_installerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
constexpr ::System::Type* const& Zenject::SubContainerBinder___c__DisplayClass20_0::__cordl_internal_get_installerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installerType;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass20_0::__cordl_internal_set_installerType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___installerType = value;
}
constexpr ::Zenject::SubContainerBinder*& Zenject::SubContainerBinder___c__DisplayClass20_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::SubContainerBinder* const& Zenject::SubContainerBinder___c__DisplayClass20_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass20_0::__cordl_internal_set___4__this(::Zenject::SubContainerBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void Zenject::SubContainerBinder___c__DisplayClass20_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass20_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::SubContainerBinder___c__DisplayClass20_0::_ByNewPrefabResourceInstaller_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass20_0*>(),
                                                                                         { "<ByNewPrefabResourceInstaller>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::SubContainerBinder___c__DisplayClass20_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass20_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerBinder___c__DisplayClass20_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass20_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerBinder___c__DisplayClass20_0* Zenject::SubContainerBinder___c__DisplayClass20_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerBinder___c__DisplayClass20_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerBinder___c__DisplayClass20_0::SubContainerBinder___c__DisplayClass20_0() {}
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass22_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerBinder___c__DisplayClass22_0::*)()>(&::Zenject::SubContainerBinder___c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e5df70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass22_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass22_0._ByNewContextPrefab_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::SubContainerBinder___c__DisplayClass22_0::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerBinder___c__DisplayClass22_0::_ByNewContextPrefab_b__0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e5f484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass22_0*>(), { "<ByNewContextPrefab>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass22_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerBinder___c__DisplayClass22_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e5f520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass22_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass22_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerBinder___c__DisplayClass22_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e5f564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass22_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Zenject::SubContainerBinder___c__DisplayClass22_0::__cordl_internal_get_prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::Object> const& Zenject::SubContainerBinder___c__DisplayClass22_0::__cordl_internal_get_prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass22_0::__cordl_internal_set_prefab(::UnityW<::UnityEngine::Object> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefab = value;
}
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::SubContainerBinder___c__DisplayClass22_0::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::SubContainerBinder___c__DisplayClass22_0::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass22_0::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjectInfo = value;
}
inline void Zenject::SubContainerBinder___c__DisplayClass22_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass22_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::SubContainerBinder___c__DisplayClass22_0::_ByNewContextPrefab_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass22_0*>(), { "<ByNewContextPrefab>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::SubContainerBinder___c__DisplayClass22_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass22_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerBinder___c__DisplayClass22_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass22_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerBinder___c__DisplayClass22_0* Zenject::SubContainerBinder___c__DisplayClass22_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerBinder___c__DisplayClass22_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerBinder___c__DisplayClass22_0::SubContainerBinder___c__DisplayClass22_0() {}
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass24_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerBinder___c__DisplayClass24_0::*)()>(&::Zenject::SubContainerBinder___c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e5e0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass24_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass24_0._ByNewContextPrefabResource_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::SubContainerBinder___c__DisplayClass24_0::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerBinder___c__DisplayClass24_0::_ByNewContextPrefabResource_b__0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e5f6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass24_0*>(),
                                                                                           { "<ByNewContextPrefabResource>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass24_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerBinder___c__DisplayClass24_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e5f788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass24_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass24_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerBinder___c__DisplayClass24_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e5f7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass24_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::SubContainerBinder___c__DisplayClass24_0::__cordl_internal_get_resourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
constexpr ::StringW const& Zenject::SubContainerBinder___c__DisplayClass24_0::__cordl_internal_get_resourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass24_0::__cordl_internal_set_resourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resourcePath = value;
}
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::SubContainerBinder___c__DisplayClass24_0::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::SubContainerBinder___c__DisplayClass24_0::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass24_0::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjectInfo = value;
}
inline void Zenject::SubContainerBinder___c__DisplayClass24_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass24_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::SubContainerBinder___c__DisplayClass24_0::_ByNewContextPrefabResource_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass24_0*>(),
                                                                                         { "<ByNewContextPrefabResource>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::SubContainerBinder___c__DisplayClass24_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass24_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerBinder___c__DisplayClass24_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass24_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerBinder___c__DisplayClass24_0* Zenject::SubContainerBinder___c__DisplayClass24_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerBinder___c__DisplayClass24_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerBinder___c__DisplayClass24_0::SubContainerBinder___c__DisplayClass24_0() {}
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerBinder___c__DisplayClass7_0::*)()>(&::Zenject::SubContainerBinder___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e5ceb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass7_0._ByInstance_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::SubContainerBinder___c__DisplayClass7_0::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerBinder___c__DisplayClass7_0::_ByInstance_b__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e5f960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass7_0*>(), { "<ByInstance>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass7_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerBinder___c__DisplayClass7_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e5f9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass7_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass7_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerBinder___c__DisplayClass7_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e5f9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass7_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::SubContainerBinder___c__DisplayClass7_0::__cordl_internal_get_subContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subContainer;
}
constexpr ::Zenject::DiContainer* const& Zenject::SubContainerBinder___c__DisplayClass7_0::__cordl_internal_get_subContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subContainer;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass7_0::__cordl_internal_set_subContainer(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subContainer = value;
}
inline void Zenject::SubContainerBinder___c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::SubContainerBinder___c__DisplayClass7_0::_ByInstance_b__0(::Zenject::DiContainer* _) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass7_0*>(), { "<ByInstance>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*>(this, ___internal_method, _);
}
inline ::System::Object* Zenject::SubContainerBinder___c__DisplayClass7_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass7_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerBinder___c__DisplayClass7_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass7_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerBinder___c__DisplayClass7_0* Zenject::SubContainerBinder___c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerBinder___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerBinder___c__DisplayClass7_0::SubContainerBinder___c__DisplayClass7_0() {}
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerBinder___c__DisplayClass8_0::*)()>(&::Zenject::SubContainerBinder___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e5cff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass8_0._ByInstanceGetter_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::SubContainerBinder___c__DisplayClass8_0::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerBinder___c__DisplayClass8_0::_ByInstanceGetter_b__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e5fb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass8_0*>(), { "<ByInstanceGetter>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass8_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerBinder___c__DisplayClass8_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e5fbe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass8_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder___c__DisplayClass8_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerBinder___c__DisplayClass8_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e5fc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass8_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>*& Zenject::SubContainerBinder___c__DisplayClass8_0::__cordl_internal_get_subContainerGetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subContainerGetter;
}
constexpr ::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* const& Zenject::SubContainerBinder___c__DisplayClass8_0::__cordl_internal_get_subContainerGetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subContainerGetter;
}
constexpr void Zenject::SubContainerBinder___c__DisplayClass8_0::__cordl_internal_set_subContainerGetter(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subContainerGetter = value;
}
inline void Zenject::SubContainerBinder___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::SubContainerBinder___c__DisplayClass8_0::_ByInstanceGetter_b__0(::Zenject::DiContainer* _) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass8_0*>(), { "<ByInstanceGetter>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*>(this, ___internal_method, _);
}
inline ::System::Object* Zenject::SubContainerBinder___c__DisplayClass8_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass8_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerBinder___c__DisplayClass8_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder___c__DisplayClass8_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerBinder___c__DisplayClass8_0* Zenject::SubContainerBinder___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerBinder___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerBinder___c__DisplayClass8_0::SubContainerBinder___c__DisplayClass8_0() {}
//  Writing Method size for method: ::Zenject::SubContainerBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerBinder::*)(::Zenject::BindInfo*, ::Zenject::BindStatement*, ::System::Object*, bool)>(
    &::Zenject::SubContainerBinder::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e5cd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::BindStatement*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.set_SubFinalizer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerBinder::*)(::Zenject::IBindingFinalizer*)>(&::Zenject::SubContainerBinder::set_SubFinalizer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e5cd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "set_SubFinalizer", {}, { ::i2c::type_of<::Zenject::IBindingFinalizer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerBinder::ByInstance)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e5cd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByInstance", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByInstanceGetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::SubContainerBinder::*)(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>*)>(&::Zenject::SubContainerBinder::ByInstanceGetter)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e5cec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(),
                                                             { "ByInstanceGetter", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByInstaller
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::System::Type*)>(
    &::Zenject::SubContainerBinder::ByInstaller)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6e5cff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByInstaller", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::SubContainerBinder::*)(::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::SubContainerBinder::ByMethod)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6e5d1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByMethod", {}, { ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewGameObjectMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::SubContainerBinder::*)(::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::SubContainerBinder::ByNewGameObjectMethod)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6e5d338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewGameObjectMethod", {}, { ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewPrefabMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::SubContainerBinder::*)(::UnityEngine::Object*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::SubContainerBinder::ByNewPrefabMethod)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6e5d4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(),
                                                { "ByNewPrefabMethod", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewGameObjectInstaller
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::System::Type*)>(
    &::Zenject::SubContainerBinder::ByNewGameObjectInstaller)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6e5d690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewGameObjectInstaller", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewPrefabInstaller
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::SubContainerBinder::*)(::UnityEngine::Object*, ::System::Type*)>(&::Zenject::SubContainerBinder::ByNewPrefabInstaller)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6e5d868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewPrefabInstaller", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewPrefabResourceMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::SubContainerBinder::*)(::StringW, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::SubContainerBinder::ByNewPrefabResourceMethod)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6e5da48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(),
                                                             { "ByNewPrefabResourceMethod", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewPrefabResourceInstaller
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::StringW, ::System::Type*)>(
    &::Zenject::SubContainerBinder::ByNewPrefabResourceInstaller)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6e5dc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewPrefabResourceInstaller", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::UnityEngine::Object*)>(
    &::Zenject::SubContainerBinder::ByNewPrefab)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e5de08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewPrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewContextPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::UnityEngine::Object*)>(
    &::Zenject::SubContainerBinder::ByNewContextPrefab)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6e5de0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewContextPrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewPrefabResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::StringW)>(
    &::Zenject::SubContainerBinder::ByNewPrefabResource)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e5df74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewPrefabResource", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewContextPrefabResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::StringW)>(
    &::Zenject::SubContainerBinder::ByNewContextPrefabResource)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6e5df78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewContextPrefabResource", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::BindInfo*& Zenject::SubContainerBinder::__cordl_internal_get__bindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindInfo;
}
constexpr ::Zenject::BindInfo* const& Zenject::SubContainerBinder::__cordl_internal_get__bindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindInfo;
}
constexpr void Zenject::SubContainerBinder::__cordl_internal_set__bindInfo(::Zenject::BindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindInfo = value;
}
constexpr ::Zenject::BindStatement*& Zenject::SubContainerBinder::__cordl_internal_get__bindStatement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindStatement;
}
constexpr ::Zenject::BindStatement* const& Zenject::SubContainerBinder::__cordl_internal_get__bindStatement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindStatement;
}
constexpr void Zenject::SubContainerBinder::__cordl_internal_set__bindStatement(::Zenject::BindStatement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindStatement = value;
}
constexpr ::System::Object*& Zenject::SubContainerBinder::__cordl_internal_get__subIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subIdentifier;
}
constexpr ::System::Object* const& Zenject::SubContainerBinder::__cordl_internal_get__subIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subIdentifier;
}
constexpr void Zenject::SubContainerBinder::__cordl_internal_set__subIdentifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subIdentifier = value;
}
constexpr bool& Zenject::SubContainerBinder::__cordl_internal_get__resolveAll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolveAll;
}
constexpr bool const& Zenject::SubContainerBinder::__cordl_internal_get__resolveAll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolveAll;
}
constexpr void Zenject::SubContainerBinder::__cordl_internal_set__resolveAll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resolveAll = value;
}
inline void Zenject::SubContainerBinder::_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement, ::System::Object* subIdentifier, bool resolveAll) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::BindStatement*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo, bindStatement, subIdentifier, resolveAll);
}
inline void Zenject::SubContainerBinder::set_SubFinalizer(::Zenject::IBindingFinalizer* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "set_SubFinalizer", {}, { ::i2c::type_of<::Zenject::IBindingFinalizer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByInstance(::Zenject::DiContainer* subContainer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByInstance", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, subContainer);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::SubContainerBinder::ByInstanceGetter(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* subContainerGetter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByInstanceGetter", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, subContainerGetter);
}
template <typename TInstaller> inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByInstaller() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByInstaller", { ::i2c::class_of<TInstaller>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TInstaller>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByInstaller(::System::Type* installerType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByInstaller", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, installerType);
}
inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByMethod(::System::Action_1<::Zenject::DiContainer*>* installerMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByMethod", {}, { ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, installerMethod);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewGameObjectMethod(::System::Action_1<::Zenject::DiContainer*>* installerMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewGameObjectMethod", {}, { ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, installerMethod);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewPrefabMethod(::UnityEngine::Object* prefab,
                                                                                                                            ::System::Action_1<::Zenject::DiContainer*>* installerMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(),
                                                           { "ByNewPrefabMethod", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, prefab, installerMethod);
}
template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewGameObjectInstaller() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewGameObjectInstaller", { ::i2c::class_of<TInstaller>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TInstaller>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewGameObjectInstaller(::System::Type* installerType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewGameObjectInstaller", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, installerType);
}
template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewPrefabInstaller(::UnityEngine::Object* prefab) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewPrefabInstaller", { ::i2c::class_of<TInstaller>() }, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TInstaller>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, prefab);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewPrefabInstaller(::UnityEngine::Object* prefab, ::System::Type* installerType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewPrefabInstaller", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, prefab, installerType);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewPrefabResourceMethod(::StringW resourcePath,
                                                                                                                                    ::System::Action_1<::Zenject::DiContainer*>* installerMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(),
                                                           { "ByNewPrefabResourceMethod", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath, installerMethod);
}
template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewPrefabResourceInstaller(::StringW resourcePath) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewPrefabResourceInstaller", { ::i2c::class_of<TInstaller>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TInstaller>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewPrefabResourceInstaller(::StringW resourcePath, ::System::Type* installerType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewPrefabResourceInstaller", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath, installerType);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewPrefab(::UnityEngine::Object* prefab) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewPrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, prefab);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewContextPrefab(::UnityEngine::Object* prefab) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewContextPrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, prefab);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewPrefabResource(::StringW resourcePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewPrefabResource", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewContextPrefabResource(::StringW resourcePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerBinder*>(), { "ByNewContextPrefabResource", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath);
}
inline ::Zenject::SubContainerBinder* Zenject::SubContainerBinder::New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement, ::System::Object* subIdentifier, bool resolveAll) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerBinder*>(bindInfo, bindStatement, subIdentifier, resolveAll));
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerBinder::SubContainerBinder() {}
