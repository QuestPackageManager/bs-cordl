#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\EnhancedTouch\TouchHistory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__TouchHistory_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Finger_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__TouchHistory_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::*)(
    ::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*, int32_t, int32_t)>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x65a6a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(),
                                                                 ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>* (
    ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::GetEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x65a9960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65a99e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a99e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::EnhancedTouch::Touch (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::*)(int32_t)>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::get_Item)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x65a99ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory.CheckValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::CheckValid)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x65a9b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>(), { "CheckValid", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::EnhancedTouch::TouchHistory::_ctor(::UnityEngine::InputSystem::EnhancedTouch::Finger* finger,
                                                                         ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* history,
                                                                         int32_t startIndex, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, finger, history, startIndex, count);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>* UnityEngine::InputSystem::EnhancedTouch::TouchHistory::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::EnhancedTouch::TouchHistory::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::TouchHistory::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::Touch UnityEngine::InputSystem::EnhancedTouch::TouchHistory::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::EnhancedTouch::Touch>(*this, ___internal_method, index);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchHistory::CheckValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>(), { "CheckValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr UnityEngine::InputSystem::EnhancedTouch::TouchHistory::operator ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*
UnityEngine::InputSystem::EnhancedTouch::TouchHistory::i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__InputSystem__EnhancedTouch__Touch_() {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr UnityEngine::InputSystem::EnhancedTouch::TouchHistory::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*
UnityEngine::InputSystem::EnhancedTouch::TouchHistory::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__EnhancedTouch__Touch_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::EnhancedTouch::TouchHistory::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::EnhancedTouch::TouchHistory::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr UnityEngine::InputSystem::EnhancedTouch::TouchHistory::operator ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*
UnityEngine::InputSystem::EnhancedTouch::TouchHistory::i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__InputSystem__EnhancedTouch__Touch_() {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_History", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_Finger", ty: "::UnityEngine::InputSystem::EnhancedTouch::Finger*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Count", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::TouchHistory(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* m_History,
                                                                                ::UnityEngine::InputSystem::EnhancedTouch::Finger* m_Finger, int32_t m_Count, int32_t m_StartIndex,
                                                                                uint32_t m_Version) noexcept {
  this->m_History = m_History;
  this->m_Finger = m_Finger;
  this->m_Count = m_Count;
  this->m_StartIndex = m_StartIndex;
  this->m_Version = m_Version;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::TouchHistory() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::*)(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory)>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65a99cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x65a9bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65a9be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::EnhancedTouch::Touch (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x65a9bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65a9c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65a9c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory& UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::__cordl_internal_get_m_Owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Owner;
}
constexpr ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory const& UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::__cordl_internal_get_m_Owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Owner;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::__cordl_internal_set_m_Owner(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Owner = value;
}
constexpr int32_t& UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::__cordl_internal_get_m_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr int32_t const& UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::__cordl_internal_get_m_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::__cordl_internal_set_m_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Index = value;
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::_ctor(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory owner) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::Touch UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::EnhancedTouch::Touch>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator*
UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::New_ctor(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory owner) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator*>(owner));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*
UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__EnhancedTouch__Touch_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory_Enumerator::TouchHistory_Enumerator() {}
