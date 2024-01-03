#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__TouchHistory_impl.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::*)(
    ::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*, int32_t, int32_t)>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ae0e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::EnhancedTouch::Finger*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>* (
    ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2ae381c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>::get(),
                                                                               "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae38d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>::get(),
                                                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae38d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>::get(),
                                                                               "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::EnhancedTouch::Touch (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::*)(
    int32_t)>(&::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::get_Item)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2ae38dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>::get(), "get_Item",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory.CheckValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchHistory::CheckValid)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2ae3a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>::get(),
                                                                               "CheckValid", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr UnityEngine::InputSystem::EnhancedTouch::TouchHistory::operator ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*
UnityEngine::InputSystem::EnhancedTouch::TouchHistory::i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__InputSystem__EnhancedTouch__Touch_() {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr UnityEngine::InputSystem::EnhancedTouch::TouchHistory::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*
UnityEngine::InputSystem::EnhancedTouch::TouchHistory::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__EnhancedTouch__Touch_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::EnhancedTouch::TouchHistory::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::EnhancedTouch::TouchHistory::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr UnityEngine::InputSystem::EnhancedTouch::TouchHistory::operator ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*
UnityEngine::InputSystem::EnhancedTouch::TouchHistory::i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__InputSystem__EnhancedTouch__Touch_() {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @param startIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
/// @param count: int32_t (default: static_cast<int32_t>(0xffffffff))
inline void UnityEngine::InputSystem::EnhancedTouch::TouchHistory::_ctor(::UnityEngine::InputSystem::EnhancedTouch::Finger* finger,
                                                                         ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* history,
                                                                         int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::EnhancedTouch::Finger*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, finger, history, startIndex, count);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>* UnityEngine::InputSystem::EnhancedTouch::TouchHistory::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>::get(),
                                                                             "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::EnhancedTouch::TouchHistory::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::TouchHistory::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>::get(),
                                                                             "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::Touch UnityEngine::InputSystem::EnhancedTouch::TouchHistory::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>::get(), "get_Item",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::EnhancedTouch::Touch, false>(this, ___internal_method, index);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchHistory::CheckValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>::get(),
                                                                             "CheckValid", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_History", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "m_Finger", ty: "::UnityEngine::InputSystem::EnhancedTouch::Finger*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Count", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "",
// def_value: Some("{}") }]
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
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::*)(
    ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory)>(&::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ae389c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ae3ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator*>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ae3ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator*>::get(), "Reset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::EnhancedTouch::Touch (
    ::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ae3aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator*>::get(), "get_Current",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ae3b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae3ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator*>::get(), "Dispose",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*
UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__EnhancedTouch__Touch_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory& UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::__get_m_Owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Owner;
}
constexpr ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory const& UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::__get_m_Owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Owner;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::__set_m_Owner(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Owner = value;
}
constexpr int32_t& UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::__get_m_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr int32_t const& UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::__get_m_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::__set_m_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Index = value;
}
inline ::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator*
UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::New_ctor(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory owner) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator*>(owner));
}
inline void UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::_ctor(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory owner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator*>::get(), "Reset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::Touch UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator*>::get(), "get_Current",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::EnhancedTouch::Touch, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator*>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator::__TouchHistory__Enumerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
