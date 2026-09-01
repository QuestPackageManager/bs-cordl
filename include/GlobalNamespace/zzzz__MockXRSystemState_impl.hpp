#pragma once
// IWYU pragma private; include "GlobalNamespace\MockXRSystemState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockXRSystemState_def.hpp"
#include "GlobalNamespace/zzzz__IXRSystemState_def.hpp"
#include "GlobalNamespace/zzzz__XRSystemEventType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockXRSystemState.get_hasInputFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockXRSystemState::*)()>(&::GlobalNamespace::MockXRSystemState::get_hasInputFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59fa670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockXRSystemState*>(), { "get_hasInputFocus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockXRSystemState.get_hasVrFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockXRSystemState::*)()>(&::GlobalNamespace::MockXRSystemState::get_hasVrFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59fa678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockXRSystemState*>(), { "get_hasVrFocus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockXRSystemState.get_hasHmdMounted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockXRSystemState::*)()>(&::GlobalNamespace::MockXRSystemState::get_hasHmdMounted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59fa680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockXRSystemState*>(), { "get_hasHmdMounted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockXRSystemState.AddListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockXRSystemState::*)(
    ::System::Action_1<::GlobalNamespace::XRSystemEventType>*, ::ArrayW<::GlobalNamespace::XRSystemEventType>)>(&::GlobalNamespace::MockXRSystemState::AddListener)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fa688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockXRSystemState*>(),
                            { "AddListener", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::XRSystemEventType>*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::XRSystemEventType>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockXRSystemState.RemoveListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockXRSystemState::*)(::System::Action_1<::GlobalNamespace::XRSystemEventType>*)>(
    &::GlobalNamespace::MockXRSystemState::RemoveListener)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fa68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockXRSystemState*>(),
                                                                                           { "RemoveListener", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::XRSystemEventType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockXRSystemState.RefreshControllersReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockXRSystemState::*)()>(&::GlobalNamespace::MockXRSystemState::RefreshControllersReference)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fa690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockXRSystemState*>(), { "RefreshControllersReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockXRSystemState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockXRSystemState::*)()>(&::GlobalNamespace::MockXRSystemState::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fa694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockXRSystemState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::MockXRSystemState::get_hasInputFocus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockXRSystemState*>(), { "get_hasInputFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MockXRSystemState::get_hasVrFocus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockXRSystemState*>(), { "get_hasVrFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MockXRSystemState::get_hasHmdMounted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockXRSystemState*>(), { "get_hasHmdMounted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockXRSystemState::AddListener(::System::Action_1<::GlobalNamespace::XRSystemEventType>* listener, ::ArrayW<::GlobalNamespace::XRSystemEventType> initialStateChecks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockXRSystemState*>(),
                          { "AddListener", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::XRSystemEventType>*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::XRSystemEventType>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener, initialStateChecks);
}
inline void GlobalNamespace::MockXRSystemState::RemoveListener(::System::Action_1<::GlobalNamespace::XRSystemEventType>* listener) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockXRSystemState*>(),
                                                                                         { "RemoveListener", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::XRSystemEventType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void GlobalNamespace::MockXRSystemState::RefreshControllersReference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockXRSystemState*>(), { "RefreshControllersReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockXRSystemState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockXRSystemState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MockXRSystemState* GlobalNamespace::MockXRSystemState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockXRSystemState*>());
}
/// @brief Convert operator to "::GlobalNamespace::IXRSystemState"
constexpr GlobalNamespace::MockXRSystemState::operator ::GlobalNamespace::IXRSystemState*() noexcept {
  return static_cast<::GlobalNamespace::IXRSystemState*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IXRSystemState"
constexpr ::GlobalNamespace::IXRSystemState* GlobalNamespace::MockXRSystemState::i___GlobalNamespace__IXRSystemState() noexcept {
  return static_cast<::GlobalNamespace::IXRSystemState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockXRSystemState::MockXRSystemState() {}
