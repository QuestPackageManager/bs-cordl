#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateHistory.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::*)(::UnityEngine::InputSystem::LowLevel::InputStateHistory*)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65b7970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x65b7fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65b8018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65b8024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x65b8040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65b80a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::_ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory* history) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, history);
}
inline bool UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>"
constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*
UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__LowLevel__InputStateHistory_Record_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_History", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::InputStateHistory_Enumerator(::UnityEngine::InputSystem::LowLevel::InputStateHistory* m_History,
                                                                                                           int32_t m_Index) noexcept {
  this->m_History = m_History;
  this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator::InputStateHistory_Enumerator() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer(
    uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer(
    uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer() {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader.get_statePtrWithControlIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::get_statePtrWithControlIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b7904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader>(), { "get_statePtrWithControlIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader.get_statePtrWithoutControlIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::get_statePtrWithoutControlIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b78fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader>(), { "get_statePtrWithoutControlIndex", {}, {} })));
    return ___internal_method;
  }
};
constexpr double_t& UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::__cordl_internal_get_time() {
  return this->___time;
}
constexpr double_t const& UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::__cordl_internal_get_time() const {
  return this->___time;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::__cordl_internal_set_time(double_t value) {
  this->___time = value;
}
constexpr uint32_t& UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::__cordl_internal_get_version() {
  return this->___version;
}
constexpr uint32_t const& UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::__cordl_internal_get_version() const {
  return this->___version;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::__cordl_internal_set_version(uint32_t value) {
  this->___version = value;
}
constexpr int32_t& UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::__cordl_internal_get_controlIndex() {
  return this->___controlIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::__cordl_internal_get_controlIndex() const {
  return this->___controlIndex;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::__cordl_internal_set_controlIndex(int32_t value) {
  this->___controlIndex = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer&
UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::__cordl_internal_get_m_StateWithoutControlIndex() {
  return this->___m_StateWithoutControlIndex;
}
constexpr ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer const&
UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::__cordl_internal_get_m_StateWithoutControlIndex() const {
  return this->___m_StateWithoutControlIndex;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::__cordl_internal_set_m_StateWithoutControlIndex(
    ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer value) {
  this->___m_StateWithoutControlIndex = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer&
UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::__cordl_internal_get_m_StateWithControlIndex() {
  return this->___m_StateWithControlIndex;
}
constexpr ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer const&
UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::__cordl_internal_get_m_StateWithControlIndex() const {
  return this->___m_StateWithControlIndex;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::__cordl_internal_set_m_StateWithControlIndex(
    ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer value) {
  this->___m_StateWithControlIndex = value;
}
inline uint8_t* UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::get_statePtrWithControlIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader>(), { "get_statePtrWithControlIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
inline uint8_t* UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::get_statePtrWithoutControlIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader>(), { "get_statePtrWithoutControlIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "version", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "controlIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StateWithoutControlIndex", ty:
// "::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_StateWithControlIndex", ty: "::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::InputStateHistory_RecordHeader(
    double_t time, uint32_t version, int32_t controlIndex, ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer m_StateWithoutControlIndex,
    ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer m_StateWithControlIndex) noexcept {
  this->time = time;
  this->version = version;
  this->controlIndex = controlIndex;
  this->m_StateWithoutControlIndex = m_StateWithoutControlIndex;
  this->m_StateWithControlIndex = m_StateWithControlIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader::InputStateHistory_RecordHeader() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.get_header
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader* (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_header)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65b80ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_header", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.get_recordIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_recordIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65b80cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_recordIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b80d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.get_valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_valid)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x65b80e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_valid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.get_owner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateHistory* (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_owner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b8128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_owner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.get_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_index)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x65b8130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_time)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x65b8214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.get_control
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_control)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x65b823c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_control", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.get_next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_next)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x65b8330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_next", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.get_previous
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_previous)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x65b83c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_previous", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)(::UnityEngine::InputSystem::LowLevel::InputStateHistory*, int32_t,
                                                                                                                                ::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader*)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x65b666c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.ReadValueAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x65b8448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "ReadValueAsObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.GetUnsafeMemoryPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::GetUnsafeMemoryPtr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65b8480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "GetUnsafeMemoryPtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.GetUnsafeMemoryPtrUnchecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::GetUnsafeMemoryPtrUnchecked)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x65b8498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "GetUnsafeMemoryPtrUnchecked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.GetUnsafeExtraMemoryPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::GetUnsafeExtraMemoryPtr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65b854c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "GetUnsafeExtraMemoryPtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.GetUnsafeExtraMemoryPtrUnchecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::GetUnsafeExtraMemoryPtrUnchecked)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x65b8564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "GetUnsafeExtraMemoryPtrUnchecked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::CopyFrom)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x65b67b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(),
                                                                                           { "CopyFrom", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.CheckValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::CheckValid)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x65b816c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "CheckValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x65b8634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65b8668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x65b8704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::ToString)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x65b874c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader* UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_header() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_header", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader*>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_recordIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_recordIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_version() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_owner() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_owner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_control() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_control", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_next() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::get_previous() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "get_previous", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::_ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory* owner, int32_t index,
                                                                                ::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader* header) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, owner, index, header);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::ReadValue() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "ReadValue", { ::i2c::class_of<TValue>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::ReadValueAsObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "ReadValueAsObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void* UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::GetUnsafeMemoryPtr() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "GetUnsafeMemoryPtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline void* UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::GetUnsafeMemoryPtrUnchecked() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "GetUnsafeMemoryPtrUnchecked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline void* UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::GetUnsafeExtraMemoryPtr() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "GetUnsafeExtraMemoryPtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline void* UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::GetUnsafeExtraMemoryPtrUnchecked() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "GetUnsafeExtraMemoryPtrUnchecked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::CopyFrom(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(),
                                                                                         { "CopyFrom", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, record);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::CheckValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), { "CheckValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::Equals(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>"
constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::operator ::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*
UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::i___System__IEquatable_1___UnityEngine__InputSystem__LowLevel__InputStateHistory_Record_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Owner", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IndexPlusOne", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::InputStateHistory_Record(::UnityEngine::InputSystem::LowLevel::InputStateHistory* m_Owner, int32_t m_IndexPlusOne,
                                                                                                   uint32_t m_Version) noexcept {
  this->m_Owner = m_Owner;
  this->m_IndexPlusOne = m_IndexPlusOne;
  this->m_Version = m_Version;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record::InputStateHistory_Record() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b60e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b60f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_historyDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_historyDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b60f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_historyDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.set_historyDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::set_historyDepth)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x65b6100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "set_historyDepth", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_extraMemoryPerRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_extraMemoryPerRecord)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b61d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_extraMemoryPerRecord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.set_extraMemoryPerRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::set_extraMemoryPerRecord)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x65b61e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "set_extraMemoryPerRecord", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_updateMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateType (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_updateMask)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x65b62b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_updateMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.set_updateMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::set_updateMask)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x65b6364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                                                                           { "set_updateMask", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_controls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> (
    ::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_controls)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x65b641c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_controls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_Item)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x65b6468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::set_Item)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x65b6690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                                             { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_onRecordAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* (
    ::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_onRecordAdded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b6be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_onRecordAdded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.set_onRecordAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(
    ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::set_onRecordAdded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b6be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                                             { "set_onRecordAdded", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_onShouldRecordStateChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* (
    ::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_onShouldRecordStateChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b6bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_onShouldRecordStateChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.set_onShouldRecordStateChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(
    ::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>*)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::set_onShouldRecordStateChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b6bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                         { "set_onShouldRecordStateChange",
                                           {},
                                           { ::i2c::type_of<::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x65b6c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::StringW)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x65b6c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x65b6ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x65b6ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::Finalize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x65b6f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::Clear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65b7000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.AddRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(
    ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::AddRecord)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x65b7014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                                                                           { "AddRecord", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.StartRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::StartRecording)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x65b7190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "StartRecording", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.StopRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::StopRecording)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x65b72f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "StopRecording", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.RecordStateChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordStateChange)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x65b744c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                            { "RecordStateChange", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.RecordStateChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(
    ::UnityEngine::InputSystem::InputControl*, void*, double_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordStateChange)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x65b7630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                                { "RecordStateChange", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* (
    ::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::GetEnumerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x65b790c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65b7980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x65b6f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::Destroy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65b7984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "Destroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::Allocate)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x65b79f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "Allocate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.RecordIndexToUserIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordIndexToUserIndex)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65b7cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "RecordIndexToUserIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.UserIndexToRecordIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::UserIndexToRecordIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65b656c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "UserIndexToRecordIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.GetRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader* (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::GetRecord)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x65b6584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "GetRecord", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.GetRecordUnchecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader* (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::GetRecordUnchecked)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x65b7cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "GetRecordUnchecked", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.AllocateRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader* (
    ::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::by_ref<int32_t>)>(&::UnityEngine::InputSystem::LowLevel::InputStateHistory::AllocateRecord)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x65b707c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "AllocateRecord", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.ReadValueAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader*)>(
        &::UnityEngine::InputSystem::LowLevel::InputStateHistory::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x65b7d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                                             { "ReadValueAsObject", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t)>(
        &::UnityEngine::InputSystem::LowLevel::InputStateHistory::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x65b7f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                                                                           { "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)(::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65b7fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                         { "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateHistory.get_bytesPerRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputStateHistory::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateHistory::get_bytesPerRecord)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x65b7c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_bytesPerRecord", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*&
UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get__onRecordAdded_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRecordAdded_k__BackingField;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* const&
UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get__onRecordAdded_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRecordAdded_k__BackingField;
}
constexpr void
UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set__onRecordAdded_k__BackingField(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onRecordAdded_k__BackingField = value;
}
constexpr ::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>*&
UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get__onShouldRecordStateChange_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onShouldRecordStateChange_k__BackingField;
}
constexpr ::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* const&
UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get__onShouldRecordStateChange_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onShouldRecordStateChange_k__BackingField;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set__onShouldRecordStateChange_k__BackingField(
    ::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onShouldRecordStateChange_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*>& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_Controls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controls;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*> const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_Controls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controls;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_Controls(::ArrayW<::UnityEngine::InputSystem::InputControl*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Controls = value;
}
constexpr int32_t& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_ControlCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlCount;
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_ControlCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlCount;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_ControlCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ControlCount = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_RecordBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RecordBuffer;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_RecordBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RecordBuffer;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_RecordBuffer(::Unity::Collections::NativeArray_1<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RecordBuffer = value;
}
constexpr int32_t& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_StateSizeInBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateSizeInBytes;
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_StateSizeInBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateSizeInBytes;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_StateSizeInBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StateSizeInBytes = value;
}
constexpr int32_t& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_RecordCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RecordCount;
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_RecordCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RecordCount;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_RecordCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RecordCount = value;
}
constexpr int32_t& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_HistoryDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HistoryDepth;
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_HistoryDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HistoryDepth;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_HistoryDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HistoryDepth = value;
}
constexpr int32_t& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_ExtraMemoryPerRecord() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtraMemoryPerRecord;
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_ExtraMemoryPerRecord() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtraMemoryPerRecord;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_ExtraMemoryPerRecord(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExtraMemoryPerRecord = value;
}
constexpr int32_t& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_HeadIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeadIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_HeadIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeadIndex;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_HeadIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HeadIndex = value;
}
constexpr uint32_t& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_CurrentVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentVersion;
}
constexpr uint32_t const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_CurrentVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentVersion;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_CurrentVersion(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentVersion = value;
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_UpdateMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateMask;
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType> const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_UpdateMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateMask;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_UpdateMask(::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateMask = value;
}
constexpr bool& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_AddNewControls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddNewControls;
}
constexpr bool const& UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_get_m_AddNewControls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddNewControls;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputStateHistory::__cordl_internal_set_m_AddNewControls(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AddNewControls = value;
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputStateHistory::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputStateHistory::get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputStateHistory::get_historyDepth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_historyDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::set_historyDepth(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "set_historyDepth", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputStateHistory::get_extraMemoryPerRecord() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_extraMemoryPerRecord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::set_extraMemoryPerRecord(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "set_extraMemoryPerRecord", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::LowLevel::InputStateHistory::get_updateMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_updateMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                                                                         { "set_updateMask", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> UnityEngine::InputSystem::LowLevel::InputStateHistory::get_controls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_controls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record UnityEngine::InputSystem::LowLevel::InputStateHistory::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(this, ___internal_method, index);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::set_Item(int32_t index, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                                           { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* UnityEngine::InputSystem::LowLevel::InputStateHistory::get_onRecordAdded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_onRecordAdded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::set_onRecordAdded(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                                           { "set_onRecordAdded", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>*
UnityEngine::InputSystem::LowLevel::InputStateHistory::get_onShouldRecordStateChange() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_onShouldRecordStateChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>*>(this,
                                                                                                                                                                                ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::set_onShouldRecordStateChange(
    ::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                       { "set_onShouldRecordStateChange",
                                         {},
                                         { ::i2c::type_of<::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::_ctor(int32_t maxStateSizeInBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxStateSizeInBytes);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::_ctor(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::_ctor(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* controls) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controls);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record
UnityEngine::InputSystem::LowLevel::InputStateHistory::AddRecord(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                                                                         { "AddRecord", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(this, ___internal_method, record);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::StartRecording() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "StartRecording", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::StopRecording() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "StopRecording", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record
UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordStateChange(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                          { "RecordStateChange", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(this, ___internal_method, control, eventPtr);
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordStateChange(::UnityEngine::InputSystem::InputControl* control,
                                                                                                                                               void* statePtr, double_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                              { "RecordStateChange", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>(this, ___internal_method, control, statePtr, time);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* UnityEngine::InputSystem::LowLevel::InputStateHistory::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::LowLevel::InputStateHistory::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::Destroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "Destroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::Allocate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "Allocate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordIndexToUserIndex(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "RecordIndexToUserIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputStateHistory::UserIndexToRecordIndex(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "UserIndexToRecordIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader* UnityEngine::InputSystem::LowLevel::InputStateHistory::GetRecord(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "GetRecord", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader*>(this, ___internal_method, index);
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader* UnityEngine::InputSystem::LowLevel::InputStateHistory::GetRecordUnchecked(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "GetRecordUnchecked", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader*>(this, ___internal_method, index);
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader* UnityEngine::InputSystem::LowLevel::InputStateHistory::AllocateRecord(::by_ref<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "AllocateRecord", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader*>(this, ___internal_method, index);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::LowLevel::InputStateHistory::ReadValue(::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader* data) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                              { "ReadValue", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, data);
}
inline ::System::Object* UnityEngine::InputSystem::LowLevel::InputStateHistory::ReadValueAsObject(::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                                           { "ReadValueAsObject", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, data);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(
    ::UnityEngine::InputSystem::InputControl* control, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                                                                         { "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, time, eventPtr, monitorIndex);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control,
                                                                                                                                                double_t time, int64_t monitorIndex,
                                                                                                                                                int32_t timerIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(),
                                              { "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, time, monitorIndex, timerIndex);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputStateHistory::get_bytesPerRecord() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(), { "get_bytesPerRecord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* UnityEngine::InputSystem::LowLevel::InputStateHistory::New_ctor(int32_t maxStateSizeInBytes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(maxStateSizeInBytes));
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* UnityEngine::InputSystem::LowLevel::InputStateHistory::New_ctor(::StringW path) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(path));
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* UnityEngine::InputSystem::LowLevel::InputStateHistory::New_ctor(::UnityEngine::InputSystem::InputControl* control) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(control));
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory*
UnityEngine::InputSystem::LowLevel::InputStateHistory::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* controls) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LowLevel::InputStateHistory*>(controls));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::LowLevel::InputStateHistory::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>"
constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*
UnityEngine::InputSystem::LowLevel::InputStateHistory::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__LowLevel__InputStateHistory_Record_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::LowLevel::InputStateHistory::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory::operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*
UnityEngine::InputSystem::LowLevel::InputStateHistory::i___UnityEngine__InputSystem__LowLevel__IInputStateChangeMonitor() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory::InputStateHistory() {}
