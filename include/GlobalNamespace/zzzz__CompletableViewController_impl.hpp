#pragma once
// IWYU pragma private; include "GlobalNamespace\CompletableViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__CompletableViewController_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CompletableViewController.WaitForCompletionAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::CompletableViewController::*)()>(
    &::GlobalNamespace::CompletableViewController::WaitForCompletionAsync)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a17a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompletableViewController*>(), { "WaitForCompletionAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompletableViewController.ResetCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompletableViewController::*)()>(&::GlobalNamespace::CompletableViewController::ResetCompletion)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a17aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompletableViewController*>(), { "ResetCompletion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompletableViewController.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompletableViewController::*)()>(&::GlobalNamespace::CompletableViewController::Complete)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a17b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompletableViewController*>(), { "Complete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompletableViewController.__Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompletableViewController::*)(bool, bool)>(&::GlobalNamespace::CompletableViewController::__Activate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a17b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompletableViewController*>(), { ::i2c::class_of<::GlobalNamespace::CompletableViewController*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompletableViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompletableViewController::*)()>(&::GlobalNamespace::CompletableViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a17c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompletableViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*& GlobalNamespace::CompletableViewController::__cordl_internal_get__taskCompletionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* const& GlobalNamespace::CompletableViewController::__cordl_internal_get__taskCompletionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
constexpr void GlobalNamespace::CompletableViewController::__cordl_internal_set__taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____taskCompletionSource = value;
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::CompletableViewController::WaitForCompletionAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompletableViewController*>(), { "WaitForCompletionAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::CompletableViewController::ResetCompletion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompletableViewController*>(), { "ResetCompletion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CompletableViewController::Complete() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompletableViewController*>(), { "Complete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CompletableViewController::__Activate(bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CompletableViewController*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::CompletableViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompletableViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CompletableViewController* GlobalNamespace::CompletableViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompletableViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompletableViewController::CompletableViewController() {}
