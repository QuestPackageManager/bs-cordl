#pragma once
// IWYU pragma private; include "BGLib\AppFlow\Initialization\AsyncLoader.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncLoader_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncLoader_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__IInstallerRegistry_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep::AsyncLoader_SynchronizationStep(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep::AsyncLoader_SynchronizationStep() {}
constexpr ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep::PreloadStep1{ static_cast<int32_t>(0x0) };
constexpr ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep::PreloadStep2{ static_cast<int32_t>(0x1) };
constexpr ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep::AfterAsyncInstallers{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncLoader.get_synchronizationStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep (::BGLib::AppFlow::Initialization::AsyncLoader::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncLoader::get_synchronizationStep)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncLoader*>(), { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncLoader*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncLoader.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncLoader::*)()>(&::BGLib::AppFlow::Initialization::AsyncLoader::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3308974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncLoader*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncLoader.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncLoader::*)()>(&::BGLib::AppFlow::Initialization::AsyncLoader::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33089c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncLoader*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncLoader.LoadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::BGLib::AppFlow::Initialization::AsyncLoader::*)(::BGLib::AppFlow::Initialization::IInstallerRegistry*, ::Zenject::DiContainer*)>(&::BGLib::AppFlow::Initialization::AsyncLoader::LoadAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x33089cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncLoader*>(),
                                                { "LoadAsync", {}, { ::i2c::type_of<::BGLib::AppFlow::Initialization::IInstallerRegistry*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncLoader.LoadInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::BGLib::AppFlow::Initialization::AsyncLoader::*)(::BGLib::AppFlow::Initialization::IInstallerRegistry*, ::Zenject::DiContainer*, ::System::Threading::CancellationToken)>(
    &::BGLib::AppFlow::Initialization::AsyncLoader::LoadInternalAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncLoader*>(), { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncLoader*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncLoader.TryCancelTaskIfItRunning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::AppFlow::Initialization::AsyncLoader::*)()>(&::BGLib::AppFlow::Initialization::AsyncLoader::TryCancelTaskIfItRunning)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3308978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncLoader*>(), { "TryCancelTaskIfItRunning", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncLoader::*)()>(&::BGLib::AppFlow::Initialization::AsyncLoader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3308570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncLoader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& BGLib::AppFlow::Initialization::AsyncLoader::__cordl_internal_get__initializationTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr ::System::Threading::Tasks::Task* const& BGLib::AppFlow::Initialization::AsyncLoader::__cordl_internal_get__initializationTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr void BGLib::AppFlow::Initialization::AsyncLoader::__cordl_internal_set__initializationTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initializationTask = value;
}
constexpr ::System::Threading::CancellationTokenSource*& BGLib::AppFlow::Initialization::AsyncLoader::__cordl_internal_get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& BGLib::AppFlow::Initialization::AsyncLoader::__cordl_internal_get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void BGLib::AppFlow::Initialization::AsyncLoader::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancellationTokenSource = value;
}
inline ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep BGLib::AppFlow::Initialization::AsyncLoader::get_synchronizationStep() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncLoader*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncLoader::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncLoader*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncLoader::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncLoader*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BGLib::AppFlow::Initialization::AsyncLoader::LoadAsync(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry, ::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncLoader*>(),
                                              { "LoadAsync", {}, { ::i2c::type_of<::BGLib::AppFlow::Initialization::IInstallerRegistry*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, registry, container);
}
inline ::System::Threading::Tasks::Task* BGLib::AppFlow::Initialization::AsyncLoader::LoadInternalAsync(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry,
                                                                                                        ::Zenject::DiContainer* container, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncLoader*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, registry, container, cancellationToken);
}
inline bool BGLib::AppFlow::Initialization::AsyncLoader::TryCancelTaskIfItRunning() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncLoader*>(), { "TryCancelTaskIfItRunning", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncLoader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::AppFlow::Initialization::AsyncLoader* BGLib::AppFlow::Initialization::AsyncLoader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::AsyncLoader*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncLoader::AsyncLoader() {}
