#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRControllerTest.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRControllerTest_def.hpp"
#include "GlobalNamespace/zzzz__OVRControllerTest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ef32c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator::*)()>(
    &::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ef4180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ef4194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ef41b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(), 15 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline bool GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator::BoolMonitor_OVRControllerTest_BoolGenerator() {}
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest_BoolMonitor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRControllerTest_BoolMonitor::*)(::StringW, ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, float_t)>(
    &::GlobalNamespace::OVRControllerTest_BoolMonitor::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ef3328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest_BoolMonitor*>(),
                            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest_BoolMonitor.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRControllerTest_BoolMonitor::*)()>(&::GlobalNamespace::OVRControllerTest_BoolMonitor::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ef3e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest_BoolMonitor*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest_BoolMonitor.AppendToStringBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRControllerTest_BoolMonitor::*)(::by_ref<::System::Text::StringBuilder*>)>(
    &::GlobalNamespace::OVRControllerTest_BoolMonitor::AppendToStringBuilder)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ef3f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest_BoolMonitor*>(),
                                                                                           { "AppendToStringBuilder", {}, { ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_get_m_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_name;
}
constexpr ::StringW const& GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_get_m_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_name;
}
constexpr void GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_set_m_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_name = value;
}
constexpr ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*& GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_get_m_generator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_generator;
}
constexpr ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* const& GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_get_m_generator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_generator;
}
constexpr void GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_set_m_generator(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_generator = value;
}
constexpr bool& GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_get_m_prevValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_prevValue;
}
constexpr bool const& GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_get_m_prevValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_prevValue;
}
constexpr void GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_set_m_prevValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_prevValue = value;
}
constexpr bool& GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_get_m_currentValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentValue;
}
constexpr bool const& GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_get_m_currentValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentValue;
}
constexpr void GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_set_m_currentValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_currentValue = value;
}
constexpr bool& GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_get_m_currentValueRecentlyChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentValueRecentlyChanged;
}
constexpr bool const& GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_get_m_currentValueRecentlyChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentValueRecentlyChanged;
}
constexpr void GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_set_m_currentValueRecentlyChanged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_currentValueRecentlyChanged = value;
}
constexpr float_t& GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_get_m_displayTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_displayTimeout;
}
constexpr float_t const& GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_get_m_displayTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_displayTimeout;
}
constexpr void GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_set_m_displayTimeout(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_displayTimeout = value;
}
constexpr float_t& GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_get_m_displayTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_displayTimer;
}
constexpr float_t const& GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_get_m_displayTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_displayTimer;
}
constexpr void GlobalNamespace::OVRControllerTest_BoolMonitor::__cordl_internal_set_m_displayTimer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_displayTimer = value;
}
inline void GlobalNamespace::OVRControllerTest_BoolMonitor::_ctor(::StringW name, ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* generator, float_t displayTimeout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest_BoolMonitor*>(),
                          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, generator, displayTimeout);
}
inline void GlobalNamespace::OVRControllerTest_BoolMonitor::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest_BoolMonitor*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRControllerTest_BoolMonitor::AppendToStringBuilder(::by_ref<::System::Text::StringBuilder*> sb) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest_BoolMonitor*>(),
                                                                                         { "AppendToStringBuilder", {}, { ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
inline ::GlobalNamespace::OVRControllerTest_BoolMonitor*
GlobalNamespace::OVRControllerTest_BoolMonitor::New_ctor(::StringW name, ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* generator, float_t displayTimeout) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRControllerTest_BoolMonitor*>(name, generator, displayTimeout));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRControllerTest_BoolMonitor::OVRControllerTest_BoolMonitor() {}
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ef4228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef422c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef42e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_3)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_4)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef439c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_5)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef43f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_5", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_6)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_6", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_7)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef44b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_7", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_8)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef450c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_8", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_9)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_9", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_10
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_10)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef45c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_10", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_11
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_11)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_11", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_12
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_12)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef467c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_12", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_13
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_13)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef46d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_13", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_14
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_14)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_14", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_15
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_15)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_15", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_16)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef47ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_16", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_17
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_17)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_17", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_18
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_18)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef48a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_18", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_19
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_19)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_19", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_20
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_20)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef495c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_20", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_21
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_21)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef49b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_21", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_22
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_22)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_22", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_23
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_23)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_23", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_24
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_24)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_24", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_25
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_25)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_25", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_26
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_26)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_26", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_27
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_27)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_27", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_28
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_28)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_28", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_29
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_29)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_29", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c._Start_b__4_30
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::_Start_b__4_30)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ef4cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_30", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest___c.__cctor_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRControllerTest___c::*)()>(&::GlobalNamespace::OVRControllerTest___c::__cctor_b__9_0)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ef4d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<.cctor>b__9_0", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9(::GlobalNamespace::OVRControllerTest___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRControllerTest___c*, "<>9", ::GlobalNamespace::OVRControllerTest___c*>(std::forward<::GlobalNamespace::OVRControllerTest___c*>(value));
}
inline ::GlobalNamespace::OVRControllerTest___c* GlobalNamespace::OVRControllerTest___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRControllerTest___c*, "<>9", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_0(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_0", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_0", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_1(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_1", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_1() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_1", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_2(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_2", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_2() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_2", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_3(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_3", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_3() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_3", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_4(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_4", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_4() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_4", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_5(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_5", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_5() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_5", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_6(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_6", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_6() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_6", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_7(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_7", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_7() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_7", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_8(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_8", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_8() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_8", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_9(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_9", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_9", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_10(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_10", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_10() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_10", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_11(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_11", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_11() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_11", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_12(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_12", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_12() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_12", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_13(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_13", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_13() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_13", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_14(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_14", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_14() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_14", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_15(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_15", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_15() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_15", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_16(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_16", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_16() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_16", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_17(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_17", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_17() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_17", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_18(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_18", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_18() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_18", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_19(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_19", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_19() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_19", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_20(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_20", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_20() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_20", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_21(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_21", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_21() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_21", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_22(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_22", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_22() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_22", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_23(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_23", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_23() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_23", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_24(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_24", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_24() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_24", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_25(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_25", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_25() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_25", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_26(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_26", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_26() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_26", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_27(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_27", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_27() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_27", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_28(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_28", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_28() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_28", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_29(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_29", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_29() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_29", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::setStaticF___9__4_30(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_30", ::GlobalNamespace::OVRControllerTest___c*>(
      std::forward<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*>(value));
}
inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* GlobalNamespace::OVRControllerTest___c::getStaticF___9__4_30() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "<>9__4_30", ::GlobalNamespace::OVRControllerTest___c*>();
}
inline void GlobalNamespace::OVRControllerTest___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_4() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_5() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_5", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_6() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_6", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_7() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_7", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_8() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_8", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_9() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_9", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_10() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_10", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_11() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_11", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_12() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_12", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_13() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_13", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_14() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_14", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_15() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_15", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_16() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_16", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_17() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_17", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_18() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_18", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_19() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_19", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_20() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_20", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_21() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_21", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_22() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_22", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_23() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_23", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_24() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_24", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_25() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_25", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_26() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_26", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_27() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_27", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_28() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_28", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_29() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_29", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::_Start_b__4_30() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<Start>b__4_30", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRControllerTest___c::__cctor_b__9_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest___c*>(), { "<.cctor>b__9_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRControllerTest___c* GlobalNamespace::OVRControllerTest___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRControllerTest___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRControllerTest___c::OVRControllerTest___c() {}
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRControllerTest::*)()>(&::GlobalNamespace::OVRControllerTest::Start)> {
  constexpr static std::size_t size = 0x24e0;
  constexpr static std::size_t addrs = 0x5ef0de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRControllerTest::*)()>(&::GlobalNamespace::OVRControllerTest::Update)> {
  constexpr static std::size_t size = 0xad0;
  constexpr static std::size_t addrs = 0x5ef338c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerTest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRControllerTest::*)()>(&::GlobalNamespace::OVRControllerTest::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ef4008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::OVRControllerTest::__cordl_internal_get_uiText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uiText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::OVRControllerTest::__cordl_internal_get_uiText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uiText;
}
constexpr void GlobalNamespace::OVRControllerTest::__cordl_internal_set_uiText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uiText = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRControllerTest_BoolMonitor*>*& GlobalNamespace::OVRControllerTest::__cordl_internal_get_monitors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monitors;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRControllerTest_BoolMonitor*>* const& GlobalNamespace::OVRControllerTest::__cordl_internal_get_monitors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monitors;
}
constexpr void GlobalNamespace::OVRControllerTest::__cordl_internal_set_monitors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRControllerTest_BoolMonitor*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___monitors = value;
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::OVRControllerTest::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::System::Text::StringBuilder* const& GlobalNamespace::OVRControllerTest::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void GlobalNamespace::OVRControllerTest::__cordl_internal_set_data(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void GlobalNamespace::OVRControllerTest::setStaticF_prevConnected(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "prevConnected", ::GlobalNamespace::OVRControllerTest*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRControllerTest::getStaticF_prevConnected() {
  return ::cordl_internals::getStaticField<::StringW, "prevConnected", ::GlobalNamespace::OVRControllerTest*>();
}
inline void GlobalNamespace::OVRControllerTest::setStaticF_controllers(::GlobalNamespace::OVRControllerTest_BoolMonitor* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRControllerTest_BoolMonitor*, "controllers", ::GlobalNamespace::OVRControllerTest*>(
      std::forward<::GlobalNamespace::OVRControllerTest_BoolMonitor*>(value));
}
inline ::GlobalNamespace::OVRControllerTest_BoolMonitor* GlobalNamespace::OVRControllerTest::getStaticF_controllers() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRControllerTest_BoolMonitor*, "controllers", ::GlobalNamespace::OVRControllerTest*>();
}
inline void GlobalNamespace::OVRControllerTest::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRControllerTest::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRControllerTest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRControllerTest*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRControllerTest* GlobalNamespace::OVRControllerTest::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRControllerTest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRControllerTest::OVRControllerTest() {}
