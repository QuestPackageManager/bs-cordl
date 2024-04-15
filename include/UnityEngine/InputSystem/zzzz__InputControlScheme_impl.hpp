#pragma once
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InputControlScheme__MatchResult__Result::__InputControlScheme__MatchResult__Result(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputControlScheme__MatchResult__Result::__InputControlScheme__MatchResult__Result() {}
constexpr ::GlobalNamespace::__InputControlScheme__MatchResult__Result GlobalNamespace::__InputControlScheme__MatchResult__Result::AllSatisfied{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__InputControlScheme__MatchResult__Result GlobalNamespace::__InputControlScheme__MatchResult__Result::MissingRequired{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__InputControlScheme__MatchResult__Result GlobalNamespace::__InputControlScheme__MatchResult__Result::MissingOptional{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__InputControlScheme__MatchResult__Match.get_control
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (::GlobalNamespace::__InputControlScheme__MatchResult__Match::*)()>(
    &::GlobalNamespace::__InputControlScheme__MatchResult__Match::get_control)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2f91ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Match>::get(), "get_control",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlScheme__MatchResult__Match.get_device
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (::GlobalNamespace::__InputControlScheme__MatchResult__Match::*)()>(
    &::GlobalNamespace::__InputControlScheme__MatchResult__Match::get_device)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2f91b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Match>::get(), "get_device",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlScheme__MatchResult__Match.get_requirementIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__InputControlScheme__MatchResult__Match::*)()>(
    &::GlobalNamespace::__InputControlScheme__MatchResult__Match::get_requirementIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f91b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Match>::get(), "get_requirementIndex",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlScheme__MatchResult__Match.get_requirement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement (
    ::GlobalNamespace::__InputControlScheme__MatchResult__Match::*)()>(&::GlobalNamespace::__InputControlScheme__MatchResult__Match::get_requirement)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2f91b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Match>::get(), "get_requirement",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlScheme__MatchResult__Match.get_isOptional
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__InputControlScheme__MatchResult__Match::*)()>(
    &::GlobalNamespace::__InputControlScheme__MatchResult__Match::get_isOptional)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2f91b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Match>::get(), "get_isOptional",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputControl* GlobalNamespace::__InputControlScheme__MatchResult__Match::get_control() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Match>::get(),
                                                                             "get_control", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputDevice* GlobalNamespace::__InputControlScheme__MatchResult__Match::get_device() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Match>::get(),
                                                                             "get_device", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__InputControlScheme__MatchResult__Match::get_requirementIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Match>::get(),
                                                                             "get_requirementIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement GlobalNamespace::__InputControlScheme__MatchResult__Match::get_requirement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Match>::get(),
                                                                             "get_requirement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__InputControlScheme__MatchResult__Match::get_isOptional() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Match>::get(),
                                                                             "get_isOptional", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_RequirementIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Requirements", ty:
// "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InputControlScheme__MatchResult__Match::__InputControlScheme__MatchResult__Match(
    int32_t m_RequirementIndex,
    ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, ::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> m_Requirements,
    ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls) noexcept {
  this->m_RequirementIndex = m_RequirementIndex;
  this->m_Requirements = m_Requirements;
  this->m_Controls = m_Controls;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputControlScheme__MatchResult__Match::__InputControlScheme__MatchResult__Match() {}
//  Writing Method size for method: ::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::*)()>(
    &::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2f91b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::*)()>(
    &::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f91bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlScheme__MatchResult__Match (
    ::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::*)()>(&::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f91bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator>::get(), "get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::*)()>(
    &::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f91c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::*)()>(
    &::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f91cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>"
constexpr GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>*
GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace____InputControlScheme__MatchResult__Match_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline bool GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__InputControlScheme__MatchResult__Match GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator>::get(), "get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlScheme__MatchResult__Match, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Requirements", ty:
// "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::__InputControlScheme__MatchResult__Enumerator(
    int32_t m_Index, ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, ::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> m_Requirements,
    ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls) noexcept {
  this->m_Index = m_Index;
  this->m_Requirements = m_Requirements;
  this->m_Controls = m_Controls;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator::__InputControlScheme__MatchResult__Enumerator() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__MatchResult.get_score
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::__InputControlScheme__MatchResult::*)()>(
    &::UnityEngine::InputSystem::__InputControlScheme__MatchResult::get_score)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f917ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(), "get_score",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__MatchResult.get_isSuccessfulMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlScheme__MatchResult::*)()>(
    &::UnityEngine::InputSystem::__InputControlScheme__MatchResult::get_isSuccessfulMatch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f917f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(), "get_isSuccessfulMatch",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__MatchResult.get_hasMissingRequiredDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlScheme__MatchResult::*)()>(
    &::UnityEngine::InputSystem::__InputControlScheme__MatchResult::get_hasMissingRequiredDevices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f91804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(),
                                                 "get_hasMissingRequiredDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__MatchResult.get_hasMissingOptionalDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlScheme__MatchResult::*)()>(
    &::UnityEngine::InputSystem::__InputControlScheme__MatchResult::get_hasMissingOptionalDevices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f91814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(),
                                                 "get_hasMissingOptionalDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__MatchResult.get_devices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> (
    ::UnityEngine::InputSystem::__InputControlScheme__MatchResult::*)()>(&::UnityEngine::InputSystem::__InputControlScheme__MatchResult::get_devices)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2f91824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(), "get_devices",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__MatchResult.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlScheme__MatchResult__Match (
    ::UnityEngine::InputSystem::__InputControlScheme__MatchResult::*)(int32_t)>(&::UnityEngine::InputSystem::__InputControlScheme__MatchResult::get_Item)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f91960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(), "get_Item",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__MatchResult.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>* (
    ::UnityEngine::InputSystem::__InputControlScheme__MatchResult::*)()>(&::UnityEngine::InputSystem::__InputControlScheme__MatchResult::GetEnumerator)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f919e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(), "GetEnumerator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__MatchResult.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::__InputControlScheme__MatchResult::*)()>(
    &::UnityEngine::InputSystem::__InputControlScheme__MatchResult::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f91a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__MatchResult.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlScheme__MatchResult::*)()>(
    &::UnityEngine::InputSystem::__InputControlScheme__MatchResult::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f91a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>"
constexpr UnityEngine::InputSystem::__InputControlScheme__MatchResult::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>*
UnityEngine::InputSystem::__InputControlScheme__MatchResult::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace____InputControlScheme__MatchResult__Match_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::__InputControlScheme__MatchResult::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::__InputControlScheme__MatchResult::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::__InputControlScheme__MatchResult::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::__InputControlScheme__MatchResult::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline float_t UnityEngine::InputSystem::__InputControlScheme__MatchResult::get_score() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(), "get_score",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputControlScheme__MatchResult::get_isSuccessfulMatch() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(), "get_isSuccessfulMatch",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputControlScheme__MatchResult::get_hasMissingRequiredDevices() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(),
                                               "get_hasMissingRequiredDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputControlScheme__MatchResult::get_hasMissingOptionalDevices() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(),
                                               "get_hasMissingOptionalDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::__InputControlScheme__MatchResult::get_devices() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(), "get_devices",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__InputControlScheme__MatchResult__Match UnityEngine::InputSystem::__InputControlScheme__MatchResult::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlScheme__MatchResult__Match, false>(this, ___internal_method, index);
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>* UnityEngine::InputSystem::__InputControlScheme__MatchResult::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(), "GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::__InputControlScheme__MatchResult::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputControlScheme__MatchResult::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Result", ty: "::GlobalNamespace::__InputControlScheme__MatchResult__Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Score", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Devices", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_Requirements", ty: "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>", modifiers:
// "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::__InputControlScheme__MatchResult::__InputControlScheme__MatchResult(
    ::GlobalNamespace::__InputControlScheme__MatchResult__Result m_Result, float_t m_Score, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> m_Devices,
    ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls,
    ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, ::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> m_Requirements) noexcept {
  this->m_Result = m_Result;
  this->m_Score = m_Score;
  this->m_Devices = m_Devices;
  this->m_Controls = m_Controls;
  this->m_Requirements = m_Requirements;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputControlScheme__MatchResult::__InputControlScheme__MatchResult() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags::__InputControlScheme__DeviceRequirement__Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags::__InputControlScheme__DeviceRequirement__Flags() {}
constexpr ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags::Optional{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags::Or{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement.get_controlPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::*)()>(
    &::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::get_controlPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f91cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "get_controlPath",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement.set_controlPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::*)(::StringW)>(
    &::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::set_controlPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f91cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "set_controlPath",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement.get_isOptional
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::*)()>(
    &::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::get_isOptional)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f91b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "get_isOptional",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement.set_isOptional
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::*)(bool)>(
    &::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::set_isOptional)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2f91cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "set_isOptional",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement.get_isAND
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::*)()>(
    &::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::get_isAND)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f91ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "get_isAND",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement.set_isAND
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::*)(bool)>(
    &::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::set_isAND)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2f91d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "set_isAND",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement.get_isOR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::*)()>(
    &::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::get_isOR)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f91cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "get_isOR",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement.set_isOR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::*)(bool)>(
    &::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::set_isOR)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2f91d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "set_isOR",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::*)()>(
    &::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2f91d38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::*)(
    ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement)>(&::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2f91dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2f91e68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::*)()>(
    &::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::GetHashCode)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2f91ee0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement)>(
        &::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2f91f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement)>(
        &::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::op_Inequality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2f91fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>"
constexpr UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::operator ::System::IEquatable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*
UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::i___System__IEquatable_1___UnityEngine__InputSystem____InputControlScheme__DeviceRequirement_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline ::StringW UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::get_controlPath() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "get_controlPath",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::set_controlPath(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "set_controlPath",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::get_isOptional() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "get_isOptional",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::set_isOptional(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "set_isOptional",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::get_isAND() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "get_isAND",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::set_isAND(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "set_isAND",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::get_isOR() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "get_isOR",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::set_isOR(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "set_isOR",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::Equals(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::op_Equality(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement left,
                                                                                           ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::op_Inequality(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement left,
                                                                                             ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
// Ctor Parameters [CppParam { name: "m_ControlPath", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Flags", ty:
// "::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::__InputControlScheme__DeviceRequirement(
    ::StringW m_ControlPath, ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags m_Flags) noexcept {
  this->m_ControlPath = m_ControlPath;
  this->m_Flags = m_Flags;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement::__InputControlScheme__DeviceRequirement() {}
//  Writing Method size for method: ::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson.ToDeviceEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement (
    ::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson::*)()>(&::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson::ToDeviceEntry)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2f9212c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson>::get(), "ToDeviceEntry",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson.From
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson (*)(
    ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement)>(&::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson::From)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2f92228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson>::get(), "From", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson::ToDeviceEntry() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson>::get(), "ToDeviceEntry",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson
GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson::From(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement requirement) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson>::get(), "From", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson, false>(nullptr, ___internal_method, requirement);
}
// Ctor Parameters [CppParam { name: "devicePath", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "isOptional", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "isOR", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson::__InputControlScheme__SchemeJson__DeviceJson(::StringW devicePath, bool isOptional, bool isOR) noexcept {
  this->devicePath = devicePath;
  this->isOptional = isOptional;
  this->isOR = isOR;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson::__InputControlScheme__SchemeJson__DeviceJson() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__SchemeJson.ToScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControlScheme (::UnityEngine::InputSystem::__InputControlScheme__SchemeJson::*)()>(
    &::UnityEngine::InputSystem::__InputControlScheme__SchemeJson::ToScheme)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2f91fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>::get(), "ToScheme",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__SchemeJson.ToJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson (*)(::UnityEngine::InputSystem::InputControlScheme)>(
    &::UnityEngine::InputSystem::__InputControlScheme__SchemeJson::ToJson)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2f92148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>::get(), "ToJson", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__SchemeJson.ToJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, ::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*> (*)(
        ::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*>)>(&::UnityEngine::InputSystem::__InputControlScheme__SchemeJson::ToJson)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2f9223c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>::get(), "ToJson", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlScheme__SchemeJson.ToSchemes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*> (*)(
        ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, ::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>)>(
        &::UnityEngine::InputSystem::__InputControlScheme__SchemeJson::ToSchemes)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2f92344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>::get(), "ToSchemes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, ::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputControlScheme UnityEngine::InputSystem::__InputControlScheme__SchemeJson::ToScheme() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>::get(), "ToScheme",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlScheme, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::__InputControlScheme__SchemeJson UnityEngine::InputSystem::__InputControlScheme__SchemeJson::ToJson(::UnityEngine::InputSystem::InputControlScheme scheme) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>::get(), "ToJson", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, false>(nullptr, ___internal_method, scheme);
}
inline ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, ::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>
UnityEngine::InputSystem::__InputControlScheme__SchemeJson::ToJson(::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*> schemes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>::get(), "ToJson", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, ::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>, false>(
      nullptr, ___internal_method, schemes);
}
inline ::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*> UnityEngine::InputSystem::__InputControlScheme__SchemeJson::ToSchemes(
    ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, ::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*> schemes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>::get(), "ToSchemes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, ::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*>, false>(nullptr, ___internal_method,
                                                                                                                                                                        schemes);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "bindingGroup", ty: "::StringW", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "devices", ty: "::ArrayW<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson,::Array<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson>*>", modifiers:
// "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::__InputControlScheme__SchemeJson::__InputControlScheme__SchemeJson(
    ::StringW name, ::StringW bindingGroup,
    ::ArrayW<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson, ::Array<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson>*> devices) noexcept {
  this->name = name;
  this->bindingGroup = bindingGroup;
  this->devices = devices;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputControlScheme__SchemeJson::__InputControlScheme__SchemeJson() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputControlScheme::*)()>(
    &::UnityEngine::InputSystem::InputControlScheme::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f8d5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                                                                               "get_name", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.get_bindingGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputControlScheme::*)()>(
    &::UnityEngine::InputSystem::InputControlScheme::get_bindingGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f8d5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                                                                               "get_bindingGroup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.set_bindingGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControlScheme::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputControlScheme::set_bindingGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f8d5c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), "set_bindingGroup",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.get_deviceRequirements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement> (::UnityEngine::InputSystem::InputControlScheme::*)()>(
        &::UnityEngine::InputSystem::InputControlScheme::get_deviceRequirements)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2f8d5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                                                                               "get_deviceRequirements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControlScheme::*)(
    ::StringW, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*, ::StringW)>(
    &::UnityEngine::InputSystem::InputControlScheme::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2f8d630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.SetNameAndBindingGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControlScheme::*)(::StringW, ::StringW)>(
    &::UnityEngine::InputSystem::InputControlScheme::SetNameAndBindingGroup)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2f8d724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), "SetNameAndBindingGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.SupportsDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputControlScheme::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputControlScheme::SupportsDevice)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2f8d7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), "SupportsDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputControlScheme::*)(::UnityEngine::InputSystem::InputControlScheme)>(
    &::UnityEngine::InputSystem::InputControlScheme::Equals)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2f8d8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputControlScheme::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::InputControlScheme::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2f8d9ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputControlScheme::*)()>(
    &::UnityEngine::InputSystem::InputControlScheme::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2f8da7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputControlScheme::*)()>(
    &::UnityEngine::InputSystem::InputControlScheme::ToString)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2f8dafc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControlScheme, ::UnityEngine::InputSystem::InputControlScheme)>(
    &::UnityEngine::InputSystem::InputControlScheme::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2f8dc80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControlScheme, ::UnityEngine::InputSystem::InputControlScheme)>(
    &::UnityEngine::InputSystem::InputControlScheme::op_Inequality)> {
  constexpr static std::size_t size = 0x1034;
  constexpr static std::size_t addrs = 0x2f8dcb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>"
constexpr UnityEngine::InputSystem::InputControlScheme::operator ::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>*
UnityEngine::InputSystem::InputControlScheme::i___System__IEquatable_1___UnityEngine__InputSystem__InputControlScheme_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline ::StringW UnityEngine::InputSystem::InputControlScheme::get_name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), "get_name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputControlScheme::get_bindingGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                                                                             "get_bindingGroup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControlScheme::set_bindingGroup(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), "set_bindingGroup",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>
UnityEngine::InputSystem::InputControlScheme::get_deviceRequirements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(),
                                                                             "get_deviceRequirements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>, false>(this,
                                                                                                                                                                                 ___internal_method);
}
/// @param devices: ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>* (default: nullptr)
/// @param bindingGroup: ::StringW (default: nullptr)
inline void UnityEngine::InputSystem::InputControlScheme::_ctor(::StringW name,
                                                                ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>* devices,
                                                                ::StringW bindingGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, devices, bindingGroup);
}
/// @param bindingGroup: ::StringW (default: nullptr)
inline void UnityEngine::InputSystem::InputControlScheme::SetNameAndBindingGroup(::StringW name, ::StringW bindingGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), "SetNameAndBindingGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, bindingGroup);
}
/// @param mustIncludeDevice: ::UnityEngine::InputSystem::InputDevice* (default: nullptr)
/// @param allowUnsuccesfulMatch: bool (default: false)
template <typename TDevices, typename TSchemes>
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>
UnityEngine::InputSystem::InputControlScheme::FindControlSchemeForDevices(TDevices devices, TSchemes schemes, ::UnityEngine::InputSystem::InputDevice* mustIncludeDevice, bool allowUnsuccesfulMatch) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), "FindControlSchemeForDevices",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevices>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSchemes>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDevices>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSchemes>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevices>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSchemes>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>, false>(nullptr, ___internal_method, devices, schemes, mustIncludeDevice,
                                                                                                                          allowUnsuccesfulMatch);
}
/// @param mustIncludeDevice: ::UnityEngine::InputSystem::InputDevice* (default: nullptr)
/// @param allowUnsuccessfulMatch: bool (default: false)
template <typename TDevices, typename TSchemes>
inline bool UnityEngine::InputSystem::InputControlScheme::FindControlSchemeForDevices(TDevices devices, TSchemes schemes, ByRef<::UnityEngine::InputSystem::InputControlScheme> controlScheme,
                                                                                      ByRef<::UnityEngine::InputSystem::__InputControlScheme__MatchResult> matchResult,
                                                                                      ::UnityEngine::InputSystem::InputDevice* mustIncludeDevice, bool allowUnsuccessfulMatch) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), "FindControlSchemeForDevices",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevices>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSchemes>::get() },
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDevices>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSchemes>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlScheme>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevices>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSchemes>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, devices, schemes, controlScheme, matchResult, mustIncludeDevice, allowUnsuccessfulMatch);
}
template <typename TSchemes>
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::InputControlScheme::FindControlSchemeForDevice(::UnityEngine::InputSystem::InputDevice* device,
                                                                                                                                                     TSchemes schemes) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), "FindControlSchemeForDevice",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSchemes>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSchemes>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSchemes>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>, false>(nullptr, ___internal_method, device, schemes);
}
inline bool UnityEngine::InputSystem::InputControlScheme::SupportsDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), "SupportsDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, device);
}
/// @param favorDevice: ::UnityEngine::InputSystem::InputDevice* (default: nullptr)
template <typename TDevices>
inline ::UnityEngine::InputSystem::__InputControlScheme__MatchResult UnityEngine::InputSystem::InputControlScheme::PickDevicesFrom(TDevices devices,
                                                                                                                                   ::UnityEngine::InputSystem::InputDevice* favorDevice) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), "PickDevicesFrom",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevices>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDevices>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevices>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlScheme__MatchResult, false>(this, ___internal_method, devices, favorDevice);
}
inline bool UnityEngine::InputSystem::InputControlScheme::Equals(::UnityEngine::InputSystem::InputControlScheme other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::InputControlScheme::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::InputControlScheme::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputControlScheme::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputControlScheme::op_Equality(::UnityEngine::InputSystem::InputControlScheme left, ::UnityEngine::InputSystem::InputControlScheme right) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::InputControlScheme::op_Inequality(::UnityEngine::InputSystem::InputControlScheme left, ::UnityEngine::InputSystem::InputControlScheme right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlScheme>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_BindingGroup", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "m_DeviceRequirements", ty:
// "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::InputControlScheme::InputControlScheme(
    ::StringW m_Name, ::StringW m_BindingGroup,
    ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, ::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> m_DeviceRequirements) noexcept {
  this->m_Name = m_Name;
  this->m_BindingGroup = m_BindingGroup;
  this->m_DeviceRequirements = m_DeviceRequirements;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControlScheme::InputControlScheme() {}
