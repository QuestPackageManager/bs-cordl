#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableSystems.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableSystems_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Playables/zzzz__DataPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableSystems_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6b31f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>*)>(&::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b320dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate::Invoke(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>* outputs) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputs);
}
inline ::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate* UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate::PlayableSystems_PlayableSystemDelegate() {}
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage::PlayableSystems_PlayableSystemStage(uint16_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage::PlayableSystems_PlayableSystemStage() {}
constexpr ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage UnityEngine::Playables::PlayableSystems_PlayableSystemStage::FixedUpdate{ static_cast<uint16_t>(0x0u) };
constexpr ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage UnityEngine::Playables::PlayableSystems_PlayableSystemStage::FixedUpdatePostPhysics{ static_cast<uint16_t>(0x1u) };
constexpr ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage UnityEngine::Playables::PlayableSystems_PlayableSystemStage::Update{ static_cast<uint16_t>(0x2u) };
constexpr ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage UnityEngine::Playables::PlayableSystems_PlayableSystemStage::AnimationBegin{ static_cast<uint16_t>(0x3u) };
constexpr ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage UnityEngine::Playables::PlayableSystems_PlayableSystemStage::AnimationEnd{ static_cast<uint16_t>(0x4u) };
constexpr ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage UnityEngine::Playables::PlayableSystems_PlayableSystemStage::LateUpdate{ static_cast<uint16_t>(0x5u) };
constexpr ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage UnityEngine::Playables::PlayableSystems_PlayableSystemStage::Render{ static_cast<uint16_t>(0x6u) };
//  Writing Method size for method: ::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::*)(
    ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*)>(&::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b32270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Playables::DataPlayableOutput (::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::*)()>(
        &::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::get_Current)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6b32284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::*)()>(
    &::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b32364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator*>(),
                                                             { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::*)()>(
    &::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b323cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::*)()>(
    &::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6b323d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::*)()>(
    &::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b32400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*&
UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::__cordl_internal_get_m_List() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
constexpr ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList* const&
UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::__cordl_internal_get_m_List() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
constexpr void
UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::__cordl_internal_set_m_List(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_List = value;
}
constexpr int32_t& UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::__cordl_internal_get_m_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr int32_t const& UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::__cordl_internal_get_m_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr void UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::__cordl_internal_set_m_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Index = value;
}
inline void UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::_ctor(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline ::UnityEngine::Playables::DataPlayableOutput UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::DataPlayableOutput>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator*>(),
                                                           { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator*
UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::New_ctor(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList* list) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator*>(list));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>"
constexpr UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::operator ::System::Collections::Generic::IEnumerator_1<
    ::UnityEngine::Playables::DataPlayableOutput>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>*
UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::i___System__Collections__Generic__IEnumerator_1___UnityEngine__Playables__DataPlayableOutput_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator() {}
//  Writing Method size for method: ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::*)(::UnityEngine::Playables::PlayableOutputHandle*, int32_t)>(
    &::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b31e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::DataPlayableOutput (::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::*)(int32_t)>(
    &::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::get_Item)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6b320f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::*)()>(
    &::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b32210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>* (
    ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::*)()>(&::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b32218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::*)()>(
    &::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b32280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Playables::PlayableOutputHandle*& UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::__cordl_internal_get_m_Outputs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Outputs;
}
constexpr ::UnityEngine::Playables::PlayableOutputHandle* const& UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::__cordl_internal_get_m_Outputs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Outputs;
}
constexpr void UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::__cordl_internal_set_m_Outputs(::UnityEngine::Playables::PlayableOutputHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Outputs = value;
}
constexpr int32_t& UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::__cordl_internal_get_m_Count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Count;
}
constexpr int32_t const& UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::__cordl_internal_get_m_Count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Count;
}
constexpr void UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::__cordl_internal_set_m_Count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Count = value;
}
inline void UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::_ctor(::UnityEngine::Playables::PlayableOutputHandle* outputs, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputs, count);
}
inline ::UnityEngine::Playables::DataPlayableOutput UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::DataPlayableOutput>(this, ___internal_method, index);
}
inline int32_t UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>* UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*
UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::New_ctor(::UnityEngine::Playables::PlayableOutputHandle* outputs, int32_t count) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*>(outputs, count));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>"
constexpr UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::operator ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>*
UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__Playables__DataPlayableOutput_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::DataPlayableOutput>"
constexpr UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::DataPlayableOutput>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::DataPlayableOutput>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::DataPlayableOutput>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::DataPlayableOutput>*
UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::i___System__Collections__Generic__IEnumerable_1___UnityEngine__Playables__DataPlayableOutput_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::DataPlayableOutput>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Playables::DataPlayableOutput>"
constexpr UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::operator ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Playables::DataPlayableOutput>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Playables::DataPlayableOutput>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Playables::DataPlayableOutput>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Playables::DataPlayableOutput>*
UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__Playables__DataPlayableOutput_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Playables::DataPlayableOutput>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList::PlayableSystems_DataPlayableOutputList() {}
//  Writing Method size for method: ::UnityEngine::Playables::PlayableSystems.CombineTypeAndIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage)>(
    &::UnityEngine::Playables::PlayableSystems::CombineTypeAndIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b31c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableSystems*>(),
                                                { "CombineTypeAndIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Playables::PlayableSystems_PlayableSystemStage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableSystems.Internal_CallSystemDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage, ::System::IntPtr, int32_t)>(
    &::UnityEngine::Playables::PlayableSystems::Internal_CallSystemDelegate)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6b31c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableSystems*>(),
                                                             { "Internal_CallSystemDelegate",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Playables::PlayableSystems_PlayableSystemStage>(),
                                                                 ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Playables::PlayableSystems::setStaticF_s_SystemTypes(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Type*>*, "s_SystemTypes", ::UnityEngine::Playables::PlayableSystems*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Type*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Type*>* UnityEngine::Playables::PlayableSystems::getStaticF_s_SystemTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Type*>*, "s_SystemTypes", ::UnityEngine::Playables::PlayableSystems*>();
}
inline void
UnityEngine::Playables::PlayableSystems::setStaticF_s_Delegates(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*>*, "s_Delegates",
                                    ::UnityEngine::Playables::PlayableSystems*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*>* UnityEngine::Playables::PlayableSystems::getStaticF_s_Delegates() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*>*, "s_Delegates",
                                           ::UnityEngine::Playables::PlayableSystems*>();
}
inline void UnityEngine::Playables::PlayableSystems::setStaticF_s_RWLock(::System::Threading::ReaderWriterLockSlim* value) {
  ::cordl_internals::setStaticField<::System::Threading::ReaderWriterLockSlim*, "s_RWLock", ::UnityEngine::Playables::PlayableSystems*>(
      std::forward<::System::Threading::ReaderWriterLockSlim*>(value));
}
inline ::System::Threading::ReaderWriterLockSlim* UnityEngine::Playables::PlayableSystems::getStaticF_s_RWLock() {
  return ::cordl_internals::getStaticField<::System::Threading::ReaderWriterLockSlim*, "s_RWLock", ::UnityEngine::Playables::PlayableSystems*>();
}
inline int32_t UnityEngine::Playables::PlayableSystems::CombineTypeAndIndex(int32_t typeIndex, ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage stage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableSystems*>(),
                                              { "CombineTypeAndIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Playables::PlayableSystems_PlayableSystemStage>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, typeIndex, stage);
}
inline bool UnityEngine::Playables::PlayableSystems::Internal_CallSystemDelegate(int32_t systemIndex, ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage stage, ::System::IntPtr outputsPtr,
                                                                                 int32_t numOutputs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableSystems*>(),
                                                                                         { "Internal_CallSystemDelegate",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Playables::PlayableSystems_PlayableSystemStage>(),
                                                                                             ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, systemIndex, stage, outputsPtr, numOutputs);
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableSystems::PlayableSystems() {}
